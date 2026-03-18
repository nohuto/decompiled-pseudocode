/*
 * XREFs of ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z @ 0x1400A2384
 * Callers:
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A1848 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 * Callees:
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x1400A2008 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400A206C (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x140314E1C (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerWaitForFrameRenderingComplete(
        CAdapter *this,
        struct FlipManagerObject *a2,
        __int64 a3)
{
  int SyncContextForFlipManager; // ebx
  struct CAdapter::FlipManagerSyncContext *v6; // rsi
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF
  struct CAdapter::FlipManagerSyncContext *v9; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(this, a2, &v9);
  if ( SyncContextForFlipManager >= 0 )
  {
    memset(v8, 0, sizeof(v8));
    v6 = v9;
    LODWORD(v8[0]) = *((_DWORD *)v9 + 2);
    v8[1] = (char *)this + 56;
    HIDWORD(v8[0]) = 1;
    v8[2] = a3;
    SyncContextForFlipManager = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v8);
    if ( SyncContextForFlipManager < 0 )
      CAdapter::FreeFlipManagerSyncContext(this, v6);
  }
  return (unsigned int)SyncContextForFlipManager;
}
