/*
 * XREFs of NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E8610 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401EBEA8 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401EC504 (RIMSetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserCreateSyntheticPointerDevice2(void *Src, _QWORD *a2)
{
  _QWORD *UserSessionState; // r14
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // bl
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  ULONG v13; // ecx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  char v18; // r12
  unsigned int v19; // r15d
  bool v20; // bl
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  unsigned __int8 v24; // r14
  bool v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  bool v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  unsigned int v34; // ebx
  unsigned int v35; // r13d
  bool v36; // bl
  int v37; // edx
  int v38; // r8d
  __int64 v39; // r9
  bool v40; // bl
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  bool v44; // r15
  bool v45; // bl
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  int v50; // r15d
  PVOID v51; // rbx
  bool v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int16 v62; // [rsp+30h] [rbp-F8h]
  __int16 v63; // [rsp+30h] [rbp-F8h]
  __int16 v64; // [rsp+30h] [rbp-F8h]
  __int16 v65; // [rsp+30h] [rbp-F8h]
  char v66; // [rsp+40h] [rbp-E8h]
  char v67; // [rsp+40h] [rbp-E8h]
  char v68; // [rsp+40h] [rbp-E8h]
  char v69; // [rsp+48h] [rbp-E0h]
  __int128 v70; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+60h] [rbp-C8h]
  __int64 v72; // [rsp+70h] [rbp-B8h]
  char *v73; // [rsp+78h] [rbp-B0h]
  __int64 v74; // [rsp+90h] [rbp-98h]
  _DWORD v75[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-80h]
  int v77; // [rsp+B0h] [rbp-78h]
  __int128 v78; // [rsp+B8h] [rbp-70h]
  __int128 v79; // [rsp+C8h] [rbp-60h]
  __int64 v80; // [rsp+D8h] [rbp-50h]
  char v82; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = 1;
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v4 = 1;
  }
  v6 = v5;
  UserSessionState[3] = v5;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_10;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v82 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v82);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v73 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  if ( v82 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v12 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8) + 69144);
    v62 = 25;
LABEL_18:
    LOBYTE(v11) = v9;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      v12,
      2,
      2,
      v62,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_19:
    v13 = 5;
LABEL_20:
    v4 = 0;
    goto LABEL_21;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v12 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v15) + 69144);
    v62 = 26;
    goto LABEL_18;
  }
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  RtlCopyFromUser(&v70, Src, 0x28uLL);
  v78 = v70;
  v79 = v71;
  v80 = v72;
  v17 = v72;
  v18 = BYTE8(v71);
  if ( (v72 & 1) != 0 )
  {
    LODWORD(Object) = 2;
    if ( DWORD2(v71) && HIDWORD(v71) )
    {
      v19 = v70;
      goto LABEL_52;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
    v69 = BYTE12(v71);
    v66 = v18;
    v63 = 28;
LABEL_41:
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v4;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      2,
      2,
      v63,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v66,
      v69);
LABEL_42:
    v13 = 87;
    goto LABEL_20;
  }
  LODWORD(Object) = 1;
  if ( *((_QWORD *)&v71 + 1) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
    v69 = BYTE12(v71);
    v66 = v18;
    v63 = 29;
    goto LABEL_41;
  }
  v19 = v70;
  if ( (_DWORD)v70 == 5 )
  {
    v24 = BYTE8(v71) + 2;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || ((unsigned __int8)*((_DWORD *)WPP_GLOBAL_Control + 11) & v24) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < v24 )
    {
      LOBYTE(v4) = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69144),
        2,
        2,
        30,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    goto LABEL_42;
  }
LABEL_52:
  v29 = 1;
  if ( v19 == 5 )
    v29 = 3;
  if ( (~v29 & (unsigned int)v72) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69144),
        2,
        2,
        31,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v17);
    }
    goto LABEL_42;
  }
  if ( v19 != 2 )
  {
    if ( v19 == 3 )
    {
      v34 = DWORD1(v70);
      if ( DWORD1(v70) != 1 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
        v67 = v34;
        v64 = 35;
        goto LABEL_91;
      }
      v35 = DWORD2(v70);
      if ( (unsigned int)(DWORD2(v70) - 1) <= 2 )
      {
        if ( (_QWORD)v71 )
        {
          v74 = HMValidateSharedHandle(v71, v16);
          if ( !v74 )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
            {
              LOBYTE(v4) = 0;
            }
            v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_83;
            v43 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v14) + 69144);
            v68 = v71;
            v65 = 37;
            goto LABEL_82;
          }
        }
LABEL_137:
        v50 = RIMIDE_InitializePointerDeviceInjection(v19, v34, v74, v35, 0);
        if ( v50 == -2147483631 )
        {
          LODWORD(Object) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3704);
        }
        if ( v50 >= 0 )
        {
          if ( (v72 & 2) != 0 )
          {
            Object = 0LL;
            v76 = 0LL;
            v77 = 0;
            v75[0] = 7;
            v75[1] = 1;
            v50 = RawInputManagerDeviceObjectResolveHandle(v73, 3u, 1, &Object);
            if ( v50 >= 0 )
            {
              v51 = Object;
              v50 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)Object + 66), v75);
              ObfDereferenceObject(v51);
            }
          }
          if ( v50 >= 0 )
          {
            v14 = a2;
            if ( (unsigned __int64)a2 >= MmUserProbeAddress )
              v14 = (_QWORD *)MmUserProbeAddress;
            *v14 = *v14;
            *a2 = v73;
LABEL_176:
            if ( v4 )
              goto LABEL_179;
            goto LABEL_177;
          }
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v53 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v49);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v4;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v55,
            v54,
            *(_QWORD *)(v53 + 69144),
            2,
            2,
            42,
            (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
            v50);
        }
        v4 = 0;
        v13 = RtlNtStatusToDosError(v50);
LABEL_21:
        UserSetLastError(v13);
        goto LABEL_176;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
      v67 = v35;
      v64 = 36;
    }
    else if ( v19 == 5 )
    {
      v34 = DWORD1(v70);
      if ( (unsigned int)(DWORD1(v70) - 1) > 4 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v4) = 0;
        }
        v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
        v67 = v34;
        v64 = 38;
LABEL_91:
        LOBYTE(v38) = v44;
        goto LABEL_92;
      }
      v35 = DWORD2(v70);
      if ( DWORD2(v70) == 3 )
      {
        if ( (_QWORD)v71 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v4) = 0;
          }
          v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
            LOBYTE(v47) = v45;
            LOBYTE(v48) = v4;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v48,
              v47,
              *(_QWORD *)(v46 + 69144),
              2,
              2,
              40,
              (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
              v71);
          }
          goto LABEL_42;
        }
        goto LABEL_137;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
      v67 = v35;
      v64 = 39;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
      v67 = v19;
      v64 = 41;
    }
LABEL_72:
    LOBYTE(v38) = v36;
LABEL_92:
    LOBYTE(v37) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v38,
      v39,
      2,
      2,
      v64,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v67);
    goto LABEL_42;
  }
  v34 = DWORD1(v70);
  if ( (unsigned int)(DWORD1(v70) - 1) > 0xFF )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
    v67 = v34;
    v64 = 32;
    goto LABEL_91;
  }
  v35 = DWORD2(v70);
  if ( (unsigned int)(DWORD2(v70) - 1) > 2 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v4) = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    v39 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 69144);
    v67 = v35;
    v64 = 33;
    goto LABEL_72;
  }
  if ( !(_QWORD)v71 )
    goto LABEL_137;
  v74 = HMValidateSharedHandle(v71, v16);
  if ( v74 )
    goto LABEL_137;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    LOBYTE(v4) = 0;
  }
  v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_83;
  v43 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v14) + 69144);
  v68 = v71;
  v65 = 34;
LABEL_82:
  LOBYTE(v42) = v40;
  LOBYTE(v41) = v4;
  WPP_RECORDER_AND_TRACE_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v41,
    v42,
    v43,
    2,
    2,
    v65,
    (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
    v68);
LABEL_83:
  v4 = 0;
LABEL_177:
  if ( v73 )
    NtUserRemoveInjectionDevice(v73, (__int64)v14);
LABEL_179:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v60 = W32GetUserSessionState(v59, v58);
    ExReleaseFastResource(*(_QWORD *)(v60 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v56);
  return v4;
}
