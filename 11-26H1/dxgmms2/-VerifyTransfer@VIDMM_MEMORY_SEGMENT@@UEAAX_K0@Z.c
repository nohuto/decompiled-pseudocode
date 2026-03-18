/*
 * XREFs of ?VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BF520
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1401226BC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::VerifyTransfer(VIDMM_MEMORY_SEGMENT *this, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(VIDMM_SEGMENT *, struct VIDMM_PHYSICAL_ALLOC_LEGACY *, bool *, void *); // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp-10h]
  char v9; // [rsp+70h] [rbp+8h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  v7 = VIDMM_SEGMENT::SaveResourceCB;
  v9 = 0;
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    *((_QWORD *)this + 32),
    a2,
    a3,
    0,
    (__int64)&v7,
    (__int64)this,
    0LL,
    (__int64)&v10,
    (__int64)&v9);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
  v6 = *((_QWORD *)this + 32);
  v7 = VIDMM_SEGMENT::RestoreResourceCB;
  v8 = 0;
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    v6,
    a2,
    a3,
    0,
    (__int64)&v7,
    (__int64)this,
    0LL,
    (__int64)&v10,
    (__int64)&v9);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((unsigned __int16 *)this + 34));
}
