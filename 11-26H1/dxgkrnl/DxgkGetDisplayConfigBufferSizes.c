/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x14033B500
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031AF4C (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140339B80 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     DxgkGetPathsModality @ 0x14031B1E0 (DxgkGetPathsModality.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, int *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGPROCESS *v11; // rax
  __int64 v12; // rax
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // rcx
  struct _KTHREAD **v17; // rbx
  __int64 v19; // rcx
  int v21; // eax
  __int64 (__fastcall *v22)(struct DXGADAPTER *, void *); // rbx
  struct DXGGLOBAL *v23; // rax
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int PathsModality; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  struct _KTHREAD **v33; // [rsp+50h] [rbp-30h] BYREF
  char v34; // [rsp+58h] [rbp-28h]
  int v35; // [rsp+60h] [rbp-20h] BYREF
  __int64 v36; // [rsp+68h] [rbp-18h]
  char v37; // [rsp+70h] [rbp-10h]
  unsigned __int16 v38; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h] BYREF

  v2 = (unsigned int)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2174);
  v39 = (unsigned int)v2;
  v4 = v2 & 0xFFFFFFEF;
  v7 = (_BYTE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 185);
  if ( *v7 )
  {
    WdLogNewEntry5_WdTrace(v6, v5);
    WdLogGlobalForLineNumber = 225;
    goto LABEL_34;
  }
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_9;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_9;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
LABEL_9:
  v12 = *((_QWORD *)v11 + 11);
  if ( v12 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v12 + 240))(0LL, 0LL, 0LL) )
  {
LABEL_34:
    if ( (v2 & 0x40000000) != 0 )
    {
      v25 = 1;
    }
    else
    {
      v21 = v2 & 7;
      if ( v21 == 1 )
      {
        v22 = CalcAllPathDisplayConfigBufferSizeCallback;
LABEL_38:
        v23 = DXGGLOBAL::GetGlobal();
        v24 = DXGGLOBAL::IterateAdaptersWithCallback(v23, v22, &v39, 4LL);
        if ( v24 >= 0 )
        {
          v25 = HIDWORD(v39);
          goto LABEL_40;
        }
LABEL_42:
        WdLogSingleEntry3(4LL, v2, v24, (unsigned int)*a2);
        WdLogGlobalForLineNumber = 823;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
        return (unsigned int)v24;
      }
      if ( v21 == 2 )
      {
        v22 = CalcActivePathDisplayConfigBufferSizeCallback;
        goto LABEL_38;
      }
      if ( v21 != 4 )
      {
        v24 = -1073741811;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 806;
        goto LABEL_42;
      }
      v38 = 0;
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v38);
      v31 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 791;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unexpected status returned (expected STATUS_BUFFER_TOO_SMALL, obtained Status = 0x%I64x)",
          v31,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( (int)v31 >= 0 )
          LODWORD(v31) = -1073741823;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit);
        return (unsigned int)v31;
      }
      v25 = v38;
    }
    HIDWORD(v39) = v25;
    v24 = 0;
LABEL_40:
    *a2 = v25;
    if ( !v25 )
      v24 = -1073741637;
    goto LABEL_42;
  }
  v13 = (DXGFASTMUTEX *)(v7 + 8);
  v34 = 0;
  v33 = (struct _KTHREAD **)(v7 + 8);
  if ( v7 == (_BYTE *)-8LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v13 = (DXGFASTMUTEX *)v33;
  }
  if ( DXGFASTMUTEX::IsOwner(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
  v15 = v7 + 56;
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= 0x12 )
      goto LABEL_33;
    if ( *v15 && *((_DWORD *)v15 + 1) == v4 )
      break;
    v16 = (unsigned int)(v16 + 1);
    v15 += 32;
  }
  if ( !v15 )
  {
LABEL_33:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v14) + 24) = v4;
    WdLogGlobalForLineNumber = 255;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v33);
    goto LABEL_34;
  }
  *a2 = *((_DWORD *)v15 + 2);
  if ( v34 )
  {
    v17 = v33;
    v34 = 0;
    if ( v33[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v33, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v17 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v17 + 8))-- == 1 )
    {
      v17[3] = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  }
  return 0LL;
}
