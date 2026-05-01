/*
 * XREFs of ?OnShellHookMessage@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJ_K_J@Z @ 0x18017FD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  PVOID Ptr; // r9
  int v10; // ebx
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = this + 7;
  AcquireSRWLockShared(this + 7);
  try
  {
    v7 = v15;
    v15 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = 0LL;
    v15 = 0LL;
    Ptr = this[8].Ptr;
    if ( Ptr )
    {
      v16 = 0LL;
      v10 = (*(__int64 (__fastcall **)(PVOID, GUID *, __int64 *))(*(_QWORD *)Ptr + 24LL))(
              Ptr,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v16);
      if ( v10 >= 0 )
      {
        if ( v16 )
        {
          v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
                  v16,
                  &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c,
                  &v15);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        else
        {
          v10 = -2147023728;
        }
      }
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C89,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)v10,
          (int)v6);
      v8 = v15;
    }
    if ( v6 )
    {
      ReleaseSRWLockShared(v6);
      v8 = v15;
    }
    if ( v8 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      result = v11;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           v12);
  }
  return result;
}
