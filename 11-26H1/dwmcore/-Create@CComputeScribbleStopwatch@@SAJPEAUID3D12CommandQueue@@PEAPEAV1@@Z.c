/*
 * XREFs of ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18025ED94
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x18025C804 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18025EE5C (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Create(
        struct ID3D12CommandQueue *a1,
        struct CComputeScribbleStopwatch **a2)
{
  struct CComputeScribbleStopwatch *v4; // rax
  struct CComputeScribbleStopwatch *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CComputeScribbleStopwatch *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = (struct CComputeScribbleStopwatch *)MIDL_user_allocate(0x48uLL);
  v5 = v4;
  if ( !v4 )
  {
    v7 = -2147024882;
    v12 = 0LL;
    v8 = 2147942414LL;
    v9 = 7LL;
    goto LABEL_6;
  }
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_BYTE *)v4 + 64) = 0;
  v12 = v4;
  v6 = CComputeScribbleStopwatch::Initialize(v4, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 8LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)v8);
    goto LABEL_7;
  }
  v12 = 0LL;
  v7 = 0;
  *a2 = v5;
LABEL_7:
  std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(&v12);
  return v7;
}
