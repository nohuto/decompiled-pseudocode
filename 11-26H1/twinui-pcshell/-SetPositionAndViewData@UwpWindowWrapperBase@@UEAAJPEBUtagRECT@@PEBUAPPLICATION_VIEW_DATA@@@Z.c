/*
 * XREFs of ?SetPositionAndViewData@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1801DB170
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___ @ 0x1801DB1E0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetPositionAndViewData(
        UwpWindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct tagRECT *v12; // [rsp+58h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v13; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h]

  v13 = a3;
  v12 = a2;
  v3 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(v10, &v12, this, &v13);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___(
         v5,
         CurrentThreadId,
         v3);
  if ( v6 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v10[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v9 + 104) = wil::details::in1diag3::Return_CaughtException(
                                retaddr,
                                (void *)0x162,
                                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                                v8);
      return v14;
    }
  }
  return 0LL;
}
