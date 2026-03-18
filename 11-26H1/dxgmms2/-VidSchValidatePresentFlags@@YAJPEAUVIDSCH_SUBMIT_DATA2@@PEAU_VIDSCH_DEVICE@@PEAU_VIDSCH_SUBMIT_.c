/*
 * XREFs of ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x140004C00
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x140005B80 (VidSchSubmitCommandContextless.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x140005A84 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // eax
  __int64 v5; // r15
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int128 v12; // xmm0
  __int64 v13; // r12
  __int64 v14; // r13
  __int128 v15; // xmm1
  bool v16; // zf
  bool v17; // si
  char *v18; // rdx
  unsigned int v19; // edi
  unsigned int v20; // esi
  unsigned int v21; // edi
  int v22; // eax
  char v23; // cl
  int v24; // r13d
  int v25; // eax
  unsigned int v26; // r12d
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // ebx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // cl
  int v37; // eax
  __int64 result; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // edx
  void (__fastcall *v42)(_QWORD, __int64, __int64, const wchar_t *, __int64, struct _VIDSCH_DEVICE *, _QWORD, __int64, _QWORD); // rax
  unsigned int i; // edx
  __int64 v44; // r8
  unsigned int v45; // r11d
  int v46; // eax
  int v47; // r8d
  char v48[8]; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+38h] [rbp-C8h]
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+54h] [rbp-ACh]
  char v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v56[2]; // [rsp+68h] [rbp-98h] BYREF
  char v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ch] [rbp-84h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  _QWORD *v60; // [rsp+88h] [rbp-78h]
  char *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v64; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+D8h] [rbp-28h]
  __int128 v67; // [rsp+E8h] [rbp-18h]
  __int128 Source2; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v69; // [rsp+108h] [rbp+8h] BYREF

  v3 = *(_DWORD *)a3;
  v5 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
  {
    v39 = v3 & 0xFFFFFF7F;
    *(_DWORD *)a3 = v39;
    v40 = *((unsigned int *)a2 + 128);
    v41 = *((_DWORD *)a1 + 29);
    if ( (_DWORD)v40 == -1 )
    {
      *((_DWORD *)a2 + 128) = v41;
      *(_DWORD *)a3 |= 0x1000u;
    }
    else
    {
      if ( (_DWORD)v40 != v41 )
      {
        WdLogSingleEntry4(1LL, v5, a2, v41, v40);
        v50 = *((unsigned int *)a2 + 128);
        *(_QWORD *)v48 = *((unsigned int *)a1 + 29);
        v42 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, struct _VIDSCH_DEVICE *, _QWORD, __int64, _QWORD))DxgCoreInterface[88];
        WdLogGlobalForLineNumber = 6486;
        v42(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid VidPnSourceId (Check 2)", v5, a2, *(_QWORD *)v48, v50, 0LL);
        return 3221225485LL;
      }
      *(_DWORD *)a3 = v39 | 0x2000;
    }
  }
  else
  {
    v8 = *((unsigned int *)a2 + 128);
    if ( (_DWORD)v8 == -1 )
    {
      *(_DWORD *)a3 = v3 | 0x7000;
    }
    else if ( (_DWORD)v8 == *((_DWORD *)a1 + 29) )
    {
      *(_DWORD *)a3 = v3 | 0x4000;
    }
    else
    {
      WdLogSingleEntry4(1LL, v5, a2, *((unsigned int *)a1 + 29), v8);
      v51 = *((unsigned int *)a2 + 128);
      v49 = *((unsigned int *)a1 + 29);
      WdLogGlobalForLineNumber = 6512;
      DxgkLogInternalTriageEvent(
        v49,
        0x40000,
        v47,
        (unsigned int)L"Invalid VidPnSourceId (Check 3)",
        v5,
        (__int64)a2,
        v49,
        v51);
    }
    *((_DWORD *)a2 + 128) = -1;
  }
  if ( (*(_DWORD *)a3 & 4) == 0 )
    return 0LL;
  v9 = VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)v5, 9, (*(_DWORD *)a1 & 0x20000000) != 0, 0);
  if ( v9 < 0 )
  {
LABEL_42:
    WdLogSingleEntry0(3LL);
    result = (unsigned int)v9;
    WdLogGlobalForLineNumber = 6542;
    return result;
  }
  v10 = *((unsigned int *)a1 + 29);
  v11 = *(_DWORD *)a1;
  v12 = *(_OWORD *)((char *)a1 + 436);
  v53 = v10;
  v13 = (unsigned int)v10;
  v14 = *(_QWORD *)(v5 + 8 * v10 + 3448);
  v15 = *(_OWORD *)((char *)a1 + 452);
  LOBYTE(v10) = (*(_DWORD *)a1 & 0x800000) != 0;
  v59 = v14;
  v54 = v10;
  Source2 = v12;
  v9 = v11 >> 31;
  v69 = v15;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 2016), &LockHandle);
  v16 = (_BYTE)v9 == *(_BYTE *)(v14 + 3200);
  *(_BYTE *)(v14 + 3200) = v9;
  v17 = !v16;
  if ( (_BYTE)v9
    && (RtlCompareMemory((const void *)(v14 + 3204), &Source2, 0x10uLL) != 16
     || RtlCompareMemory((const void *)(v14 + 3220), &v69, 0x10uLL) != 16) )
  {
    *(_OWORD *)(v14 + 3204) = Source2;
    *(_OWORD *)(v14 + 3220) = v69;
LABEL_37:
    for ( i = 0; i < *(_DWORD *)(v5 + 160); ++i )
    {
      v44 = *(int *)(304LL * i + *(_QWORD *)(v5 + 8 * v13 + 3448) + 188);
      if ( (int)v44 > -1 && *(_DWORD *)(160 * v44 + *(_QWORD *)(v5 + 3576) + 112) == 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, 0LL, v13, v5);
        WdLogGlobalForLineNumber = 916;
        goto LABEL_42;
      }
    }
    goto LABEL_9;
  }
  if ( v17 )
    goto LABEL_37;
LABEL_9:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v18 = (char *)a1 + 600;
  v19 = *((_DWORD *)a1 + 150);
  v20 = v19 & 0x3FF;
  v61 = v18;
  if ( *(_BYTE *)(v5 + 164) )
    v21 = (v19 >> 10) & 0x3FF;
  else
    v21 = 0;
  v16 = !_BitScanForward((unsigned int *)&v22, v20);
  v23 = -1;
  v24 = 0;
  if ( !v16 )
    v23 = v22;
  v16 = !_BitScanForward((unsigned int *)&v25, v21);
  v26 = v23;
  LOBYTE(v27) = -1;
  if ( !v16 )
    LOBYTE(v27) = v25;
  v27 = (char)v27;
  v52 = (char)v27;
  v60 = (_QWORD *)(v5 + 8 * (v53 + 431LL));
  while ( v20 || v21 )
  {
    if ( v26 >= v27 )
    {
      v46 = 1 << v27;
      LOBYTE(v27) = -1;
      v21 &= ~v46;
      v16 = !_BitScanForward((unsigned int *)&v46, v21);
      if ( !v16 )
        LOBYTE(v27) = v46;
      v27 = (char)v27;
      v52 = (char)v27;
    }
    else
    {
      v28 = 8 * v24 * (*((_DWORD *)v18 + 2) + 28);
      v29 = *(_DWORD *)&v18[v28 + 200];
      v66 = *(_OWORD *)&v18[v28 + 168];
      v30 = *(_OWORD *)&v18[v28 + 184];
      v64 = 0;
      v62 = v5 + 2016;
      v67 = v30;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 2016), &v63);
      v31 = v67;
      LOBYTE(v64) = 1;
      v55 = v5;
      v56[1] = v56;
      v56[0] = v56;
      v57 = 0;
      v58 = 2;
      v32 = 304LL * v26;
      v33 = v59;
      *(_OWORD *)(v32 + v59 + 152) = v66;
      *(_OWORD *)(v32 + v33 + 168) = v31;
      *(_DWORD *)(v32 + v33 + 184) = v29;
      v34 = *(int *)(v32 + *v60 + 188);
      if ( (int)v34 > -1 )
      {
        v35 = *(_QWORD *)(v5 + 3576) + 160 * v34;
        if ( v35 )
        {
          if ( *(_DWORD *)(v35 + 112) == 1 )
          {
            *(_BYTE *)(v35 + 108) = v54;
            *(_BYTE *)(v35 + 96) = 1;
            if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v5, v53, v26) )
              VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v55, (struct _VIDSCH_GLOBAL *)v5, v45, v26);
          }
        }
      }
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v55);
      if ( (_BYTE)v64 )
      {
        if ( HIBYTE(v64) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v63);
        else
          KeReleaseInStackQueuedSpinLock(&v63);
      }
      v18 = v61;
      v36 = -1;
      v20 &= ~(1 << v26);
      v16 = !_BitScanForward((unsigned int *)&v37, v20);
      if ( !v16 )
        v36 = v37;
      v26 = v36;
      v27 = v52;
    }
    ++v24;
  }
  return 0LL;
}
