/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1401E4FC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1401B8FF0 (RIMIDE_CreateGenericHidDevice.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, __int64 a2, int a3)
{
  int v4; // r14d
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  int v12; // edx
  int v13; // r8d
  char v14; // r13
  bool v15; // bl
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  char *v27; // r12
  unsigned __int16 v28; // di
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  char *v32; // r15
  int v33; // ecx
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // di
  char *v39; // rax
  NTSTATUS GenericHidDevice; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 CurrentThreadWin32Thread; // rdi
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rax
  __int16 v63; // [rsp+30h] [rbp-D8h]
  char v64; // [rsp+41h] [rbp-C7h]
  volatile void *v65[2]; // [rsp+68h] [rbp-A0h]
  char *v66; // [rsp+68h] [rbp-A0h]
  _OWORD v67[4]; // [rsp+80h] [rbp-88h] BYREF
  size_t Size[2]; // [rsp+C0h] [rbp-48h]
  unsigned __int16 epi16; // [rsp+120h] [rbp+18h] BYREF
  __int64 v71; // [rsp+128h] [rbp+20h] BYREF

  v4 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v6;
    if ( !v6 )
      goto LABEL_12;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v6 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( !CurrentProcessWin32Process )
        goto LABEL_12;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v7 & CurrentProcessWin32Process;
      if ( !v10 || *(_BYTE *)(v10 + 1200) != 1 )
        goto LABEL_12;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
LABEL_12:
    LOBYTE(epi16) = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&epi16);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v71 = 0LL;
    memset(v67, 0, sizeof(v67));
    v64 = 0;
    v14 = 0;
    if ( (_BYTE)epi16 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v18 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v12, v13) + 69136);
      v63 = 12;
LABEL_20:
      LOBYTE(v17) = v15;
      LOBYTE(v16) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        v18,
        2,
        2,
        v63,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_21:
      v4 = 0;
      UserSetLastError(5);
      goto LABEL_56;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v4) = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v18 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v19, v21) + 69136);
      v63 = 13;
      goto LABEL_20;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20, v19);
    ProbeForRead(a1, 0x40uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v67[0] = *a1;
    v67[1] = a1[1];
    v67[2] = a1[2];
    *(_OWORD *)v65 = v67[2];
    *(_OWORD *)Size = a1[3];
    v67[3] = *(_OWORD *)Size;
    epi16 = _mm_extract_epi16(*(__m128i *)Size, 4);
    v23 = epi16;
    v26 = PsGetCurrentProcessWow64Process(v25, v24);
    v27 = (char *)Size[0];
    ProbeForRead((volatile void *)Size[0], v23, v26 != 0 ? 1 : 4);
    v28 = _mm_extract_epi16(*(__m128i *)v65, 4);
    Size[0] = v28;
    v31 = PsGetCurrentProcessWow64Process(v30, v29);
    v32 = (char *)v65[0];
    ProbeForRead(v65[0], v28, v31 != 0 ? 1 : 4);
    if ( v28 )
    {
      v34 = (char *)Win32AllocPoolWithQuotaZInitImpl(v33, v28, 0x74697355u);
      v32 = v34;
      *(_QWORD *)&v67[2] = v34;
      if ( !v34 )
        goto LABEL_32;
      v38 = 1;
      v64 = 1;
      memmove(v34, (const void *)v65[0], Size[0]);
    }
    else
    {
      v38 = 0;
    }
    if ( epi16 )
    {
      v66 = v27;
      v39 = (char *)Win32AllocPoolWithQuotaZInitImpl(v33, epi16, 0x74697355u);
      v27 = v39;
      *(_QWORD *)&v67[3] = v39;
      if ( !v39 )
      {
LABEL_32:
        v4 = 0;
        UserSetLastError(8);
        goto LABEL_52;
      }
      v14 = 1;
      memmove(v39, v66, epi16);
    }
    if ( !v32 )
    {
      v4 = 0;
      UserSetLastError(87);
      goto LABEL_52;
    }
    GenericHidDevice = RIMIDE_CreateGenericHidDevice((__int64)v67, (__int64)&v71);
    if ( GenericHidDevice >= 0 )
    {
      RtlWriteULong64ToUser(a2, v71);
      goto LABEL_51;
    }
    if ( GenericHidDevice != -2147483631 )
      break;
    if ( v38 )
      GreDeleteFastMutex(*(char **)&v67[2], v41, v42, v43);
    if ( v14 )
      GreDeleteFastMutex(*(char **)&v67[3], v41, v42, v43);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v45, v44);
      v52 = W32GetUserSessionState(v50, v49, v51);
      ExReleaseFastResource(*(_QWORD *)(v52 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged(v45, v44, v46, v47);
  }
  v4 = 0;
  UserSetLastError(87);
LABEL_51:
  v27 = *(char **)&v67[3];
  v32 = *(char **)&v67[2];
LABEL_52:
  if ( v64 )
    GreDeleteFastMutex(v32, v35, v36, v37);
  if ( v14 )
    GreDeleteFastMutex(v27, v35, v36, v37);
LABEL_56:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v57 = PsGetCurrentThreadWin32Thread(v54, v53);
    v61 = W32GetUserSessionState(v59, v58, v60);
    ExReleaseFastResource(*(_QWORD *)(v61 + 16), v57 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v54, v53, v55, v56);
  return v4;
}
