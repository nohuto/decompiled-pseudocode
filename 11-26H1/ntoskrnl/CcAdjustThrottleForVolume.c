/*
 * XREFs of CcAdjustThrottleForVolume @ 0x14038C014
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 * Callees:
 *     CcAdjustThrottleForExternalCache @ 0x14038C10C (CcAdjustThrottleForExternalCache.c)
 */

__int64 __fastcall CcAdjustThrottleForVolume(__int64 a1, __int64 a2)
{
  char v3; // r11
  unsigned int v4; // r9d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r10
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v3 = dword_140FBF22C;
  if ( (*(_DWORD *)(a1 + 1616) & 0x10) != 0 )
    return CcAdjustThrottleForExternalCache(a1, a2, a1);
  v4 = *(_DWORD *)(a1 + 1288);
  if ( v4 < 0x200 )
    v4 = 512;
  if ( *(_QWORD *)(a1 + 1096) )
    *(_QWORD *)(a1 + 1096) = 0LL;
  v5 = *(_DWORD *)(a1 + 1552) * v4;
  v6 = *(_QWORD *)(a1 + 1016) - (*(_QWORD *)(a1 + 1016) >> 2);
  v7 = v6;
  if ( v5 >= v6 )
    v7 = v5;
  v8 = *(_DWORD *)(a1 + 1556) * v4;
  v9 = v6 >> 1;
  if ( v5 >= v6 )
    LODWORD(v9) = v8;
  v10 = *(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088);
  if ( v3 )
    v11 = v10 >> 1;
  else
    v11 = v10 / (unsigned int)CcClientDTPDenominator;
  v13 = 4 * v11 / 5;
  v12 = v13;
  if ( v7 < v13 )
    v13 = v7;
  *(_QWORD *)(a1 + 1016) = v13;
  result = v12 >> 1;
  if ( v7 < v12 )
    result = (unsigned int)v9;
  *(_DWORD *)(a1 + 1040) = result;
  return result;
}
