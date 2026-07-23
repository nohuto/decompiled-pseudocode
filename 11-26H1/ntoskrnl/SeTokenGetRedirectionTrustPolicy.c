/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x1404BBBB0
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404F5590 (IoCheckRedirectionTrustLevel2.c)
 *     PspGetRedirectionTrustPolicy @ 0x140B002E4 (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

bool __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  result = (v7 & 0x400000) != 0;
  *a2 = result;
  *a3 = (v7 & 0x800000) != 0;
  return result;
}
