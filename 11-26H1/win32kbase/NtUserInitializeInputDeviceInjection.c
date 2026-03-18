/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1401E5550
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x14020A824 (RIMIDE_InitializeDeviceInjection.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r12
  int v8; // esi
  _QWORD *UserSessionState; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  char v15; // al
  __int16 v16; // dx
  int v17; // r8d
  char *v18; // rbx
  __int64 v19; // r15
  bool v20; // bl
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 CurrentProcessWow64Process; // rax
  int v31; // ecx
  char *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  __int16 v39; // dx
  __int16 v40; // cx
  int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  __int16 v48; // dx
  __int16 v49; // cx
  int v50; // r8d
  __int64 v51; // rax
  __int16 v53; // [rsp+30h] [rbp-78h]
  _BYTE v54[4]; // [rsp+40h] [rbp-68h] BYREF
  int v55; // [rsp+44h] [rbp-64h]
  __int64 v56; // [rsp+58h] [rbp-50h] BYREF
  char *v57; // [rsp+60h] [rbp-48h]

  v7 = a4;
  v8 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, (_DWORD)a3);
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v10;
    if ( !v10 )
      goto LABEL_12;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v10 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( !CurrentProcessWin32Process )
        goto LABEL_12;
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v11 & CurrentProcessWin32Process;
      if ( !v14 || *(_BYTE *)(v14 + 1200) != 1 )
        goto LABEL_12;
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    if ( v15 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v12);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
LABEL_12:
    v54[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v54);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v18 = 0LL;
    v57 = 0LL;
    v19 = 0LL;
    v56 = 0LL;
    if ( v54[0] )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v8) = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v23 = *(_QWORD *)(W32GetUserSessionState((_WORD)WPP_GLOBAL_Control, v16, v17) + 69136);
      v53 = 10;
LABEL_20:
      LOBYTE(v22) = v20;
      LOBYTE(v21) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        v23,
        2,
        2,
        v53,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_21:
      v24 = 5;
LABEL_48:
      v8 = 0;
      UserSetLastError(v24);
      goto LABEL_49;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v8) = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v23 = *(_QWORD *)(W32GetUserSessionState((_WORD)WPP_GLOBAL_Control, (_WORD)v25, v27) + 69136);
      v53 = 11;
      goto LABEL_20;
    }
    if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v24 = 87;
      goto LABEL_48;
    }
    if ( a5 )
    {
      v19 = HMValidateSharedHandle(a5, v25, v27);
      if ( !v19 )
      {
        v8 = 0;
        goto LABEL_45;
      }
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v26, v25);
    ProbeForRead(a3, 32 * v7, CurrentProcessWow64Process != 0 ? 1 : 4);
    v32 = (char *)Win32AllocPoolWithQuotaZInitImpl(v31, (unsigned int)(32 * v7), 0x74697355u);
    v18 = v32;
    v57 = v32;
    if ( !v32 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v32, (const void *)a3, 32 * v7);
    v33 = RIMIDE_InitializeDeviceInjection(a1, a2, v18, (unsigned int)v7, v19, a6, &v56);
    if ( v33 >= 0 )
    {
      RtlWriteULong64ToUser(a7, v56);
      v55 = 1;
      goto LABEL_45;
    }
    if ( v33 != -2147483631 )
      break;
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v35, v34);
      v42 = W32GetUserSessionState(v40, v39, v41);
      ExReleaseFastResource(*(_QWORD *)(v42 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged(v35, v34, v36, v37);
  }
  v8 = 0;
  v55 = 0;
  UserSetLastError(87);
LABEL_45:
  if ( v18 )
    GreDeleteFastMutex(v18, v25, v28, v29);
LABEL_49:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v47 = PsGetCurrentThreadWin32Thread(v44, v43);
    v51 = W32GetUserSessionState(v49, v48, v50);
    ExReleaseFastResource(*(_QWORD *)(v51 + 16), v47 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v44, v43, v45, v46);
  return v8;
}
