/*
 * XREFs of ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18000FD5C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180013DF0 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016758 (-HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18002E9C4 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E20C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x1800429DC (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180057280 (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18005D9B0 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180064C54 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006E6D4 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000C220 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x1800172C0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B1A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004028C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800428E0 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180057890 (-HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18005DBC8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18005E314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180061EEC (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180069020 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A204 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D94C (-HampHostQueueErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007CCB0 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        __int64 a1,
        int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned int *a8)
{
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // r13
  struct _HAM_CLIENT_CONTEXT *v11; // r12
  __int64 v13; // rsi
  unsigned __int64 AppliedTaskCompletions; // rax
  _QWORD *v15; // r11
  bool v16; // zf
  unsigned int v17; // ebx
  unsigned int v18; // esi
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  unsigned int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // rcx
  int IsSuspendWaiter; // ebx
  __int16 v27; // ax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int JobType; // [rsp+60h] [rbp-29h] BYREF
  __int64 v34; // [rsp+68h] [rbp-21h] BYREF
  __int64 v35; // [rsp+70h] [rbp-19h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h] BYREF
  __int64 v37; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v38[7]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+47h] BYREF
  unsigned int v40; // [rsp+E0h] [rbp+57h]

  v40 = a3;
  v8 = a5;
  v9 = 0;
  v10 = a2;
  v11 = a4;
  v34 = 0LL;
  if ( !a5 )
  {
    v9 = 1;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  v13 = *(_QWORD *)(a1 + 704);
  if ( a7 )
  {
    AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v16 = (AppliedTaskCompletions & *v15) == 0;
    *v15 &= AppliedTaskCompletions;
    if ( !v16 )
    {
      v17 = 0;
      v18 = -1058275328;
      goto LABEL_56;
    }
  }
  v19 = *(_QWORD *)(a1 + 664);
  if ( (BYTE2(v19) & 3u) < (unsigned __int64)(unsigned int)v10 )
  {
    if ( (v19 & 0x800000000LL) != 0 || v19 < 0 )
    {
      if ( (unsigned int)dword_1800E12B0 > 5 )
      {
        v31 = 32LL;
        if ( a1 )
          v31 = a1 - 24;
        a7 = *(_QWORD *)v31;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800E12B0,
          (unsigned int)&unk_1800CD66A,
          v19,
          (_DWORD)a4,
          (__int64)&a7);
      }
      goto LABEL_54;
    }
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
    if ( FirstActivity )
    {
      v23 = v40;
      do
      {
        if ( *((_BYTE *)FirstActivity + 562) == 2 && *((_BYTE *)FirstActivity + 563) > 4u )
          HampActMoveBackPendState(FirstActivity);
        if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 562) == 3 )
          HampActRequestStopForTerminate(v24, (unsigned int)v10, v23, v11);
        v21 = *((_QWORD *)FirstActivity + 12);
        v25 = *((_QWORD *)FirstActivity + 10);
        FirstActivity = 0LL;
        if ( v21 != v25 + 608 )
          FirstActivity = (struct _HAM_ACTIVITY *)(v21 - 96);
      }
      while ( FirstActivity );
      v8 = a5;
    }
    IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v21);
    v27 = v40;
    *(_QWORD *)(a1 + 664) = (v10 << 16) ^ (*(_QWORD *)(a1 + 664) ^ (v10 << 16)) & 0xFFFFFFFFFFFCFFFFuLL;
    *(_WORD *)(a1 + 664) = v27;
    *(_QWORD *)(a1 + 664) = *(_QWORD *)(a1 + 664) & 0xFFFFFFFFFC03FFFFuLL | ((unsigned __int64)HampHostComputeEffectivePriority(
                                                                                                 (struct _RM_HAM_ACTIVITY_HOST *)a1,
                                                                                                 0LL) << 18);
    *(_DWORD *)(a1 + 844) = CempQueryUnbiasedInterruptTimeMs64();
    *(_DWORD *)(a1 + 848) = a6;
    HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, IsSuspendWaiter);
    if ( (_DWORD)v10 == 2 )
      HampHostQueueErrorReport((struct _RM_HAM_ACTIVITY_HOST *)a1);
    else
      HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    if ( v11 )
      LODWORD(v11) = HampClientGetPid(v11);
    if ( !*(_QWORD *)(a1 + 1048) && (int)TpAllocTimer(a1 + 1048, HampHostTerminateWatchdog, a1, 0LL) >= 0 )
    {
      v34 = -10000LL
          * *(unsigned int *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                     + 120)
                                         + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                            + 576);
      TpSetTimer(*(_QWORD *)(a1 + 1048), &v34, 0LL, 0LL);
    }
    if ( v13 )
    {
      if ( v8 == 2 )
      {
        ++*(_QWORD *)(v13 + 112);
        v17 = 0;
        goto LABEL_42;
      }
      HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
      if ( v8 == 3 )
      {
        HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
        v17 = 0;
      }
      else
      {
        v17 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v13, (unsigned __int64 *)(a1 + 624));
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
    }
    else
    {
      v17 = 0;
      if ( v8 == 2 )
        goto LABEL_42;
    }
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
LABEL_42:
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
    {
      v36 = *(_QWORD *)(a1 + 808);
      LODWORD(a7) = v40;
      v35 = 0x1000000LL;
      LOBYTE(a5) = v10;
      LODWORD(v39) = (_DWORD)v11;
      JobType = RmHamHostGetJobType((struct _RM_HAM_ACTIVITY_HOST *)a1);
      v30 = 32LL;
      if ( a1 )
        v30 = a1 - 24;
      v37 = *(_QWORD *)v30;
      v38[0] = a1 + 24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v30,
        (unsigned int)&unk_1800CCEE2,
        v28,
        v29,
        (__int64)v38,
        (__int64)&v37,
        (__int64)&JobType,
        (__int64)&v39,
        (__int64)&a5,
        (__int64)&a7,
        (__int64)&v36,
        (__int64)&v35);
    }
    if ( v9 )
    {
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      v9 = 0;
      if ( v17 )
      {
        v17 = 0;
        HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
      }
    }
    goto LABEL_55;
  }
  if ( (unsigned int)dword_1800E12B0 > 5 )
  {
    LOBYTE(a7) = v10;
    LOBYTE(a5) = BYTE2(v19) & 3;
    v20 = 32LL;
    if ( a1 )
      v20 = a1 - 24;
    v39 = *(_QWORD *)v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v20,
      (unsigned int)&unk_1800CDA20,
      v19,
      (_DWORD)a4,
      (__int64)&v39,
      (__int64)&a7,
      (__int64)&a5);
  }
LABEL_54:
  v17 = 0;
LABEL_55:
  v18 = 0;
LABEL_56:
  *a8 = v17;
  if ( v9 )
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
  return v18;
}
