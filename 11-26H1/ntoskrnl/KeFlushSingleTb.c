/*
 * XREFs of KeFlushSingleTb @ 0x1405F0DF4
 * Callers:
 *     MiDbgUnmapPhysicalAddress @ 0x1406FEC6C (MiDbgUnmapPhysicalAddress.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     ExFlushTb @ 0x14041D5A8 (ExFlushTb.c)
 *     VmFlushTb @ 0x14041D644 (VmFlushTb.c)
 *     KiIsSecureFlushRequired @ 0x14041D708 (KiIsSecureFlushRequired.c)
 *     KiPreprocessFlushTb @ 0x140430BB0 (KiPreprocessFlushTb.c)
 *     KiPrepareFlushParameters @ 0x140470450 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14047DAF0 (KiFlushAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KxFlushSingleTb @ 0x1405FC9F8 (KxFlushSingleTb.c)
 */

void __fastcall KeFlushSingleTb(unsigned __int64 a1)
{
  char v2; // di
  __int64 v3; // r9
  int IsSecureFlushRequired; // eax
  __int64 v5; // r9
  volatile _KAFFINITY_EX *v6; // rax
  unsigned __int8 v7; // r9
  unsigned int v8; // r10d
  unsigned __int8 CurrentIrql; // bl
  char v10; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int8 v11[7]; // [rsp+41h] [rbp-1Fh] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-8h] BYREF

  v10 = 0;
  v11[0] = 0;
  v2 = 0;
  if ( KiPreprocessFlushTb(0, 0LL, 2, &v10, v11) )
  {
    __invlpg((void *)a1);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11[0]);
    __writecr8(v11[0]);
    v2 = 1;
  }
  IsSecureFlushRequired = KiIsSecureFlushRequired(a1, 0LL, 0LL, v3);
  LOBYTE(v5) = v10;
  if ( IsSecureFlushRequired || v10 )
  {
    v13 = 0LL;
    v10 = 0;
    KiPrepareFlushParameters(0, (unsigned __int64 *)&v13, &v10);
    v6 = KiFlushAffinity(2);
    v14 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v2 |= HvlFlushRangeListTb(v13, (unsigned __int64)v6, v10, v8, v7, 1u, (__int64 *)&v14);
  }
  if ( !v2 )
    KxFlushSingleTb(a1, 0LL, 2LL, v5);
  if ( VmTbFlushEnabled )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL;
    VmFlushTb(1LL, &v12, 0);
  }
  if ( ExTbFlushActive )
  {
    v12 = a1 & 0xFFFFFFFFFFFFF000uLL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v12, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
