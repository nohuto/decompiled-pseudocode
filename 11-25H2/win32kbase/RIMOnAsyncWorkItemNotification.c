/*
 * XREFs of RIMOnAsyncWorkItemNotification @ 0x1401998B4
 * Callers:
 *     NtRIMOnAsyncPnpWorkNotification @ 0x140141B20 (NtRIMOnAsyncPnpWorkNotification.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140199850 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1400B64A0 (WPP_RECORDER_AND_TRACE_SF_qqDdS.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D97C0 (rimDoUpdateInputGlobalsWorkItem.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x140113824 (RIMDeviceNotifyAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140127CEC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x140127D6C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     RIMApiSetIsRemoteConnection @ 0x14012C31C (RIMApiSetIsRemoteConnection.c)
 *     ApiSetProcessHidRawInput @ 0x14013F2A0 (ApiSetProcessHidRawInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMFreeAsyncWorkItem @ 0x14019A398 (RIMFreeAsyncWorkItem.c)
 *     ?DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A484 (-DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019FC54 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     rimDoSetInputModeWorkItem @ 0x1401E75A4 (rimDoSetInputModeWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 */

__int64 __fastcall RIMOnAsyncWorkItemNotification(char *a1)
{
  unsigned int v2; // esi
  _QWORD *v3; // r14
  char *v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  char v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  void *v15; // rcx
  char v16; // r15
  __int64 v17; // r13
  const wchar_t *v18; // r12
  int v19; // ebx
  int v20; // edi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // di
  bool v41; // si
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rdx
  char v46; // di
  bool v47; // si
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rdx
  char v52; // bl
  bool v53; // di
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  int v58; // [rsp+20h] [rbp-88h]
  int v59; // [rsp+28h] [rbp-80h]
  int v60; // [rsp+30h] [rbp-78h]
  int v61; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  int v63; // [rsp+C0h] [rbp+18h]

  Object = 0LL;
  v63 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v2 = v63;
  if ( v63 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_85;
  }
  v3 = Object;
  v4 = (char *)Object + 352;
  RIMLockExclusive((__int64)Object + 352);
  v5 = v3 + 47;
  v6 = (_QWORD *)v3[47];
  if ( (_QWORD *)v6[1] != v3 + 47 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *v5 = v7;
  v8 = (__int64)v6;
  *(_QWORD *)(v7 + 8) = v5;
  RIMUnlockExclusive((__int64)v4);
  InputTraceLogging::RIM::DequeueAsyncWorkItem(
    (const struct RawInputManagerObject *)v3,
    (const struct RIMAsyncWorkItem *)v8);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      163,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      (char)v3);
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  LOBYTE(Object) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(_QWORD *)(v8 + 56);
    if ( v17 )
      v18 = *(const wchar_t **)(v17 + 272);
    else
      v18 = *(const wchar_t **)(v8 + 48);
    v19 = *(_DWORD *)(v8 + 16);
    v20 = *(_DWORD *)(v8 + 32);
    v21 = *(_QWORD *)(v8 + 24);
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    WPP_RECORDER_AND_TRACE_SF_qqDdS(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      (char)Object,
      *(_QWORD *)(v22 + 19336),
      v58,
      v59,
      v60,
      v61,
      v21,
      v17,
      v20,
      v19,
      v18);
  }
  if ( (unsigned int)RIMApiSetIsRemoteConnection((__int64)v15, v9) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v25 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 19336),
        3,
        1,
        165,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    }
    v2 = 0;
    goto LABEL_83;
  }
  if ( *(_DWORD *)(v8 + 16) <= 1u )
  {
    RIMLockExclusive((__int64)(v3 + 13));
    if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v46 = 0;
      }
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v46;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v49,
          *(_QWORD *)(v48 + 19336),
          3,
          1,
          166,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          (char)v3);
      }
    }
    else if ( *(_DWORD *)(v8 + 16) )
    {
      RIMDeviceNotifyAsyncWorkItem(v8);
    }
    else
    {
      RIMDeviceClassNotifyAsyncWorkItem(v8);
    }
    RIMUnlockExclusive((__int64)(v3 + 13));
    goto LABEL_82;
  }
  v30 = (_QWORD *)W32GetUserSessionState(v24, v23);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v31 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v30,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v31 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v30, 0LL);
  v32 = v31;
  v30[3] = v31;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v32 )
    {
LABEL_39:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v32) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v30 + 2461), v33);
        DestroyDeferredUnlockObjectAssignmentList(v30 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v30 + 2466);
      }
    }
  }
  else if ( v32 )
  {
    *(_BYTE *)(v32 + 1708) = 1;
    goto LABEL_39;
  }
  RIMLockExclusive((__int64)(v3 + 13));
  if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v40 = 0;
    }
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 19336),
        3,
        1,
        167,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        (char)v3);
    }
  }
  else
  {
    switch ( *(_DWORD *)(v8 + 16) )
    {
      case 2:
        if ( !*(_DWORD *)(v8 + 112) )
          rimDoRimDevChangeAsyncWorkItem(v8);
        break;
      case 3:
        v39 = (*(_QWORD *)(v8 + 56) + 72LL) & -(__int64)(*(_QWORD *)(v8 + 56) != 0LL);
        if ( (*(_DWORD *)(v39 + 0x50) & 4) == 0 )
          ApiSetProcessHidRawInput(v39, *(_QWORD *)(v8 + 104), *(_DWORD *)(v8 + 100));
        break;
      case 4:
        v36 = *(_QWORD *)(v8 + 56);
        v37 = v36 + 528;
        if ( !v36 )
          v37 = 456LL;
        v38 = *(_QWORD *)v37;
        if ( *(_DWORD *)(v8 + 96) )
          ApiSetPostPointerDeviceInRangeMessage(v38);
        else
          ApiSetPostPointerDeviceOutOfRangeMessage(v38);
        break;
      case 5:
        rimDoUpdateInputGlobalsWorkItem(v8, v34);
        break;
      case 6:
        rimDoHandleAnyPnpRemovePendingDevicesWorkItem(v8);
        break;
      case 7:
        rimDoSetInputModeWorkItem(v8);
        break;
    }
  }
  RIMUnlockExclusive((__int64)(v3 + 13));
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v35);
LABEL_82:
  v2 = v63;
LABEL_83:
  RIMFreeAsyncWorkItem((PVOID)v8);
  ObfDereferenceObject(v3);
LABEL_85:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v52 = 0;
  }
  v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v54 = W32GetUserSessionState(WPP_GLOBAL_Control, v51);
    LOBYTE(v55) = v53;
    LOBYTE(v56) = v52;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v56,
      v55,
      *(_QWORD *)(v54 + 19336),
      4,
      1,
      168,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v2);
  }
  return v2;
}
