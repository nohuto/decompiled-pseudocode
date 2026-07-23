/*
 * XREFs of PiDqQueryValidateQueryData @ 0x140950E2C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x14094FA58 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PnpValidateMultiSz @ 0x140952178 (PnpValidateMultiSz.c)
 *     PiDqGetPnpObjectType @ 0x14095D760 (PiDqGetPnpObjectType.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ValidFilter @ 0x140AD9910 (ValidFilter.c)
 */

__int64 __fastcall PiDqQueryValidateQueryData(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int i; // ecx
  __int64 j; // rdi

  v2 = -1073741811;
  if ( a1
    && (unsigned int)PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16))
    && ((*(_DWORD *)(a1 + 40) & 2) == 0 || !*(_DWORD *)(a1 + 64)) )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      if ( !*(_QWORD *)(a1 + 24) )
        return v2;
    }
    else if ( *(_DWORD *)(a1 + 20) == 2 && (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 24)) < 0 )
    {
      return v2;
    }
    v3 = *(_DWORD *)(a1 + 40);
    if ( (v3 & 0xFFFFFFF8) != 0 )
      return v2;
    if ( (v3 & 4) != 0 )
    {
      if ( (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 48)) < 0 )
        return v2;
    }
    else if ( *(_QWORD *)(a1 + 56) || *(_DWORD *)(a1 + 48) )
    {
      return v2;
    }
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 64);
      if ( !v5 )
        return v2;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 64) )
        return v2;
      v5 = *(_DWORD *)(a1 + 64);
    }
    for ( i = 0; i < v5; ++i )
    {
      if ( *(_QWORD *)(32LL * i + v4 + 24) )
        return v2;
    }
    if ( *(_QWORD *)(a1 + 88) )
    {
      if ( !*(_DWORD *)(a1 + 80) || !(unsigned int)ValidFilter() )
        return v2;
    }
    else if ( *(_DWORD *)(a1 + 80) )
    {
      return v2;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( !*(_DWORD *)(a1 + 96) )
        return v2;
    }
    else if ( *(_DWORD *)(a1 + 96) )
    {
      return v2;
    }
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 96); j = (unsigned int)(j + 1) )
    {
      if ( (int)PnpValidatePropertyData(
                  *(STRSAFE_PCUNZWCH *)(*(_QWORD *)(a1 + 104) + 40 * j + 32),
                  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40 * j + 24)) < 0 )
        return v2;
    }
    return 0;
  }
  return v2;
}
