/*
 * XREFs of ?SetActivationRequestedArgs@WindowWrapperBase@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180432020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetActivationRequestedArgs(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *a2)
{
  __int64 v4; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  v4 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationRequestedEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
