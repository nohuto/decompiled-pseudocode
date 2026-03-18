/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400E3B90
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400E3900 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002C530 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002FF04 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030100 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x140042DFC (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC **a2, struct DXGPUSHLOCKBASE *a3)
{
  _QWORD *v3; // rdi
  char v7; // si
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rbx
  DXGDEVICE *v11; // rcx
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a2;
  v7 = 0;
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
    (DXGPROCESSVIDMMLOCK *)&v13,
    *(struct _KTHREAD ***)(*(_QWORD *)(*((_QWORD *)*a2 + 2) + 8LL) + 40LL));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, a1 + 5645, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v12);
  *((_BYTE *)v3 + 25) &= ~2u;
  if ( (*((_BYTE *)v3 + 25) & 5) == 1 )
  {
    v8 = VIDMM_GLOBAL::UnpinOneAllocation(a1, v3, 1LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    if ( v8 )
      VIDMM_GLOBAL::UnpinOneAllocation(a1, v3, 2LL);
    v7 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  if ( v13 )
  {
    v9 = v13 + 184;
    *(_QWORD *)(v13 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a3 )
  {
    ExReleasePushLockExclusiveEx(a3, 0LL);
    KeLeaveCriticalRegion();
  }
  v10 = v3[2];
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v3 + 96);
  *a2 = 0LL;
  if ( v7 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v11,
      (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) >> 6) & 0xF,
      (struct DXGALLOCATION *)v10);
}
