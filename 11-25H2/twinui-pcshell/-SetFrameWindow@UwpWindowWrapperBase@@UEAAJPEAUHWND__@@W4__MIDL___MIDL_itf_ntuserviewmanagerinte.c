/*
 * XREFs of ?SetFrameWindow@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1801BBA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e___ @ 0x180436D2C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetFrameWindow(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v4; // eax
  const char *v6; // r9
  __int64 v7; // rdx
  int v8[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(v8, a1 - 64, &v11, &v12);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e___(v3);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA9B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 80) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0xA9F,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v6);
      return v10;
    }
  }
  return 0LL;
}
