/*
 * XREFs of ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1400DE18C
 * Callers:
 *     VidMmOpenAllocation @ 0x140039690 (VidMmOpenAllocation.c)
 * Callees:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        __int64 a4,
        void *a5,
        bool a6,
        struct DXGALLOCATION *a7,
        struct VIDMM_MULTI_ALLOC **a8,
        unsigned int *a9)
{
  struct VIDMM_MULTI_ALLOC **v9; // rdi
  void *v10; // r9
  __int64 result; // rax
  bool v13; // [rsp+20h] [rbp-28h]
  struct DXGALLOCATION *v14; // [rsp+28h] [rbp-20h]
  struct VIDMM_ALLOC *v15; // [rsp+60h] [rbp+18h] BYREF

  v9 = a8;
  v10 = a5;
  v14 = a7;
  v13 = a6;
  v15 = 0LL;
  *a8 = 0LL;
  result = VIDMM_GLOBAL::OpenOneAllocation(this, a2, a3, v10, v13, v14, &v15);
  if ( (int)result >= 0 )
  {
    *a9 = (*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2) & 0x3F;
    *v9 = v15;
    return (unsigned int)result;
  }
  return result;
}
