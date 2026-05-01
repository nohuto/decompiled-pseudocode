/*
 * XREFs of ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x1800851B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
AgileRegistrationList::AgileCallbackArray *__fastcall AgileRegistrationList::AgileCallbackArray::`vector deleting destructor'(
        AgileRegistrationList::AgileCallbackArray *this,
        char a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rcx

  v4 = (__int64 *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 7);
    while ( v4 != v5 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v4++);
    std::_Deallocate<16>(*((_QWORD *)this + 6), (*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
