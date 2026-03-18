/*
 * XREFs of ?Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801D1590
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CLegacySwapChainBuffer::Create(
        struct CLegacySwapChain *a1,
        const struct D2D_SIZE_U *a2,
        int a3,
        struct CLegacySwapChainBuffer **a4)
{
  char *v8; // rax
  struct CLegacySwapChainBuffer *v9; // rbx
  UINT32 height; // edx
  __int64 result; // rax

  *a4 = 0LL;
  v8 = (char *)operator new(0xC8uLL);
  v9 = (struct CLegacySwapChainBuffer *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &ISwapChainBuffer::`vftable';
    *((_DWORD *)v8 + 2) = 0;
    height = a2->height;
    *((_DWORD *)v8 + 6) = a2->width;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_DWORD *)v8 + 7) = height;
    *((_QWORD *)v8 + 4) = v8 + 40;
    *((_DWORD *)v8 + 10) = 0;
    *((_DWORD *)v8 + 26) = a3;
    *((_DWORD *)v8 + 27) = 0;
    *((_QWORD *)v8 + 14) = 0LL;
    *((_QWORD *)v8 + 15) = v8 + 128;
    *((_DWORD *)v8 + 32) = 0;
    *(_QWORD *)v8 = &CLegacySwapChainBuffer::`vftable';
    *((_QWORD *)v8 + 24) = a1;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
  }
  else
  {
    v9 = 0LL;
  }
  result = 0LL;
  *a4 = v9;
  return result;
}
