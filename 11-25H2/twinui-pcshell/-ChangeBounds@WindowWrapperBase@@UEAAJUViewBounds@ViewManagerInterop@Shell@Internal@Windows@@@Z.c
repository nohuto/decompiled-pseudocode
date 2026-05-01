/*
 * XREFs of ?ChangeBounds@WindowWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18042F480
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_007bba039c8197a809a146c2afd83a5a___ @ 0x18042AB14 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_007bba039c8197a809a146c2afd83a5a.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeBounds(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v7 = a2;
  *(_QWORD *)&v7[2] = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_007bba039c8197a809a146c2afd83a5a___(
         v3,
         CurrentThreadId,
         (__int128 *)v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v7[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x272,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
