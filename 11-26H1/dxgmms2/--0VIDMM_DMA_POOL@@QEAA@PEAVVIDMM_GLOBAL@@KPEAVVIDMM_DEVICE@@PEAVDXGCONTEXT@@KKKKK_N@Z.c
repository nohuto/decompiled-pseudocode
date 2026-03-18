/*
 * XREFs of ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKK_N@Z @ 0x140126A3C
 * Callers:
 *     VidMmCreateDmaPool @ 0x140036790 (VidMmCreateDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::VIDMM_DMA_POOL(
        VIDMM_DMA_POOL *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_DEVICE *a4,
        struct DXGCONTEXT *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        bool a11)
{
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  VIDMM_DMA_POOL *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a4;
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 5040) + 8LL * a3);
  *((_DWORD *)this + 10) = a9;
  *((_DWORD *)this + 11) = a6;
  *((_DWORD *)this + 12) = a6;
  *((_DWORD *)this + 13) = a6;
  *((_DWORD *)this + 14) = a7;
  *((_DWORD *)this + 15) = a7;
  *((_DWORD *)this + 16) = a7;
  *((_DWORD *)this + 17) = a8;
  *((_DWORD *)this + 18) = a8;
  *((_DWORD *)this + 19) = a8;
  *((_QWORD *)this + 2) = v12;
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 20) = a10;
  *((_QWORD *)this + 3) = a5;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  v13 = a11 & 0xFD | *((_DWORD *)this + 9) & 0xFFFFFFFC | 0xC;
  *((_DWORD *)this + 9) = v13;
  if ( !a5 || (v14 = 16, !*((_BYTE *)a5 + 430)) )
    v14 = 0;
  v15 = v14 | v13 & 0xFFFFFFEF;
  *((_DWORD *)this + 9) = v15;
  if ( !a5 || (v16 = 32, !*((_BYTE *)a5 + 431)) )
    v16 = 0;
  *((_DWORD *)this + 9) = v16 | v15 & 0xFFFFFFDF;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
