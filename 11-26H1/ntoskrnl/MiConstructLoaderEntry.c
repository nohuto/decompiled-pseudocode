/*
 * XREFs of MiConstructLoaderEntry @ 0x140AA8F54
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     MiManageSubsectionView @ 0x14027DC70 (MiManageSubsectionView.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     IoIsDeviceEjectable @ 0x1404CEF14 (IoIsDeviceEjectable.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404FE2CC (MiGetExtendedLoaderBitmap.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiBackSingleImageWithPagefile @ 0x1408640D0 (MiBackSingleImageWithPagefile.c)
 *     MiLockdownSections @ 0x140AA94F0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140AA95F8 (MiCaptureImageExceptionValues.c)
 *     MiInitializeImageSectionLocks @ 0x140AA98A0 (MiInitializeImageSectionLocks.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, __int64 *a5)
{
  __int64 v6; // rbx
  void *v9; // r15
  int CurrentProcessorColor; // eax
  _WORD *PoolMm; // rax
  _WORD *v12; // r14
  _DWORD *v13; // rbp
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  BOOL v16; // eax
  unsigned int v17; // edx
  BOOL v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ebx
  int v27; // esi
  int v28; // ebx
  char *v29; // r14
  unsigned __int64 v30; // r14
  unsigned __int8 v31; // al
  struct _KLOCK_ENTRIES *v32; // r9
  int v33; // eax
  ULONG_PTR v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  _OWORD *v38; // rax
  __int64 v39; // rdx
  __int128 v40; // xmm1
  unsigned int v41; // ebx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int16 v44; // ax
  __int128 v45; // [rsp+20h] [rbp-108h]
  __int64 v46; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-F0h]
  __int64 v48; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v49; // [rsp+50h] [rbp-D8h] BYREF
  char v50[208]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+140h] [rbp+18h]

  v6 = *(unsigned __int16 *)a3;
  v52 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  DWORD1(v45) = 0;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (_WORD *)ExAllocatePoolMm(256LL, v6 + 2, 1413770573, CurrentProcessorColor | 0x80000000);
  *((_QWORD *)&v45 + 1) = PoolMm;
  v12 = PoolMm;
  if ( !PoolMm )
    goto LABEL_41;
  LOWORD(v45) = *(_WORD *)a3;
  WORD1(v45) = *(_WORD *)a3;
  memmove(PoolMm, a3[1], *(unsigned __int16 *)a3);
  v12[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v47 = *(_QWORD *)(a1 + 48);
  v13 = RtlImageNtHeader(v47);
  v14 = *((unsigned __int16 *)v13 + 3);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 0xC )
  {
    v41 = -1073741520;
LABEL_50:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return v41;
  }
  v15 = v13[20];
  v16 = (v15 & 0xFFF) != 0;
  v17 = (v16 + (v15 >> 12)) >> 6;
  v18 = ((v16 + (unsigned __int8)(v15 >> 12)) & 0x3F) != 0;
  v46 = 8 * (v17 + v18 + 2);
  v19 = v46 + 304;
  if ( !(8 * (v17 + v18 + 2))
    || (v20 = (*(unsigned __int16 *)a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL, v21 = v20 + v19, v20 + v19 <= v19) )
  {
LABEL_37:
    v41 = -1073741701;
    goto LABEL_50;
  }
  if ( (_DWORD)v14 )
  {
    if ( v21 + 12 * v14 > v21 )
    {
      v21 += 12 * v14;
      goto LABEL_6;
    }
    goto LABEL_37;
  }
LABEL_6:
  v22 = MmGetCurrentProcessorColor();
  v23 = ExAllocatePoolMm(64LL, v21, 1682730317, v22 | 0x80000000);
  v24 = v23;
  if ( !v23
    || (v9 = (void *)v23, v25 = *(_QWORD *)(a1 + 112), (v48 = v25) != 0)
    && (v42 = MiSectionControlArea(v25),
        v52 = (*(_DWORD *)(*(_QWORD *)v42 + 8LL) >> 12)
            + (unsigned int)((*(_DWORD *)(*(_QWORD *)v42 + 8LL) & 0xFFF) != 0),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v52, 0LL)) )
  {
LABEL_41:
    v41 = -1073741670;
    goto LABEL_50;
  }
  if ( (a4 & 0x10000000) != 0 )
  {
    *(_OWORD *)v24 = *(_OWORD *)a1;
    *(_OWORD *)(v24 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v24 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v24 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v24 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v24 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v24 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v24 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v24 + 128) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v24 + 144) = *(_OWORD *)(a1 + 144);
  }
  else
  {
    v38 = (_OWORD *)v24;
    v39 = 2LL;
    do
    {
      *v38 = *(_OWORD *)a1;
      v38[1] = *(_OWORD *)(a1 + 16);
      v38[2] = *(_OWORD *)(a1 + 32);
      v38[3] = *(_OWORD *)(a1 + 48);
      v38[4] = *(_OWORD *)(a1 + 64);
      v38[5] = *(_OWORD *)(a1 + 80);
      v38[6] = *(_OWORD *)(a1 + 96);
      v38 += 8;
      v40 = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      *(v38 - 1) = v40;
      --v39;
    }
    while ( v39 );
    *v38 = *(_OWORD *)a1;
    v38[1] = *(_OWORD *)(a1 + 16);
    v38[2] = *(_OWORD *)(a1 + 32);
  }
  v26 = *(_DWORD *)(v24 + 184);
  v27 = 1;
  *(_QWORD *)(v24 + 232) = 0LL;
  v28 = v26 | 1;
  *(_QWORD *)(v24 + 264) = v24 + 256;
  *(_QWORD *)(v24 + 256) = v24 + 256;
  if ( (a4 & 0x10000000) != 0 )
  {
    v28 |= 0x2E000u;
    v44 = 1;
    if ( (*(_DWORD *)(v24 + 104) & 0x4000000) != 0 )
    {
      v43 = *(_QWORD *)(v24 + 48);
      if ( v43 != PsNtosImageBase && v43 != PsHalImageBase )
        v44 = 0;
    }
    *(_WORD *)(v24 + 108) = v44;
    *(_QWORD *)(v24 + 136) = 1LL;
  }
  *(_DWORD *)(v24 + 184) = v28;
  v29 = (char *)(v46 + MiGetExtendedLoaderBitmap(v24));
  *(_QWORD *)(v24 + 192) = v52;
  if ( (_DWORD)v14 )
  {
    *(_DWORD *)(v24 + 296) = v14;
    *(_QWORD *)(v24 + 200) = &v29[v20];
    MiInitializeImageSectionLocks();
  }
  if ( *((_WORD *)v13 + 32) >= 5u && *((_WORD *)v13 + 34) >= 5u )
    *(_DWORD *)(v24 + 104) |= 0x8000000u;
  if ( (*((_BYTE *)v13 + 94) & 0x80) != 0 )
    *(_DWORD *)(v24 + 104) |= 0x20u;
  if ( (a4 & 8) != 0 )
    *(_DWORD *)(v24 + 104) |= 0x4000000u;
  *(_QWORD *)(v24 + 96) = v29;
  *(_WORD *)(v24 + 88) = *(_WORD *)a2;
  *(_WORD *)(v24 + 90) = *(_WORD *)a2;
  memmove(v29, a2[1], *(unsigned __int16 *)a2);
  *(_WORD *)(*(_QWORD *)(v24 + 96) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *(_QWORD *)(v24 + 40) = 0LL;
  *(_QWORD *)(v24 + 56) = v47 + (unsigned int)v13[10];
  *(_DWORD *)(v24 + 120) = v13[22];
  if ( v48 )
  {
    memset_0(v50, 0, 0x98uLL);
    v30 = MiSectionControlArea(v48);
    v31 = *(_BYTE *)(*(_QWORD *)v30 + 15LL);
    v49 = v30;
    *(_WORD *)(v24 + 110) = (16 * ((v31 >> 4) & 7)) | *(_WORD *)(v24 + 110) & 0xFF80 | v31 & 0xF;
    *(_QWORD *)(v24 + 176) = v47 | 3;
    MiManageSubsectionView(&v49, (_QWORD *)(v24 + 160), 3, v32);
  }
  else
  {
    v30 = 0LL;
  }
  *(_DWORD *)(v24 + 152) = v13[20];
  *(_DWORD *)(v24 + 156) = v13[2];
  MiCaptureImageExceptionValues(v24);
  MiLockdownSections(v24);
  if ( (dword_140FBE204 & 1) != 0 || (a4 & 2) != 0 )
    v28 |= 8u;
  *(_OWORD *)(v24 + 72) = v45;
  v33 = v28 | 0x1000;
  if ( (a4 & 0x20) == 0 && (v28 & 4) == 0 )
    v33 = v28;
  *(_DWORD *)(v24 + 184) = v33;
  if ( (v33 & 4) != 0 )
    goto LABEL_49;
  if ( v48 )
  {
    v34 = MiReferenceControlAreaFile(v30);
    if ( IoIsDeviceEjectable(*(_QWORD *)(v34 + 8)) || (*(_DWORD *)(v35 + 52) & 0x11) != 0 )
      v27 = 0;
    MiDereferenceControlAreaFile(v30, v36);
    if ( !v27 )
LABEL_49:
      MiBackSingleImageWithPagefile(v24);
  }
  *a5 = v24;
  return 0LL;
}
