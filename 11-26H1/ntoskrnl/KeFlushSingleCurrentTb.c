/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1405F0C70
 * Callers:
 *     MiDbgUnmapPhysicalAddress @ 0x1406FEC6C (MiDbgUnmapPhysicalAddress.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlFlushRangeListTb @ 0x14032B100 (HvlFlushRangeListTb.c)
 *     ExFlushTb @ 0x14041D5A8 (ExFlushTb.c)
 *     VmFlushTb @ 0x14041D644 (VmFlushTb.c)
 *     KiIsSecureFlushRequired @ 0x14041D708 (KiIsSecureFlushRequired.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14041D8A0 (KiPrepareFlushCurrentAffinity.c)
 *     KiPrepareFlushParameters @ 0x140470450 (KiPrepareFlushParameters.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int IsSecureFlushRequired; // eax
  unsigned int v6; // esi
  unsigned __int8 v7; // bl
  unsigned __int8 CurrentIrql; // bl
  char v9[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v13[272]; // [rsp+60h] [rbp-A0h] BYREF

  IsSecureFlushRequired = KiIsSecureFlushRequired(a1, 0LL, 0LL, a4);
  v6 = IsSecureFlushRequired;
  v7 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureFlushRequired && !v7
    || (v11 = 0LL,
        memset_0(v13, 0, 0x108uLL),
        v9[0] = 0,
        KiPrepareFlushParameters(0, (unsigned __int64 *)&v11, v9),
        KiPrepareFlushCurrentAffinity((__int64)v13),
        v12 = a1 & 0xFFFFFFFFFFFFF000uLL,
        !(unsigned __int8)HvlFlushRangeListTb(v11, (unsigned __int64)v13, v9[0], v6, v7, 1u, (__int64 *)&v12)) )
  {
    __invlpg((void *)a1);
  }
  if ( VmTbFlushEnabled )
  {
    v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
    VmFlushTb(1LL, &v10, 0);
  }
  if ( ExTbFlushActive )
  {
    v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(1u, (__int64)&v10, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
