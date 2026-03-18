/*
 * XREFs of NtUserRemoveProp @ 0x14024C800
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354 (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = a2;
  v4 = 0LL;
  EnterSharedCrit(0LL, 0LL);
  if ( (unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline() )
  {
    v8[0] = 0;
    v9 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v8);
    v5 = ValidatePropWindow(a1, 3LL);
    if ( v5 )
      v4 = InternalRemoveProp(v5, (unsigned int)v2, 0);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v8);
  }
  else
  {
    CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v8, a1, 1, 1, 1, 1);
    if ( v9 )
      v4 = InternalRemoveProp(v9, v2, 0);
    CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v8);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
