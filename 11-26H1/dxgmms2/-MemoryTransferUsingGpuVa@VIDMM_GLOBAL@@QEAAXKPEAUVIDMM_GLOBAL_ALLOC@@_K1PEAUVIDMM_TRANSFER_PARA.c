/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A09F4
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0378 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_TRANSFER_PARAMETER *a6,
        struct VIDMM_TRANSFER_PARAMETER *a7,
        struct _DXGK_TRANSFERFLAGS a8)
{
  char *v8; // r12
  char *v9; // rdi
  unsigned int v11; // r11d
  VIDMM_GLOBAL *v12; // r15
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r9

  v8 = (char *)a3 + 96;
  v9 = (char *)*((_QWORD *)a3 + 12);
  v11 = a2;
  v12 = this;
  v13 = a5;
  v14 = a4 + a5;
  while ( v9 != v8 )
  {
    v15 = *((_QWORD *)v9 + 4);
    if ( v14 <= v15 )
      break;
    v16 = v15 + *((_QWORD *)v9 + 8) - *((_QWORD *)v9 + 7);
    if ( v13 < v16 )
    {
      v17 = v14;
      if ( v14 > v16 )
        v17 = v15 + *((_QWORD *)v9 + 8) - *((_QWORD *)v9 + 7);
      if ( v13 < v15 )
      {
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v11, a3, v15 - v13, v13, a6, a7, v13 - a5, a8, 0LL);
        v13 = *((_QWORD *)v9 + 4);
        v11 = a2;
        v15 = v13;
      }
      v18 = v17 - v13;
      v12 = this;
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v11, a3, v18, v15, a6, a7, v15 - a5, a8, *((_QWORD *)v9 + 5));
      if ( v14 <= v16 )
        return;
      v11 = a2;
      v13 = v16;
    }
    v9 = *(char **)v9;
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(v12, v11, a3, v14 - v13, v13, a6, a7, v13 - a5, a8, 0LL);
}
