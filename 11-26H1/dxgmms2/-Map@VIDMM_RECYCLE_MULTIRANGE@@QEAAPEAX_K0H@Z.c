/*
 * XREFs of ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400F7508
 * Callers:
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z @ 0x1400ADB40 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x14011CF0C (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z @ 0x1400F66AC (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::Map(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // r10
  int v7; // ecx
  char v8; // r9
  signed __int64 v10; // rcx
  unsigned __int8 v11; // [rsp+20h] [rbp-48h]
  void *v12; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+8h] BYREF
  void *v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 10);
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0;
  v7 = **(_DWORD **)(v4 + 32);
  v8 = v7 == 4 || v7 == 6;
  if ( (int)VidMmRecycleHeapMapSection(
              *(PVOID *)(v4 + 56),
              *((_QWORD *)this + 6) + a2,
              a3,
              v8,
              v11,
              &v14,
              &v12,
              a4,
              &v13) >= 0 )
  {
    if ( v13 )
      *((_BYTE *)this + 121) = 1;
    else
      *((_BYTE *)this + 120) = 1;
    v10 = (_BYTE *)v14 - (_BYTE *)v12;
    *((_QWORD *)this + 16) = v12;
    *((_QWORD *)this + 17) = v10;
  }
  return v14;
}
