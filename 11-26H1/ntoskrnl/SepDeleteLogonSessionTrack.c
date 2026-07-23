/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140B003D0
 * Callers:
 *     SeInitServerSilo @ 0x140815B6C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14081B6A4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14081BBD0 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140B003A0 (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepDeleteSessionLowboxEntries @ 0x1404B1F48 (SepDeleteSessionLowboxEntries.c)
 *     ObRevokeHandles @ 0x1407C63FC (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x14081B290 (SepDeleteLogonSessionSidValues.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x140B005D0 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteCachedHandlesTable @ 0x140B00708 (SepDeleteCachedHandlesTable.c)
 *     SepDeleteLogonSessionClaims @ 0x140B007EC (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  volatile signed __int64 *v4; // rbp
  unsigned __int64 v5; // r8
  __int64 *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned int v21; // ebx

  v4 = 0LL;
  v5 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v6 = (__int64 *)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.SystemAffinityTokenListHead + 13 * (v5 & 3));
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; i; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 168) == PsGetCurrentServerSilo() && *a1 == *(_DWORD *)(i + 8) && a1[1] == *(_DWORD *)(i + 12) )
    {
      if ( a2 )
      {
        *(_DWORD *)(i + 40) |= 0x10u;
        ObRevokeHandles((_QWORD **)(i + 136), v10, v11, v12);
        ExReleaseResourceLite(v8);
        KeLeaveCriticalRegion();
      }
      else
      {
        v13 = *(_QWORD *)(i + 32);
        if ( v13 && ((*(_DWORD *)(i + 40) & 8) != 0 || v13 != 1) )
        {
          v21 = -1073741564;
          goto LABEL_21;
        }
        *v6 = *(_QWORD *)i;
        if ( *(_QWORD *)(i + 48) )
        {
          v4 = *(volatile signed __int64 **)(i + 48);
          *(_QWORD *)(i + 48) = 0LL;
        }
        ExReleaseResourceLite(v8);
        KeLeaveCriticalRegion();
        if ( v4 )
        {
          SepCleanupLUIDDeviceMapDirectory(a1, *(_QWORD *)(i + 168));
          ObDereferenceDeviceMap(v4, 1u);
        }
        v14 = *(void **)(i + 168);
        if ( v14 )
          ObfDereferenceObjectWithTag(v14, 0x734C6553u);
        v15 = *(void **)(i + 72);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        SepDeleteLogonSessionClaims(i);
        if ( LOBYTE(RtlpBootStatHandleLock.Queue) )
          SepDeleteLogonSessionSidValues(i);
        ObDestroyHandleRevocationBlock(i + 136);
        SepDeleteCachedHandlesTable((struct _KTHREAD *)(i + 96));
        ExFreePoolWithTag((PVOID)i, 0);
        SepDeleteSessionLowboxEntries(v17, v16, v18, v19);
      }
      return 0LL;
    }
    v6 = (__int64 *)i;
  }
  v21 = -1073741729;
LABEL_21:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return v21;
}
