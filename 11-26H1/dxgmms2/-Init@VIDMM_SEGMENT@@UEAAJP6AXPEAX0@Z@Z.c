/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400B6430
 * Callers:
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BC8D0 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BD350 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BE6C0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009A15C (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x1400BF628 (--0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x1400BFD04 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEBAXXZ @ 0x1401252CC (-ReportSegment@VIDMM_SEGMENT@@QEBAXXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(VIDMM_SEGMENT *this, void (*a2)(void *, void *))
{
  unsigned int v2; // edi
  VIDMM_LINEAR_POOL *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  PHYSICAL_ADDRESS v13; // rdx
  PMDL PagesForMdl; // rax
  unsigned __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 16) & 0x1000) != 0 )
  {
    *((_QWORD *)this + 10) = -1LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 10) )
      *((_QWORD *)this + 10) = *((_QWORD *)this + 5) - *((_QWORD *)this + 21);
    v5 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
    if ( v5 )
      v5 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v5, *((void **)this + 2));
    *((_QWORD *)this + 32) = v5;
    if ( !v5 )
    {
      _InterlockedIncrement(&dword_14008A700);
      WdLogSingleEntry0(6LL);
      v7 = 533;
LABEL_8:
      WdLogGlobalForLineNumber = v7;
      DxgkLogInternalTriageEvent(v6, 262145LL);
      return 3221225495LL;
    }
    v9 = VIDMM_LINEAR_POOL::Init(v5, *((_QWORD *)this + 5), 1u, a2, IsAllocationOffered);
    v2 = v9;
    if ( v9 < 0 )
    {
      _InterlockedIncrement(&dword_14008A704);
      WdLogSingleEntry1(6LL, v9);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(v10, 262145LL);
      return v2;
    }
  }
  v11 = *((_DWORD *)this + 44);
  if ( !v11
    || (result = VIDMM_SEGMENT::BlockMemoryRanges((__int64)this, 6u, 12, v11, (unsigned __int64 *)this + 21),
        v2 = result,
        (int)result >= 0) )
  {
    v12 = *((_DWORD *)this + 45);
    if ( !v12
      || (v15 = 0LL,
          result = VIDMM_SEGMENT::BlockMemoryRanges((__int64)this, 7u, 18, v12, &v15),
          v2 = result,
          (int)result >= 0) )
    {
      v13 = *(PHYSICAL_ADDRESS *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2440LL);
      *((PHYSICAL_ADDRESS *)this + 30) = v13;
      PagesForMdl = MmAllocatePagesForMdl(0LL, v13, 0LL, 0x1000uLL);
      *((_QWORD *)this + 38) = PagesForMdl;
      if ( !PagesForMdl )
      {
        _InterlockedIncrement(&dword_14008A79C);
        WdLogSingleEntry0(6LL);
        v7 = 595;
        goto LABEL_8;
      }
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 599;
      WdLogSingleEntry4(
        4LL,
        *((_QWORD *)this + 5),
        *((int *)this + 7),
        *((unsigned int *)this + 6),
        *((unsigned __int16 *)this + 35));
      WdLogGlobalForLineNumber = 604;
      VIDMM_SEGMENT::ReportSegment(this);
      return v2;
    }
  }
  return result;
}
