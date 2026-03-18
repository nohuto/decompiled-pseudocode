/*
 * XREFs of GetStagingTexture @ 0x18028D288
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18028CF2C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetStagingTexture(__int64 *a1, __int64 **a2)
{
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _OWORD *, _QWORD, __int64 *); // rdi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 *v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[3]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = *a1;
  memset(v16, 0, 44);
  (*(void (__fastcall **)(__int64 *, _OWORD *))(v3 + 80))(a1, v16);
  if ( HIDWORD(v16[1]) == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
    return 0LL;
  }
  else
  {
    v6 = *a1;
    v14 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 **))(v6 + 24))(a1, &v14);
    v7 = *v14;
    v15 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 320))(v14, &v15);
    v8 = (__int64)v14;
    v13 = 0LL;
    *(_QWORD *)((char *)&v16[1] + 12) = 3LL;
    *(_QWORD *)((char *)&v16[2] + 4) = 0x20000LL;
    v9 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64 *))(*v14 + 40);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v10 = v9(v8, v16, 0LL, (__int64 *)&v13);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, const GUID *, __int64, const char *))(*v13 + 40))(
              v13,
              &WKPDID_D3DDebugObjectName,
              25LL,
              "DWM Temp Readback (debug)");
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          135LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v15 + 376LL))(v15, v13, a1);
      v11 = 0;
      *a2 = v13;
      v13 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return v11;
  }
}
