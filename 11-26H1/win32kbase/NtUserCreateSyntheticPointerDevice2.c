/*
 * XREFs of NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x14020A954 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x14020AE78 (RIMSetExtendedPointerDeviceProperty.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserCreateSyntheticPointerDevice2(void *Src, __int64 a2, int a3)
{
  _QWORD *UserSessionState; // rdi
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  int v14; // edx
  int v15; // r8d
  bool v16; // bl
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  ULONG v20; // ecx
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  int v26; // r8d
  char v27; // r13
  char v28; // di
  unsigned int v29; // r12d
  bool v30; // bl
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  unsigned __int8 v34; // r15
  bool v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // eax
  bool v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  unsigned int v44; // edi
  unsigned int v45; // r13d
  bool v46; // bl
  int v47; // edx
  int v48; // r8d
  __int64 v49; // r9
  bool v50; // bl
  int v51; // edx
  int v52; // r8d
  __int64 v53; // r9
  bool v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // edx
  int v59; // r8d
  int v60; // r12d
  PVOID v61; // rdi
  bool v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  __int64 v74; // rax
  __int16 v76; // [rsp+30h] [rbp-C8h]
  __int16 v77; // [rsp+30h] [rbp-C8h]
  __int16 v78; // [rsp+30h] [rbp-C8h]
  __int16 v79; // [rsp+30h] [rbp-C8h]
  char v80; // [rsp+40h] [rbp-B8h]
  char v81; // [rsp+40h] [rbp-B8h]
  char v82; // [rsp+40h] [rbp-B8h]
  char v83; // [rsp+48h] [rbp-B0h]
  __int128 v84; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v85; // [rsp+60h] [rbp-98h]
  __int64 v86; // [rsp+70h] [rbp-88h]
  __int64 v87; // [rsp+98h] [rbp-60h]
  __int128 v88; // [rsp+A0h] [rbp-58h]
  __int128 v89; // [rsp+B0h] [rbp-48h]
  __int64 v90; // [rsp+C0h] [rbp-38h]
  PVOID Object; // [rsp+110h] [rbp+18h] BYREF
  char *v92; // [rsp+118h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Src, a2, a3);
  v6 = 1;
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  LODWORD(v10) = v7;
  UserSessionState[3] = v7;
  if ( v7 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v7 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( !CurrentProcessWin32Process )
        goto LABEL_11;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v10 & CurrentProcessWin32Process;
      if ( !v12 || *(_BYTE *)(v12 + 1200) != 1 )
        goto LABEL_11;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( v13 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v9);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
LABEL_11:
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v92 = 0LL;
  v87 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v19 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v14, v15) + 69136);
    v76 = 25;
LABEL_19:
    LOBYTE(v18) = v16;
    LOBYTE(v17) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v18,
      v19,
      2,
      2,
      v76,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_20:
    v20 = 5;
LABEL_21:
    v6 = 0;
    goto LABEL_22;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v19 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v23, v24) + 69136);
    v76 = 26;
    goto LABEL_19;
  }
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  RtlCopyFromUser(&v84, Src, 0x28uLL);
  v88 = v84;
  v89 = v85;
  v90 = v86;
  v27 = v86;
  v28 = BYTE8(v85);
  if ( (v86 & 1) != 0 )
  {
    LODWORD(Object) = 2;
    if ( DWORD2(v85) && HIDWORD(v85) )
    {
      v29 = v84;
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v33 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
    v83 = BYTE12(v85);
    v80 = v28;
    v77 = 28;
LABEL_42:
    LOBYTE(v32) = v30;
    LOBYTE(v31) = v6;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v32,
      v33,
      2,
      2,
      v77,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      v80,
      v83);
LABEL_43:
    v20 = 87;
    goto LABEL_21;
  }
  LODWORD(Object) = 1;
  if ( *((_QWORD *)&v85 + 1) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v33 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
    v83 = BYTE12(v85);
    v80 = v28;
    v77 = 29;
    goto LABEL_42;
  }
  v29 = v84;
  if ( (_DWORD)v84 == 5 )
  {
    v34 = BYTE8(v85) + 2;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || ((unsigned __int8)*((_DWORD *)WPP_GLOBAL_Control + 11) & v34) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < v34 )
    {
      LOBYTE(v6) = 0;
    }
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(v36 + 69136),
        2,
        2,
        30,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    goto LABEL_43;
  }
LABEL_53:
  v39 = 1;
  if ( v29 == 5 )
    v39 = 3;
  if ( (~v39 & (unsigned int)v86) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69136),
        2,
        2,
        31,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v27);
    }
    goto LABEL_43;
  }
  if ( v29 != 2 )
  {
    if ( v29 == 3 )
    {
      v44 = DWORD1(v84);
      if ( DWORD1(v84) == 1 )
      {
        v45 = DWORD2(v84);
        if ( (unsigned int)(DWORD2(v84) - 1) <= 2 )
        {
          if ( (_QWORD)v85 )
          {
            v87 = HMValidateSharedHandle(v85, v25, v26);
            if ( !v87 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
              {
                LOBYTE(v6) = 0;
              }
              v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_83;
              v53 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v21, v22) + 69136);
              v82 = v85;
              v79 = 37;
              goto LABEL_82;
            }
          }
LABEL_136:
          v60 = RIMIDE_InitializePointerDeviceInjection(
                  v29,
                  v44,
                  v87,
                  v45,
                  0,
                  (_DWORD)Object,
                  DWORD2(v85),
                  HIDWORD(v85),
                  &v92);
          if ( v60 == -2147483631 )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3739);
          }
          if ( v60 >= 0 )
          {
            if ( (v86 & 2) != 0 )
            {
              Object = 0LL;
              LODWORD(v85) = 0;
              v84 = 0x100000007uLL;
              v60 = RawInputManagerDeviceObjectResolveHandle(v92, 3u, 1, &Object);
              if ( v60 >= 0 )
              {
                v61 = Object;
                v60 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)Object + 66), &v84);
                ObfDereferenceObject(v61);
              }
            }
            if ( v60 >= 0 )
            {
              RtlWriteULong64ToUser(a2, v92);
LABEL_173:
              if ( v6 )
                goto LABEL_176;
              goto LABEL_174;
            }
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            LOBYTE(v6) = 0;
          }
          v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v63 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v58, v59);
            LOBYTE(v64) = v62;
            LOBYTE(v65) = v6;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v65,
              v64,
              *(_QWORD *)(v63 + 69136),
              2,
              2,
              42,
              (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
              v60);
          }
          v6 = 0;
          v20 = RtlNtStatusToDosError(v60);
LABEL_22:
          UserSetLastError(v20);
          goto LABEL_173;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v6) = 0;
        }
        v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
        v81 = v45;
        v78 = 36;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v6) = 0;
        }
        v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
        v81 = v44;
        v78 = 35;
      }
    }
    else if ( v29 == 5 )
    {
      v44 = DWORD1(v84);
      if ( (unsigned int)(DWORD1(v84) - 1) > 4 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v6) = 0;
        }
        v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
        v81 = v44;
        v78 = 38;
      }
      else
      {
        v45 = DWORD2(v84);
        if ( DWORD2(v84) == 3 )
        {
          if ( (_QWORD)v85 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
            {
              LOBYTE(v6) = 0;
            }
            v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v55 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26);
              LOBYTE(v56) = v54;
              LOBYTE(v57) = v6;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v57,
                v56,
                *(_QWORD *)(v55 + 69136),
                2,
                2,
                40,
                (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
                v85);
            }
            goto LABEL_43;
          }
          goto LABEL_136;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          LOBYTE(v6) = 0;
        }
        v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
        v81 = v45;
        v78 = 39;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v6) = 0;
      }
      v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
      v81 = v29;
      v78 = 41;
    }
LABEL_91:
    LOBYTE(v48) = v46;
    LOBYTE(v47) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v48,
      v49,
      2,
      2,
      v78,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      v81);
    goto LABEL_43;
  }
  v44 = DWORD1(v84);
  if ( (unsigned int)(DWORD1(v84) - 1) > 0xFF )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
    v81 = v44;
    v78 = 32;
    goto LABEL_91;
  }
  v45 = DWORD2(v84);
  if ( (unsigned int)(DWORD2(v84) - 1) > 2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v49 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v25, v26) + 69136);
    v81 = v45;
    v78 = 33;
    goto LABEL_91;
  }
  if ( !(_QWORD)v85 )
    goto LABEL_136;
  v87 = HMValidateSharedHandle(v85, v25, v26);
  if ( v87 )
    goto LABEL_136;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    LOBYTE(v6) = 0;
  }
  v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_83;
  v53 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v21, v22) + 69136);
  v82 = v85;
  v79 = 34;
LABEL_82:
  LOBYTE(v52) = v50;
  LOBYTE(v51) = v6;
  WPP_RECORDER_AND_TRACE_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v51,
    v52,
    v53,
    2,
    2,
    v79,
    (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
    v82);
LABEL_83:
  v6 = 0;
LABEL_174:
  if ( v92 )
    NtUserRemoveInjectionDevice(v92, v21, v22);
LABEL_176:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v67, v66);
    v74 = W32GetUserSessionState(v72, v71, v73);
    ExReleaseFastResource(*(_QWORD *)(v74 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v67, v66, v68, v69);
  return v6;
}
