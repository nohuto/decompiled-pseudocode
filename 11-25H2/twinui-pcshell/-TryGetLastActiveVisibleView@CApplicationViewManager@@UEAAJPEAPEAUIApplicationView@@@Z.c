/*
 * XREFs of ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18030D230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x18013DE68 (--0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x180240E20 (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationViewManager::TryGetLastActiveVisibleView(
        RTL_SRWLOCK *this,
        struct IApplicationView **a2)
{
  struct IApplicationView *v4; // rsi
  unsigned __int64 v5; // r14
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  HWND v9; // rax
  RTL_SRWLOCK *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  int v13; // [rsp+70h] [rbp+38h] BYREF
  struct IApplicationView *v14; // [rsp+78h] [rbp+40h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  CAutoSRWSharedLock::CAutoSRWSharedLock((CAutoSRWSharedLock *)v11, this + 49);
  Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[50].Ptr;
  v7 = &Ptr[(__int64)this[51].Ptr];
  if ( Ptr != v7 )
  {
    do
    {
      v15 = 0LL;
      if ( ((int (__fastcall *)(_QWORD, unsigned __int64 *))(**Ptr)[23])(*Ptr, &v15) >= 0 && v15 > v5 )
      {
        v13 = 0;
        if ( ((int (__fastcall *)(_QWORD, int *))(**Ptr)[11])(*Ptr, &v13) >= 0 )
        {
          if ( v13 )
          {
            v16 = 0LL;
            v8 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(Ptr, &v16);
            if ( v8 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x168,
                (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
                (const char *)(unsigned int)v8,
                (int)v11[0]);
            v9 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
            if ( !IsIconic(v9) )
            {
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, Ptr);
              v5 = v15;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
          }
        }
      }
      ++Ptr;
    }
    while ( Ptr != v7 );
    v4 = v14;
  }
  v14 = 0LL;
  *a2 = v4;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return 0LL;
}
