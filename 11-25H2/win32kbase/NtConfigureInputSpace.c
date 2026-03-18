/*
 * XREFs of NtConfigureInputSpace @ 0x1401B9DA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14013493C (--0CInputSpace@@QEAA@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140135068 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14014EDA8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1401F7B88 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F8AC8 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtConfigureInputSpace(void *Src, void *a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  char *v13; // rdi
  ULONG v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r14d
  char *v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+28h] [rbp-8F0h] BYREF
  int v24; // [rsp+30h] [rbp-8E8h]
  char *v25; // [rsp+38h] [rbp-8E0h]
  _OWORD v26[12]; // [rsp+50h] [rbp-8C8h] BYREF
  __int64 v27; // [rsp+110h] [rbp-808h]
  _BYTE v28[520]; // [rsp+118h] [rbp-800h] BYREF
  __int64 v29; // [rsp+320h] [rbp-5F8h] BYREF
  int v30; // [rsp+328h] [rbp-5F0h]

  v3 = a3;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v8 = 1;
  }
  else
  {
    v8 = 1;
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  }
  v9 = v7;
  UserSessionState[3] = v7;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 )
      goto LABEL_9;
    *(_BYTE *)(v9 + 1708) = 1;
  }
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  CInputSpace::CInputSpace((CInputSpace *)&v29, 0);
  v12 = 0;
  v13 = 0LL;
  v25 = 0LL;
  if ( (_DWORD)v3 )
  {
    v12 = 200 * v3;
    if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
    {
LABEL_13:
      v14 = 87;
      goto LABEL_14;
    }
    v13 = (char *)Win32AllocPoolWithQuotaZInitImpl(v11, v12, 0x63736955u);
    v25 = v13;
    if ( !v13 )
    {
      v14 = 8;
LABEL_14:
      v8 = 0;
LABEL_15:
      UserSetLastError(v14);
      goto LABEL_28;
    }
  }
  v23 = 0LL;
  v24 = 0;
  RtlCopyFromUser(&v23, Src, 0xCuLL);
  v29 = v23;
  v30 = v24;
  if ( (_DWORD)v3 )
  {
    if ( 200 * v3 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyVolatileMemory(v13, a2, v12);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v29, (const struct INPUT_SPACE_REGION *)v13, v3) )
    goto LABEL_13;
  if ( (_DWORD)v3 )
  {
    v17 = 0;
    do
    {
      v18 = &v13[200 * v17];
      v26[0] = *(_OWORD *)v18;
      v26[1] = *((_OWORD *)v18 + 1);
      v26[2] = *((_OWORD *)v18 + 2);
      v26[3] = *((_OWORD *)v18 + 3);
      v26[4] = *((_OWORD *)v18 + 4);
      v26[5] = *((_OWORD *)v18 + 5);
      v26[6] = *((_OWORD *)v18 + 6);
      v26[7] = *((_OWORD *)v18 + 7);
      v18 += 128;
      v26[8] = *(_OWORD *)v18;
      v26[9] = *((_OWORD *)v18 + 1);
      v26[10] = *((_OWORD *)v18 + 2);
      v26[11] = *((_OWORD *)v18 + 3);
      v27 = *((_QWORD *)v18 + 8);
      memset(v28, 0, 289);
      memset(&v28[296], 0, 0xD8uLL);
      v19 = CInputSpace::AddRegion((CInputSpace *)&v29, (const struct CInputSpaceRegion *)v26, 0LL);
      if ( v19 < 0 )
        goto LABEL_27;
    }
    while ( ++v17 != (_DWORD)v3 );
  }
  v20 = W32GetUserSessionState(v16, v15);
  v19 = CInputConfig::zzzConfigureInputSpace(*(CInputConfig **)(v20 + 18632), (struct CInputSpace *)&v29);
  if ( v19 < 0 )
  {
LABEL_27:
    v8 = 0;
    v14 = RtlNtStatusToDosError(v19);
    goto LABEL_15;
  }
LABEL_28:
  CInputSpace::FreeRegions((CInputSpace *)&v29);
  if ( v13 )
    GreDeleteFastMutex(v13);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v21);
  return v8;
}
