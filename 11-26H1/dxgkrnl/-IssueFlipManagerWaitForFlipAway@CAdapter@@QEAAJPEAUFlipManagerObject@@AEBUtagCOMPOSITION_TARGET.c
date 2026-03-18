/*
 * XREFs of ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A2288
 * Callers:
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A1784 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 * Callees:
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x1400A2008 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400A206C (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x1400A293C (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x140314E1C (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerWaitForFlipAway(
        CAdapter *this,
        struct FlipManagerObject *a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        __int64 a4)
{
  int SyncContextForFlipManager; // eax
  struct CFlipAwayFence *i; // rdx
  struct _LIST_ENTRY *v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  struct CAdapter::FlipManagerSyncContext *v13; // rdi
  struct CFlipAwayFence *v15; // [rsp+20h] [rbp-60h] BYREF
  struct CAdapter::FlipManagerSyncContext *v16; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v17[10]; // [rsp+30h] [rbp-50h] BYREF

  v16 = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(this, a2, &v16);
  i = 0LL;
  v9 = (struct _LIST_ENTRY *)((char *)this + 104);
  v15 = 0LL;
  v10 = SyncContextForFlipManager;
  if ( SyncContextForFlipManager >= 0 )
  {
    for ( i = (struct CFlipAwayFence *)v9->Flink; i != (struct CFlipAwayFence *)v9; i = *(struct CFlipAwayFence **)i )
    {
      v11 = *((_QWORD *)a3 + 2);
      v15 = i;
      if ( *((_QWORD *)i + 4) == v11 )
      {
        v10 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_8;
  }
  if ( SyncContextForFlipManager == -1073741275 )
  {
LABEL_8:
    v12 = CFlipAwayFence::Create(v9, *((_DWORD *)this + 11), a3, &v15);
    i = v15;
    v10 = v12;
  }
LABEL_9:
  v13 = v16;
  if ( v10 < 0
    || (LODWORD(v15) = *((_DWORD *)i + 10),
        memset(v17, 0, sizeof(v17)),
        LODWORD(v17[0]) = *((_DWORD *)v16 + 2),
        v17[1] = &v15,
        HIDWORD(v17[0]) = 1,
        v17[2] = a4,
        v10 = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v17),
        v10 < 0) )
  {
    CAdapter::FreeFlipManagerSyncContext(this, v13);
  }
  return (unsigned int)v10;
}
