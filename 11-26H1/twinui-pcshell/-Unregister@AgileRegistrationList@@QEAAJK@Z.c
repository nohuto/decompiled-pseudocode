/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18008508C
 * Callers:
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180085010 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x180085BF0 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x1802080E0 (-UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1802133B0 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x18022D670 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x1802EBB60 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18030A160 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z @ 0x180559EB0 (-Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // r14
  RTL_SRWLOCK v5; // rax
  char v6; // cl
  __int64 v7; // rsi
  char *Ptr; // r15
  char *i; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  for ( v5.Ptr = this->Ptr; ; v5.Ptr = (char *)v5.Ptr + 16 )
  {
    if ( v5.Ptr == this[1].Ptr )
    {
      v6 = 1;
      goto LABEL_19;
    }
    if ( *(_DWORD *)v5.Ptr == a2 )
      break;
  }
  v6 = 0;
LABEL_19:
  try
  {
    if ( v6 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B,
        (int)"desktop\\internal\\shell\\inc\\private\\agileregistrationlist.h",
        (const char *)0x80070057LL,
        v14);
    v7 = *((_QWORD *)v5.Ptr + 1);
    *((_QWORD *)v5.Ptr + 1) = 0LL;
    Ptr = (char *)this[1].Ptr;
    for ( i = (char *)v5.Ptr + 16; i != Ptr; i += 16 )
    {
      *((_DWORD *)i - 4) = *(_DWORD *)i;
      v10 = *((_QWORD *)i + 1);
      *((_QWORD *)i + 1) = 0LL;
      v11 = *((_QWORD *)i - 1);
      *((_QWORD *)i - 1) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this[1].Ptr - 1);
    this[1].Ptr = (char *)this[1].Ptr - 16;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (int)"desktop\\internal\\shell\\inc\\private\\agileregistrationlist.h",
                           v12);
  }
  return result;
}
