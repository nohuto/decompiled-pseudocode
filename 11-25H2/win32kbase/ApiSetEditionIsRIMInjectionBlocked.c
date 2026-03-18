/*
 * XREFs of ApiSetEditionIsRIMInjectionBlocked @ 0x140195CA0
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsRIMInjectionBlocked(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(__int64); // rax

  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 744LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 752LL);
      if ( v7 )
        return v7(a1);
    }
  }
  return v3;
}
