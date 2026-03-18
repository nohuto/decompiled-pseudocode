/*
 * XREFs of ?Create@CTranscodeBitmap@@SAJPEAPEAV1@@Z @ 0x1802B244C
 * Callers:
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CTranscodeBitmap::Create(struct CTranscodeBitmap **a1)
{
  char *v2; // rax
  struct CTranscodeBitmap *v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)operator new(0x28uLL);
  v3 = (struct CTranscodeBitmap *)v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    *(_DWORD *)(v2 + 33) = 0;
    *(_WORD *)(v2 + 37) = 0;
    v2[39] = 0;
    *(_QWORD *)v2 = &CTranscodeBitmap::`vftable';
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    v2[32] = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 8));
  }
  else
  {
    v3 = 0LL;
  }
  v5 = 0LL;
  *a1 = v3;
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v5);
  return 0LL;
}
