/*
 * XREFs of SepDeReferenceLogonSession @ 0x140B7CDEC
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140476B90 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepDeleteSessionLowboxEntries @ 0x1404B8718 (SepDeleteSessionLowboxEntries.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14051205C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063AE30 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     SepDeleteLogonSessionSidValues @ 0x1408150DC (SepDeleteLogonSessionSidValues.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14081560C (SepInformFileSystemsOfDeletedLogon.c)
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x140AFE560 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteCachedHandlesTable @ 0x140AFE698 (SepDeleteCachedHandlesTable.c)
 *     SepDeleteLogonSessionClaims @ 0x140AFE77C (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformLsaOfDeletedLogon @ 0x140B3E8E4 (SepInformLsaOfDeletedLogon.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rax
  struct _KTHREAD *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  void *v14; // rcx
  volatile signed __int64 *v15; // rbx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  v5 = (__int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (struct _ERESOURCE *)(&RtlpBootStatHandleLock.InGlobalUpdateVpThreadPriorityList + 13 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.InGlobalUpdateVpThreadPriorityList + (v4 & 3));
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _LIST_ENTRY **)(i + 168) == a2 && *a1 == *(_DWORD *)(i + 8) && a1[1] == *(_DWORD *)(i + 12) )
      break;
    v5 = (__int64 *)i;
  }
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(i + 32));
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = *(_QWORD *)i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(i + 56) )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(i + 56) + 48LL), 1u);
        v11 = *(_QWORD *)(i + 56);
        v12 = *(_DWORD *)(v11 + 200);
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 48));
        KeLeaveCriticalRegion();
        if ( (v12 & 0x8000000) != 0 )
        {
          if ( (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline() )
          {
            v13 = *(_DWORD *)(i + 40);
            if ( (v13 & 2) != 0 )
            {
              if ( *(_DWORD *)(i + 16) || *(_DWORD *)(i + 20) )
                SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 168));
              if ( *(_DWORD *)(i + 24) || *(_DWORD *)(i + 28) )
                SepDeReferenceLogonSession(i + 24, *(_QWORD *)(i + 168));
            }
            else
            {
              *(_DWORD *)(i + 40) = v13 & 0xFFFFFFFB;
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(i + 40) & 4) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
      SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 168));
    v14 = *(void **)(i + 56);
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      *(_QWORD *)(i + 56) = 0LL;
    }
    v15 = *(volatile signed __int64 **)(i + 48);
    if ( v15 )
    {
      *(_QWORD *)(i + 48) = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObDereferenceDeviceMap(v15, 1u);
    }
    if ( (*(_DWORD *)(i + 40) & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v16 = *(void **)(i + 72);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SepDeleteLogonSessionClaims(i);
    if ( RtlpBootStatHandleLock.WaitBlockFill7[128] )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)(i + 136), v17, v18, v19);
    SepDeleteCachedHandlesTable((struct _KTHREAD *)(i + 96), v20, v21, v22);
    SepInformLsaOfDeletedLogon(a1, *(void **)(i + 168), i);
    SepDeleteSessionLowboxEntries(v24, v23, v25, v26);
  }
}
