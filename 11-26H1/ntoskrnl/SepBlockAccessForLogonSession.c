/*
 * XREFs of SepBlockAccessForLogonSession @ 0x140815420
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1408159F0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SepBlockAccessForLogonSession(_DWORD *a1)
{
  unsigned __int64 v2; // rdx
  __int64 **v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v5; // rbp
  __int64 *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rbx

  v2 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v3 = (__int64 **)(SepLogonSessions + 8 * v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.InGlobalUpdateVpThreadPriorityList + 13 * (v2 & 3));
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = *v3;
  v7 = 0;
  while ( v6 )
  {
    v8 = v6[21];
    if ( v8 == PsGetCurrentServerSilo() && *a1 == *((_DWORD *)v6 + 2) && a1[1] == *((_DWORD *)v6 + 3) )
    {
      *((_DWORD *)v6 + 10) |= 0x20u;
      ExReleaseResourceLite(v5);
      goto LABEL_9;
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseResourceLite(v5);
  v7 = -1073741729;
LABEL_9:
  KeLeaveCriticalRegion();
  return v7;
}
