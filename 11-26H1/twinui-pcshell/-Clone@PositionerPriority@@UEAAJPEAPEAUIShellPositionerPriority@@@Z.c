/*
 * XREFs of ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180254910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180160014 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18050DCD8 (-PositionerPriority_CreateInstance@@YAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority::Clone(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  BOOL v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IShellPositionerPriority *v14; // [rsp+40h] [rbp+20h] BYREF
  RTL_SRWLOCK *v15; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v15, this + 3);
  v14 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    if ( BYTE1(this[4].Ptr) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      if ( BYTE2(this[4].Ptr) )
        v4 = 2;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v6 = PositionerPriority_CreateInstance(v4, v5, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 223LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_17;
    }
  }
  else
  {
    v9 = LOBYTE(this[4].Ptr) == 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v6 = PositionerPriority_CreateInstance(v9, v10, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 229LL;
      goto LABEL_10;
    }
  }
  for ( i = 0LL; i < 0xB; ++i )
  {
    if ( *((_BYTE *)&this[4].Ptr + i)
      && !(*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v14 + 32LL))(
            v14,
            (unsigned int)i) )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, (unsigned int)i);
    }
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  *a2 = v14;
  v7 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  return v7;
}
