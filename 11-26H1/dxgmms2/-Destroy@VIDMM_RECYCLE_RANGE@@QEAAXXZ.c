/*
 * XREFs of ?Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F2AB8
 * Callers:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F2134 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400F2310 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Destroy(VIDMM_RECYCLE_BLOCK **this)
{
  VIDMM_RECYCLE_BLOCK *v2; // rdi
  __int64 *v3; // rdx
  VIDMM_RECYCLE_BLOCK *v4; // rcx
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  WdLogSingleEntry1(4LL, this);
  v2 = this[9];
  WdLogGlobalForLineNumber = 1110;
  v3 = (__int64 *)*((_QWORD *)v2 + 19);
  if ( v3 )
  {
    v6 = *v3;
    v7 = 144 * v3[1];
    *(_DWORD *)(v7 + v6) = 1;
    *(_QWORD *)(v7 + v6 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v7 + v6 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)v2 + 19) + 8LL);
    v8 = *((_QWORD *)v2 + 19);
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(v8 + 48) )
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_BYTE *)(*((_QWORD *)v2 + 19) + 16LL) = 1;
    }
  }
  v4 = this[9];
  v5 = (*(_QWORD *)v4)-- == 1LL;
  if ( v5 && !*((_QWORD *)v4 + 1) && v4 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v4);
  *((_BYTE *)this + 168) = 1;
}
