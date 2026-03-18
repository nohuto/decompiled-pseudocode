/*
 * XREFs of DxgkQueryDisplayConfig @ 0x14031A260
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031AA04 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 */

__int64 __fastcall DxgkQueryDisplayConfig(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        void *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  __int64 v5; // r14
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v14; // rdi
  struct DXGPROCESS *v15; // rax
  __int64 v16; // rax
  bool v17; // cl
  DXGFASTMUTEX *v18; // rcx
  struct _KTHREAD **v19; // rbx
  __int64 v20; // rdx
  struct _KTHREAD *v21; // rcx
  __int64 v22; // rdi
  unsigned int i; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGPROCESS *v27; // rsi
  struct DXGPROCESS *v28; // rax
  int v29; // edx
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  struct _KTHREAD **v33; // rbx
  __int64 v35; // rcx
  unsigned int DisplayConfigInternal; // ebx
  __int64 v38; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v42; // rax
  struct _ETHREAD *v43; // rbx
  KSPIN_LOCK *v44; // rax
  struct _KTHREAD **v45; // [rsp+58h] [rbp-28h] BYREF
  char v46; // [rsp+60h] [rbp-20h]
  int v47; // [rsp+68h] [rbp-18h] BYREF
  __int64 v48; // [rsp+70h] [rbp-10h]
  char v49; // [rsp+78h] [rbp-8h]

  v5 = (unsigned int)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2176;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 2176);
  v8 = 0;
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 185);
  if ( *(_BYTE *)v11 )
  {
    WdLogNewEntry5_WdTrace(v10, v9);
    WdLogGlobalForLineNumber = 275;
    goto LABEL_56;
  }
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v15 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v15 )
        goto LABEL_9;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v15 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v15 )
        goto LABEL_9;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v15 = v14;
LABEL_9:
  v16 = *((_QWORD *)v15 + 11);
  if ( !v16 || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v16 + 240))(0LL, 0LL, 0LL) )
  {
    v18 = (DXGFASTMUTEX *)(v11 + 8);
    v46 = 0;
    v45 = (struct _KTHREAD **)(v11 + 8);
    if ( v11 == -8 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v18 = (DXGFASTMUTEX *)v45;
    }
    if ( DXGFASTMUTEX::IsOwner(v18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    v19 = v45;
    KeEnterCriticalRegion();
    v21 = v19[3];
    if ( v21 == KeGetCurrentThread() )
    {
      if ( *((int *)v19 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 504;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++*((_DWORD *)v19 + 8);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 1, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v19 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v21, (__int64)"g");
        _InterlockedIncrement64((volatile signed __int64 *)v19 + 2);
        ExAcquirePushLockExclusiveEx(v19 + 1, 0LL);
      }
      if ( v19[3] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 530;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((_DWORD *)v19 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 531;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
      }
      v19[3] = KeGetCurrentThread();
      *((_DWORD *)v19 + 8) = 1;
    }
    v8 = *(_DWORD *)(v11 + 632);
    v22 = v11 + 56;
    v46 = 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x12 )
        goto LABEL_54;
      if ( *(_BYTE *)v22 && *(_DWORD *)(v22 + 4) == (_DWORD)v5 )
        break;
      v22 += 32LL;
    }
    if ( v22 )
    {
      v24 = *(unsigned int *)(v22 + 8);
      if ( (unsigned int)v24 <= *a3 )
      {
        memmove(a4, *(const void **)(v22 + 16), 216 * v24);
        *a3 = *(_DWORD *)(v22 + 8);
        if ( a5 )
          *(_DWORD *)a5 = *(_DWORD *)(v22 + 24);
        v25 = PsGetCurrentProcess(a5);
        v26 = PsGetProcessDxgProcess(v25);
        v27 = (struct DXGPROCESS *)v26;
        if ( !v26 || (*(_DWORD *)(v26 + 408) & 0x80) != 0 )
        {
          v42 = DXGTHREAD::GetCurrent();
          if ( v42 )
          {
            v28 = (struct DXGPROCESS *)*((_QWORD *)v42 + 3);
            if ( v28 )
              goto LABEL_34;
          }
          else
          {
            v43 = KeGetCurrentThread();
            v44 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
            v28 = DXGGLOBAL::SearchDxgThreadList(v44, v43);
            if ( v28 )
              goto LABEL_34;
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3080;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find DXGPROCESS",
              3080LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v28 = v27;
LABEL_34:
        v29 = *(_DWORD *)(v11 + 632);
        v30 = (unsigned int *)((char *)v28 + 564);
        if ( v29 != *((_DWORD *)v28 + 142) )
        {
          *((_DWORD *)v28 + 142) = v29;
          *v30 = 0;
        }
        v31 = *v30;
        v32 = *v30 + 1;
        *v30 = v32;
        if ( (v31 & v32) == 0 && v32 != 2 )
          DxgkLogCodePointPacket(0x4Du, v32, *(_DWORD *)(v22 + 4), *(_DWORD *)(v22 + 28), 0LL);
        if ( v46 )
        {
          v33 = v45;
          v46 = 0;
          if ( v45[3] != KeGetCurrentThread() )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v45, 0LL, 0LL);
            WdLogGlobalForLineNumber = 553;
          }
          if ( *((int *)v33 + 8) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 556;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( (*((_DWORD *)v33 + 8))-- == 1 )
          {
            v33[3] = 0LL;
            ExReleasePushLockExclusiveEx(v33 + 1, 0LL);
          }
          KeLeaveCriticalRegion();
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
        if ( v49 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
        }
        return 0LL;
      }
      WdLogSingleEntry3(3LL, v5, *(unsigned int *)(v22 + 8), *a3);
      WdLogGlobalForLineNumber = 313;
    }
    else
    {
LABEL_54:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = v5;
      WdLogGlobalForLineNumber = 302;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v45);
  }
LABEL_56:
  DisplayConfigInternal = QueryDisplayConfigInternal(
                            v17,
                            v8,
                            v5,
                            a2,
                            a3,
                            (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)a4,
                            a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit);
  return DisplayConfigInternal;
}
