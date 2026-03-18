/*
 * XREFs of ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x1800E2BD4
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Initialize(CWarpLockSubresource *this, struct ID3D11Texture2D *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_QWORD *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
         v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\WarpLockSubresource.h",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    *((_DWORD *)this + 8) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a2->lpVtbl->GetDesc)(a2, (char *)this + 36);
    return 0LL;
  }
}
