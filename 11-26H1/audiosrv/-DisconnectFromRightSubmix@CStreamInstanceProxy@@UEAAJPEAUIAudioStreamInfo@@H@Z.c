/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x1800695A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800259E8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___ @ 0x1800CD3B4 (wil--scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___.c)
 *     wil::details::lambda_call__lambda_47d1fc67d67779a599de58b5c2f87016___::_lambda_call__lambda_47d1fc67d67779a599de58b5c2f87016___ @ 0x1800F992C (wil--details--lambda_call__lambda_47d1fc67d67779a599de58b5c2f87016___--_lambda_call__lambda_47d1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceProxy::DisconnectFromRightSubmix(
        CStreamInstanceProxy *this,
        struct IAudioStreamInfo *a2,
        int a3)
{
  __int64 v6; // rax
  int v7; // eax
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v6 = lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(v12, (char *)this - 40, &v15);
  wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___(v13, v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *))(**((_QWORD **)this - 2) + 120LL))(
         *((_QWORD *)this - 2),
         a2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1031,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
  v9 = *((_QWORD *)this - 2);
  *((_QWORD *)this - 2) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( a3 )
  {
    v10 = (__int64)a2 + 328;
    if ( !a2 )
      v10 = 336LL;
    if ( *(_QWORD *)v10 )
      wil::details::SetEvent(*(wil::details **)v10, v8);
  }
  wil::details::lambda_call__lambda_47d1fc67d67779a599de58b5c2f87016___::_lambda_call__lambda_47d1fc67d67779a599de58b5c2f87016___(v13);
  return 0LL;
}
