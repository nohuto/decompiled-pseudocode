/*
 * XREFs of ?CreateWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1801864C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180185D54 (--4-$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d___ @ 0x180186664 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowingEnvironmentManager::CreateWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 *Ptr; // r10
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  char v9; // r9
  __int64 *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  int v19[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v23; // [rsp+70h] [rbp+18h]

  v22 = a2;
  *a3 = 0LL;
  v21 = 0LL;
  v5 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  Ptr = (__int64 *)a1[4].Ptr;
  v7 = (__int64 *)Ptr[1];
  v19[3] = 0;
  v8 = Ptr;
  if ( !*((_BYTE *)v7 + 25) )
  {
    do
    {
      if ( *((_DWORD *)v7 + 8) >= v22 )
      {
        v9 = 0;
        v8 = v7;
      }
      else
      {
        v9 = 1;
      }
      v10 = v7 + 2;
      if ( !v9 )
        v10 = v7;
      v7 = (__int64 *)*v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( !*((_BYTE *)v8 + 25) && v22 >= *((_DWORD *)v8 + 8) && v8 != Ptr )
    wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>::operator=((__int64 *)&v21, v8 + 5);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  try
  {
    v11 = v21;
    if ( !v21 )
    {
      AcquireSRWLockExclusive(v5);
      v23 = v5;
      v12 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
              v19,
              &a1[-17],
              &v22,
              &v21);
      CurrentThreadId = GetCurrentThreadId();
      v15 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d___(
              v14,
              CurrentThreadId,
              v12);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x66,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v15,
          v19[0]);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      v11 = v21;
    }
    v16 = (**v11)(v11, &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35, a3);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v16,
        v19[0]);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[3])(v21);
    if ( v21 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x70,
                     (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                     v17);
    return (unsigned int)v21;
  }
  return result;
}
