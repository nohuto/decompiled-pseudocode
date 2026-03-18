/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400F8F4C
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400F8CD0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z.c)
 *     ?UncommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400F8F30 (-UncommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400F90C8 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400F921C (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(VIDMM_SEGMENT *this, struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  char *v3; // rbx
  VIDMM_LINEAR_POOL *v5; // rcx
  struct VIDMM_PARTITION **v6; // rdx
  VIDMM_SEGMENT *v7; // rax
  char **v8; // rdx
  VIDMM_SEGMENT **v9; // rcx
  VIDMM_SEGMENT **v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = *(char **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v3;
    WdLogGlobalForLineNumber = 2105;
  }
  v5 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 32);
  if ( v5 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(v5, *((void **)a2 + 17));
  v6 = (struct VIDMM_PARTITION **)*((_QWORD *)v3 + 41);
  *((_DWORD *)v3 + 18) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted(this, *v6, *((_QWORD *)a2 + 2));
  --*((_DWORD *)this + 88);
  if ( *((_DWORD *)this + 27) != 1 )
  {
    v11 = *((_QWORD *)v3 + 42);
    if ( (!v11 || _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 44), 0xFFFFFFFF) == 1)
      && (unsigned __int64)_InterlockedExchangeAdd64(
                             (volatile signed __int64 *)(**((_QWORD **)v3 + 41) + 56LL),
                             -*((_QWORD *)a2 + 2)) < *((_QWORD *)a2 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2130;
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
    }
  }
  v7 = (VIDMM_SEGMENT *)(v3 + 240);
  v8 = (char **)*((_QWORD *)v3 + 30);
  if ( v8[1] != v3 + 240
    || (v9 = (VIDMM_SEGMENT **)*((_QWORD *)v3 + 31), *v9 != v7)
    || (*v9 = (VIDMM_SEGMENT *)v8,
        v8[1] = (char *)v9,
        v10 = (VIDMM_SEGMENT **)*((_QWORD *)this + 34),
        *v10 != (VIDMM_SEGMENT *)((char *)this + 264)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v7 = (char *)this + 264;
  *((_QWORD *)v3 + 31) = v10;
  *v10 = v7;
  *((_QWORD *)this + 34) = v7;
}
