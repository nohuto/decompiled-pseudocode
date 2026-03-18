/*
 * XREFs of NtMITConfigureVirtualTouchpad @ 0x1401E0B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140159478 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402207D0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtMITConfigureVirtualTouchpad(void *a1, void *Src, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edi
  ULONG v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD *v16; // rcx
  int v17; // r8d
  VirtualTouchpadProcessor *Instance; // rax
  NTSTATUS v19; // eax
  int Srca; // [rsp+20h] [rbp-178h] BYREF
  _DWORD v22[9]; // [rsp+24h] [rbp-174h] BYREF
  _BYTE v23[152]; // [rsp+48h] [rbp-150h] BYREF
  _OWORD v24[9]; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+170h] [rbp-28h]

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, (_DWORD)Src, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  v10 = 0;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  Srca = 0;
  if ( IsInputThread(v8, v7, v9) )
  {
    v22[0] = 0;
    RtlCopyFromUser(v22, a1, 4uLL);
    Srca = v22[0];
    memset(v23, 0, sizeof(v23));
    RtlCopyFromUser(v23, Src, 0x98uLL);
    v16 = v24;
    v24[0] = *(_OWORD *)v23;
    v24[1] = *(_OWORD *)&v23[16];
    v24[2] = *(_OWORD *)&v23[32];
    v24[3] = *(_OWORD *)&v23[48];
    v24[4] = *(_OWORD *)&v23[64];
    v24[5] = *(_OWORD *)&v23[80];
    v24[6] = *(_OWORD *)&v23[96];
    v24[7] = *(_OWORD *)&v23[112];
    v24[8] = *(_OWORD *)&v23[128];
    v25 = *(_QWORD *)&v23[144];
    LOBYTE(v16) = 1;
    Instance = VirtualTouchpadProcessor::GetInstance((int)v16, 128, v17);
    if ( Instance )
    {
      v19 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
              Instance,
              (struct VPTP_ID *)&Srca,
              (const struct tagVIRTUAL_PTP_CONFIG *)v24);
      if ( v19 >= 0 )
      {
        RtlCopyToUser(a1, &Srca, 4uLL);
        v10 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      v19 = -1073741801;
    }
    v11 = RtlNtStatusToDosError(v19);
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return v10;
}
