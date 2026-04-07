/*
 * XREFs of ?EmitLastFrameTelemetry@CDisplayAnimatedVisual@@AEAAJXZ @ 0x1800AF0EC
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::EmitLastFrameTelemetry(CDisplayAnimatedVisual *this)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(__int64 *, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD); // rax
  _DWORD v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  _BYTE v17[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[128]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  if ( *((_QWORD *)this + 42) )
  {
    (*(void (__fastcall **)(CDisplayAnimatedVisual *, _BYTE *))(*(_QWORD *)this + 216LL))(this, v17);
    GetAnimationScenarioNameFromGUID(v17, v18, 64LL);
    v2 = *(_QWORD *)this;
    v10[0] = 0;
    v3 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *, _DWORD *))(v2 + 224))(this, v10);
    if ( v3 < 0 )
    {
      v4 = 265LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v6 = *((_QWORD *)this + 42);
    v15 = 0LL;
    v16 = 0;
    v14 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 88LL))(v6, &v14);
    if ( v3 < 0 )
    {
      v4 = 268LL;
      goto LABEL_4;
    }
    v7 = (__int64 *)*((_QWORD *)this + 42);
    v13 = v16;
    v8 = *v7;
    v11 = v14;
    v9 = *(void (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, _DWORD))(v8 + 216);
    v12 = v15;
    v9(v7, &v11, 0LL, 0LL, v18, 0LL, v10[0]);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 42) + 40LL))(*((_QWORD *)this + 42), 0LL);
  }
  return 0LL;
}
