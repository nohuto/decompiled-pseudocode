/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14080FD70
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement((volatile signed __int32 *)&RtlpBootStatHandleLock.Affinity);
  ExUnregisterCallback(a1);
}
