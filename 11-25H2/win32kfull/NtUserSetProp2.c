/*
 * XREFs of NtUserSetProp2 @ 0x14024E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x1402927D8 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354 (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetProp2(HWND a1, struct _UNICODE_STRING *a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  struct _RTL_ATOM_TABLE *v10; // rbx
  int v11; // eax
  ULONG v12; // ecx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  struct _RTL_ATOM_TABLE *v16; // rbx
  int v17; // eax
  ULONG v18; // ecx
  RTL_ATOM v20; // [rsp+30h] [rbp-258h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-250h] BYREF
  __int64 v22; // [rsp+40h] [rbp-248h]
  unsigned __int16 v23[256]; // [rsp+50h] [rbp-238h] BYREF

  v6 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v21, 0LL);
  if ( !(unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline() )
  {
    CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v21, a1, 1, 1, 1, 1);
    if ( !v22 || !CaptureAtomName(a2, v23, v14) )
      goto LABEL_21;
    v15 = UserGlobalAtomTableCallout();
    v16 = (struct _RTL_ATOM_TABLE *)v15;
    if ( v15 )
    {
      v20 = 0;
      v17 = RtlAddAtomToAtomTableEx(v15, v23, &v20, 0LL);
      if ( v17 >= 0 )
      {
        v6 = InternalSetProp(v22, v20, a3, 2u);
        if ( v6 )
          goto LABEL_21;
        v17 = RtlDeleteAtomFromAtomTable(v16, v20);
        if ( v17 >= 0 )
          goto LABEL_21;
      }
      v18 = RtlNtStatusToDosError(v17);
    }
    else
    {
      v18 = 5;
    }
    UserSetLastError(v18);
LABEL_21:
    CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v21);
    goto LABEL_22;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  v7 = ValidatePropWindow(a1, 3LL);
  if ( !v7 || !CaptureAtomName(a2, v23, v8) )
    goto LABEL_11;
  v9 = UserGlobalAtomTableCallout();
  v10 = (struct _RTL_ATOM_TABLE *)v9;
  if ( v9 )
  {
    v20 = 0;
    v11 = RtlAddAtomToAtomTableEx(v9, v23, &v20, 0LL);
    if ( v11 >= 0 )
    {
      v6 = InternalSetProp(v7, v20, a3, 2u);
      if ( v6 )
        goto LABEL_11;
      v11 = RtlDeleteAtomFromAtomTable(v10, v20);
      if ( v11 >= 0 )
        goto LABEL_11;
    }
    v12 = RtlNtStatusToDosError(v11);
  }
  else
  {
    v12 = 5;
  }
  UserSetLastError(v12);
LABEL_11:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
LABEL_22:
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
