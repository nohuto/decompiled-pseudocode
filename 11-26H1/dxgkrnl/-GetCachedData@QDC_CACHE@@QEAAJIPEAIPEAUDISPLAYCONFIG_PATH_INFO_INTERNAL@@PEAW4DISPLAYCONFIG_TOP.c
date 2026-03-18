/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B290
 * Callers:
 *     ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14034B210 (-DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
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
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        QDC_CACHE *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rax
  DXGFASTMUTEX *v15; // rcx
  DXGFASTMUTEX *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdi
  __int64 v20; // rcx
  unsigned int i; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGPROCESS *v25; // rsi
  struct DXGPROCESS *v26; // rax
  int v27; // edx
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  int *v31; // rbx
  __int64 result; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v37; // rax
  struct _ETHREAD *v38; // rbx
  KSPIN_LOCK *v39; // rax
  DXGFASTMUTEX *v40; // [rsp+50h] [rbp-38h] BYREF
  char v41; // [rsp+58h] [rbp-30h]

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 275;
    return result;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v13 )
        goto LABEL_5;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v13 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v13 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v13 = v12;
LABEL_5:
  v14 = *((_QWORD *)v13 + 11);
  if ( v14 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 240))(0LL, 0LL, 0LL) )
    return 3221225473LL;
  v15 = (QDC_CACHE *)((char *)this + 8);
  v41 = 0;
  v40 = (QDC_CACHE *)((char *)this + 8);
  if ( this == (QDC_CACHE *)-8LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v15 = v40;
  }
  if ( DXGFASTMUTEX::IsOwner(v15) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = v40;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v16 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v16 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v16 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v16 + 8, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v16 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 2);
      ExAcquirePushLockExclusiveEx((char *)v16 + 8, 0LL);
    }
    if ( *((_QWORD *)v16 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v16 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)v16 + 3) = KeGetCurrentThread();
    *((_DWORD *)v16 + 8) = 1;
  }
  v19 = (char *)this + 56;
  v20 = *((unsigned int *)this + 158);
  v41 = 1;
  *a6 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x12 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v17) + 24) = v8;
      WdLogGlobalForLineNumber = 302;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v40);
      return 3221225495LL;
    }
    if ( *v19 && *((_DWORD *)v19 + 1) == (_DWORD)v8 )
      break;
    v19 += 32;
  }
  v22 = *((unsigned int *)v19 + 2);
  if ( (unsigned int)v22 > *a3 )
  {
    WdLogSingleEntry3(3LL, v8, *((unsigned int *)v19 + 2), *a3);
    WdLogGlobalForLineNumber = 313;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v40);
    return 3221225473LL;
  }
  memmove(a4, *((const void **)v19 + 2), 216 * v22);
  *a3 = *((_DWORD *)v19 + 2);
  if ( a5 )
    *(_DWORD *)a5 = *((_DWORD *)v19 + 6);
  v23 = PsGetCurrentProcess(a5);
  v24 = PsGetProcessDxgProcess(v23);
  v25 = (struct DXGPROCESS *)v24;
  if ( !v24 || (*(_DWORD *)(v24 + 408) & 0x80) != 0 )
  {
    v37 = DXGTHREAD::GetCurrent();
    if ( v37 )
    {
      v26 = (struct DXGPROCESS *)*((_QWORD *)v37 + 3);
      if ( v26 )
        goto LABEL_34;
    }
    else
    {
      v38 = KeGetCurrentThread();
      v39 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v26 = DXGGLOBAL::SearchDxgThreadList(v39, v38);
      if ( v26 )
        goto LABEL_34;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v26 = v25;
LABEL_34:
  v27 = *((_DWORD *)this + 158);
  v28 = (unsigned int *)((char *)v26 + 564);
  if ( v27 != *((_DWORD *)v26 + 142) )
  {
    *((_DWORD *)v26 + 142) = v27;
    *v28 = 0;
  }
  v29 = *v28;
  v30 = *v28 + 1;
  *v28 = v30;
  if ( (v30 & v29) == 0 && v30 != 2 )
    DxgkLogCodePointPacket(0x4Du, v30, *((_DWORD *)v19 + 1), *((_DWORD *)v19 + 7), 0LL);
  if ( v41 )
  {
    v31 = (int *)v40;
    v41 = 0;
    if ( *((struct _KTHREAD **)v40 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( v31[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v31[8]-- == 1 )
    {
      *((_QWORD *)v31 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v31 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
