/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18006CEE4 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     _lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_ @ 0x1800C3E84 (_lambda_c7ca9f80eb9d712dfec147e946fba3c8_--_lambda_c7ca9f80eb9d712dfec147e946fba3c8_.c)
 *     wil::scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___ @ 0x1800F9498 (wil--scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___.c)
 *     wil::details::lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___::_lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___ @ 0x1800F994C (wil--details--lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___--_lambda_call__lambda_934a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceProxy::ConnectToRightSubmix(
        CStreamInstanceProxy *this,
        struct IAudioStreamInfo *a2,
        struct ISubmixProxy *a3,
        int a4)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rbx
  struct ISubmixProxy *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[64]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v16; // [rsp+80h] [rbp+8h] BYREF
  struct ISubmixProxy *v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = a3;
  v16 = 0;
  v7 = lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_(
         &v13,
         (char *)this - 40,
         &v17,
         &v16);
  wil::scope_exit__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(v14, v7);
  v8 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)v17 + 112LL))(v17, a2);
  v9 = v8;
  v16 = v8;
  if ( v8 >= 0 )
  {
    v11 = *((_QWORD *)this - 2);
    v12 = v17;
    *((_QWORD *)this - 2) = v17;
    if ( v12 )
      (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)v12 + 8LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( a4 )
      CAudioStream::OnMfxEffectsChanged((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)));
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::details::lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___::_lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___(v14);
  return v9;
}
