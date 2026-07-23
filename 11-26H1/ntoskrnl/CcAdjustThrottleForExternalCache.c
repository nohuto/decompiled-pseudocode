/*
 * XREFs of CcAdjustThrottleForExternalCache @ 0x14038C10C
 * Callers:
 *     CcAdjustThrottleForVolume @ 0x14038C014 (CcAdjustThrottleForVolume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAdjustThrottleForExternalCache(__int64 a1)
{
  char v1; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v1 = dword_140FBF22C;
  v3 = *(_QWORD *)(a1 + 1080) + *(_QWORD *)(a1 + 1088);
  *(_QWORD *)(a1 + 1096) = 0LL;
  v4 = v3 >> 2;
  v5 = v3 >> 1;
  v6 = v4;
  if ( v1 )
    v6 = v5;
  result = 512LL;
  v8 = 4 * v6 / 5;
  if ( v4 < v8 )
    v8 = v4;
  if ( v8 >= 0x200 )
  {
    v9 = v8 - (v8 >> 2);
    result = v8;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
  }
  else
  {
    LODWORD(v9) = 384;
  }
  *(_QWORD *)(a1 + 1016) = result;
  *(_DWORD *)(a1 + 1040) = v9;
  return result;
}
