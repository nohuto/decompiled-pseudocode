/*
 * XREFs of ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD5D8
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AD454 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIW4VIDMM_HEAP_ALLOC.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z @ 0x1400AC650 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KW4VIDMM_HEAP_ALLOCATE_FLAGS@@K@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x140117F38 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 */

VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        struct VIDMM_RECYCLE_HEAP *a1,
        ULONG_PTR a2,
        char a3,
        unsigned int a4)
{
  VIDMM_RECYCLE_BLOCK *v8; // rax
  VIDMM_RECYCLE_BLOCK *v9; // rax
  VIDMM_RECYCLE_BLOCK *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rcx

  v8 = (VIDMM_RECYCLE_BLOCK *)operator new(160LL, 0x31316956u, 256LL);
  if ( v8 && (v9 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v8, a1), (v10 = v9) != 0LL) )
  {
    if ( *((_BYTE *)a1 + 16) )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( (int)VIDMM_RECYCLE_BLOCK::Allocate((__int64)v9, a2, a3, a4) >= 0 )
      return v10;
    _InterlockedIncrement(&dword_14008A754);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9292;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v10);
  }
  else
  {
    _InterlockedIncrement(&dword_14008A754);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9274;
    DxgkLogInternalTriageEvent(v13, 262145LL);
  }
  return 0LL;
}
