/*
 * XREFs of HvlWakeVirtualProcessors @ 0x1403ECBF0
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x1402BA1F0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403E77FC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HvlWakeVirtualProcessors(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // bx
  _QWORD *v4; // rax
  bool v5; // cf
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[21]; // [rsp+68h] [rbp-98h] BYREF

  v16 = 0LL;
  LODWORD(v17) = 0;
  v15 = 0LL;
  memset_0(&v18, 0, 0xB0uLL);
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 4 >= 0xE )
  {
    v4 = HvlpAcquireHypercallPage((__int64)&v15, 1, (__int64)&v18, 88LL);
    v5 = (v15 & 2) != 0;
    *v4 = -1LL;
    v6 = HvlpAffinityToHvProcessorSet(a1, v4 + 1, v5 ? 64 : 4072);
    if ( v6 == -1 )
    {
      HvlpReleaseHypercallPage((unsigned int *)&v15, v7, v8, v9);
      v10 = HvlpAcquireHypercallPage((__int64)&v15, 1, 0LL, 0LL);
      v6 = HvlpAffinityToHvProcessorSet(a1, v10 + 1, 0xFE8u);
    }
    v3 = HvcallInitiateHypercall(((v6 + 7) << 14) & 0x3FE0000 | 0x114u, v17);
    HvlpReleaseHypercallPage((unsigned int *)&v15, v11, v12, v13);
  }
  else
  {
    v18 = -1LL;
    v2 = HvlpAffinityToHvProcessorSet(a1, v19, 0x58u);
    v3 = HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10114LL, (unsigned __int64)&v18, v2 + 24, 0LL, 0);
  }
  return HvlpHvToNtStatus(v3);
}
