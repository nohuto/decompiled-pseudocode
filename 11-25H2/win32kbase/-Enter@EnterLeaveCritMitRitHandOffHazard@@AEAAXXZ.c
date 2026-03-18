/*
 * XREFs of ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x140171340 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BDD90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A038 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A15C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // ebp
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  char v22; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      UserSessionState = W32GetUserSessionState(v6, v5);
      LOBYTE(v8) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 16), CurrentThreadWin32Thread + 176, v8);
    }
    v11 = W32GetUserSessionState(v3, v2);
    while ( *(_DWORD *)(W32GetUserSessionState(v10, v9) + 18728) )
    {
      ++*(_DWORD *)(v11 + 18816);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        v12 = PsGetCurrentThreadWin32Thread();
        v15 = W32GetUserSessionState(v14, v13);
        ExReleaseFastResource(*(_QWORD *)(v15 + 16), v12 + 176);
        KeLeaveCriticalRegion();
      }
      LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v22);
      v16 = KeWaitForSingleObject(*(PVOID *)(v11 + 18808), UserRequest, 1, 0, 0LL);
      LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v22);
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      {
        KeEnterCriticalRegion();
        v17 = PsGetCurrentThreadWin32Thread();
        v20 = W32GetUserSessionState(v19, v18);
        LOBYTE(v21) = 1;
        ExAcquireFastResourceExclusive(*(_QWORD *)(v20 + 16), v17 + 176, v21);
      }
      if ( v16 == 192 )
      {
        --*(_DWORD *)(v11 + 18816);
        *(_BYTE *)this = 1;
        return;
      }
    }
  }
}
