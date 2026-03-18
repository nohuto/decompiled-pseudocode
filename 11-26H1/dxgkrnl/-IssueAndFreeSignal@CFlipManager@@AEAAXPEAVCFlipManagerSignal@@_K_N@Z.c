/*
 * XREFs of ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8
 * Callers:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipManager::IssueAndFreeSignal(
        CFlipManager *this,
        struct CFlipManagerSignal *a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r13
  int SessionTokenManager; // r15d
  int IsEnabledDeviceUsageNoInline; // eax
  char v10; // cl
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rax
  char v16; // bl
  void (__fastcall *v17)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v18; // eax
  CFlipManager::PresentHistory *v19; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  char *v24; // rbx
  __int64 v25; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v27; // rbx
  void (__fastcall *v28)(_QWORD, __int64, __int64, _QWORD); // rdi
  unsigned int TracingId; // eax
  bool v30; // zf
  char *v31; // r8
  __int64 (__fastcall *v32)(__int64, char *, char *, _QWORD, __int64, unsigned __int64); // rax
  int v33; // eax
  __int64 v34; // rax
  char v35; // bl
  void (__fastcall *v36)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v37; // eax
  struct _KEVENT *v38; // rbx
  __int64 v39; // [rsp+20h] [rbp-68h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]
  __int64 v41; // [rsp+98h] [rbp+10h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+18h]
  char v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v4 = 0LL;
  v5 = a3;
  SessionTokenManager = 0;
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v10 = *((_BYTE *)a2 + 64);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !v10 )
      goto LABEL_30;
    v21 = *((_QWORD *)a2 + 7);
    if ( v21 <= 1 )
      goto LABEL_30;
    v22 = v21 - 1;
    v41 = 0LL;
    v40 = v22;
    if ( v5 )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v41);
      if ( SessionTokenManager >= 0 )
      {
        v23 = v41;
        v24 = (char *)this - 32;
        if ( v43 )
        {
          v25 = v42;
          SessionTokenManager = (*(__int64 (__fastcall **)(__int64, char *, __int64, char *))(*(_QWORD *)v41 + 184LL))(
                                  v41,
                                  (char *)this - 32,
                                  v42 - 1,
                                  (char *)this + 328);
          Win32kImportTable = DxgkGetWin32kImportTable();
          v27 = *((_QWORD *)a2 + 7);
          v28 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(Win32kImportTable + 384);
          TracingId = CFlipManager::GetTracingId(this);
          v28(TracingId, v27, v25 - 1, (unsigned int)SessionTokenManager);
          v22 = v40;
          if ( SessionTokenManager < 0 )
            goto LABEL_25;
          v24 = (char *)this - 32;
        }
        v30 = (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() == 0;
        v31 = (char *)this + 328;
        v32 = *(__int64 (__fastcall **)(__int64, char *, char *, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v23 + 200LL);
        if ( v30 )
        {
          v33 = v32(v23, v24, v31, *((_QWORD *)this + 38), 0LL, v22);
        }
        else
        {
          v39 = *((_QWORD *)a2 + 3);
          *((_QWORD *)a2 + 3) = 0LL;
          v33 = v32(v23, v24, v31, *((_QWORD *)this + 38), v39, v22);
        }
        SessionTokenManager = v33;
LABEL_25:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        if ( SessionTokenManager >= 0 )
          goto LABEL_29;
      }
    }
    else
    {
      SessionTokenManager = -1073741823;
    }
    CFlipManager::MarkAsLost(this, (unsigned int)SessionTokenManager, 18LL);
LABEL_29:
    v4 = v40;
LABEL_30:
    *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
    v34 = DxgkGetWin32kImportTable();
    v35 = *((_BYTE *)a2 + 64);
    v36 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v34 + 216);
    v37 = CFlipManager::GetTracingId(this);
    v36(v37, v4, v35 == 0, (unsigned int)SessionTokenManager);
    v5 = v42;
    goto LABEL_9;
  }
  if ( v10 )
  {
    v11 = *((_QWORD *)a2 + 7);
    if ( v11 > 1 )
    {
      v12 = v11 - 1;
      v13 = DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 38), v12);
      v14 = v13;
      if ( v13 < 0 )
        CFlipManager::MarkAsLost(this, (unsigned int)v13, 18LL);
      if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
      {
        v38 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
        *((_QWORD *)a2 + 3) = 0LL;
        if ( v38 )
        {
          KeSetEvent(v38, 1, 0);
          ObfDereferenceObject(v38);
        }
      }
      v15 = DxgkGetWin32kImportTable();
      v16 = *((_BYTE *)a2 + 64);
      v17 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v15 + 216);
      v18 = CFlipManager::GetTracingId(this);
      v17(v18, v12, v16 == 0, v14);
    }
    *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
  }
LABEL_9:
  ++*((_QWORD *)this + 33);
  v19 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v19 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v19);
    *(_QWORD *)NextEntry = v5;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 7);
    *((_DWORD *)NextEntry + 10) = (*((_BYTE *)a2 + 64) != 0) + 13;
  }
  if ( a2 )
    (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
}
