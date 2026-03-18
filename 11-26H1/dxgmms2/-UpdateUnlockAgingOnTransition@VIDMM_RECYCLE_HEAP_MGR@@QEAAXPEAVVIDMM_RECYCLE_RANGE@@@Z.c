/*
 * XREFs of ?UpdateUnlockAgingOnTransition@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010FA88
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z @ 0x1400AD068 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAEK@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003D9B4 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003F730 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateUnlockAgingOnTransition(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v2; // rdi
  struct VIDMM_RECYCLE_RANGE **v4; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v6; // rax
  int v7; // eax
  VIDMM_RECYCLE_HEAP_MGR **v8; // rcx
  unsigned __int64 v9; // rcx

  v2 = (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104);
  v4 = (struct VIDMM_RECYCLE_RANGE **)*((_QWORD *)a2 + 13);
  if ( v4[1] != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104) )
    goto LABEL_7;
  v6 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)a2 + 14);
  if ( *v6 != v2 )
    goto LABEL_7;
  *v6 = (VIDMM_RECYCLE_HEAP_MGR *)v4;
  v4[1] = (struct VIDMM_RECYCLE_RANGE *)v6;
  v7 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 14) = 0LL;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  if ( v7 == 5 )
  {
    VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5), a2);
  }
  else if ( (unsigned int)(v7 - 3) <= 1 )
  {
    VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5), a2);
  }
  *((_QWORD *)a2 + 12) = *((_QWORD *)this + 197) + (unsigned int)dword_14008A50C;
  v8 = (VIDMM_RECYCLE_HEAP_MGR **)*((_QWORD *)this + 194);
  if ( *v8 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
LABEL_7:
    __fastfail(3u);
  *(_QWORD *)v2 = (char *)this + 1544;
  *((_QWORD *)v2 + 1) = v8;
  *v8 = v2;
  *((_QWORD *)this + 194) = v2;
  if ( !_InterlockedExchange((volatile __int32 *)this + 384, 1) && !*((_DWORD *)this + 396) )
    KeSetTimer((PKTIMER)((char *)this + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1440));
  v9 = *((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4);
  if ( (__int64)(v9
               + _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                   v9)) < 0
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x14010FBEALL);
  }
}
