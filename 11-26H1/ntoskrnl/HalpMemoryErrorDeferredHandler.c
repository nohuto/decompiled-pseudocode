/*
 * XREFs of HalpMemoryErrorDeferredHandler @ 0x140591848
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140591580 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x140588254 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x140588318 (HalpHvSetMachineCheckRecoveryState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     WheaAttemptClearPoison @ 0x14084E2C0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 */

void *__fastcall HalpMemoryErrorDeferredHandler(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rcx
  int v4; // eax
  int v5; // r8d
  char v6; // cl
  void *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  *(_BYTE *)(a1 + 13) &= 0xFu;
  v1 = *(_BYTE *)(a1 + 14) == 0;
  v3 = *(_QWORD *)a1;
  if ( v1 )
    v4 = WheaAttemptPhysicalPageOffline(v3 >> 12, 0, 1, 0, a1);
  else
    v4 = WheaAttemptClearPoison(v3, 0LL, a1);
  v5 = v4;
  v6 = 0;
  result = off_140E09598;
  v8 = *(unsigned int *)off_140E09598;
  if ( v5 || (unsigned int)v8 <= 1 )
  {
    if ( (unsigned int)v8 <= 1 )
    {
      v6 = 64;
      if ( !v5 )
        v6 = -64;
    }
    *(_BYTE *)(a1 + 48) = v6;
    result = (void *)HalpHvInvokeWheaErrorNotificationCallback(a1, v8);
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 )
  {
    if ( !*(_QWORD *)(a1 + 6184) )
    {
      result = (void *)qword_140FBB468;
      if ( qword_140FBB468 )
        return (void *)guard_dispatch_icall_no_overrides(v9, v8);
    }
  }
  else if ( HalpHvWheaEnlightenedCpuManager )
  {
    return (void *)HalpHvSetMachineCheckRecoveryState(2);
  }
  return result;
}
