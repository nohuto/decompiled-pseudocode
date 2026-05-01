/*
 * XREFs of ?SetPositionAndViewData@WindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18043ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_bcb0b569c925f2594c0329e0195fd877___ @ 0x180437BD4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_bcb0b569c925f2594c0329e0195fd877.c)
 */

__int64 __fastcall WindowWrapperBase::SetPositionAndViewData(
        WindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  _QWORD *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct tagRECT *v11; // [rsp+58h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
         v9,
         (__int64)&v11,
         (__int64)this,
         (__int64)&v12);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_bcb0b569c925f2594c0329e0195fd877___(
         v5,
         CurrentThreadId,
         (__int64)v3);
  try
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x161,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v9[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x165,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
