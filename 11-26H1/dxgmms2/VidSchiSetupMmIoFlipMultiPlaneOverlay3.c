/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x140018B30
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140017FD0 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14001A020 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14001C390 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // eax
  unsigned int v10; // r11d
  __int64 v13; // rbx
  int v14; // r10d
  int v15; // ecx
  _DWORD **v16; // r9
  unsigned int v17; // ebp
  unsigned int v18; // r15d
  char v19; // di
  unsigned __int64 v20; // r12
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // r11
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  bool v28; // zf
  int v29; // eax
  char v30; // cl
  __int64 v31; // rdi
  unsigned int v32; // r8d
  char v33; // cl
  int v34; // eax
  unsigned int v35; // r10d
  unsigned __int8 v36; // dl
  int v37; // eax
  __int128 v38; // xmm0
  __int64 result; // rax
  __int64 v40; // rax
  unsigned int *v41; // rbx
  __int64 v42; // rcx
  char v43; // r9
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // r10d
  int v48; // r9d
  unsigned __int64 v49; // r11
  __int64 v50; // rdx
  __int64 v51; // r8
  char v52; // cl
  int v53; // eax
  unsigned int v54; // eax
  int v55; // ecx
  __int64 v56; // rdx
  int v57; // ecx
  __int64 v58; // rax
  char v59; // cl
  int v60; // eax
  __int64 v61; // r8
  unsigned __int64 v62; // r9
  int v63; // edx
  int v64; // eax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int64 v70; // rax
  char v71; // dl
  int v72; // ecx
  unsigned __int64 v73; // rax
  unsigned int v74; // r8d
  int v75; // r9d
  char v76; // dl
  int v77; // eax
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned __int64 v79; // rax
  unsigned int v80; // [rsp+30h] [rbp-88h]
  unsigned int v81; // [rsp+34h] [rbp-84h]
  __int64 v82; // [rsp+38h] [rbp-80h]
  __int64 v83; // [rsp+40h] [rbp-78h]
  unsigned __int64 v84; // [rsp+48h] [rbp-70h]
  __int64 v85; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  char v87; // [rsp+C0h] [rbp+8h]
  unsigned int v88; // [rsp+C8h] [rbp+10h]
  unsigned int v90; // [rsp+D8h] [rbp+20h]
  __int64 v91; // [rsp+D8h] [rbp+20h]

  v8 = *(_DWORD *)(a4 + 12);
  v10 = a3;
  v13 = *((_QWORD *)a1 + a3 + 431);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v82 = v13;
  v14 = v8 ^ (*(_DWORD *)(a2 + 1152) ^ v8) & 1;
  *(_DWORD *)(a4 + 12) = v14;
  v15 = v14 ^ (*(_DWORD *)(a2 + 1152) ^ v14) & 2;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 12) = v15 ^ (*(_DWORD *)(a2 + 1152) ^ v15) & 4;
  v16 = (_DWORD **)(a2 + 1192);
  v83 = a2 + 1192;
  if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
  {
    v17 = **v16 & 0x3FF;
    v18 = (**v16 >> 10) & 0x3FF;
  }
  else
  {
    v17 = 1;
    v83 = a2 + 1192;
    v18 = ((1 << *((_DWORD *)a1 + 40)) - 1) & 0xFFFFFFFE;
  }
  v19 = 0;
  v20 = 0LL;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1156);
  if ( *((_BYTE *)a1 + 7073) )
  {
    v21 = *(_DWORD *)(a2 + 1156);
    if ( !v21 || v21 == *(_DWORD *)(v13 + 83096) )
    {
      v22 = *(_DWORD *)(v13 + 3192);
      if ( v22 )
      {
        if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
          v75 = ((unsigned __int16)**v16 | (unsigned __int16)(**v16 >> 10)) & 0x3FF;
        else
          v75 = (1 << *((_DWORD *)a1 + 40)) - 1;
        if ( _bittest(&v75, *(_DWORD *)(v13 + 3196)) )
        {
          if ( v22 != v21 )
          {
            v19 = 1;
            CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, v10, 0);
            v10 = a3;
            v20 = CurrentVSyncPeriodQpc;
          }
          *(_DWORD *)(v13 + 3192) = *(_DWORD *)(a2 + 1156);
          goto LABEL_92;
        }
        *(_DWORD *)(a4 + 40) = v22;
      }
    }
    else if ( v17 )
    {
      if ( *(_DWORD *)(v13 + 3192) != v21 )
      {
        v19 = 1;
        v70 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
        v10 = a3;
        v20 = v70;
      }
      v71 = -1;
      *(_DWORD *)(v13 + 3192) = *(_DWORD *)(a2 + 1156);
      v28 = !_BitScanForward((unsigned int *)&v72, v17);
      if ( !v28 )
        v71 = v72;
      *(_DWORD *)(v13 + 3196) = v71;
LABEL_92:
      if ( v19 && *((_BYTE *)a1 + 7074) )
      {
        v73 = VidSchiGetCurrentVSyncPeriodQpc(a1, v10, 0);
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v13 + 44408), v20, v73);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
      v63 = ((unsigned __int16)**v16 | (unsigned __int16)(**v16 >> 10)) & 0x3FF;
    else
      v63 = (1 << *((_DWORD *)a1 + 40)) - 1;
    v64 = *(_DWORD *)(v13 + 3192);
    if ( _bittest(&v63, *(_DWORD *)(v13 + 3196)) )
    {
      if ( v64 != *(_DWORD *)(a2 + 1156) )
      {
        v19 = 1;
        v79 = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
        v10 = a3;
        v20 = v79;
      }
      *(_DWORD *)(v13 + 3192) = *(_DWORD *)(a2 + 1156);
      *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1156);
      goto LABEL_92;
    }
    *(_DWORD *)(a4 + 40) = v64;
  }
  v23 = *((_QWORD *)a1 + 2);
  v24 = a3;
  if ( *(_BYTE *)(v23 + 5024) && *(_DWORD *)(v23 + 296) == 1 && v17 )
  {
    LODWORD(LockHandle.LockQueue.Next) = a3;
    HIDWORD(LockHandle.LockQueue.Lock) = 0;
    v76 = -1;
    HIDWORD(LockHandle.LockQueue.Next) = *(_DWORD *)(a4 + 40);
    v28 = !_BitScanForward((unsigned int *)&v77, v17);
    if ( !v28 )
      v76 = v77;
    LODWORD(LockHandle.LockQueue.Lock) = v76;
    *(_QWORD *)&LockHandle.OldIrql = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 48LL) + 2648LL);
    ((void (__fastcall *)(__int64, __int64, struct _KLOCK_QUEUE_HANDLE *))DxgCoreInterface[87])(v23, 2LL, &LockHandle);
  }
  v25 = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  *(_QWORD *)(a4 + 32) = 0LL;
  v26 = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 20) = 0;
  v27 = *(_QWORD *)(a2 + 1184);
  v84 = 0LL;
  if ( v27 )
  {
    v26 = v27 + 24;
    v84 = v27 + 24 + 16LL * *(unsigned int *)(v27 + 16) - 16;
  }
  v28 = !_BitScanForward((unsigned int *)&v29, v17);
  v30 = -1;
  LODWORD(v31) = 0;
  if ( !v28 )
    v30 = v29;
  v87 = 0;
  v32 = v30;
  v33 = -1;
  v28 = !_BitScanForward((unsigned int *)&v34, v18);
  v88 = v32;
  if ( !v28 )
    v33 = v34;
  v35 = v33;
  v81 = v33;
  while ( 1 )
  {
    v36 = a5;
    v90 = v31;
    if ( !v17 && !v18 )
      break;
    v40 = (unsigned int)(8 * v31 * (*(_DWORD *)(*(_QWORD *)v83 + 8LL) + 28));
    v41 = (unsigned int *)(v40 + *(_QWORD *)v83 + 24LL);
    v42 = *(_QWORD *)(v40 + *(_QWORD *)v83 + 208);
    v85 = v42;
    if ( v42 )
    {
      v41[10] = *(_DWORD *)(v42 + 8);
      *((_QWORD *)v41 + 6) = v42 + 16;
    }
    v43 = 1;
    if ( v32 < v35 || *((_BYTE *)a1 + 67) )
    {
      if ( a5 )
      {
LABEL_39:
        v41[4] = v41[4] & 0xFFFFFFFD | (2 * v36);
      }
      else if ( *((_BYTE *)a1 + 7072) && (*(_DWORD *)(a2 + 1152) & 0x80u) != 0 )
      {
        v41[4] |= 2u;
      }
      else if ( (*(_DWORD *)(a2 + 1152) & 0x200) != 0 )
      {
        v41[4] |= 0x20u;
      }
      v44 = v41[4];
      v45 = v25;
      if ( (v44 & 0x22) == 0 )
        v45 = 4;
      v41[4] = v44 & 0xFFFFFFFB | v45;
    }
    if ( v32 < v35 )
    {
      v46 = *(_DWORD *)(a2 + 1096);
      *((_QWORD *)v41 + 4) = v41 + 56;
      v41[7] = v46;
      v80 = v25;
      if ( v46 )
      {
        do
        {
          v31 = *(_QWORD *)(a2 + 1192);
          v47 = *(_DWORD *)(v31 + 4);
          v48 = *(_DWORD *)(v31 + 8);
          v49 = (unsigned __int64)(v90 + v47 * (_DWORD)v25) << 6;
          v50 = v31 + v47 * ((8 * v48 + 231) & 0xFFFFFFF8);
          v51 = *(_QWORD *)(v50 + v49 + 56);
          *(_QWORD *)(v50 + v49 + 48) = *(_QWORD *)(*(_QWORD *)(v51 + 96) + 40LL);
          *(_WORD *)(v31 + (unsigned int)(8 * v47 * (v48 + 28)) + v49 + 40) = *(_WORD *)(*(_QWORD *)(v51 + 96) + 10LL);
          if ( *(int *)(*(_QWORD *)(v51 + 96) + 16LL) <= 0 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 0x4000LL, v90, v80, 0LL);
            WdLogGlobalForLineNumber = 916;
            goto LABEL_39;
          }
          LODWORD(v31) = v90;
          *(_QWORD *)(*((_QWORD *)v41 + 4) + 8LL * v80) = ((unsigned __int64)(v90
                                                                            + v80
                                                                            * *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 4LL)) << 6)
                                                        + *(_QWORD *)(a2 + 1192)
                                                        + *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 4LL)
                                                        * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                        + 24LL;
          LODWORD(v25) = v80 + 1;
          v80 = v25;
        }
        while ( (unsigned int)v25 < v41[7] );
        v32 = v88;
      }
      v41[4] |= 1u;
      v54 = v41[4];
      *v41 = v32;
      v55 = v54 ^ (*(_DWORD *)(a2 + 1152) ^ v54) & 8;
      v41[4] = v55;
      v41[4] = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1152) >> 1)) & 0x10;
      v56 = *(_QWORD *)(a2 + 1192) + (unsigned int)(8 * v31 * (*(_DWORD *)(*(_QWORD *)(a2 + 1192) + 8LL) + 28));
      v57 = v41[14] ^ (*(_DWORD *)(v56 + 196) ^ v41[14]) & 1;
      v41[14] = v57;
      v41[14] = v57 ^ (*(_DWORD *)(v56 + 196) ^ v57) & 2;
      v41[15] = (unsigned __int16)*(_DWORD *)(v56 + 168);
      v41[16] = (unsigned __int16)*(_DWORD *)(v56 + 172);
      v41[17] = *(unsigned __int16 *)(v56 + 170);
      v41[18] = *(unsigned __int16 *)(v56 + 174);
      v41[19] = *(__int16 *)(v56 + 176);
      v41[20] = *(__int16 *)(v56 + 180);
      v41[21] = *(unsigned __int16 *)(v56 + 178);
      v41[22] = *(unsigned __int16 *)(v56 + 182);
      v41[23] = (unsigned __int16)*(_DWORD *)(v56 + 184);
      v41[24] = (unsigned __int16)*(_DWORD *)(v56 + 188);
      v41[25] = *(unsigned __int16 *)(v56 + 186);
      v41[26] = *(unsigned __int16 *)(v56 + 190);
      if ( v26 && *(_DWORD *)v26 == v32 )
      {
        v41[32] = *(_DWORD *)(v26 + 4);
        *((_QWORD *)v41 + 17) = *(_QWORD *)(v26 + 8);
        if ( v26 >= v84 )
        {
          LODWORD(v25) = 0;
          v26 = 0LL;
          goto LABEL_52;
        }
        v26 += 16LL;
      }
      else
      {
        v41[32] = 1;
        *((_QWORD *)v41 + 17) = v41 + 15;
      }
      LODWORD(v25) = 0;
LABEL_52:
      v41[27] = ((*(_DWORD *)(v56 + 196) >> 3) & 3) + 1;
      v41[28] ^= ((unsigned __int8)v41[28] ^ (unsigned __int8)(*(_DWORD *)(v56 + 196) >> 2)) & 1;
      v41[29] = *(_DWORD *)(v56 + 192);
      v41[31] = *(_DWORD *)(v56 + 200);
      v58 = *(_QWORD *)(a2 + 1176);
      v91 = v58;
      if ( v58 )
      {
        v67 = *(_DWORD *)(a2 + 1052);
        if ( v67 != 13 && v67 != 14 && !v87 )
        {
          v87 = 1;
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v58 + 16), &LockHandle);
          v68 = v85;
          if ( v85 )
            _InterlockedIncrement((volatile signed __int32 *)(v85 + 12));
          v69 = v91;
          if ( *(_QWORD *)(v91 + 8) )
          {
            CRefCountedBuffer::RefCountedBufferRelease(*(PVOID *)(v91 + 8));
            v68 = v85;
            v69 = v91;
          }
          *(_QWORD *)(v69 + 8) = v68;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          LOBYTE(v32) = v88;
          LODWORD(v25) = 0;
        }
      }
      v59 = -1;
      v17 &= ~(1 << v32);
      v28 = !_BitScanForward((unsigned int *)&v60, v17);
      if ( !v28 )
        v59 = v60;
      v88 = v59;
      goto LABEL_56;
    }
    if ( (*(unsigned __int16 *)(v82 + 44296) & (1 << v35)) != 0 )
    {
      *((_QWORD *)v41 + 4) = v25;
      *((_QWORD *)v41 + 3) = 0LL;
      v41[10] = v25;
      *((_QWORD *)v41 + 6) = v25;
      *v41 = v35;
    }
    else
    {
      v43 = 0;
      *((_QWORD *)v41 + 1) = v25;
    }
    v18 &= ~(1 << v35);
    v52 = -1;
    v28 = !_BitScanForward((unsigned int *)&v53, v18);
    if ( !v28 )
      v52 = v53;
    v81 = v52;
    if ( !v43 )
    {
LABEL_45:
      v24 = a3;
      goto LABEL_58;
    }
LABEL_56:
    *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 20))++) = v41;
    if ( (*(_DWORD *)(a2 + 1152) & 0x1000) != 0 )
    {
      if ( !*((_BYTE *)a1 + 67) )
        goto LABEL_45;
      v74 = *v41;
      v24 = a3;
      VidSchiSetInterruptTargetPresentId(a1, a3, v74, 0LL, 0, v25);
      v32 = v88;
      LODWORD(v31) = v31 + 1;
      v35 = v81;
      v25 = 0LL;
    }
    else
    {
      ++*(_QWORD *)(v82 + 8LL * *v41 + 3256);
      v61 = *v41;
      v62 = *(_QWORD *)(v82 + 8 * v61 + 3256);
      *((_QWORD *)v41 + 1) = v62;
      v24 = a3;
      if ( *((_BYTE *)a1 + 67) )
      {
        v66 = *(_QWORD *)(304 * v61 + v82 + 424);
        if ( (*(_DWORD *)(a2 + 1152) & 0x80000) != 0 )
        {
          if ( v62 == v66 )
            VidSchiSetInterruptTargetPresentId(a1, a3, v61, v62 + 1, 0, 1u);
        }
        else if ( v62 < v66 )
        {
          VidSchiSetInterruptTargetPresentId(a1, a3, v61, v62, 0, v25);
        }
      }
LABEL_58:
      v32 = v88;
      LODWORD(v31) = v31 + 1;
      v35 = v81;
      v25 = 0LL;
    }
  }
  if ( (*(_DWORD *)(a2 + 1152) & 0x400) != 0 )
  {
    v37 = *(_DWORD *)(a2 + 1200);
    *(_DWORD *)a7 = v37;
    switch ( v37 )
    {
      case 0:
        *(_DWORD *)(a7 + 4) = 0;
        goto LABEL_19;
      case 134217729:
        *(_QWORD *)a7 = 1LL;
LABEL_19:
        *(_QWORD *)(a7 + 8) = 0LL;
        break;
      case 1:
        *(_DWORD *)(a7 + 4) = 28;
        *(_QWORD *)(a7 + 8) = a2 + 1204;
        break;
      case 2:
        *(_DWORD *)(a7 + 4) = 72;
        *(_QWORD *)(a7 + 8) = a2 + 1204;
        break;
      case -2147483646:
        *(_QWORD *)a7 = 2LL;
        goto LABEL_19;
    }
    *(_QWORD *)(a4 + 48) = a7;
  }
  if ( (*(_DWORD *)(a2 + 1152) & 0x800) != 0 )
  {
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1276);
    v38 = *(_OWORD *)(a2 + 1292);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v38;
    *(_QWORD *)(a4 + 32) = a8;
  }
  if ( *((_BYTE *)a1 + 67) )
  {
    if ( *(_DWORD *)(v82 + 3192) == -1 )
      v65 = *(_QWORD *)(a2 + 1312);
    else
      v65 = *(_QWORD *)(a2 + 1312) - (VidSchiGetCurrentVSyncPeriodQpc(a1, v24, 1) >> 1);
    *(_QWORD *)(a4 + 56) = v65;
    *(_QWORD *)(a2 + 1104) = v65;
  }
  result = a6;
  *(_QWORD *)(a4 + 24) = a6;
  return result;
}
