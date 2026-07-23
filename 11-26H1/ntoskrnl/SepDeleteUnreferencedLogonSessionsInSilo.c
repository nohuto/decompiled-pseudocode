/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x14081B6A4
 * Callers:
 *     SeShutdownServerSilo @ 0x140815C5C (SeShutdownServerSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 */

struct _KTHREAD *__fastcall SepDeleteUnreferencedLogonSessionsInSilo(struct _LIST_ENTRY *a1)
{
  char v2; // si
  struct _LIST_ENTRY *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // rbp
  __int64 **i; // rcx
  __int64 *v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 *v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v2 & 3));
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(__int64 ***)(v4 + v7); i; i = (__int64 **)*i )
    {
      if ( i[21] == (__int64 *)a1 )
      {
        v10 = i[4];
        if ( !v10 || ((_DWORD)i[5] & 8) == 0 && v10 == (__int64 *)1 )
        {
          v13 = i[1];
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegion();
          SepDeleteLogonSessionTrack(&v13, 0LL);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = (__int64 **)(v4 + SepLogonSessions);
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
