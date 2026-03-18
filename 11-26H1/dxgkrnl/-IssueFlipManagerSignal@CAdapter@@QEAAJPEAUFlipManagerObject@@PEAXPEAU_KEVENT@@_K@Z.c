/*
 * XREFs of ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138
 * Callers:
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x1400A2008 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400A206C (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1403B6D4C (DxgkSignalSynchronizationObjectInternal.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x14040C5C8 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerSignal(
        CAdapter *this,
        struct FlipManagerObject *a2,
        void *a3,
        struct _KEVENT *a4,
        unsigned __int64 a5)
{
  NTSTATUS SyncContextForFlipManager; // ebx
  struct CAdapter::FlipManagerSyncContext *v9; // rdi
  int v10; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD Src[58]; // [rsp+50h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(
                                this,
                                a2,
                                (struct CAdapter::FlipManagerSyncContext **)Handle);
  if ( SyncContextForFlipManager >= 0 )
  {
    v9 = (struct CAdapter::FlipManagerSyncContext *)Handle[0];
    SyncContextForFlipManager = DxgkSignalSynchronizationObjectFromGpuByReference(
                                  a3,
                                  a5,
                                  *((unsigned int *)Handle[0] + 2));
    if ( SyncContextForFlipManager < 0 )
      CAdapter::FreeFlipManagerSyncContext(this, v9);
    if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( SyncContextForFlipManager >= 0 )
      {
        if ( a4 )
        {
          memset(Src, 0, sizeof(Src));
          Handle[0] = 0LL;
          SyncContextForFlipManager = ObOpenObjectByPointer(
                                        a4,
                                        0,
                                        0LL,
                                        0x1F0003u,
                                        (POBJECT_TYPE)ExEventObjectType,
                                        1,
                                        Handle);
          if ( SyncContextForFlipManager >= 0 )
          {
            v10 = *((_DWORD *)v9 + 2);
            LODWORD(Src[17]) |= 2u;
            LODWORD(Src[0]) = v10;
            Src[50] = Handle[0];
            SyncContextForFlipManager = DxgkSignalSynchronizationObjectInternal(Src);
            ZwClose(Handle[0]);
          }
        }
      }
    }
  }
  return (unsigned int)SyncContextForFlipManager;
}
