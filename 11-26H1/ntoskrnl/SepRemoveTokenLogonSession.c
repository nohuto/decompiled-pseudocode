/*
 * XREFs of SepRemoveTokenLogonSession @ 0x14081BA88
 * Callers:
 *     SepLinkLogonSessions @ 0x1404DA5DC (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rdx
  __int64 *j; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v2 = 1529154084 * *(_DWORD *)(a1 + 24);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = v2 >> 28;
    v5 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v4 & 3));
    ExAcquireResourceExclusiveLite(v5, 1u);
    for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
        && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
        && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL) == i[21] )
      {
        for ( j = (__int64 *)i[23]; j != i + 23; j = (__int64 *)*j )
        {
          v8 = (__int64 *)*j;
          if ( j[2] == a1 )
          {
            if ( (__int64 *)v8[1] != j || (v9 = (__int64 **)j[1], *v9 != j) )
              __fastfail(3u);
            *v9 = v8;
            v8[1] = (__int64)v9;
            ExReleaseResourceLite(v5);
            KeLeaveCriticalRegion();
            ExFreePoolWithTag(j, 0);
            return;
          }
        }
      }
    }
    ExReleaseResourceLite(v5);
    KeLeaveCriticalRegion();
  }
}
