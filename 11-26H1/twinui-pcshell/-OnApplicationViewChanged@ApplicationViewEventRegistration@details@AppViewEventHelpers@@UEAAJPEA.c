/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180171040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID Ptr; // r9
  int v12; // ebx
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-38h]
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v8 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  try
  {
    v17[1] = v8;
    v9 = v19;
    v19 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = 0LL;
    v19 = 0LL;
    Ptr = a1[8].Ptr;
    if ( Ptr )
    {
      v17[0] = 0LL;
      v12 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD *))(*(_QWORD *)Ptr + 24LL))(
              Ptr,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v17);
      if ( v12 >= 0 )
      {
        if ( v17[0] )
        {
          v12 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17[0])(
                  v17[0],
                  &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                  &v19);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
        }
        else
        {
          v12 = -2147023728;
        }
      }
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C89,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
          (const char *)(unsigned int)v12,
          v16);
      v10 = v19;
    }
    if ( v8 )
    {
      ReleaseSRWLockShared(v8);
      v10 = v19;
    }
    if ( v10 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(v10, a2, a3, a4);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      result = v13;
    }
    else
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           v14);
  }
  return result;
}
