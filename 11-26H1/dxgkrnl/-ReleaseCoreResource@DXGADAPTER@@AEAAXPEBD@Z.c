/*
 * XREFs of ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700
 * Callers:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 *     ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1401A9480 (-IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     DxgkUnlock2 @ 0x14028E410 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E7C4C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BAB8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x14036E4F8 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x140078760 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402F97A4 (-UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402F987C (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14030EB8C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreResource(PERESOURCE *this, const char *a2)
{
  SIZE_T v4; // r13
  PERESOURCE v5; // rax
  struct DXGGLOBAL *Global; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  PERESOURCE v9; // r14
  __int64 v10; // rsi
  DXGFASTMUTEX *v11; // rcx
  struct _KTHREAD **v12; // r15
  __int64 v13; // rcx
  DripsBlockerTrackingHelper *v14; // r15
  int v15; // edi
  struct DXGTHREAD *DxgThread; // rax
  unsigned int i; // ecx
  const CHAR *ProcessImageFileName; // r8
  __int64 v19; // rdx
  signed __int64 v20; // r8
  _BYTE *v21; // rcx
  char v22; // al
  _BYTE *v23; // rax
  unsigned int v24; // edi
  __int64 v25; // rcx
  _BYTE *v26; // rax
  unsigned int j; // esi
  __int64 v28; // r12
  unsigned int v29; // r8d
  char *v30; // r15
  __int64 v31; // r14
  DripsBlockerTrackingHelper *v32; // r12
  int v33; // eax
  int v34; // eax
  int *v35; // rdi
  ADAPTER_RENDER *v37; // rcx
  int v38; // [rsp+58h] [rbp-39h]
  __int64 v39; // [rsp+60h] [rbp-31h] BYREF
  struct _KTHREAD **v40; // [rsp+68h] [rbp-29h]
  char v41; // [rsp+70h] [rbp-21h]
  DripsBlockerTrackingHelper *v42; // [rsp+78h] [rbp-19h]
  _OWORD Source2[2]; // [rsp+80h] [rbp-11h] BYREF
  char v44; // [rsp+A0h] [rbp+Fh]

  v4 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(this[21]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4272;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ExIsResourceAcquiredSharedLite(m_pCoreResource)",
      4272LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[23] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4273;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NULL == m_pWorkerThreadOfExclusiveOwner[0]",
      4273LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = this[396];
  if ( v5 && LOBYTE(v5[7].ActiveCount) )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4281;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"IsCoreResourceExclusiveOwner()",
        4281LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v37 = (ADAPTER_RENDER *)this[396];
    if ( *((_QWORD *)v37 + 93) )
      ADAPTER_RENDER::ResumeScheduler(v37, 1u, 0);
    LOBYTE(this[396][7].ActiveCount) = 0;
  }
  Global = DXGGLOBAL::GetGlobal();
  CurrentProcess = PsGetCurrentProcess(v7);
  v9 = this[29];
  v10 = CurrentProcess;
  if ( !v9 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 540;
    goto LABEL_10;
  }
  if ( !CurrentProcess )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 546;
    goto LABEL_10;
  }
  if ( *((_DWORD *)Global + 526) && *((_BYTE *)Global + 304360) )
  {
    v11 = (struct DXGGLOBAL *)((char *)Global + 2112);
    v40 = (struct _KTHREAD **)((char *)Global + 2112);
    v41 = 0;
    if ( Global == (struct DXGGLOBAL *)-2112LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v11 = 0LL;
    }
    if ( DXGFASTMUTEX::IsOwner(v11) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    v12 = v40;
    KeEnterCriticalRegion();
    if ( v12[3] == KeGetCurrentThread() )
    {
      if ( *((int *)v12 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 504;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++*((_DWORD *)v12 + 8);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12 + 1, 0LL) )
      {
        if ( bTracingEnabled && *((_DWORD *)v12 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)"g");
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 2);
        ExAcquirePushLockExclusiveEx(v12 + 1, 0LL);
      }
      if ( v12[3] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 530;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((_DWORD *)v12 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 531;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
      }
      v12[3] = KeGetCurrentThread();
      *((_DWORD *)v12 + 8) = 1;
    }
    v14 = (struct DXGGLOBAL *)((char *)Global + 2280);
    v15 = -1;
    v41 = 1;
    v38 = -1;
    v42 = v14;
    v39 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v39) >= 0 )
    {
      DxgThread = (struct DXGTHREAD *)v39;
      if ( v39 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v39 = (__int64)DxgThread) != 0) )
      {
        v15 = *((_DWORD *)DxgThread + 14);
        v38 = v15;
      }
    }
    if ( !*((_BYTE *)v14 + 302080) )
    {
LABEL_78:
      if ( v41 )
      {
        v35 = (int *)v40;
        v41 = 0;
        if ( v40[3] != KeGetCurrentThread() )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
          WdLogGlobalForLineNumber = 553;
        }
        if ( v35[8] <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 556;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v35[8]-- == 1 )
        {
          *((_QWORD *)v35 + 3) = 0LL;
          ExReleasePushLockExclusiveEx(v35 + 2, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      goto LABEL_10;
    }
    v39 = 0x1F4E000003F1LL;
    for ( i = 0; i < 2; ++i )
    {
      if ( v15 == *((_DWORD *)&v39 + i) )
        goto LABEL_78;
    }
    v44 = 0;
    memset(Source2, 0, sizeof(Source2));
    ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(v10);
    if ( !ProcessImageFileName )
      ProcessImageFileName = File;
    v19 = 33LL;
    v20 = ProcessImageFileName - (const CHAR *)Source2;
    v21 = Source2;
    do
    {
      if ( v19 == -2147483613 )
        break;
      v22 = v21[v20];
      if ( !v22 )
        break;
      *v21++ = v22;
      --v19;
    }
    while ( v19 );
    v23 = v21 - 1;
    if ( v19 )
      v23 = v21;
    *v23 = 0;
    if ( v19 )
    {
      if ( !a2
        || RtlStringCbCatA((char *)Source2, 0x21uLL, "-") >= 0 && RtlStringCbCatA((char *)Source2, 0x21uLL, a2) >= 0 )
      {
        v25 = 33LL;
        v26 = Source2;
        do
        {
          if ( !*v26 )
            break;
          ++v26;
          --v25;
        }
        while ( v25 );
        v24 = 0;
        v4 = 33 - v25;
        if ( !v25 )
        {
          v4 = 0LL;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 856;
        }
LABEL_62:
        for ( j = 0; j < 0x40; ++j )
        {
          v28 = 4720LL * j;
          if ( *((_BYTE *)v14 + v28 + 104)
            && *(PERESOURCE *)((char *)v14 + v28) == v9
            && RtlCompareMemory((char *)v14 + v28 + 8, Source2, v4) == v4 )
          {
            v29 = *(_DWORD *)((char *)v14 + v28 + 44);
            while ( 1 )
            {
              if ( v24 >= v29 )
              {
                v24 = 0;
                goto LABEL_67;
              }
              v30 = (char *)v14 + 72 * v24 + v28;
              if ( *((_DWORD *)v30 + 43) == v38 )
                break;
              v14 = v42;
              ++v24;
            }
            v31 = v28 + 72 * (v24 + 2LL);
            v32 = v42;
            v33 = *(_DWORD *)((char *)v42 + v31);
            if ( v33 )
            {
              v34 = v33 - 1;
              *(_DWORD *)((char *)v42 + v31) = v34;
              if ( !v34 )
              {
                if ( v30[112] == 1 )
                {
                  DripsBlockerTrackingHelper::AddActiveTime(v32, j, v24);
                  v30[112] = 0;
                  *(_DWORD *)((char *)v32 + v31) = 0;
                }
                DripsBlockerTrackingHelper::UpdateLastActiveEntry(v32, j, v24);
              }
            }
            goto LABEL_78;
          }
LABEL_67:
          ;
        }
        goto LABEL_78;
      }
    }
    else
    {
      LOBYTE(Source2[0]) = 0;
    }
    v24 = 0;
    goto LABEL_62;
  }
LABEL_10:
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventReleaseAdapterLock);
  }
  ExReleaseResourceLite(this[21]);
  KeLeaveCriticalRegion();
}
