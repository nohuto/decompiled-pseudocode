/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x140815800
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement((volatile signed __int32 *)&RtlpBootStatHandleLock.AffinityPrimaryGroup);
  ExUnregisterCallback(a1);
}
