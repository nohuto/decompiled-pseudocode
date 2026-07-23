/*
 * XREFs of HvlLogGuestCrashInformation @ 0x1405BB140
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14048DA10 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404CA750 (HvlpGetRegister64.c)
 */

void __fastcall HvlLogGuestCrashInformation(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned __int64 v10; // rbx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  if ( (HvlEnlightenments & 0x2000) != 0 )
  {
    HvlpGetRegister64(533, v11);
    v10 = 0x8000000000000000uLL;
    if ( v11[0] < 0 )
    {
      HvlpSetRegister64(528, a1);
      __writemsr(0x40000101u, a2);
      __writemsr(0x40000102u, a3);
      __writemsr(0x40000103u, a4);
      __writemsr(0x40000104u, a5);
      if ( (v11[0] & 0x2000000000000000LL) != 0 )
        v10 = (-(__int64)(a6 != 0) & 0x2000000000000000LL) + 0x8000000000000000uLL;
      HvlpSetRegister64(533, v10);
    }
  }
}
