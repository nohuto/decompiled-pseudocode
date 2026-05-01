/*
 * XREFs of _lambda_a9307fb14462ef19126b81021743ae0c_::operator() @ 0x18043A4D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___::Run @ 0x18043E360 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_a9307fb14462ef19126b81021743ae0c_::operator()(_QWORD *a1)
{
  int v2; // edi
  PCWSTR StringRawBuffer; // rsi
  int v4; // edx
  int v5; // edx
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 184LL))(*(_QWORD *)(*a1 + 280LL), &v6);
  v2 = 0;
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 304LL), 0LL);
    v7 = -1LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 584LL))(*a1 + 8LL, &v7);
    v4 = *((_DWORD *)a1 + 6);
    if ( !v4 )
    {
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v6 + 24LL))(
        v6,
        StringRawBuffer,
        v7,
        a1[2],
        0);
LABEL_8:
      (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(*a1 + 280LL) + 208LL))(
        *(_QWORD *)(*a1 + 280LL),
        &v8);
      LOBYTE(v2) = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1) - 4 > 1;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v6 + 24LL))(
        v6,
        StringRawBuffer,
        v7,
        a1[2],
        v2 + 2);
      goto LABEL_9;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_9;
      goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v6 + 24LL))(
      v6,
      StringRawBuffer,
      v7,
      a1[2],
      1);
  }
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
}
