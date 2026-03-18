/*
 * XREFs of ?LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x14021EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021E6B4 (-EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z @ 0x1404253AC (-DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationGetDirtyBitplane(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int v4; // esi
  __int64 v5; // r15
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r13
  unsigned int i; // r12d
  __int64 v15; // rcx
  char *v16; // rbx
  ADAPTER_RENDER *v17; // rcx
  __int64 v18; // rax
  int DirtyBitData; // eax
  char *v20; // rbx
  size_t v21; // rdi
  char *v22; // r9
  size_t v23; // rdi
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rax
  __int64 v26; // r13
  size_t v27; // r12
  __int64 v28; // rbx
  size_t v29; // rcx
  __int64 v30; // rax
  _BYTE v32[24]; // [rsp+50h] [rbp-29h] BYREF
  _OWORD v33[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v34; // [rsp+88h] [rbp+Fh]
  __int64 v35; // [rsp+98h] [rbp+1Fh]
  _DWORD *v36; // [rsp+E0h] [rbp+67h]

  v2 = a2;
  v4 = 0;
  v35 = 0LL;
  LODWORD(v5) = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, this + 25);
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v7 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v8 = (unsigned int)v7;
  v9 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * v7 + 8);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (v9 & 0x60) || (v9 & 0x2000) != 0 || (v9 & 0x1F) == 0 )
    goto LABEL_7;
  v10 = *((_QWORD *)Current + 35);
  v11 = 2 * v8;
  if ( (*(_BYTE *)(v10 + 8 * v11 + 8) & 0x1F) != 0x14 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(v10 + 8 * v11);
LABEL_8:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    *((_BYTE *)this + 352) = 0;
    if ( !*((_BYTE *)this + 332) )
    {
      v13 = 0LL;
      for ( i = 0; i < *((_DWORD *)this + 42); ++i )
      {
        v15 = 112LL * i;
        v16 = (char *)this[23] + v15 + 32;
        if ( *((_DWORD *)v16 + 18) )
        {
          if ( *((_DWORD *)v16 + 14) )
          {
            RtlClearAllBits((PRTL_BITMAP)((char *)this[23] + v15 + 32));
            v17 = this[1];
            *(_QWORD *)&v33[0] = *((_QWORD *)v16 + 8);
            *(_QWORD *)&v34 = *((_QWORD *)v16 + 1);
            v18 = *((unsigned int *)v16 + 4);
            LODWORD(v35) = v35 | 1;
            *((_QWORD *)&v34 + 1) = v18;
            DirtyBitData = ADAPTER_RENDER::DdiQueryDirtyBitData(v17, (struct _DXGKARG_QUERYDIRTYBITDATA *)v33);
            v5 = DirtyBitData;
            if ( DirtyBitData < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 587;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"LiveMigrationGetDirtyBitplane DDI call failed with status 0x%I64x",
                v5,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_41;
            }
          }
          else
          {
            LODWORD(v5) = DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation((DXGK_VIRTUAL_GPU_GPUP *)this, i);
            if ( (int)v5 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 570;
              goto LABEL_41;
            }
            RtlSetAllBits((PRTL_BITMAP)v16);
          }
          v13 += RtlNumberOfSetBits((PRTL_BITMAP)v16);
        }
      }
      *((_BYTE *)this + 332) = 1;
      if ( !v13 )
        *((_BYTE *)this + 352) = 1;
    }
    v20 = *(char **)(v12 + 8);
    v21 = *(_QWORD *)(v12 + 16);
    memset(v20, 0, v21);
    *(_DWORD *)v20 = 1;
    v22 = v20 + 4;
    v36 = v20 + 4;
    v23 = v21 - 4;
    while ( v23 )
    {
      v24 = *((unsigned int *)this + 82);
      if ( (unsigned int)v24 >= *((_DWORD *)this + 42) )
        break;
      v25 = this[23];
      v26 = 112 * v24;
      if ( *((_DWORD *)v25 + 28 * v24 + 26) )
      {
        v5 = (__int64)this[23];
        v27 = v23;
        v28 = *(_DWORD *)((char *)v25 + v26 + 108) >> 3;
        v29 = (unsigned int)(*(_DWORD *)((char *)v25 + v26 + 48) - v28);
        v30 = *(_QWORD *)((char *)v25 + v26 + 40);
        if ( v23 >= v29 )
          v27 = v29;
        memmove(v22, (const void *)(v30 + 4 * v28), v27);
        *(_DWORD *)(v5 + v26 + 108) += 8 * v27;
        if ( (unsigned int)(v27 + v28) >= *(_DWORD *)(v5 + v26 + 48) )
        {
          *(_DWORD *)(v5 + v26 + 108) = 0;
          LODWORD(v5) = 0;
        }
        else
        {
          LODWORD(v5) = 261;
        }
        if ( v23 < v27 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 622;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"SizeRemaining >= BytesCopied",
            622LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v23 -= v27;
        v22 = (char *)v36 + v27;
        v36 = (_DWORD *)((char *)v36 + v27);
        if ( !(_DWORD)v5 )
          ++*((_DWORD *)this + 82);
      }
      else
      {
        *((_DWORD *)this + 82) = v24 + 1;
      }
    }
    if ( *((_DWORD *)this + 82) == *((_DWORD *)this + 42) )
    {
      *((_DWORD *)this + 82) = 0;
      *((_BYTE *)this + 332) = 0;
    }
LABEL_41:
    v4 = v5;
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, 0LL);
    WdLogGlobalForLineNumber = 542;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hBuffer (0x%I64x), returning 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  return v4;
}
