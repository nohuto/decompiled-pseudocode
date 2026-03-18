/*
 * XREFs of ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x18025D6BC
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x1801D34D0 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x18025D54C (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x18025D78C (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Create(
        struct CD3DDevice *a1,
        struct ID3D12Resource *a2,
        int a3,
        struct CComputeScribbleFramebuffer **a4)
{
  CComputeScribbleFramebuffer *v8; // rax
  CComputeScribbleFramebuffer *v9; // rax
  CComputeScribbleFramebuffer *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v16[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CComputeScribbleFramebuffer *)MIDL_user_allocate(0x108uLL);
  if ( !v8 )
  {
    *(_QWORD *)v16 = 0LL;
    goto LABEL_7;
  }
  v9 = CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(v8, a1, a2, a3);
  *(_QWORD *)v16 = v9;
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    v14 = 41LL;
    v13 = 2147942414LL;
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CComputeScribbleFramebuffer *)((char *)v9 + 8));
  v11 = CComputeScribbleFramebuffer::Initialize(v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v14 = 43LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)v13);
    goto LABEL_9;
  }
  *(_QWORD *)v16 = 0LL;
  v12 = 0;
  *a4 = v10;
LABEL_9:
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(v16);
  return v12;
}
