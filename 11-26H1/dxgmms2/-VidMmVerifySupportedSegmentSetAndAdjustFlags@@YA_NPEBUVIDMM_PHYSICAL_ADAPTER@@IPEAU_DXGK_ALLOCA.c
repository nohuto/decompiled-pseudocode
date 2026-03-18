/*
 * XREFs of ?VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K2_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x140110DC0
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmCheckAnySegmentAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x1401111EC (-VidMmCheckAnySegmentAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z.c)
 *     ?VidMmCheckAllSegmentsAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x140111240 (-VidMmCheckAllSegmentsAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z.c)
 */

bool __fastcall VidMmVerifySupportedSegmentSetAndAdjustFlags(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        bool a6,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a7)
{
  int v7; // ebx
  int v8; // r12d
  int v9; // edi
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v14; // rsi
  __int64 v15; // rax
  UINT Value; // ecx
  bool v17; // zf
  bool result; // al
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int i; // edx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax

  v7 = 0;
  v8 = a2 & *((_DWORD *)a1 + 24);
  v9 = a2 & ~*((_DWORD *)a1 + 24);
  if ( (a3->Value & 0x40000) != 0 && v9 )
  {
    WdLogSingleEntry0(1LL);
    v20 = 12205;
    goto LABEL_18;
  }
  if ( (a3->Value & 0x20000) != 0 )
  {
    if ( VidMmCheckAllSegmentsAllFlags(a1, a2, (struct _DXGK_SEGMENTFLAGS)0x10000) )
    {
      if ( v8 )
      {
        WdLogSingleEntry0(1LL);
        v20 = 12254;
        goto LABEL_18;
      }
      for ( i = a2; i; i &= ~(1 << v23) )
      {
        _BitScanForward((unsigned int *)&v23, i);
        v24 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v23);
        v25 = v24 + 56;
        if ( !v24 )
          v25 = 48LL;
        if ( a4 > *(_QWORD *)v25 )
        {
          WdLogSingleEntry0(1LL);
          v20 = 12270;
          goto LABEL_18;
        }
        v26 = v24 + 64;
        if ( !v24 )
          v26 = 56LL;
        if ( (*(_DWORD *)v26 & 0x20) != 0 )
        {
          WdLogSingleEntry0(1LL);
          v20 = 12276;
          goto LABEL_18;
        }
      }
    }
    else
    {
      v21 = *(unsigned int *)(*((_QWORD *)a1 + 8) + 16LL);
      if ( (v21 & 0x10) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v20 = 12246;
        goto LABEL_18;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v21);
        WdLogGlobalForLineNumber = 12225;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 7) + 24LL) + 420LL) != 1297040209 )
        a3->Value &= ~0x20000u;
    }
  }
  if ( !VidMmCheckAnySegmentAllFlags(a1, a2, (struct _DXGK_SEGMENTFLAGS)32) )
  {
    v14 = a7;
    *(_DWORD *)a7 &= ~4u;
    goto LABEL_7;
  }
  if ( a5 )
  {
    if ( a5 < a4 )
    {
      WdLogSingleEntry0(1LL);
      v20 = 12303;
      goto LABEL_18;
    }
    v14 = a7;
    *(_DWORD *)a7 |= 4u;
LABEL_7:
    if ( (a3->Value & 0x800004) == 4 )
    {
      v15 = *((_QWORD *)a1 + 7);
      if ( *(_BYTE *)(v15 + 7042) )
      {
        if ( !VidMmCheckAllSegmentsAllFlags(a1, a2, (struct _DXGK_SEGMENTFLAGS)16) )
        {
          WdLogSingleEntry0(1LL);
          v20 = 12339;
          goto LABEL_18;
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 444LL) & 8) == 0 && v9 )
      {
        WdLogSingleEntry0(1LL);
        v20 = 12347;
        goto LABEL_18;
      }
    }
    Value = a3->Value;
    if ( (a3->Value & 0x20000001) == 0x20000001 && v9 && (Value & 0x200) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v20 = 12362;
      goto LABEL_18;
    }
    if ( (Value & 0x100000) != 0 && v9 )
    {
      WdLogSingleEntry0(1LL);
      v20 = 12372;
      goto LABEL_18;
    }
    if ( (Value & 0x4000) != 0 && v9 )
    {
      WdLogSingleEntry0(1LL);
      v20 = 12381;
      goto LABEL_18;
    }
    if ( a6 && (Value & 1) != 0 )
    {
      v17 = v9 == 0;
      if ( v9 )
      {
        WdLogSingleEntry0(1LL);
        v20 = 12395;
        goto LABEL_18;
      }
    }
    else
    {
      v17 = v9 == 0;
    }
    LOBYTE(v7) = v17;
    result = 1;
    *(_DWORD *)v14 = (v8 != 0 ? 2 : 0) | *(_DWORD *)v14 & 0xFFFFFFFC | v7 & 0xFFFFFFFD;
    return result;
  }
  WdLogSingleEntry0(1LL);
  v20 = 12297;
LABEL_18:
  WdLogGlobalForLineNumber = v20;
  DxgkLogInternalTriageEvent(v19, 0x40000LL);
  return 0;
}
