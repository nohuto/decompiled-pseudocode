/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400F2310
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400F21B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003EA70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003F730 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F2AB8 (-Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1400F2F4C (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F454C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400F7D80 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_BLOCK **this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  VIDMM_RECYCLE_MULTIRANGE *v5; // rdx
  __int64 v6; // r13
  int v7; // esi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // di
  __int64 v12; // r8
  __int64 v13; // rcx
  struct VIDMM_RECYCLE_RANGE *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *v17; // r8
  __int64 v18; // rax
  struct VIDMM_RECYCLE_RANGE **v19; // rdx
  _QWORD *v20; // rax
  struct VIDMM_RECYCLE_RANGE *v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  VIDMM_RECYCLE_BLOCK *v27; // rbp
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 *v35; // rdx
  VIDMM_RECYCLE_BLOCK *v36; // rdi
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  bool v47; // [rsp+60h] [rbp-88h]
  char v48; // [rsp+61h] [rbp-87h]
  char v49; // [rsp+62h] [rbp-86h]
  char v50; // [rsp+63h] [rbp-85h]
  char v51; // [rsp+64h] [rbp-84h]
  char v52; // [rsp+65h] [rbp-83h]
  int v53; // [rsp+68h] [rbp-80h] BYREF
  int v54; // [rsp+6Ch] [rbp-7Ch]
  __int64 v55; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+78h] [rbp-70h]
  __int64 v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  _QWORD *v59; // [rsp+90h] [rbp-58h]
  __int64 v60; // [rsp+98h] [rbp-50h]
  bool v62; // [rsp+F8h] [rbp+10h]
  bool v63; // [rsp+100h] [rbp+18h]
  bool v64; // [rsp+108h] [rbp+20h]

  v62 = 0;
  v49 = 0;
  v5 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v6 = *((_QWORD *)a2 + 17);
  v7 = *((_DWORD *)a2 + 16);
  v55 = *((_QWORD *)a2 + 4);
  v56 = *((_QWORD *)a3 + 5);
  v54 = *((_DWORD *)a2 + 23);
  if ( v6 )
  {
    v62 = *(_QWORD *)(v6 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v6 + 72) == a3 )
    {
      v49 = 1;
      v62 = *(_QWORD *)(v6 + 64) == (_QWORD)a2;
    }
  }
  v8 = *((_QWORD *)a2 + 18);
  v63 = 0;
  v50 = 0;
  if ( v8 )
  {
    v63 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v50 = 1;
      v63 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 19);
  v57 = v9;
  v64 = 0;
  v51 = 0;
  if ( v9 )
  {
    v64 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v51 = 1;
      v64 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 20);
  v58 = v10;
  v47 = 0;
  v52 = 0;
  if ( v10 )
  {
    v47 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v52 = 1;
      v47 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v59 = (_QWORD *)*((_QWORD *)a2 + 16);
  v60 = *((_QWORD *)a3 + 15);
  ++*(_QWORD *)this[10];
  v11 = 0;
  v48 = 0;
  v53 = *((_DWORD *)a2 + 20);
  while ( 1 )
  {
    v12 = 1LL;
    v13 = *((_QWORD *)a2 + 15);
    if ( v13 == *((_QWORD *)a2 + 9) + 72LL )
      v14 = 0LL;
    else
      v14 = (struct VIDMM_RECYCLE_RANGE *)(v13 - 120);
    if ( v7 == 3 || (unsigned int)(v7 - 4) < 2 )
    {
      v19 = (struct VIDMM_RECYCLE_RANGE **)*((_QWORD *)a2 + 13);
      v20 = (_QWORD *)((char *)a2 + 104);
      if ( v19[1] != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104)
        || (v21 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 14), *(_QWORD **)v21 != v20) )
      {
LABEL_38:
        __fastfail(3u);
      }
      *(_QWORD *)v21 = v19;
      v19[1] = v21;
      *v20 = 0LL;
      v22 = *((_DWORD *)a2 + 16);
      *((_QWORD *)a2 + 14) = 0LL;
      *((_QWORD *)a2 + 12) = 0LL;
      if ( v22 != 5 )
      {
        if ( (unsigned int)(v22 - 3) > 1
          || (v23 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5),
              (__int64)(v23
                      + _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                          v23)) >= 0)
          || !g_IsInternalRelease )
        {
          v5 = (VIDMM_RECYCLE_MULTIRANGE *)this;
          goto LABEL_12;
        }
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
      }
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(
        *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5),
        (struct VIDMM_RECYCLE_BLOCK *)v19);
      v5 = (VIDMM_RECYCLE_MULTIRANGE *)this;
      v12 = 1LL;
    }
LABEL_12:
    if ( v11 )
    {
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(a2, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v53);
      v5 = (VIDMM_RECYCLE_MULTIRANGE *)this;
    }
    else
    {
      v48 = 1;
    }
    v15 = *(_QWORD *)(*((_QWORD *)v5 + 10) + 32LL);
    v16 = *(_QWORD *)(v15 + 8);
    if ( (byte_14008A202 & 0x40) != 0 )
      McTemplateK0x_EtwWriteTransfer(v15, &EventRecycleRangeDestroy, v12, a2);
    VIDMM_RECYCLE_RANGE::Destroy(a2);
    v18 = *(unsigned int *)(v16 + 1616);
    if ( (unsigned int)v18 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v16 + 1312), a2);
    }
    else
    {
      *(_QWORD *)(v16 + 8 * v18 + 1624) = a2;
      ++*(_DWORD *)(v16 + 1616);
    }
    --*(_DWORD *)(v16 + 1688);
    if ( a2 == a3 )
      break;
    v11 = v48;
    a2 = v14;
    v5 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  }
  while ( 1 )
  {
    v27 = this[10];
    v28 = *(_QWORD *)(*((_QWORD *)v27 + 4) + 8LL);
    v29 = *(_DWORD *)(v28 + 1616);
    if ( v29 )
    {
      v30 = (unsigned int)(v29 - 1);
      v31 = *(_QWORD **)(v28 + 8 * v30 + 1624);
      *(_QWORD *)(v28 + 8 * v30 + 1624) = 0LL;
      --*(_DWORD *)(v28 + 1616);
    }
    else
    {
      v31 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v28 + 1312));
    }
    if ( v31 )
    {
      ++*(_DWORD *)(v28 + 1688);
      v31[4] = v55;
      v31[5] = v56;
      *((_DWORD *)v31 + 6) = 0;
      v31[9] = v27;
      *((_DWORD *)v31 + 16) = 0;
      v31[11] = 3LL;
      v31[12] = 0LL;
      ++*(_QWORD *)v27;
      LeastSignificantBit = RtlFindLeastSignificantBit(v31[4]);
      v33 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
      v31[7] = v33;
      v31[6] = 0LL;
      *((_DWORD *)v31 + 20) = 0;
      v31[13] = 0LL;
      v31[14] = 0LL;
      v31[15] = 0LL;
      v31[16] = 0LL;
      v34 = v31[9];
      v31[17] = 0LL;
      v31[18] = 0LL;
      v31[19] = 0LL;
      v31[20] = 0LL;
      *((_BYTE *)v31 + 168) = 0;
      v35 = *(__int64 **)(v34 + 152);
      if ( v35 )
      {
        v44 = *v35;
        v45 = 144 * v35[1];
        *(_DWORD *)(v45 + v44) = 0;
        *(_QWORD *)(v45 + v44 + 8) = v31;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v45 + v44 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v34 + 152) + 8LL);
        v46 = *(_QWORD *)(v34 + 152);
        if ( *(_QWORD *)(v46 + 8) == *(_QWORD *)(v46 + 48) )
        {
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v34 + 152) + 16LL) = 1;
        }
      }
    }
    v36 = this[10];
    v37 = (*(_QWORD *)v36)-- == 1LL;
    if ( v37 && !*((_QWORD *)v36 + 1) && v36 )
    {
      VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(v36);
      operator delete(v36);
    }
    v38 = v58;
    *((_DWORD *)v31 + 23) = v54;
    *((_DWORD *)v31 + 20) = v53;
    v39 = v57;
    v31[19] = v57;
    *((_DWORD *)v31 + 16) = v7;
    v31[17] = v6;
    v31[18] = v8;
    v31[20] = v38;
    if ( v62 )
      *(_QWORD *)(v6 + 64) = v31;
    if ( v49 )
      *(_QWORD *)(v6 + 72) = v31;
    if ( v63 )
      *(_QWORD *)(v8 + 64) = v31;
    if ( v50 )
      *(_QWORD *)(v8 + 72) = v31;
    if ( v64 )
      *(_QWORD *)(v39 + 64) = v31;
    if ( v51 )
      *(_QWORD *)(v39 + 72) = v31;
    if ( v47 )
      *(_QWORD *)(v38 + 64) = v31;
    if ( v52 )
      *(_QWORD *)(v38 + 72) = v31;
    v40 = v59;
    v31[16] = v59;
    *v40 = v31 + 15;
    v41 = v60;
    v31[15] = v60;
    *(_QWORD *)(v41 + 8) = v31 + 15;
    v7 -= 3;
    if ( v7 )
    {
      if ( --v7 )
        break;
    }
    v24 = *(_QWORD *)(*((_QWORD *)this[10] + 4) + 8LL);
    v31[12] = *(_QWORD *)(v24 + 1576) + (unsigned int)dword_14008A50C;
    v25 = v31 + 13;
    v17 = *(_QWORD **)(v24 + 1552);
    if ( *v17 != v24 + 1544 )
      goto LABEL_38;
    *v25 = v24 + 1544;
    v31[14] = v17;
    *v17 = v25;
    *(_QWORD *)(v24 + 1552) = v25;
    if ( !_InterlockedExchange((volatile __int32 *)(v24 + 1536), 1) && !*(_DWORD *)(v24 + 1584) )
      KeSetTimer((PKTIMER)(v24 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v24 + 1440));
    v26 = v31[5] - v31[4];
    if ( (__int64)(v26
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v26)) >= 0
      || !g_IsInternalRelease )
    {
      goto LABEL_70;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( v7 == 1 )
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v31);
LABEL_70:
  if ( (byte_14008A202 & 0x40) != 0 )
  {
    v42 = (__int64)this[10];
    v43 = *(_QWORD *)(v42 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v43,
      v42,
      (__int64)v17,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 8LL) + 16LL),
      v31,
      v42,
      *(_QWORD *)(v42 + 56),
      v43,
      v31[4],
      v31[5],
      *(_DWORD *)v43,
      *((_DWORD *)v31 + 16));
  }
}
