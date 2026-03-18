/*
 * XREFs of ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1403A86A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmDestroyDirtyBitplane@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14006D25C (-VidMmDestroyDirtyBitplane@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DIRTY_BITPLANE@@@Z.c)
 *     ?BuildDirtyBitplaneFromTransportBuffer@DXGK_DIRTY_BITPLANE@@QEAAJPEAE_KPEA_K@Z @ 0x140083D08 (-BuildDirtyBitplaneFromTransportBuffer@DXGK_DIRTY_BITPLANE@@QEAAJPEAE_KPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?UpdateLiveMigrationAllocIndex@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x140193944 (-UpdateLiveMigrationAllocIndex@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 *     ?GetLiveMigrationBitplaneHeaderSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z @ 0x14021E74C (-GetLiveMigrationBitplaneHeaderSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationTransferDirtyContent(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  DXGK_VIRTUAL_GPU_GPUP *v16; // rcx
  _DWORD *v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // rdi
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  unsigned int LiveMigrationBitplaneHeaderSize; // eax
  unsigned __int8 *v27; // rbp
  size_t v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rsi
  int v33; // r14d
  int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-88h]
  _BYTE v39[88]; // [rsp+50h] [rbp-58h] BYREF
  struct VIDMM_DIRTY_BITPLANE *v40; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp+20h] BYREF

  v4 = a2;
  *a4 = 0LL;
  v40 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v39, (struct _KTHREAD **)(a1 + 200));
  Current = DXGPROCESS::GetCurrent(v8);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)Current + 74) )
  {
    v11 = (unsigned int)v10;
    v12 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * v10 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
    {
      v13 = *((_QWORD *)Current + 35);
      v14 = 2 * v11;
      if ( (*(_BYTE *)(v13 + 8 * v14 + 8) & 0x1F) == 0x14 )
      {
        v15 = *(_QWORD *)(v13 + 8 * v14);
        goto LABEL_7;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v15 = 0LL;
LABEL_7:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    LODWORD(v22) = -1073741811;
    WdLogSingleEntry2(2LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 730;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hBuffer (0x%I64x), returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_16;
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 333) )
    {
      *(_BYTE *)(a1 + 332) = 1;
      *(_BYTE *)(a1 + 352) = 0;
      v24 = *(unsigned int **)(v15 + 8);
      v25 = *v24;
      if ( (unsigned int)v25 > 1 )
      {
        LODWORD(v22) = -1073741811;
        WdLogSingleEntry2(2LL, v25, -1073741811LL);
        v38 = *v24;
        WdLogGlobalForLineNumber = 748;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid Bitplane Header Version (0x%I64x), returning 0x%I64x",
          v38,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_16;
      }
      v41 = 0LL;
      LiveMigrationBitplaneHeaderSize = DXGK_VIRTUAL_GPU_GPUP::GetLiveMigrationBitplaneHeaderSize(v16, v25);
      v27 = (unsigned __int8 *)(LiveMigrationBitplaneHeaderSize + *(_QWORD *)(v15 + 8));
      v28 = *(_QWORD *)(v15 + 16) - LiveMigrationBitplaneHeaderSize;
      while ( v28 )
      {
        v29 = *(unsigned int *)(a1 + 328);
        if ( (unsigned int)v29 >= *(_DWORD *)(a1 + 168) )
          break;
        v30 = *(_QWORD *)(a1 + 184) + 32LL + 112 * v29;
        if ( *(_DWORD *)(v30 + 72) )
        {
          v31 = DXGK_DIRTY_BITPLANE::BuildDirtyBitplaneFromTransportBuffer((struct _RTL_BITMAP *)v30, v27, v28, &v41);
          v32 = v41;
          v33 = v31;
          if ( v28 < v41 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 767;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"SizeRemaining >= BytesCopied",
              767LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v28 -= v32;
          v27 += v32;
          if ( !v33 )
            ++*(_DWORD *)(a1 + 328);
        }
        else
        {
          *(_DWORD *)(a1 + 328) = v29 + 1;
        }
      }
      v34 = *(_DWORD *)(a1 + 168);
      if ( *(_DWORD *)(a1 + 328) == v34 )
      {
        *(_DWORD *)(a1 + 328) = 0;
        v35 = 0LL;
        *(_BYTE *)(a1 + 333) = 1;
        v36 = 0;
        if ( !v34 )
          goto LABEL_40;
        do
        {
          v37 = *(_QWORD *)(a1 + 184) + 32LL + 112LL * v36;
          if ( *(_DWORD *)(v37 + 72) )
            v35 += RtlNumberOfSetBits((PRTL_BITMAP)v37);
          ++v36;
        }
        while ( v36 < *(_DWORD *)(a1 + 168) );
        if ( !v35 )
LABEL_40:
          *(_BYTE *)(a1 + 352) = 1;
      }
LABEL_43:
      LODWORD(v22) = 0;
      goto LABEL_16;
    }
    *(_BYTE *)(a1 + 332) = 0;
  }
  else
  {
    memset(*(void **)(v15 + 8), 0, *(_QWORD *)(v15 + 16));
  }
  DXGK_VIRTUAL_GPU_GPUP::UpdateLiveMigrationAllocIndex((DXGK_VIRTUAL_GPU_GPUP *)a1);
  v17 = (_DWORD *)(a1 + 328);
  v18 = *(unsigned int *)(a1 + 328);
  if ( (_DWORD)v18 == *(_DWORD *)(a1 + 168) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 829;
    *v17 = 0;
LABEL_42:
    *(_BYTE *)(a1 + 333) = 0;
    goto LABEL_43;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct VIDMM_DIRTY_BITPLANE **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL) + 8LL)
                                                                                           + 1232LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
          112 * v18 + *(_QWORD *)(a1 + 184) + 32LL,
          *(_QWORD *)(v15 + 16),
          &v40);
  v20 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 842;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidMmCreateDirtyBitplane call failed with status 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v22) = v20;
    goto LABEL_16;
  }
  if ( !v19 )
    ++*v17;
  v21 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_DIRTY_BITPLANE *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL) + 8LL) + 1248LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
          v40,
          a3,
          *(_QWORD *)(v15 + 32),
          a4);
  v22 = v21;
  if ( v21 >= 0 )
  {
    VIDMM_EXPORT::VidMmDestroyDirtyBitplane(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL),
      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 768LL),
      v40);
    DXGK_VIRTUAL_GPU_GPUP::UpdateLiveMigrationAllocIndex((DXGK_VIRTUAL_GPU_GPUP *)a1);
    if ( *v17 != *(_DWORD *)(a1 + 168) )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 884;
      LODWORD(v22) = 261;
      goto LABEL_16;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 877;
    *(_DWORD *)(a1 + 328) = 0;
    goto LABEL_42;
  }
  (*(void (__fastcall **)(_QWORD, struct VIDMM_DIRTY_BITPLANE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL)
                                                                                        + 760LL)
                                                                            + 8LL)
                                                                + 1240LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
    v40);
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 861;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"VidMmTransferDirtyContentForLiveMigration call failed with status 0x%I64x",
    v22,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_16:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  return (unsigned int)v22;
}
