/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140016A20
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140017A5C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14003B9E0 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer @ 0x14003D838 (McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  __int64 v6; // r12
  char v7; // dl
  __int64 v9; // rbp
  bool v10; // zf
  unsigned int v11; // ecx
  char v12; // al
  char v13; // cl
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // ebx
  char *v17; // rdi
  int v18; // r10d
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // cl
  int v24; // r8d
  __int64 v25; // rbx
  int v26; // r13d
  unsigned int v27; // r9d
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  int v31; // eax
  char v32; // cl
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // r15
  _DWORD *v37; // rdi
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  char LowPart; // bl
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  void *v50; // rcx
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // r10d
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rdx
  unsigned int v63; // edi
  __int64 v64; // rsi
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // edx
  int v71; // r9d
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  char *v75; // rsi
  char *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // edx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // edx
  int v86; // edi
  int v87; // r14d
  int v88; // r8d
  int v89; // edx
  unsigned int v90; // edx
  unsigned int *v91; // rcx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v93; // ecx
  int v94; // [rsp+90h] [rbp-78h]
  unsigned int v95; // [rsp+94h] [rbp-74h]
  __int64 v96; // [rsp+98h] [rbp-70h]
  __int64 v97; // [rsp+A0h] [rbp-68h]
  __int64 v98; // [rsp+A8h] [rbp-60h]
  __int64 v99; // [rsp+B0h] [rbp-58h]
  unsigned int v100; // [rsp+B8h] [rbp-50h]
  char v104; // [rsp+128h] [rbp+20h]
  bool v105; // [rsp+138h] [rbp+30h]

  LODWORD(v6) = 0;
  v7 = -1;
  v98 = *((unsigned int *)a4 + 29);
  v9 = *((_QWORD *)a6 + 5);
  v96 = *(_QWORD *)(v9 + 8 * v98 + 3448);
  v10 = !_BitScanForward(&v11, *((_DWORD *)a4 + 150) & 0x3FF);
  v12 = v11;
  v13 = 0;
  if ( !v10 )
    v7 = v12;
  if ( v7 != -1 )
    v13 = v7;
  v95 = v13;
  v14 = *(int *)(304LL * (unsigned int)v13 + *(_QWORD *)(v9 + 8LL * *((unsigned int *)a4 + 29) + 3448) + 188);
  if ( (int)v14 <= -1 )
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(v9 + 3576) + 160 * v14;
  v16 = 0;
  v97 = v15;
  if ( *((_DWORD *)a4 + 35) )
  {
    v17 = (char *)a4 + 640;
    do
    {
      v18 = *((_DWORD *)a4 + 151);
      v19 = *((_DWORD *)a4 + 152);
      v20 = v16 * v18;
      ++v16;
      v20 <<= 6;
      v21 = v20 + v18 * ((8 * v19 + 231) & 0xFFFFFFF8);
      v22 = *(_QWORD *)((char *)a4 + v21 + 656);
      *(_QWORD *)((char *)a4 + v21 + 648) = *(_QWORD *)(*(_QWORD *)(v22 + 96) + 40LL);
      *(_WORD *)&v17[(unsigned int)(8 * v18 * (v19 + 28)) + v20] = *(_WORD *)(*(_QWORD *)(v22 + 96) + 10LL);
    }
    while ( v16 < *((_DWORD *)a4 + 35) );
  }
  v23 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 6) + 16LL) + 137LL);
  v104 = v23;
  if ( (*(_DWORD *)a4 & 0x2000000) == 0 )
    goto LABEL_11;
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)a4
                                                                         + 61));
    if ( FlipManagerAuxiliaryPresentInfo && !*((_DWORD *)FlipManagerAuxiliaryPresentInfo + 3) )
    {
      v26 = *(_DWORD *)(v15 + 100);
      *((_DWORD *)a4 + 36) = v26;
      goto LABEL_16;
    }
    v23 = v104;
LABEL_11:
    v24 = *((_DWORD *)a4 + 31);
    v25 = v96;
    v94 = v24;
    if ( v24 || (*(_DWORD *)(v96 + 83108) & 1) == 0 || (v26 = -1, !v23) )
      v26 = *(_DWORD *)(v96 + 83096);
    goto LABEL_19;
  }
  v26 = *((_DWORD *)a4 + 36);
  if ( v26 != *(_DWORD *)(v15 + 100) )
    goto LABEL_11;
LABEL_16:
  v25 = v96;
  if ( !v26 )
    v26 = *(_DWORD *)(v96 + 83096);
  v24 = *((_DWORD *)a4 + 37);
  v94 = v24;
LABEL_19:
  v27 = v98;
  _InterlockedIncrement((volatile signed __int32 *)a6 + v98 + 427);
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 6) + 32LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 5) + 4LL))
                  + 8 * v98
                  + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v98 + 6728) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
  if ( *(_DWORD *)(v15 + 112) == 1 )
  {
    v29 = 8 * *((_DWORD *)a4 + 151) * (*((_DWORD *)a4 + 152) + 28);
    WdLogSingleEntry5(
      8LL,
      *((_QWORD *)a4 + 13),
      *((unsigned int *)a4 + 28),
      v24,
      *(_QWORD *)((char *)a4 + v29 + 648),
      *(unsigned __int16 *)((char *)a4 + v29 + 640));
    v27 = v98;
    WdLogGlobalForLineNumber = 1732;
    *(_QWORD *)(v15 + 112) = 2LL;
    *(_QWORD *)(v15 + 152) = a6;
  }
  ++*(_DWORD *)(v9 + 868);
  ++*((_DWORD *)a6 + 460);
  ++*(_DWORD *)(v15 + 116);
  ++*(_DWORD *)(v25 + 3236);
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v30 = ((unsigned __int16)*((_DWORD *)a4 + 150) | (unsigned __int16)(*((_DWORD *)a4 + 150) >> 10)) & 0x3FF;
  else
    v30 = (1 << *(_DWORD *)(v9 + 160)) - 1;
  v10 = !_BitScanForward((unsigned int *)&v31, v30);
  v32 = -1;
  if ( !v10 )
    v32 = v31;
  if ( v30 )
  {
    v33 = 8LL * v27;
    do
    {
      ++*(_DWORD *)(304LL * v32 + *(_QWORD *)(v33 + v9 + 3448) + 196);
      v34 = 1 << v32;
      v32 = -1;
      v30 &= ~v34;
      v10 = !_BitScanForward((unsigned int *)&v34, v30);
      if ( !v10 )
        v32 = v34;
    }
    while ( v30 );
  }
  v99 = *(_QWORD *)(v25 + 8LL * v95 + 40);
  v100 = *(_DWORD *)(v99 + 56);
  v35 = v99 + 1400LL * v100;
  v36 = v35 + 120;
  v37 = *(_DWORD **)(v35 + 1312);
  memset((void *)(v35 + 120), 0, 0x4A8uLL);
  memset((void *)(v35 + 1320), 0, 0xC8uLL);
  *(_QWORD *)(v35 + 1312) = v37;
  memset(v37 + 6, 0, (unsigned int)(v37[1] * (72 * v37[2] + 224)));
  *(_QWORD *)(v35 + 1280) = *((_QWORD *)a4 + 12);
  v38 = *((_QWORD *)a4 + 13);
  *(_DWORD *)(v35 + 1272) |= 0x20u;
  *(_QWORD *)(v35 + 1288) = v38;
  v39 = *(_DWORD *)(v35 + 1272) ^ ((unsigned __int8)*(_DWORD *)(v35 + 1272) ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10;
  *(_DWORD *)(v35 + 1272) = v39;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v9 + 2840) == 2 )
    *(_DWORD *)(v35 + 1272) = v39 | 0x1000;
  v40 = *((_DWORD *)a4 + 36);
  if ( v40 != *(_DWORD *)(v97 + 104) )
  {
    *(_DWORD *)(v97 + 104) = v40;
    *(_DWORD *)(v35 + 1272) |= 0x40u;
  }
  LowPart = a5.LowPart;
  *(_DWORD *)(v36 + 1048) = a5.LowPart;
  *(_DWORD *)(v36 + 1052) = 1;
  *(_DWORD *)(v36 + 1056) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v36 + 1064) = ++*(_QWORD *)(v99 + 88);
  if ( a2 )
  {
    *(_QWORD *)(v36 + 520) = *((_QWORD *)a2 + 21);
LABEL_37:
    *(_DWORD *)(v36 + 1092) = *((_DWORD *)a4 + 35);
    *(_DWORD *)(v36 + 1088) = *((_DWORD *)a4 + 35);
    v42 = *((_DWORD *)a4 + 35);
    goto LABEL_38;
  }
  if ( a3 )
    goto LABEL_37;
  *(_QWORD *)(v36 + 1088) = 0LL;
  v42 = 1;
LABEL_38:
  *(_DWORD *)(v36 + 1096) = v42;
  *(_QWORD *)(v36 + 1040) = a6;
  *(_BYTE *)(v36 + 1076) = (*(_DWORD *)a4 & 0x10) != 0;
  v43 = *(_DWORD *)(v9 + 2836);
  if ( v43 == 1 )
  {
LABEL_39:
    v105 = 0;
    goto LABEL_40;
  }
  if ( v43 == 2 )
  {
    v105 = 1;
  }
  else
  {
    v105 = (*(_DWORD *)a4 & 0x10000000) != 0;
    if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
      goto LABEL_40;
  }
  if ( (*(_DWORD *)(v36 + 1152) & 0x10) != 0 && !*(_BYTE *)(v9 + 164) )
    goto LABEL_39;
LABEL_40:
  v44 = *(_DWORD *)(v36 + 1152) ^ ((unsigned __int8)*(_DWORD *)(v36 + 1152) ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v36 + 1152) = v44;
  v45 = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2;
  *(_DWORD *)(v36 + 1152) = v45;
  v46 = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4;
  *(_DWORD *)(v36 + 1152) = v46;
  v47 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8;
  *(_DWORD *)(v36 + 1152) = v47;
  *(_QWORD *)(v36 + 1176) = *((_QWORD *)a4 + 3);
  v48 = v47 ^ ((unsigned __int16)v47 ^ (*(_DWORD *)a4 >> 20)) & 0x400;
  *(_DWORD *)(v36 + 1152) = v48;
  *(_DWORD *)(v36 + 1152) = v48 ^ (v48 ^ (*((_DWORD *)a4 + 1) << 11)) & 0x80000;
  v49 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v36 + 1184) = v49;
  if ( v49 )
    _InterlockedIncrement((volatile signed __int32 *)(v49 + 12));
  v50 = (void *)*((_QWORD *)a4 + 4);
  if ( v50 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v50);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v51 = *(_DWORD *)(v36 + 1152);
  v52 = *((_DWORD *)a4 + 90);
  *(_DWORD *)(v36 + 1200) = v52;
  if ( (v51 & 0x400) != 0 )
  {
    v80 = v52 - 1;
    if ( v80 )
    {
      if ( v80 == 1 )
      {
        *(_OWORD *)(v36 + 1204) = *(_OWORD *)((char *)a4 + 364);
        *(_OWORD *)(v36 + 1220) = *(_OWORD *)((char *)a4 + 380);
        *(_OWORD *)(v36 + 1236) = *(_OWORD *)((char *)a4 + 396);
        *(_OWORD *)(v36 + 1252) = *(_OWORD *)((char *)a4 + 412);
        *(_QWORD *)(v36 + 1268) = *(_QWORD *)((char *)a4 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v36 + 1204) = *(_OWORD *)((char *)a4 + 364);
      *(_QWORD *)(v36 + 1220) = *(_QWORD *)((char *)a4 + 380);
      *(_DWORD *)(v36 + 1228) = *((_DWORD *)a4 + 97);
    }
  }
  v53 = v51 ^ ((unsigned __int16)v51 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v36 + 1152) = v53;
  if ( (v53 & 0x800) != 0 )
  {
    *(_OWORD *)(v36 + 1276) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v36 + 1292) = *(_OWORD *)((char *)a4 + 452);
  }
  v54 = *((_QWORD *)a4 + 70);
  if ( v54 )
  {
    *(_QWORD *)(v36 + 1352) = v54;
    *(_DWORD *)(v36 + 1360) = *((_DWORD *)a4 + 142);
    *(_QWORD *)(v36 + 1368) = *((_QWORD *)a4 + 72);
    *(_QWORD *)(v36 + 1376) = *((_QWORD *)a4 + 73);
    *(_QWORD *)(v36 + 1384) = *((_QWORD *)a4 + 74);
    v93 = *(_DWORD *)(v36 + 1392) ^ ((unsigned __int8)*(_DWORD *)(v36 + 1392) ^ (unsigned __int8)(*((_DWORD *)a4 + 1) >> 5)) & 1;
    *(_DWORD *)(v36 + 1392) = v93;
    *(_DWORD *)(v36 + 1392) = v93 ^ ((unsigned __int8)v93 ^ (unsigned __int8)(*((_DWORD *)a4 + 1) >> 3)) & 2;
  }
  v55 = 0;
  if ( *(_DWORD *)(v36 + 1096) )
  {
    do
    {
      if ( a2 )
      {
        v68 = 8LL * v55;
        v69 = *(_QWORD *)((char *)a4 + v68 + *((unsigned int *)a4 + 138));
        *(_QWORD *)(v36 + v68) = v69;
        ++*(_DWORD *)(v69 + 800);
      }
      v70 = *((_DWORD *)a4 + 152);
      v71 = *((_DWORD *)a4 + 151);
      v72 = (unsigned __int64)(v55 * v71) << 6;
      v73 = v72 + (unsigned int)(8 * v71 * (v70 + 28));
      v74 = *(_QWORD *)((char *)a4 + v71 * ((8 * v70 + 231) & 0xFFFFFFF8) + v72 + 656);
      v75 = (char *)a4 + v73;
      v76 = (char *)a4 + v73;
      v77 = *(_QWORD *)(v74 + 96);
      v78 = *(_QWORD *)(v77 + 32);
      if ( v78 )
      {
        *((_QWORD *)v75 + 84) = ++*(_QWORD *)(v78 + 16);
        v82 = *(_QWORD *)(*(_QWORD *)(v74 + 96) + 32LL);
        *((_QWORD *)v76 + 85) = ++*(_QWORD *)(v82 + 24);
        v83 = *(_QWORD *)(*(_QWORD *)(v74 + 96) + 32LL);
        v84 = 2 * (*(unsigned int *)(v83 + 40) + 3LL);
        *(_OWORD *)(v83 + 8 * v84) = 0LL;
        *(_DWORD *)(v83 + 40) = ((unsigned __int8)*(_DWORD *)(v83 + 40) + 1) & 7;
        *(_DWORD *)(v83 + 8 * v84) = 0;
        *(_QWORD *)(v83 + 8 * v84 + 8) = *((_QWORD *)v76 + 85);
      }
      else
      {
        v79 = *(_QWORD *)(v77 + 24);
        if ( v79 )
          _InterlockedIncrement((volatile signed __int32 *)(v79 + 8));
      }
      ++v55;
    }
    while ( v55 < *(_DWORD *)(v36 + 1096) );
    LowPart = a5.LowPart;
  }
  *(_DWORD *)(v36 + 1156) = v26;
  if ( *(_BYTE *)(v36 + 1076) )
  {
    *(_DWORD *)(v36 + 1072) = 0;
    if ( v94 )
    {
LABEL_52:
      v56 = 0;
      goto LABEL_53;
    }
LABEL_96:
    v81 = *(_DWORD *)(v36 + 1152) | 0x80;
    *(_DWORD *)(v36 + 1152) = v81;
    if ( v105 )
      *(_DWORD *)(v36 + 1152) = v81 | 0x100;
    goto LABEL_52;
  }
  if ( !v94 )
  {
    *(_DWORD *)(v36 + 1072) = 0;
    goto LABEL_96;
  }
  *(_DWORD *)(v36 + 1072) = v94;
  v56 = v94;
LABEL_53:
  v57 = *(_DWORD *)(v36 + 1336);
  if ( !v57 )
  {
    *(_DWORD *)(v36 + 1336) = 1;
    v57 = 1;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 1040) + 48LL) + 16LL) + 138LL) )
  {
    v90 = *(_DWORD *)(v96 + 83092);
    if ( v57 != v90 && (*(_DWORD *)(v36 + 1152) & 0x100) == 0 && *(_DWORD *)(v96 + 4) != 3 )
    {
      v91 = (unsigned int *)(v36 + 1072);
      if ( v57 < v90 )
      {
        if ( v56 )
        {
          v90 *= v56;
          v91 = (unsigned int *)(v36 + 1072);
        }
      }
      else
      {
        v90 = v56 / v57;
      }
      *v91 = v90;
      if ( (byte_14008A204 & 0x20) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          (_DWORD)v91,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v56,
          v57,
          *(_DWORD *)(v96 + 83092),
          v56,
          v90);
    }
  }
  v58 = *(_DWORD *)(v36 + 1152);
  *(_DWORD *)(v36 + 1336) = *(_DWORD *)(v96 + 83092);
  if ( (v58 & 0x180) == 0x80 && (*(_DWORD *)(v96 + 83108) & 1) != 0 && v104 )
    *(_DWORD *)(v36 + 1152) = v58 | 0x200;
  memmove(*(void **)(v36 + 1192), (char *)a4 + 600, *((unsigned int *)a4 + 153));
  *((_DWORD *)a4 + 154) = 0;
  v59 = 0;
  v60 = *(_DWORD *)(v9 + 160);
  v61 = *(_QWORD *)(v36 + 1192);
  if ( v60 )
  {
    do
    {
      v62 = *(_QWORD *)(8 * v59 * (*(_DWORD *)(v61 + 8) + 28) + v61 + 208);
      if ( v62 )
        _InterlockedIncrement((volatile signed __int32 *)(v62 + 12));
      v60 = *(_DWORD *)(v9 + 160);
      ++v59;
    }
    while ( v59 < v60 );
  }
  v63 = 0;
  if ( v60 )
  {
    do
    {
      v64 = 8 * v63 * (*((_DWORD *)a4 + 152) + 28);
      v65 = *(_QWORD *)((char *)a4 + v64 + 808);
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v65 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v65, (PVOID)v65);
          else
            ExFreePoolWithTag((PVOID)v65, 0);
        }
        *(_QWORD *)((char *)a4 + v64 + 808) = 0LL;
      }
      ++v63;
    }
    while ( v63 < *(_DWORD *)(v9 + 160) );
  }
  *(_DWORD *)(v36 + 1080) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v36 + 1084) = *((_DWORD *)a4 + 34);
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v66 = *(_DWORD *)(v36 + 1152) | 0x2000;
    *(_DWORD *)(v36 + 1152) = v66;
    *(_QWORD *)(v36 + 1312) = *((_QWORD *)a4 + 60);
    *(_QWORD *)(v36 + 1344) = *((_QWORD *)a4 + 61);
    *(_DWORD *)(v36 + 1072) = 0;
    *(_DWORD *)(v36 + 1152) = v66 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v36 + 1077) = 1;
  *(_DWORD *)(v99 + 56) = ((_BYTE)v100 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 872));
  _InterlockedIncrement((volatile signed __int32 *)(v96 + 3240));
  if ( bTracingEnabled )
  {
    v67 = *((_QWORD *)a4 + 23);
    if ( v67 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        v85 = *(_DWORD *)(v36 + 1152);
        v86 = *((_DWORD *)a4 + 28);
        v87 = *((_DWORD *)a4 + 48);
        v88 = (v85 >> 19) & 1;
        v89 = (v85 >> 8) & 1;
        if ( a2 )
        {
          v6 = *((_QWORD *)a2 + 7);
          if ( !v6 || (*((_DWORD *)a2 + 28) & 0x40) != 0 )
            LODWORD(v6) = (_DWORD)a2;
        }
        else if ( a3 )
        {
          v6 = *((_QWORD *)a3 + 6);
          if ( !v6 )
            LODWORD(v6) = (_DWORD)a3;
        }
        McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer(
          v67,
          v89,
          v88,
          v6,
          LowPart,
          v98,
          v67,
          v94,
          v95,
          v87,
          *(_QWORD *)v97,
          *(_QWORD *)(v97 + 8),
          v86,
          v89,
          *(_QWORD *)(v36 + 1352),
          *(_DWORD *)(v36 + 1156),
          *(_QWORD *)(v36 + 1312),
          v88);
      }
    }
  }
  VidSchUnwaitFlipQueue(a1, v9);
}
