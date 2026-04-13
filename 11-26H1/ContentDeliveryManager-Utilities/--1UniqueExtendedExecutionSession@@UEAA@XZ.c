/*
 * XREFs of ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x18008EBC0
 * Callers:
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x18008EE90 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DD44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008EEE0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UniqueExtendedExecutionSession::~UniqueExtendedExecutionSession(UniqueExtendedExecutionSession *this)
{
  __int64 v2; // rcx
  int v3; // eax
  volatile int *v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &UniqueExtendedExecutionSession::`vftable';
  *((_QWORD *)this + 1) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 5) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  v2 = *((_QWORD *)this + 8);
  if ( v2 && *((_QWORD *)this + 9) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  UniqueExtendedExecutionSession::CloseSession((struct IUnknown *)this, 0);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v4);
}
