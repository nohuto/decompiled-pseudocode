/*
 * XREFs of ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  __int64 v12; // r8
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  NTSTATUS v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // r8
  char v33; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v6, v5);
      UserSessionState = W32GetUserSessionState(v9, v8, v10);
      LOBYTE(v12) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v12);
    }
    v15 = W32GetUserSessionState(v3, v2, v4);
    while ( *(_DWORD *)(W32GetUserSessionState(v14, v13, v16) + 18776) )
    {
      ++*(_DWORD *)(v15 + 18864);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        v19 = PsGetCurrentThreadWin32Thread(v18, v17);
        v23 = W32GetUserSessionState(v21, v20, v22);
        ExReleaseFastResource(*(_QWORD *)(v23 + 16), v19 + 176);
        KeLeaveCriticalRegion();
      }
      LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v33);
      v24 = KeWaitForSingleObject(*(PVOID *)(v15 + 18856), UserRequest, 1, 0, 0LL);
      LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v33);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        KeEnterCriticalRegion();
        v27 = PsGetCurrentThreadWin32Thread(v26, v25);
        v31 = W32GetUserSessionState(v29, v28, v30);
        LOBYTE(v32) = 1;
        ExAcquireFastResourceExclusive(*(_QWORD *)(v31 + 16), v27 + 176, v32);
      }
      if ( v24 == 192 )
      {
        --*(_DWORD *)(v15 + 18864);
        *(_BYTE *)this = 1;
        return;
      }
    }
  }
}
