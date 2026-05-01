/*
 * XREFs of ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x1803089B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x180131818 (--0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::ProcessEntepriseIdChanged(RTL_SRWLOCK *this, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+18h] BYREF

  CAutoSRWSharedLock::CAutoSRWSharedLock((CAutoSRWSharedLock *)&v12, this + 43);
  v4 = 0LL;
  if ( this[45].Ptr )
  {
    while ( 1 )
    {
      v11 = 0LL;
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[44].Ptr;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      v6 = (**Ptr[v4])(Ptr[v4], &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v11);
      v7 = retaddr;
      if ( v6 < 0 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, a2);
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v8 = 824LL;
        goto LABEL_6;
      }
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      if ( (PVOID)++v4 >= this[45].Ptr )
        goto LABEL_8;
    }
    v8 = 822LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
LABEL_8:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
  return 0LL;
}
