/*
 * XREFs of NtUserGetProp @ 0x14024A1F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354 (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserGetProp(HWND a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  __int64 Prop; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentThreadWin32Thread; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  _BYTE v15[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  Prop = 0LL;
  if ( (unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_QWORD *)W32GetUserSessionState(v6, v5) || !(unsigned int)GET_USERCRIT_DISPOSITION() )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v9, v10);
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    v12 = ValidatePropWindow(a1, 0LL);
    if ( v12 )
      Prop = GetProp(v12, (unsigned int)v2, 0);
    --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  }
  else
  {
    CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v15, a1, 1, 0, 0, 0);
    if ( v16 )
      Prop = GetProp(v16, v2, 0);
    CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v15);
  }
  UserSessionSwitchLeaveCrit(v13);
  return Prop;
}
