/*
 * XREFs of ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180131B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180131DF0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     EnumWindowsHelpers::ForEachWindow__lambda_41d14996f06832153f35f30c97717118___ @ 0x180307090 (EnumWindowsHelpers--ForEachWindow__lambda_41d14996f06832153f35f30c97717118___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViewsByZOrder(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r14d
  struct IObjectArray *v10; // rax
  void *v11; // rcx
  void *v13; // rcx
  _BYTE v14[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char *v16; // [rsp+78h] [rbp+38h] BYREF
  void *v17; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v7;
  }
  else
  {
    v18 = this + 49;
    AcquireSRWLockShared(this + 49);
    LODWORD(v16) = 0;
    v8 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
           v14,
           &v16,
           &this[-17],
           &v17);
    EnumWindowsHelpers::ForEachWindow__lambda_41d14996f06832153f35f30c97717118___(v8);
    v9 = (unsigned int)v16;
    if ( (int)v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return v9;
    }
    else
    {
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v10 = (struct IObjectArray *)v17;
      v11 = 0LL;
      v17 = 0LL;
      *a2 = v10;
      if ( this != (RTL_SRWLOCK *)-392LL )
      {
        ReleaseSRWLockShared(this + 49);
        v11 = v17;
      }
      if ( v11 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0LL;
    }
  }
}
