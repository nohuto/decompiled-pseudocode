/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x140AB8628
 * Callers:
 *     SeInitServerSilo @ 0x140815B6C (SeInitServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SeGetLinkedToken @ 0x140AB84D0 (SeGetLinkedToken.c)
 *     SepReferenceLogonSession @ 0x140AB85F0 (SepReferenceLogonSession.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SepReferenceLogonSessionSilo(_DWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v9; // rdi
  __int64 result; // rax

  v6 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v7 = SepLogonSessions + 8 * v6;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v6 & 3));
  ExAcquireResourceExclusiveLite(v9, 1u);
  do
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
    {
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
      return 3221225567LL;
    }
  }
  while ( *(_QWORD *)(v7 + 168) != a2 || *a1 != *(_DWORD *)(v7 + 8) || a1[1] != *(_DWORD *)(v7 + 12) );
  _m_prefetchw((const void *)(v7 + 40));
  if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 40), 8u) & 8) != 0
    && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 32)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v7;
  return result;
}
