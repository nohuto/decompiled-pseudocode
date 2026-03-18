/*
 * XREFs of ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x14034B9A4
 * Callers:
 *     ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B210 (-DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedBufferSizes(QDC_CACHE *this, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGPROCESS *v11; // rax
  __int64 v12; // rax
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  int *v17; // rbx
  __int64 result; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  DXGFASTMUTEX *v23; // [rsp+50h] [rbp-38h] BYREF
  char v24; // [rsp+58h] [rbp-30h]

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 225;
    return result;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_5;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
LABEL_5:
  v12 = *((_QWORD *)v11 + 11);
  if ( v12 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v12 + 240))(0LL, 0LL, 0LL) )
    return 3221225473LL;
  v13 = (QDC_CACHE *)((char *)this + 8);
  v24 = 0;
  v23 = (QDC_CACHE *)((char *)this + 8);
  if ( this == (QDC_CACHE *)-8LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v13 = v23;
  }
  if ( DXGFASTMUTEX::IsOwner(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
  if ( a4 )
    *a4 = *((_DWORD *)this + 158);
  v15 = (char *)this + 56;
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= 0x12 )
      goto LABEL_28;
    if ( *v15 && *((_DWORD *)v15 + 1) == (_DWORD)v4 )
      break;
    v16 = (unsigned int)(v16 + 1);
    v15 += 32;
  }
  if ( !v15 )
  {
LABEL_28:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v14) + 24) = v4;
    WdLogGlobalForLineNumber = 255;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v23);
    return 3221225473LL;
  }
  *a3 = *((_DWORD *)v15 + 2);
  if ( v24 )
  {
    v17 = (int *)v23;
    v24 = 0;
    if ( *((struct _KTHREAD **)v23 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( v17[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v17[8]-- == 1 )
    {
      *((_QWORD *)v17 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
