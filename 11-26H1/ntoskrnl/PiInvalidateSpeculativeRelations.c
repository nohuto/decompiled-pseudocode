/*
 * XREFs of PiInvalidateSpeculativeRelations @ 0x1409B4C90
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PipDeviceObjectListRemove @ 0x140B5B5EC (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall PiInvalidateSpeculativeRelations(unsigned int a1, __int64 *a2)
{
  __int64 result; // rax
  int v4; // ebp
  int v5; // ebx
  __int64 v6; // rdi
  _DWORD *v7; // rcx

  result = a1 - 2;
  if ( (result & 0xFFFFFFFC) == 0 && a1 != 4 )
  {
    PnpInvalidateRelationsInList(a2, a1, 1, 0);
    result = *a2;
    v4 = 0;
    v5 = *(_DWORD *)*a2 - 1;
    if ( v5 >= 0 )
    {
      result = v5;
      v6 = 6LL * v5;
      do
      {
        v7 = (_DWORD *)*a2;
        if ( *a2 && (unsigned int)v5 < *v7 )
          v4 = v7[v6 + 6];
        if ( !v4 )
          result = PipDeviceObjectListRemove(v7, (unsigned int)v5);
        v6 -= 6LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  return result;
}
