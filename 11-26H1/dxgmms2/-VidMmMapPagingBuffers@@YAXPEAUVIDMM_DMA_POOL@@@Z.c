/*
 * XREFs of ?VidMmMapPagingBuffers@@YAXPEAUVIDMM_DMA_POOL@@@Z @ 0x1400E449C
 * Callers:
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E4450 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmMapPagingBuffers(struct VIDMM_DMA_POOL *a1)
{
  char *v2; // rsi
  char *v3; // rdi
  _QWORD *v4; // rdx

  if ( (*((_DWORD *)a1 + 9) & 4) == 0 )
  {
    v2 = (char *)a1 + 88;
    v3 = (char *)*((_QWORD *)a1 + 11);
    while ( v3 != v2 )
    {
      v4 = (_QWORD *)*((_QWORD *)v3 + 6);
      v3 = *(char **)v3;
      if ( v4 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 2) + 360LL))(*((_QWORD *)a1 + 2), *v4);
    }
    *((_DWORD *)a1 + 9) |= 4u;
  }
}
