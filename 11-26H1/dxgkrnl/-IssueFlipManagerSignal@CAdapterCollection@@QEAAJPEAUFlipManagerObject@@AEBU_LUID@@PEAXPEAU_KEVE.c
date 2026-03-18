/*
 * XREFs of ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C
 * Callers:
 *     ?IssueFlipManagerSignal@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A1380 (-IssueFlipManagerSignal@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CAdapterCollection::IssueFlipManagerSignal(
        CAdapterCollection *this,
        struct FlipManagerObject *a2,
        const struct _LUID *a3,
        void *a4,
        PRKEVENT Event,
        unsigned __int64 a6)
{
  CPushLockCriticalSection *v6; // r13
  int v8; // edi
  char v9; // r14
  char *v12; // rax
  char *v13; // rsi

  v6 = (CAdapterCollection *)((char *)this + 40);
  v8 = 0;
  v9 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v12 = (char *)this + 24;
  *((_BYTE *)v6 + 8) = 1;
  v13 = (char *)*((_QWORD *)this + 3);
  while ( v13 != v12 )
  {
    if ( !*(_DWORD *)(((unsigned __int64)(v13 - 8) & -(__int64)(v13 != 0LL)) + 0x2C)
      || !CAdapter::IsDeviceActive((CAdapter *)((unsigned __int64)(v13 - 8) & -(__int64)(v13 != 0LL)))
      || a3->LowPart != *(_DWORD *)(((unsigned __int64)(v13 - 8) & -(__int64)(v13 != 0LL)) + 0x18)
      || a3->HighPart != *(_DWORD *)(((unsigned __int64)(v13 - 8) & -(__int64)(v13 != 0LL)) + 0x1C) )
    {
      goto LABEL_22;
    }
    v8 = CAdapter::IssueFlipManagerSignal(
           (CAdapter *)((unsigned __int64)(v13 - 8) & -(__int64)(v13 != 0LL)),
           a2,
           a4,
           Event,
           a6);
    if ( v8 >= 0 )
    {
      v9 = 1;
      if ( !(unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_14;
    }
    if ( !(unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    {
LABEL_22:
      v13 = *(char **)v13;
      v12 = (char *)this + 24;
      if ( v8 >= 0 )
        continue;
    }
    if ( v8 < 0 )
      goto LABEL_14;
    break;
  }
  if ( !v9 )
    v8 = DxgkImmediateSignalSynchronizationObjectByReference(a4, a6);
LABEL_14:
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() && Event )
  {
    if ( !v9 )
      KeSetEvent(Event, 1, 0);
    ObfDereferenceObject(Event);
  }
  CPushLockCriticalSection::Release(v6);
  return (unsigned int)v8;
}
