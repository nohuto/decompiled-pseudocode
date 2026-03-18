/*
 * XREFs of NtUserSetProp @ 0x14024DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354 (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserSetProp(HWND a1, int a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v5 = 0;
  EnterSharedCrit(0LL, 0LL);
  if ( (unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline() )
  {
    v10[0] = 0;
    v11 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v10);
    v7 = ValidatePropWindow(a1, 3LL);
    if ( v7 )
      v5 = InternalSetProp(v7, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
  }
  else
  {
    CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v10, a1, 1, 1, 1, 1);
    if ( v11 )
      v5 = InternalSetProp(v11, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
    CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v10);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
