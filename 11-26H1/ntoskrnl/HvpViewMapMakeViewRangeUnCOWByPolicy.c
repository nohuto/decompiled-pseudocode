/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140B0BF6C
 * Callers:
 *     HvpViewMapAdjustFlag @ 0x140B0BED0 (HvpViewMapAdjustFlag.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14049C6F4 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408BFBB4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByPolicy(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v8; // rdx
  void *v9; // r15
  unsigned __int64 v10; // rsi
  char v11; // al
  char v12; // al
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    LODWORD(v13) = 0;
    v5 = a3;
    do
    {
      v8 = v5 - a2[3];
      v9 = (void *)(v8 + a2[7]);
      v10 = v8 >> 12;
      if ( (*((_BYTE *)a2 + (v8 >> 12) + 72) & 0x10) != 0 )
      {
        HvpViewMapReleaseChargesAndUnlockViewPages(a1, *(void ***)(a1 + 24), v9, 0x1000uLL);
        *((_BYTE *)a2 + v10 + 72) &= ~0x10u;
        --a2[8];
      }
      v11 = *((_BYTE *)a2 + v10 + 72);
      if ( (v11 & 4) != 0 )
      {
        v12 = v11 & 0xFB;
        *((_BYTE *)a2 + v10 + 72) = v12;
        if ( (v12 & 2) == 0 )
          CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v9, 0x1000uLL, 0x80000002, (ULONG *)&v13);
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
