/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B1A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18001B7D8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025520 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EB08 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180056C50 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x1800579F0 (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x18005AE14 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18005D124 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005EAB0 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005F000 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x180061F10 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x180063AB4 (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066328 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180067868 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800684F8 (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006EBA0 (-HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x180079730 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 */

__int64 __fastcall RmHamHostStateWorkerWaitForQuiesce(__int64 a1, unsigned __int64 *a2, HKEY *a3, __int64 a4, int a5)
{
  const unsigned __int16 *PsmKey; // rax
  char v7; // [rsp+50h] [rbp-A8h] BYREF
  char v8; // [rsp+51h] [rbp-A7h] BYREF
  char v9; // [rsp+52h] [rbp-A6h] BYREF
  _BYTE v10[5]; // [rsp+53h] [rbp-A5h] BYREF
  struct _RM_ACTIVITY_HOST *v11; // [rsp+58h] [rbp-A0h]
  int v12; // [rsp+60h] [rbp-98h]
  int v13; // [rsp+64h] [rbp-94h]
  unsigned int v14; // [rsp+68h] [rbp-90h]
  int v15; // [rsp+6Ch] [rbp-8Ch]
  _BYTE v16[4]; // [rsp+70h] [rbp-88h] BYREF
  unsigned int IsSuspendWaiter; // [rsp+74h] [rbp-84h]
  int v18; // [rsp+78h] [rbp-80h]
  int *v19; // [rsp+80h] [rbp-78h]
  unsigned __int64 v20; // [rsp+88h] [rbp-70h]
  __int64 v21; // [rsp+90h] [rbp-68h] BYREF
  __int64 v22; // [rsp+98h] [rbp-60h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 Id; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-48h] BYREF
  __int64 *v26; // [rsp+B8h] [rbp-40h]
  __int64 *v27; // [rsp+C0h] [rbp-38h]
  char *v28; // [rsp+C8h] [rbp-30h]
  _BYTE *v29; // [rsp+D0h] [rbp-28h]
  __int64 *v30; // [rsp+D8h] [rbp-20h]
  const wchar_t **v31; // [rsp+E0h] [rbp-18h]
  __int64 v32; // [rsp+E8h] [rbp-10h] BYREF

  v15 = 0;
  memset(v16, 0, sizeof(v16));
  IsSuspendWaiter = 0;
  v14 = 0;
  v13 = 0;
  v20 = 0LL;
  v11 = RmHostFromHamHost((struct _RM_HAM_ACTIVITY_HOST *)a1);
  memset(v16, 0, sizeof(v16));
  RmAcquireEnforcementLocks(v11);
  while ( 1 )
  {
    HampHostUpdateQuiesceState((struct _RM_HAM_ACTIVITY_HOST *)a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted((struct _RM_HAM_ACTIVITY_HOST *)a1) )
    {
      RmReleaseEnforcementLocks(v11);
      RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 800), 0);
      RmAcquireEnforcementLocks(v11);
      v15 = 1;
      goto LABEL_22;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(
                         (struct _RM_HAM_ACTIVITY_HOST *)a1,
                         (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)v16) )
    {
      HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      v12 = a5;
      if ( a5 )
      {
        if ( v12 == 1 )
          goto LABEL_12;
        if ( v12 != 2 && v12 != 3 )
        {
          if ( v12 != 4 )
            goto LABEL_15;
LABEL_12:
          CempLockSleepConditionVariableExclusive(a1, a1 + 696, 0LL);
          goto LABEL_15;
        }
        v20 = *a2 - (_QWORD)*a3;
        HampHostTryWaitForGenerationRevision((struct _RM_HAM_ACTIVITY_HOST *)a1, a4, v20);
      }
      else
      {
        *(_QWORD *)(a1 + 664) |= 0x400000000000uLL;
      }
LABEL_15:
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      RtlWakeAllConditionVariable(a1 + 696);
      RmAcquireEnforcementLocks(v11);
    }
  }
  *(_DWORD *)(a1 + 684) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1);
  *((_DWORD *)v11 + 313) |= 0x80u;
  *((_DWORD *)v11 + 314) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, IsSuspendWaiter);
  RmReleaseEnforcementLocks(v11);
  RmpSystemSetApplicationQuiesceCompleteEvents(v11);
  if ( *(_BYTE *)(a1 + 592) == 1 )
    HampSystemSetHostWmClosingForTest((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 800), 0);
  v15 = 0;
  RmAcquireEnforcementLocks(v11);
  if ( HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v14 = 5;
    v13 = 8;
  }
  else
  {
    v14 = 3;
    v13 = 6;
  }
  v18 = 1;
  HampHostRevokeQuiesceExtension(a1, v14, 1 << v13);
LABEL_22:
  v19 = HamTlgProvider;
  if ( (unsigned int)*HamTlgProvider > 4 && tlgKeywordOn((__int64)v19, 0x400000000008LL) )
  {
    v21 = 0x1000000LL;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v22,
      &v21);
    v26 = &v22;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v23,
      a3);
    v27 = &v23;
    v7 = v15;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v8, &v7);
    v28 = &v8;
    v9 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(v10, &v9);
    v29 = v10;
    Id = RmHamHostGetId((struct _RM_HAM_ACTIVITY_HOST *)a1);
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v25,
      &Id);
    v30 = &v25;
    PsmKey = RmHamHostGetPsmKey((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v31 = (const wchar_t **)_tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(&v32, (__int64)PsmKey);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v19,
      byte_1800D1029,
      0LL,
      0LL,
      v31,
      (__int64)v30,
      (__int64)v29,
      (__int64)v28,
      (__int64)v27,
      (__int64)v26);
  }
  return 0LL;
}
