/*
 * XREFs of ObEnumerateObjectsByType @ 0x1407C6754
 * Callers:
 *     IovUnloadDrivers @ 0x140C26E9C (IovUnloadDrivers.c)
 * Callees:
 *     ObpCreateTypeArray @ 0x140A67954 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140B26B88 (ObpDestroyTypeArray.c)
 *     IovpBuildDriverObjectList @ 0x140C26FA8 (IovpBuildDriverObjectList.c)
 */

__int64 ObEnumerateObjectsByType()
{
  unsigned int v0; // ebx
  unsigned int *TypeArray; // rsi
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v0 = 0;
  TypeArray = (unsigned int *)ObpCreateTypeArray(IoDriverObjectType);
  if ( TypeArray )
  {
    for ( i = 0; i < *TypeArray; ++i )
    {
      v3 = *(_QWORD *)&TypeArray[2 * i + 2];
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 58) & 2) == 0 || (v4 = ObpInfoMaskToOffset[*(_BYTE *)(v3 + 58) & 3], v3 + 32 == v4) )
          v6 = 0LL;
        else
          v6 = *(_OWORD *)(v3 + 32 - v4 + 8);
        if ( !(unsigned __int8)IovpBuildDriverObjectList(v3 + 80, &v6, *(_QWORD *)(v3 + 40), *(_QWORD *)(v3 + 32), 0LL) )
        {
          v0 = -2147483622;
          break;
        }
      }
    }
    ObpDestroyTypeArray(TypeArray);
  }
  return v0;
}
