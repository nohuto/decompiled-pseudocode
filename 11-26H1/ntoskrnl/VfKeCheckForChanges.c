/*
 * XREFs of VfKeCheckForChanges @ 0x140C3A1BC
 * Callers:
 *     VfInitVerifierComponents @ 0x140C27ED0 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x140C3F140 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VfKeCheckForChanges(char a1)
{
  void *Pool3; // rax
  void *v2; // rax

  if ( (a1 & 2) != 0 )
  {
    if ( !ViTrackIrqlQueue && VfVerifyMode >= 3 )
    {
      Pool3 = (void *)ExAllocatePool3(
                        64LL,
                        (struct _KLOCK_ENTRIES *)(56LL * (unsigned int)ViTrackIrqlQueueLength),
                        0x6C717249u,
                        (__int64)&VfExtendedParameters,
                        1u);
      if ( Pool3 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViTrackIrqlQueue, (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0);
      }
    }
    if ( !VfKeCriticalRegionTraces )
    {
      v2 = (void *)ExAllocatePool3(
                     64LL,
                     (struct _KLOCK_ENTRIES *)(80LL * (unsigned int)VfKeCriticalRegionTracesLength),
                     0x52436656u,
                     (__int64)&VfExtendedParameters,
                     1u);
      if ( v2 )
      {
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&VfKeCriticalRegionTraces,
               (signed __int64)v2,
               0LL) )
        {
          ExFreePoolWithTag(v2, 0);
        }
      }
    }
  }
}
