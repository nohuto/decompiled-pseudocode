/*
 * XREFs of ?SetPositionAndViewData@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1801E84B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___ @ 0x1801E8520 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetPositionAndViewData(
        UwpWindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h]
  const struct tagRECT *v12; // [rsp+58h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v9[0] = &v12;
  v9[1] = this;
  v9[2] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___(
         v4,
         CurrentThreadId,
         v9);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v9[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v8 + 80) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x162,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v7);
      return v11;
    }
  }
  return 0LL;
}
