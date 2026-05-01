/*
 * XREFs of ?WindowAdded@UwpWindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x1801FC130
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a___ @ 0x1804443D0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v4 = a1 - 16;
  v5 = *(_QWORD *)(a1 - 16 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 224LL))(v5);
    v6 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
           (unsigned int)&v11,
           v4,
           (unsigned int)&v13,
           (unsigned int)&v14,
           (__int64)&v15);
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a977afc9c59ce0858e320274f367b95a___(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x660,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x664,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
