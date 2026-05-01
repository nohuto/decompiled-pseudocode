/*
 * XREFs of ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x18043F840
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7e2780c5544860c2230bb0766c4bf63e___ @ 0x180437544 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7e2780c5544860c2230bb0766c4bf63e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v4 = a1 - 16;
  v5 = *(_QWORD *)(a1 - 16 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
    v6 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
           v13,
           v4,
           (__int64)&v15,
           (__int64)&v16,
           (__int64)&v17);
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7e2780c5544860c2230bb0766c4bf63e___(
           v8,
           CurrentThreadId,
           v6);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x647,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9,
        v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x64B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
