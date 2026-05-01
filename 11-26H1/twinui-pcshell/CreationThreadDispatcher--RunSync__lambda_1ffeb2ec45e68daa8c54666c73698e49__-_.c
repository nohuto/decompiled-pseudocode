/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__&_ @ 0x1801A43E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d01e05628e7c62b77a3bad017b515331___::Run @ 0x1801A4390 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d01e05628e7c62b77a3bad017b515331___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A4724 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___ @ 0x1801A4858 (CreateAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49____(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(a1 + 48, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v3);
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v14 = *a2;
  CreateAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9_(&v15, &v14);
  v7 = v15;
  if ( !v15 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)0x8007000ELL);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v15);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
