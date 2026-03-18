/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0A1AC
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140B0A110 (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408B95E4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  char v11; // al
  char v12; // al
  int v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    v13 = 0;
    v5 = a3;
    do
    {
      v8 = v5 - a2[3];
      v9 = v8 + a2[7];
      v10 = v8 >> 12;
      if ( (*((_BYTE *)a2 + (v8 >> 12) + 72) & 0x10) != 0 )
      {
        HvpViewMapReleaseChargesAndUnlockViewPages(a1, *(__int64 **)(a1 + 24), v9, 4096LL);
        *((_BYTE *)a2 + v10 + 72) &= ~0x10u;
        --a2[8];
      }
      v11 = *((_BYTE *)a2 + v10 + 72);
      if ( (v11 & 4) != 0 )
      {
        v12 = v11 & 0xFB;
        *((_BYTE *)a2 + v10 + 72) = v12;
        if ( (v12 & 2) == 0 )
          CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), v9, 4096LL, 0x80000002, (__int64)&v13);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
