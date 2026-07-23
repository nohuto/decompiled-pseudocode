/*
 * XREFs of PsSetLegoNotifyRoutine @ 0x1407FFCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsSetLegoNotifyRoutine(_KERNEL_SHADOW_STACK_LIMIT a1)
{
  PspSiloMonitorLock.KernelShadowStackLimit = a1;
  return 720LL;
}
