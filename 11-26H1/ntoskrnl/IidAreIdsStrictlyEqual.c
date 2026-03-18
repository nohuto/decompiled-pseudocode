/*
 * XREFs of IidAreIdsStrictlyEqual @ 0x1407197C4
 * Callers:
 *     HalpIommuCreateDevice @ 0x14051AC18 (HalpIommuCreateDevice.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x140578BFC (HalpDmaFindAdapterByDeviceId.c)
 *     HalpIommuDeleteDevice @ 0x140587958 (HalpIommuDeleteDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058D3D4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDecreaseAliasTrack @ 0x14058D4E0 (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuGetReservedRanges @ 0x14058DA88 (HalpIommuGetReservedRanges.c)
 * Callees:
 *     <none>
 */

bool __fastcall IidAreIdsStrictlyEqual(int *a1, __int64 a2)
{
  char v2; // r9
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  unsigned __int8 *v7; // rax
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v3 = *a1;
  if ( (unsigned int)(*a1 - 1) > 4 || (unsigned int)(*(_DWORD *)a2 - 1) > 4 || v3 != *(_DWORD *)a2 )
    return 0;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
      v8 = *(_QWORD *)(a2 + 8) - (_QWORD)v7;
      do
      {
        v9 = v7[v8];
        v10 = *v7 - v9;
        if ( v10 )
          break;
        ++v7;
      }
      while ( v9 );
      return v10 == 0;
    }
    if ( (unsigned int)(v5 - 2) <= 1 )
      return *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
    return 0;
  }
  if ( *((_WORD *)a1 + 4) == *(_WORD *)(a2 + 8) && *((_WORD *)a1 + 6) == *(_WORD *)(a2 + 12) )
    return ((*((_BYTE *)a1 + 10) ^ *(_BYTE *)(a2 + 10)) & 3) == 0;
  return v2;
}
