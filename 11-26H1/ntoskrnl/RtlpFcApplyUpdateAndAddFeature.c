/*
 * XREFs of RtlpFcApplyUpdateAndAddFeature @ 0x140B1BE2C
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpFcUpdateFeature @ 0x140778270 (RtlpFcUpdateFeature.c)
 */

char __fastcall RtlpFcApplyUpdateAndAddFeature(__int64 a1, __int128 *a2)
{
  _OWORD *v2; // rax
  _QWORD *v3; // r10
  _DWORD *v4; // r11
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = *(_DWORD *)(a1 + 28);
  if ( ((unsigned __int8)v2 & 4) == 0 )
  {
    v6 = *a2;
    LOBYTE(v2) = RtlpFcUpdateFeature(&v6, a1);
    if ( (_DWORD)v6 )
    {
      LOBYTE(v2) = (WORD2(v6) & 0x3F00) == 0;
      if ( ((((BYTE4(v6) | (unsigned __int8)(DWORD1(v6) >> 10)) & 0x30) == 0) & (unsigned __int8)v2) == 0
        || (BYTE4(v6) & 0x40) != 0 )
      {
        v2 = (_OWORD *)*v3;
        *(_OWORD *)*v3 = v6;
        *v3 += 16LL;
        ++*v4;
      }
    }
  }
  return (char)v2;
}
