/*
 * XREFs of NtConfigureInputSpace @ 0x1401E04B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x14008D4C4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14008D5E8 (--0CInputSpace@@QEAA@_N@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14008F0FC (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1402120B0 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x140212358 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtConfigureInputSpace(void *Src, void *a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // ecx
  unsigned int v11; // ebx
  char *v12; // rdi
  ULONG v13; // ecx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r14d
  char *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // [rsp+30h] [rbp-8E8h] BYREF
  int v34; // [rsp+38h] [rbp-8E0h]
  char *v35; // [rsp+40h] [rbp-8D8h]
  _OWORD v36[12]; // [rsp+50h] [rbp-8C8h] BYREF
  __int64 v37; // [rsp+110h] [rbp-808h]
  _BYTE v38[520]; // [rsp+118h] [rbp-800h] BYREF
  __int64 v39; // [rsp+320h] [rbp-5F8h] BYREF
  int v40; // [rsp+328h] [rbp-5F0h]

  v3 = a3;
  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Src, (_DWORD)a2, a3);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  CInputSpace::CInputSpace((CInputSpace *)&v39, 0);
  v11 = 0;
  v12 = 0LL;
  v35 = 0LL;
  if ( (_DWORD)v3 )
  {
    v11 = 200 * v3;
    if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
    {
LABEL_7:
      v13 = 87;
      goto LABEL_8;
    }
    v12 = (char *)Win32AllocPoolWithQuotaZInitImpl(v10, v11, 0x63736955u);
    v35 = v12;
    if ( !v12 )
    {
      v13 = 8;
LABEL_8:
      v14 = 0;
LABEL_9:
      UserSetLastError(v13);
      goto LABEL_19;
    }
  }
  v33 = 0LL;
  v34 = 0;
  RtlCopyFromUser(&v33, Src, 0xCuLL);
  v39 = v33;
  v40 = v34;
  if ( (_DWORD)v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, v18);
    ProbeForRead(a2, 200 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    RtlCopyVolatileMemory(v12, a2, v11);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v39, (const struct INPUT_SPACE_REGION *)v12, v3) )
    goto LABEL_7;
  v14 = 1;
  if ( (_DWORD)v3 )
  {
    v24 = 0;
    do
    {
      v25 = &v12[200 * v24];
      v36[0] = *(_OWORD *)v25;
      v36[1] = *((_OWORD *)v25 + 1);
      v36[2] = *((_OWORD *)v25 + 2);
      v36[3] = *((_OWORD *)v25 + 3);
      v36[4] = *((_OWORD *)v25 + 4);
      v36[5] = *((_OWORD *)v25 + 5);
      v36[6] = *((_OWORD *)v25 + 6);
      v36[7] = *((_OWORD *)v25 + 7);
      v25 += 128;
      v36[8] = *(_OWORD *)v25;
      v36[9] = *((_OWORD *)v25 + 1);
      v36[10] = *((_OWORD *)v25 + 2);
      v36[11] = *((_OWORD *)v25 + 3);
      v37 = *((_QWORD *)v25 + 8);
      memset(v38, 0, 289);
      memset(&v38[296], 0, 0xD8uLL);
      v26 = CInputSpace::AddRegion((CInputSpace *)&v39, (const struct CInputSpaceRegion *)v36, 0LL);
      if ( v26 < 0 )
        goto LABEL_18;
    }
    while ( ++v24 != (_DWORD)v3 );
  }
  v27 = W32GetUserSessionState(v22, v21, v23);
  v26 = CInputConfig::zzzConfigureInputSpace(*(CInputConfig **)(v27 + 18680), (struct CInputSpace *)&v39);
  if ( v26 < 0 )
  {
LABEL_18:
    v14 = 0;
    v13 = RtlNtStatusToDosError(v26);
    goto LABEL_9;
  }
LABEL_19:
  CInputSpace::FreeRegions((CInputSpace *)&v39, v15, v16, v17);
  if ( v12 )
    GreDeleteFastMutex(v12, v28, v30, v31);
  UserSessionSwitchLeaveCritWithNonPaged(v29, v28, v30, v31);
  return v14;
}
