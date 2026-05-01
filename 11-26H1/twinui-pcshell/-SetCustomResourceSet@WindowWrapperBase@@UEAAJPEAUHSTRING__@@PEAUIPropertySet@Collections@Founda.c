/*
 * XREFs of ?SetCustomResourceSet@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043E520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432___ @ 0x180437724 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetCustomResourceSet(
        WindowWrapperBase *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  char *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v14; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  v3 = (char *)this - 32;
  v4 = *((_QWORD *)this + 31);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
           v11,
           (__int64)v3,
           (__int64)&v14,
           (__int64)&v15);
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432___(
           v7,
           CurrentThreadId,
           (__int64)v5);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x947,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v11[0]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x94B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return result;
}
