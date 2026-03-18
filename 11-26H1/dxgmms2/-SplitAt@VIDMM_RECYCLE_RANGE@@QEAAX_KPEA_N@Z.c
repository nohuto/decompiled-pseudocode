/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400EFF20
 * Callers:
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1400ADBBC (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400EDFB0 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400F4754 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_GLO.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003EA70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003F730 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F454C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140109FF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010BFB8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14010C08C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // r12
  __int64 v9; // rax
  bool v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  CCHAR LeastSignificantBit; // al
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 *v24; // rdx
  _DWORD *v25; // rsi
  __int64 v26; // rcx
  char *v27; // rcx
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct VIDMM_RECYCLE_BLOCK *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  bool v42; // [rsp+C0h] [rbp+8h]
  bool v44; // [rsp+D0h] [rbp+18h]
  __int64 v45; // [rsp+D8h] [rbp+20h]

  *a3 = 1;
  v5 = a3;
  v42 = 0;
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
    v42 = *(_QWORD *)(v6 + 72) == (_QWORD)this;
  v7 = *((_QWORD *)this + 18);
  v8 = 0;
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v44 = 0;
  if ( v11 )
    v44 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  LODWORD(v12) = *((_DWORD *)this + 22);
  if ( (_DWORD)v12 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), (unsigned int)v12, this);
  v13 = (_QWORD *)*((_QWORD *)this + 9);
  v14 = *((_QWORD *)this + 5);
  v15 = a2 + *((_QWORD *)this + 4);
  v45 = v14;
  v41 = v15;
  v16 = *(_QWORD *)(v13[4] + 8LL);
  v17 = *(_DWORD *)(v16 + 1616);
  if ( v17 )
  {
    v18 = (unsigned int)(v17 - 1);
    v19 = *(_QWORD **)(v16 + 8 * v18 + 1624);
    *(_QWORD *)(v16 + 8 * v18 + 1624) = 0LL;
    --*(_DWORD *)(v16 + 1616);
  }
  else
  {
    v29 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v16 + 1312));
    v14 = v45;
    v19 = v29;
    v15 = v41;
  }
  if ( v19 )
  {
    ++*(_DWORD *)(v16 + 1688);
    v5 = 0LL;
    v19[4] = v15;
    *((_DWORD *)v19 + 6) = 0;
    *((_DWORD *)v19 + 16) = 0;
    v19[12] = 0LL;
    v19[9] = v13;
    v19[5] = v14;
    v19[11] = 3LL;
    ++*v13;
    LeastSignificantBit = RtlFindLeastSignificantBit(v19[4]);
    if ( LeastSignificantBit < 0 )
      v22 = 0LL;
    else
      v22 = 1LL << LeastSignificantBit;
    v19[7] = v22;
    v12 = v19 + 15;
    v19[6] = 0LL;
    *((_DWORD *)v19 + 20) = 0;
    v19[13] = 0LL;
    v19[14] = 0LL;
    v19[15] = 0LL;
    v19[16] = 0LL;
    v23 = v19[9];
    v19[17] = 0LL;
    v19[18] = 0LL;
    v19[19] = 0LL;
    v19[20] = 0LL;
    *((_BYTE *)v19 + 168) = 0;
    v24 = *(__int64 **)(v23 + 152);
    if ( v24 )
    {
      v36 = *v24;
      v37 = 144 * v24[1];
      *(_DWORD *)(v37 + v36) = 0;
      *(_QWORD *)(v37 + v36 + 8) = v19;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v37 + v36 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v23 + 152) + 8LL);
      v38 = *(_QWORD *)(v23 + 152);
      if ( *(_QWORD *)(v38 + 8) == *(_QWORD *)(v38 + 48) )
      {
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v23 + 152) + 16LL) = 1;
      }
    }
    v25 = (_DWORD *)((char *)this + 64);
    *((_DWORD *)v19 + 16) = *((_DWORD *)this + 16);
    *((_DWORD *)v19 + 23) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v26 = *((_QWORD *)this + 15);
    *(_QWORD *)(v26 + 8) = v12;
    *((_QWORD *)this + 15) = v12;
    v19[16] = (char *)this + 120;
    *v12 = v26;
    v19[17] = *((_QWORD *)this + 17);
    v19[18] = *((_QWORD *)this + 18);
    v19[19] = *((_QWORD *)this + 19);
    v19[20] = *((_QWORD *)this + 20);
    *((_DWORD *)v19 + 20) = *((_DWORD *)this + 20);
    *((_BYTE *)v19 + 84) = *((_BYTE *)this + 84);
    if ( v42 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v19;
    v27 = (char *)this + 64;
    if ( v8 )
    {
      v27 = (char *)this + 64;
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v19;
    }
    if ( v10 )
    {
      v25 = v27;
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v19;
    }
    if ( v44 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v19;
    if ( *v25 != 3 )
    {
      v28 = (unsigned int)(*v25 - 4);
      if ( *v25 != 4 )
      {
        if ( *v25 == 5 )
        {
          VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
            (struct VIDMM_RECYCLE_RANGE *)v19);
          VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(v19[4] - v19[5], v35);
        }
        goto LABEL_29;
      }
    }
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v19);
    v28 = v19[4] - v19[5];
    if ( (__int64)(v28
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v28)) >= 0
      || !g_IsInternalRelease )
    {
      v25 = (_DWORD *)((char *)this + 64);
LABEL_29:
      if ( (byte_14008A202 & 0x40) != 0 )
      {
        McTemplateK0x_EtwWriteTransfer(v28, &EventRecycleRangeDestroy, v21, this);
        if ( (byte_14008A202 & 0x40) != 0 )
        {
          v31 = *((_QWORD *)this + 9);
          McTemplateK0pppppppqq_EtwWriteTransfer(
            *(_QWORD *)(v31 + 32),
            v31,
            v30,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL) + 8LL) + 16LL),
            this,
            v31,
            *(_QWORD *)(v31 + 56),
            *(_QWORD *)(v31 + 32),
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5),
            **(_DWORD **)(v31 + 32),
            *v25);
          if ( (byte_14008A202 & 0x40) != 0 )
          {
            v33 = *((_QWORD *)this + 9);
            v34 = *(_QWORD *)(v33 + 32);
            LODWORD(v40) = *((_DWORD *)v19 + 16);
            LODWORD(v39) = *(_DWORD *)v34;
            McTemplateK0pppppppqq_EtwWriteTransfer(
              v34,
              v33,
              v32,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 8LL) + 16LL),
              v19,
              v33,
              *(_QWORD *)(v33 + 56),
              v34,
              v19[4],
              v19[5],
              v39,
              v40);
          }
        }
      }
      return;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  WdLogSingleEntry2(
    3LL,
    this,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL) + 16LL));
  WdLogGlobalForLineNumber = 2036;
  if ( (_DWORD)v12 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), (unsigned int)v12, this);
  *v5 = 0;
}
