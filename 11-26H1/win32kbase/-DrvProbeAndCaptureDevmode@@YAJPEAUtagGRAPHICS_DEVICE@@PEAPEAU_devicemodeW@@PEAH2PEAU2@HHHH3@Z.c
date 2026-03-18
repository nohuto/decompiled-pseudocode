/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F5860 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvBuildDevmodeList @ 0x140150FE4 (DrvBuildDevmodeList.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x140151448 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1401522C0 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        struct _devicemodeW *a10)
{
  unsigned int v12; // esi
  struct _devicemodeW *v13; // rbp
  struct _devicemodeW *v14; // r13
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  struct _devicemodeW *v21; // rdi
  int dmSize; // eax
  int dmDriverExtra; // r13d
  unsigned int v24; // r12d
  struct _devicemodeW *v25; // rax
  DWORD dmFields; // ecx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v35; // rdx
  int v36; // r14d
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // r9
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // r11d
  unsigned int v44; // eax
  int v45; // r10d
  int v46; // r14d
  int v47; // r8d
  int v48; // eax
  int v49; // eax
  int v50; // r8d
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rsi
  void (__fastcall *v54)(__int64, int *); // rax
  __int16 v55; // ax
  __int64 v56; // rcx
  bool v57; // zf
  __int64 v58; // r12
  _DWORD *v59; // r14
  struct _devicemodeW *v60; // rcx
  struct tagGRAPHICS_DEVICE *v61; // r12
  struct _devicemodeW *ClosestMode; // rcx
  _OWORD *v63; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v65; // ecx
  DWORD v66; // ecx
  char v67; // r8
  int v68; // ecx
  __int64 v69; // rax
  unsigned int v70; // r15d
  unsigned int v71; // r14d
  __int64 v72; // rdi
  int DisplayDriverParameters; // eax
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD dmDisplayFrequency; // eax
  unsigned int dmDisplayFixedOutput; // eax
  int v79; // eax
  DWORD dmDisplayFlags; // eax
  unsigned int dmDisplayOrientation; // eax
  DWORD v82; // ecx
  int v83; // ecx
  int v84; // [rsp+20h] [rbp-98h]
  int v85; // [rsp+28h] [rbp-90h]
  int v86; // [rsp+2Ch] [rbp-8Ch]
  int v87; // [rsp+30h] [rbp-88h]
  int v88; // [rsp+34h] [rbp-84h]
  int v89; // [rsp+38h] [rbp-80h]
  DWORD dmPanningWidth; // [rsp+3Ch] [rbp-7Ch]
  DWORD dmPanningHeight; // [rsp+40h] [rbp-78h]
  BOOL v92; // [rsp+44h] [rbp-74h]
  int v93; // [rsp+48h] [rbp-70h]
  _DWORD *v94; // [rsp+50h] [rbp-68h]
  unsigned int v95; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v96; // [rsp+60h] [rbp-58h]
  _OWORD *Buffer; // [rsp+68h] [rbp-50h]
  WORD Size; // [rsp+D0h] [rbp+18h]
  unsigned int Sizea; // [rsp+D0h] [rbp+18h]
  WORD Srca; // [rsp+E0h] [rbp+28h]
  int Srcb; // [rsp+E0h] [rbp+28h]

  v95 = 1;
  v89 = 0;
  dmPanningWidth = 0;
  dmPanningHeight = 0;
  v12 = -1073741823;
  v92 = 0;
  v13 = 0LL;
  v96 = 0LL;
  v14 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v17 = PALLOCNOZ(0x100DBu, 0x76656447u);
  if ( v17 )
  {
    v20 = *((_DWORD *)a1 + 40);
    v21 = a10;
    if ( (v20 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v96 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    Srca = dmSize;
    Size = Src->dmDriverExtra;
    if ( (unsigned __int16)dmSize < 0xBCu )
      goto LABEL_22;
    v24 = dmSize + dmDriverExtra;
    v25 = (struct _devicemodeW *)PALLOCNOZ(dmSize + dmDriverExtra, 0x76656447u);
    v13 = v25;
    if ( !v25 )
      goto LABEL_22;
    memmove(v25, Src, v24);
    dmFields = v13->dmFields;
    v18 = 0LL;
    v16 = 524320LL;
    v13->dmSize = Srca;
    v19 = 1LL;
    v13->dmDriverExtra = dmDriverExtra;
    v27 = 1;
    if ( dmFields )
      v27 = a8;
    v84 = v27;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
      goto LABEL_22;
    }
    Buffer = (_OWORD *)PALLOCNOZ(0xDCu, 0x76656447u);
    if ( !Buffer )
      goto LABEL_22;
    memset((void *)v17, 0, 0xDCuLL);
    *(_DWORD *)(v17 + 68) = -8739;
    if ( a6 )
    {
      v61 = a1;
      DrvGetDisplayDriverParameters((__int64)a1, (struct _devicemodeW *)v17, 1, (__int64)v21);
      v30 = 0LL;
    }
    else
    {
      DisplayDriverParameters = DrvGetDisplayDriverParameters((__int64)a1, (struct _devicemodeW *)v17, 0, (__int64)v21);
      v30 = 0LL;
      if ( DisplayDriverParameters < 0 )
        *(_DWORD *)(v17 + 68) = 220;
      *Buffer = *(_OWORD *)v17;
      Buffer[1] = *(_OWORD *)(v17 + 16);
      Buffer[2] = *(_OWORD *)(v17 + 32);
      Buffer[3] = *(_OWORD *)(v17 + 48);
      Buffer[4] = *(_OWORD *)(v17 + 64);
      Buffer[5] = *(_OWORD *)(v17 + 80);
      Buffer[6] = *(_OWORD *)(v17 + 96);
      Buffer[7] = *(_OWORD *)(v17 + 112);
      Buffer[8] = *(_OWORD *)(v17 + 128);
      Buffer[9] = *(_OWORD *)(v17 + 144);
      Buffer[10] = *(_OWORD *)(v17 + 160);
      Buffer[11] = *(_OWORD *)(v17 + 176);
      Buffer[12] = *(_OWORD *)(v17 + 192);
      *((_QWORD *)Buffer + 26) = *(_QWORD *)(v17 + 208);
      *((_DWORD *)Buffer + 54) = *(_DWORD *)(v17 + 216);
      if ( (v13->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v13->dmBitsPerPel;
        if ( dmBitsPerPel )
          *(_DWORD *)(v17 + 168) = dmBitsPerPel;
      }
      if ( (v13->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v13->dmPelsWidth;
        if ( dmPelsWidth )
          *(_DWORD *)(v17 + 172) = dmPelsWidth;
      }
      if ( (v13->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v13->dmPelsHeight;
        if ( dmPelsHeight )
          *(_DWORD *)(v17 + 176) = dmPelsHeight;
      }
      if ( (v13->dmFields & 0x400000) != 0 && (dmDisplayFrequency = v13->dmDisplayFrequency) != 0 )
      {
        *(_DWORD *)(v17 + 184) = dmDisplayFrequency;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        v79 = *(_DWORD *)(v17 + 184);
        *(_DWORD *)(v17 + 184) = 0;
        v89 = v79;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v24 == 244 )
        {
          WdLogSingleEntry0(3LL);
          v30 = 0LL;
          WdLogGlobalForLineNumber = 6023;
        }
      }
      v61 = a1;
    }
    v28 = 0LL;
    if ( _bittest((const signed __int32 *)&v13->dmFields, 0x15u) )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      *(_DWORD *)(v17 + 180) = dmDisplayFlags;
      LOBYTE(v28) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( _bittest((const signed __int32 *)(v17 + 72), 0x15u) )
    {
      *(_DWORD *)(v17 + 180) &= 6u;
    }
    v66 = v13->dmFields;
    if ( (v66 & 0x18000000) == 0x18000000 )
    {
      if ( Srca < 0xDCu )
      {
        v66 &= 0xE7FFFFFF;
        v13->dmFields = v66;
      }
      else
      {
        dmPanningWidth = v13->dmPanningWidth;
        if ( dmPanningWidth > *(_DWORD *)(v17 + 172) || v13->dmPanningHeight > *(_DWORD *)(v17 + 176) )
          v28 = 1LL;
        dmPanningHeight = v13->dmPanningHeight;
      }
      v67 = v66;
    }
    else
    {
      v67 = v66;
      if ( (*(_DWORD *)(v17 + 72) & 0x18000000) == 0x18000000 )
      {
        if ( *(_DWORD *)(v17 + 216) < *(_DWORD *)(v17 + 176) && *(_DWORD *)(v17 + 212) < *(_DWORD *)(v17 + 172) )
        {
          dmPanningWidth = *(_DWORD *)(v17 + 212);
          dmPanningHeight = *(_DWORD *)(v17 + 216);
        }
        v30 = 0LL;
      }
    }
    if ( v67 < 0 )
    {
      dmDisplayOrientation = v13->dmDisplayOrientation;
      *(_DWORD *)(v17 + 84) = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v28 = 1LL;
    }
    v29 = 0x20000000LL;
    if ( (*((_DWORD *)v61 + 40) & 0x800000) != 0 )
    {
      v82 = v13->dmFields;
      if ( (v82 & 0x20400000) == 0x400000 )
      {
        v13->dmDisplayFixedOutput = 0;
        v13->dmFields = v82 | 0x20000000;
        v95 = 0;
      }
    }
    if ( (v13->dmFields & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
      *(_DWORD *)(v17 + 88) = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        v87 = 1;
        if ( dmDisplayFixedOutput > 2 )
          v28 = 1LL;
      }
      else
      {
        v87 = 3;
      }
      if ( (*((_DWORD *)v61 + 40) & 0x800000) != 0 )
        *(_DWORD *)(v17 + 72) |= 0x20000000u;
    }
    else
    {
      v68 = 0;
      if ( (*(_DWORD *)(v17 + 72) & 0x20000000) != 0 )
        v68 = 2;
      v87 = v68;
    }
    if ( v96 )
      v92 = *(_DWORD *)(v17 + 88) == 0;
    if ( (v13->dmFields & 0x20) != 0 )
    {
      v88 = 1;
      v69 = (__int64)v13;
    }
    else
    {
      v69 = v17;
      v88 = *(_DWORD *)(v17 + 72) & 0x20;
    }
    v85 = *(_DWORD *)(v69 + 76);
    v86 = *(_DWORD *)(v69 + 80);
    if ( (_DWORD)v28 == 1 )
      goto LABEL_21;
    v70 = Size;
    Sizea = v70;
    v71 = v70;
    if ( !(_WORD)v70 )
    {
      if ( (*((_DWORD *)v61 + 40) & 0x800000) != 0 )
      {
        v71 = 24;
      }
      else if ( !v13->dmPelsWidth && !v13->dmPelsHeight
             || AreEquivalentDevModes(v13, (const struct _devicemodeW *const)Buffer) )
      {
        Sizea = *(unsigned __int16 *)(v17 + 70);
        v71 = Sizea;
      }
    }
    v72 = PALLOCMEM(v71 + 220, 1986356295LL, v29, v30);
    if ( !v72 )
      goto LABEL_21;
    if ( Sizea )
    {
      if ( (_WORD)v70 )
      {
        v35 = (char *)v13 + Srca;
      }
      else
      {
        if ( !*(_WORD *)(v17 + 70) )
          goto LABEL_27;
        v35 = (char *)(v17 + *(unsigned __int16 *)(v17 + 68));
      }
      memmove((void *)(v72 + 220), v35, Sizea);
    }
    else
    {
      if ( !v71 )
      {
        v36 = v84;
        goto LABEL_28;
      }
      memset((void *)(v72 + 220), 0, v71);
    }
LABEL_27:
    v36 = v84;
LABEL_28:
    v37 = 0LL;
    Srcb = 0;
    v93 = 0;
    DrvBuildDevmodeList(v61);
    v40 = (_DWORD *)*((_QWORD *)v61 + 22);
    v94 = v40;
    if ( !*(_DWORD *)(v17 + 168) && !*(_DWORD *)(v17 + 172) && !*(_DWORD *)(v17 + 176) && !*(_DWORD *)(v17 + 84) )
    {
      v41 = *((_DWORD *)v61 + 40);
      if ( (v41 & 0x6000000) != 0 )
      {
        if ( v40 )
        {
          *(_DWORD *)(v17 + 168) = v40[42];
          *(_DWORD *)(v17 + 172) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 172LL);
          *(_DWORD *)(v17 + 176) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 176LL);
          *(_DWORD *)(v17 + 184) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 184LL);
          *(_DWORD *)(v17 + 84) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 84LL);
          *(_DWORD *)(v17 + 88) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 88LL);
          *(_DWORD *)(v17 + 180) = *(_DWORD *)(*((_QWORD *)v61 + 22) + 180LL);
        }
        goto LABEL_35;
      }
      if ( (v41 & 8) != 0 )
      {
        v12 = *((_DWORD *)v61 + 46) != 0 ? -1073741823 : -1073741776;
        goto LABEL_35;
      }
      v57 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v39) + 88) + 1148LL) == 0;
      *(_DWORD *)(v17 + 168) = 0;
      v58 = !v57;
      v59 = &dword_140270D70[2 * v58 + 1];
      if ( v84 )
      {
        do
        {
          *(_DWORD *)(v17 + 172) = *(v59 - 1);
          *(_DWORD *)(v17 + 176) = *v59;
          ClosestMode = GetClosestMode(a1, (struct _devicemodeW *)v17, a7, 1);
          if ( (ClosestMode || (ClosestMode = GetClosestMode(a1, (struct _devicemodeW *)v17, a7, 0)) != 0LL)
            && ClosestMode->dmBitsPerPel > 0x10 )
          {
            goto LABEL_93;
          }
          LODWORD(v58) = v58 + 1;
          v59 += 2;
        }
        while ( (unsigned int)v58 < 3 );
        if ( ClosestMode )
        {
LABEL_93:
          *(_DWORD *)(v17 + 168) = ClosestMode->dmBitsPerPel;
          *(_DWORD *)(v17 + 172) = ClosestMode->dmPelsWidth;
          *(_DWORD *)(v17 + 176) = ClosestMode->dmPelsHeight;
          *(_DWORD *)(v17 + 184) = ClosestMode->dmDisplayFrequency;
          *(_DWORD *)(v17 + 84) = ClosestMode->dmDisplayOrientation;
          *(_DWORD *)(v17 + 88) = ClosestMode->dmDisplayFixedOutput;
          *(_DWORD *)(v17 + 180) = ClosestMode->dmDisplayFlags;
        }
      }
      else
      {
        *(_DWORD *)(v17 + 172) = dword_140270D70[2 * v58];
        *(_DWORD *)(v17 + 176) = *v59;
      }
      v61 = a1;
      goto LABEL_95;
    }
    v49 = *((_DWORD *)v61 + 40);
    if ( (v49 & 8) != 0 && !*((_DWORD *)v61 + 46) )
    {
      v37 = v17;
      goto LABEL_35;
    }
    if ( !a9
      || (v49 & 0x800000) == 0
      || *(unsigned __int16 *)(v17 + 68) + *(unsigned __int16 *)(v17 + 70) != 244
      || v13->dmBitsPerPel == 4
      || !*(_DWORD *)(v17 + 184) )
    {
      if ( v36 )
      {
        v60 = GetClosestMode(v61, (struct _devicemodeW *)v17, a7, 1);
        if ( v60 || (v60 = GetClosestMode(v61, (struct _devicemodeW *)v17, a7, 0)) != 0LL )
        {
          *(_DWORD *)(v17 + 168) = v60->dmBitsPerPel;
          *(_DWORD *)(v17 + 172) = v60->dmPelsWidth;
          *(_DWORD *)(v17 + 176) = v60->dmPelsHeight;
          *(_DWORD *)(v17 + 184) = v60->dmDisplayFrequency;
          *(_DWORD *)(v17 + 84) = v60->dmDisplayOrientation;
          *(_DWORD *)(v17 + 88) = v60->dmDisplayFixedOutput;
          *(_DWORD *)(v17 + 180) = v60->dmDisplayFlags;
        }
LABEL_95:
        v40 = v94;
      }
LABEL_35:
      v42 = 0;
      v43 = 0;
      v44 = *((_DWORD *)v61 + 47);
      v45 = 0;
      v46 = 0;
      while ( 1 )
      {
        v47 = v42;
        if ( v43 >= v44 )
        {
LABEL_67:
          if ( v37 )
            goto LABEL_68;
          GreDeleteFastMutex((char *)v72, v38, 0LL, (__int64)v40);
LABEL_21:
          GreDeleteFastMutex((char *)Buffer, v28, v29, v30);
LABEL_22:
          GreDeleteFastMutex((char *)v17, v16, v18, v19);
          if ( v13 )
            GreDeleteFastMutex((char *)v13, v31, v32, v33);
          return v12;
        }
        v38 = v43;
        if ( a7 )
        {
          v42 = Srcb;
          if ( *(_DWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43) )
            goto LABEL_42;
        }
        v38 = 2LL * v43;
        v40 = *(_DWORD **)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
        v48 = *(_DWORD *)(v17 + 168);
        if ( v48 )
        {
          if ( v48 != v40[42] )
            goto LABEL_42;
        }
        if ( *(_DWORD *)(v17 + 172) != v40[43] )
          goto LABEL_42;
        if ( *(_DWORD *)(v17 + 176) != v40[44] )
          goto LABEL_42;
        if ( *(_DWORD *)(v17 + 84) != v40[21] )
          goto LABEL_42;
        v38 = v95;
        if ( v95 )
        {
          if ( *(_DWORD *)(v17 + 88) != v40[22] && (v87 == 1 || v42 == 2 && v45 == 2) )
            goto LABEL_42;
        }
        if ( !v37 )
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
        if ( v42 && (Srcb = v47, v47 == 2) )
        {
          if ( v45 == 2 )
            goto LABEL_57;
        }
        else
        {
          Srcb = 2;
          v45 = 0;
          v46 = 0;
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
        }
        if ( *(_DWORD *)(v17 + 88) == v40[22] || !v95 )
        {
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
          v45 = 2;
          v46 = 0;
          goto LABEL_58;
        }
LABEL_57:
        if ( v46 )
        {
          if ( v46 == 2 )
            goto LABEL_121;
          goto LABEL_62;
        }
LABEL_58:
        if ( v40[46] == 60 && v40[45] == *(_DWORD *)(v17 + 180) )
        {
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
          v46 = 1;
        }
LABEL_62:
        v50 = v40[46];
        if ( v50 == 1 && *(_DWORD *)(v17 + 184) == 64 && v40[45] == *(_DWORD *)(v17 + 180) )
        {
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
          v46 = 2;
LABEL_121:
          v42 = 2;
          goto LABEL_42;
        }
        v38 = *(unsigned int *)(v17 + 184);
        if ( v50 != (_DWORD)v38
          && ((*((_DWORD *)v61 + 40) & 0x800000) == 0
           || *(unsigned __int16 *)(v17 + 70) + *(unsigned __int16 *)(v17 + 68) != 244
           || (_DWORD)v38
           || v89 != v50) )
        {
          goto LABEL_121;
        }
        v42 = 2;
        if ( v40[45] == *(_DWORD *)(v17 + 180) )
        {
          v46 = 2;
          v37 = *(_QWORD *)(*((_QWORD *)v61 + 24) + 16LL * v43 + 8);
          if ( v45 == 2 || !*(_DWORD *)(v17 + 88) && (*((_DWORD *)v61 + 40) & 0x800000) == 0 )
          {
            v93 = 1;
            goto LABEL_67;
          }
        }
LABEL_42:
        v44 = *((_DWORD *)v61 + 47);
        ++v43;
      }
    }
    v37 = v17;
    if ( *((_DWORD *)v61 + 47) )
    {
      v63 = *(_OWORD **)(*((_QWORD *)v61 + 24) + 8LL);
      if ( v63 )
      {
        *(_OWORD *)v17 = *v63;
        *(_OWORD *)(v17 + 16) = v63[1];
        *(_OWORD *)(v17 + 32) = v63[2];
        *(_OWORD *)(v17 + 48) = v63[3];
      }
    }
    v93 = 1;
    v42 = 2;
    v45 = 2;
    v46 = 2;
LABEL_68:
    if ( v46 != 2 && a8 && *(_DWORD *)(v37 + 184) == *(_DWORD *)(v17 + 184) )
      v46 = 2;
    if ( (*((_DWORD *)v61 + 40) & 0x800000) != 0 )
    {
      if ( v42 == 2 && v45 == 2 && (v87 & 0xFFFFFFFD) == 0 )
        v46 = 2;
      v83 = *(unsigned __int16 *)(v37 + 68);
      if ( v83 + Sizea != 244 || *(_DWORD *)(v17 + 184) || v89 == v40[46] )
      {
        if ( !Sizea && v46 && v83 + *(unsigned __int16 *)(v37 + 70) == 244 )
        {
          *(_QWORD *)(v72 + 220) = *(_QWORD *)(v37 + 220);
          Sizea = *(unsigned __int16 *)(v37 + 70);
        }
      }
      else
      {
        Sizea = 0;
      }
    }
    memmove((void *)v72, (const void *)v37, *(unsigned __int16 *)(v37 + 68));
    *(_WORD *)(v72 + 70) = Sizea;
    v53 = *(_QWORD *)(W32GetSessionState(v51) + 88);
    if ( !*(_WORD *)(v53 + 1168) )
    {
      a8 = 0;
      v54 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v52) + 48) + 2712LL);
      if ( v54 )
        v54(1LL, &a8);
      v55 = a8;
      *(_WORD *)(v17 + 166) = a8;
      *(_WORD *)(v53 + 1168) = v55;
    }
    v29 = 404881408LL;
    v56 = *(unsigned int *)(v72 + 72);
    *(_WORD *)(v72 + 166) = *(_WORD *)(v17 + 166);
    *(_DWORD *)(v72 + 72) = v56 | 0x18220000;
    if ( (*((_DWORD *)v61 + 40) & 0x4000000) != 0 )
    {
      if ( !v88 )
      {
LABEL_78:
        *(_DWORD *)(v72 + 212) = dmPanningWidth;
        *(_DWORD *)(v72 + 216) = dmPanningHeight;
        if ( (*((_DWORD *)v61 + 40) & 0x800000) != 0 && Sizea + *(unsigned __int16 *)(v72 + 68) == 244 )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v56, 0LL);
          (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 232))(v72, v72);
        }
        if ( v96 )
        {
          if ( *(_DWORD *)&v96[1].dmDeviceName[6] )
          {
            v65 = *(_DWORD *)(v72 + 72) | 0x2000000;
            *(_DWORD *)(v72 + 72) = v65;
            *(_DWORD *)(v72 + 196) = *(_DWORD *)&v96[1].dmDeviceName[6];
            if ( v92 )
            {
              *(_DWORD *)(v72 + 72) = v65 | 0x4000000;
              *(_DWORD *)(v72 + 88) = *(_DWORD *)&v96[1].dmDeviceName[8];
            }
          }
        }
        v28 = (__int64)a4;
        if ( a4
          && *(unsigned __int16 *)(v37 + 68) + *(unsigned __int16 *)(v37 + 70) == 244
          && (*(_DWORD *)(v37 + 240) & 0x20) != 0 )
        {
          *a4 = 1;
        }
        *a2 = (struct _devicemodeW *)v72;
        if ( v93 || v46 == 2 )
          v12 = 0;
        else
          v12 = *(_DWORD *)(v17 + 184) != 0 ? -1073741811 : 1073741839;
        goto LABEL_21;
      }
      v56 = (unsigned int)v56 | 0x18220020;
      *(_DWORD *)(v72 + 72) = v56;
    }
    else
    {
      *(_DWORD *)(v72 + 72) = v56 | (v88 != 0 ? 0x20 : 0) | 0x18220000;
    }
    *(_DWORD *)(v72 + 76) = v85;
    *(_DWORD *)(v72 + 80) = v86;
    goto LABEL_78;
  }
  return v12;
}
