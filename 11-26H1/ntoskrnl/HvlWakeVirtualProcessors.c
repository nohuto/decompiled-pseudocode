/*
 * XREFs of HvlWakeVirtualProcessors @ 0x1402F9C30
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x1402F46DC (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlWakeVirtualProcessors(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // bx
  _QWORD *v4; // rax
  bool v5; // cf
  int v6; // eax
  __int64 v7; // rax
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[21]; // [rsp+68h] [rbp-98h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  memset_0(&v12, 0, 0xB0uLL);
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 4 >= 0xE )
  {
    v4 = (_QWORD *)HvlpAcquireHypercallPage(&v9, 1LL, &v12, 88LL);
    v5 = (v9 & 2) != 0;
    *v4 = -1LL;
    v6 = HvlpAffinityToHvProcessorSet(a1, v4 + 1, v5 ? 64 : 4072);
    if ( v6 == -1 )
    {
      HvlpReleaseHypercallPage(&v9);
      v7 = HvlpAcquireHypercallPage(&v9, 1LL, 0LL, 0LL);
      v6 = HvlpAffinityToHvProcessorSet(a1, (_QWORD *)(v7 + 8), 0xFE8u);
    }
    v3 = HvcallInitiateHypercall(((v6 + 7) << 14) & 0x3FE0000 | 0x114u, v11, 0LL);
    HvlpReleaseHypercallPage(&v9);
  }
  else
  {
    v12 = -1LL;
    v2 = HvlpAffinityToHvProcessorSet(a1, v13, 0x58u);
    v3 = HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10114u, (unsigned int)&v12, v2 + 24, 0, 0);
  }
  return HvlpHvToNtStatus(v3);
}
