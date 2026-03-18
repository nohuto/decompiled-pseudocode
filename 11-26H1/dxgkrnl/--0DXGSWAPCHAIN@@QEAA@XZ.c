/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x140205378
 * Callers:
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 * Callees:
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  DXGSWAPCHAIN *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 62;
  *((_DWORD *)this + 10) = 76;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  v2 = (DXGSWAPCHAIN *)((char *)this + 80);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer(v2, 0, 0);
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 24) = 1LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_DWORD *)this + 53) = 16;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_OWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 34) = -1;
  result = this;
  *((_DWORD *)this + 31) = 1;
  return result;
}
