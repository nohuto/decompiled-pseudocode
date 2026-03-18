/*
 * XREFs of RIMOnAsyncWorkItemNotification @ 0x1401288B4
 * Callers:
 *     NtRIMOnAsyncPnpWorkNotification @ 0x140128830 (NtRIMOnAsyncPnpWorkNotification.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140128850 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     rimDoApiSetHidRawInputWorkItem @ 0x140079AE4 (rimDoApiSetHidRawInputWorkItem.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x14008FEFC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D5320 (rimDoUpdateInputGlobalsWorkItem.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1400EBC30 (WPP_RECORDER_AND_TRACE_SF_qqDdS.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMFreeAsyncWorkItem @ 0x14012CDEC (RIMFreeAsyncWorkItem.c)
 *     ?DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CEE4 (-DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140131C9C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     rimDoSetInputModeWorkItem @ 0x1401BFFC0 (rimDoSetInputModeWorkItem.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x1401C121C (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 *     RIMApiSetIsRemoteConnection @ 0x1401C45C8 (RIMApiSetIsRemoteConnection.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall RIMOnAsyncWorkItemNotification(char *a1)
{
  _QWORD *v2; // rbp
  int v3; // r12d
  _QWORD *v4; // rax
  const struct RIMAsyncWorkItem *v5; // r14
  __int64 v6; // rcx
  int v7; // r8d
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // r15
  __int64 v14; // r13
  const wchar_t *v15; // r12
  int v16; // ebx
  int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  char v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  _QWORD *v28; // rbx
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // di
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edx
  int v47; // r8d
  char v48; // di
  bool v49; // si
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // edx
  int v54; // r8d
  char v55; // bl
  bool v56; // di
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  int Object; // [rsp+20h] [rbp-88h]
  int v62; // [rsp+28h] [rbp-80h]
  int v63; // [rsp+30h] [rbp-78h]
  int v64; // [rsp+38h] [rbp-70h]
  char v65; // [rsp+B0h] [rbp+8h]
  NTSTATUS v66; // [rsp+B8h] [rbp+10h]
  PVOID v67; // [rsp+C0h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = -1073741816;
LABEL_82:
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, v2, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_83;
  }
  v67 = 0LL;
  v66 = ObReferenceObjectByHandle(a1, 3u, ExRawInputManagerObjectType, 1, &v67, 0LL);
  v3 = v66;
  if ( v66 >= 0 )
  {
    if ( *((_DWORD *)v67 + 1) == 1 )
    {
      v2 = v67;
    }
    else
    {
      v3 = -1073741788;
      v66 = -1073741788;
      ObfDereferenceObject(v67);
    }
  }
  if ( v3 < 0 )
    goto LABEL_82;
  RIMLockExclusive((__int64)(v2 + 44));
  v4 = v2 + 47;
  v5 = (const struct RIMAsyncWorkItem *)v2[47];
  if ( *((_QWORD **)v5 + 1) != v2 + 47
    || (v6 = *(_QWORD *)v5, *(const struct RIMAsyncWorkItem **)(*(_QWORD *)v5 + 8LL) != v5) )
  {
    __fastfail(3u);
  }
  *v4 = v6;
  *(_QWORD *)(v6 + 8) = v4;
  RIMUnlockExclusive((__int64)(v2 + 44));
  InputTraceLogging::RIM::DequeueAsyncWorkItem((const struct RawInputManagerObject *)v2, v5);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v7);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      162,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      (char)v2);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *((_QWORD *)v5 + 7);
    if ( v14 )
      v15 = *(const wchar_t **)(v14 + 272);
    else
      v15 = (const wchar_t *)*((_QWORD *)v5 + 6);
    v16 = *((_DWORD *)v5 + 4);
    v17 = *((_DWORD *)v5 + 8);
    v18 = *((_QWORD *)v5 + 3);
    v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v7);
    WPP_RECORDER_AND_TRACE_SF_qqDdS(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v65,
      *(_QWORD *)(v19 + 19368),
      Object,
      v62,
      v63,
      v64,
      v18,
      v14,
      v17,
      v16,
      v15);
    v3 = v66;
  }
  if ( (unsigned int)RIMApiSetIsRemoteConnection() )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v23 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v22);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19368),
        3,
        1,
        164,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    }
    v3 = 0;
  }
  else if ( *((_DWORD *)v5 + 4) < 2u )
  {
    RIMLockExclusive((__int64)(v2 + 13));
    if ( *((_BYTE *)v2 + 80) || *((_BYTE *)v2 + 81) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v48 = 0;
      }
      v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v46, v47);
        LOBYTE(v51) = v49;
        LOBYTE(v52) = v48;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v51,
          *(_QWORD *)(v50 + 19368),
          3,
          1,
          165,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
          (char)v2);
      }
    }
    else if ( *((_DWORD *)v5 + 4) )
    {
      RIMDeviceNotifyAsyncWorkItem((__int64)v5);
    }
    else
    {
      RIMDeviceClassNotifyAsyncWorkItem((__int64)v5);
    }
    RIMUnlockExclusive((__int64)(v2 + 13));
  }
  else
  {
    v28 = (_QWORD *)W32GetUserSessionState(v21, v20, v22);
    v29 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v28,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v28[3] = v29;
    if ( v29 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v29) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v28 + 2465), v30, v31);
      DestroyDeferredUnlockObjectAssignmentList(v28 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v28 + 2470);
    }
    RIMLockExclusive((__int64)(v2 + 13));
    if ( *((_BYTE *)v2 + 80) || *((_BYTE *)v2 + 81) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v33);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 19368),
          3,
          1,
          166,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
          (char)v2);
      }
    }
    else
    {
      switch ( *((_DWORD *)v5 + 4) )
      {
        case 2:
          if ( !*((_DWORD *)v5 + 28) )
            rimDoRimDevChangeAsyncWorkItem((__int64)v5);
          break;
        case 3:
          rimDoApiSetHidRawInputWorkItem((__int64)v5);
          break;
        case 4:
          v34 = *((_QWORD *)v5 + 7);
          v35 = v34 + 528;
          if ( !v34 )
            v35 = 456LL;
          v36 = *(_QWORD *)v35;
          if ( *((_DWORD *)v5 + 24) )
            ApiSetPostPointerDeviceInRangeMessage(v36);
          else
            ApiSetPostPointerDeviceOutOfRangeMessage(v36);
          break;
        case 5:
          rimDoUpdateInputGlobalsWorkItem((__int64)v5, v32, v33);
          break;
        case 6:
          rimDoHandleAnyPnpRemovePendingDevicesWorkItem(v5);
          break;
        case 7:
          rimDoSetInputModeWorkItem(v5);
          break;
      }
    }
    RIMUnlockExclusive((__int64)(v2 + 13));
    UserSessionSwitchLeaveCritWithNonPaged(v43, v42, v44, v45);
  }
  RIMFreeAsyncWorkItem(v5);
  ObfDereferenceObject(v2);
LABEL_83:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v55 = 0;
  }
  v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v57 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v53, v54);
    LOBYTE(v58) = v56;
    LOBYTE(v59) = v55;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v59,
      v58,
      *(_QWORD *)(v57 + 19368),
      4,
      1,
      167,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
