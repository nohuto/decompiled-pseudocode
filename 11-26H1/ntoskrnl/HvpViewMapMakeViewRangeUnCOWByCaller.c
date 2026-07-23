/*
 * XREFs of HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1408BEE84
 * Callers:
 *     HvpViewMapUnCOWAndSealRange @ 0x1408BEE14 (HvpViewMapUnCOWAndSealRange.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14049C6F4 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapMakeViewRangeUnCOWByCaller(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 < a4 )
  {
    LODWORD(v10) = 0;
    v5 = a3;
    do
    {
      v8 = (unsigned __int64)(v5 - *(_QWORD *)(a2 + 24)) >> 12;
      v9 = *(_BYTE *)(v8 + a2 + 72);
      if ( (v9 & 2) != 0 )
      {
        CmSiProtectViewOfSection(
          ((~v9 & 0xFC) << 29) | 2u,
          *(void ***)(a1 + 24),
          (void *)(v5 - *(_QWORD *)(a2 + 24) + *(_QWORD *)(a2 + 56)),
          0x1000uLL,
          ((~v9 & 0xFC) << 29) | 2,
          (ULONG *)&v10);
        *(_BYTE *)(v8 + a2 + 72) &= 0xF5u;
      }
      v5 += 4096LL;
    }
    while ( v5 < a4 );
  }
}
