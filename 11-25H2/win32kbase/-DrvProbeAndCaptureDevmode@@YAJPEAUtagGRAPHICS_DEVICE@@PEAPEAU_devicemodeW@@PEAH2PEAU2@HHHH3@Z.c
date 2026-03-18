/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBDE8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     DrvBuildDevmodeList @ 0x14004BF38 (DrvBuildDevmodeList.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     DrvGetDisplayDriverParameters @ 0x14004C840 (DrvGetDisplayDriverParameters.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1401231AC (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1401390F8 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
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
  unsigned int v12; // edi
  struct _devicemodeW *v13; // rsi
  struct _devicemodeW *v14; // r13
  __int64 v15; // rbx
  int v16; // eax
  struct _devicemodeW *v17; // rbp
  unsigned int dmSize; // eax
  unsigned int dmDriverExtra; // r13d
  unsigned int v20; // r12d
  struct _devicemodeW *v21; // rax
  DWORD dmFields; // ecx
  int v23; // eax
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r14d
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  void (__fastcall *v32)(__int64, int *); // rax
  __int16 v33; // ax
  __int16 v34; // ax
  __int64 v35; // rcx
  __int64 v37; // rbp
  int v38; // r14d
  __int64 v39; // rcx
  _DWORD *v40; // r9
  int v41; // eax
  unsigned int v42; // r11d
  unsigned int v43; // eax
  int v44; // r10d
  int v45; // r8d
  int v46; // eax
  int v47; // eax
  struct tagGRAPHICS_DEVICE *v48; // r12
  int v49; // edx
  DWORD v50; // ecx
  char v51; // r8
  int v52; // ecx
  LONG y; // eax
  unsigned int v54; // r14d
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD dmDisplayFrequency; // eax
  int v59; // eax
  DWORD dmDisplayFlags; // eax
  unsigned int dmDisplayOrientation; // eax
  DWORD v62; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  char *v64; // rdx
  bool v65; // zf
  __int64 v66; // rcx
  unsigned int v67; // r12d
  _DWORD *v68; // r14
  struct _devicemodeW *ClosestMode; // rcx
  _OWORD *v70; // rcx
  struct _devicemodeW *v71; // rcx
  int v72; // ecx
  __int64 DxgkWin32kInterface; // rax
  int v74; // ecx
  unsigned int v75; // [rsp+20h] [rbp-98h]
  int v76; // [rsp+20h] [rbp-98h]
  int v77; // [rsp+24h] [rbp-94h]
  int v78; // [rsp+28h] [rbp-90h]
  int v79; // [rsp+2Ch] [rbp-8Ch]
  LONG x; // [rsp+30h] [rbp-88h]
  LONG v81; // [rsp+34h] [rbp-84h]
  DWORD dmPanningWidth; // [rsp+38h] [rbp-80h]
  DWORD dmPanningHeight; // [rsp+3Ch] [rbp-7Ch]
  BOOL v84; // [rsp+40h] [rbp-78h]
  _DWORD *v85; // [rsp+48h] [rbp-70h]
  __int64 v86; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v87; // [rsp+60h] [rbp-58h]
  _OWORD *Buffer; // [rsp+68h] [rbp-50h]
  unsigned int Size; // [rsp+D0h] [rbp+18h]
  int Srca; // [rsp+E0h] [rbp+28h]
  int Srcb; // [rsp+E0h] [rbp+28h]

  v79 = 0;
  dmPanningWidth = 0;
  v12 = -1073741823;
  dmPanningHeight = 0;
  v13 = 0LL;
  v84 = 0;
  v14 = 0LL;
  v87 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v15 = PALLOCNOZ(65755LL, 1986356295LL);
  if ( v15 )
  {
    v16 = *((_DWORD *)a1 + 40);
    v17 = a10;
    if ( (v16 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v87 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v75 = dmSize;
    Size = dmDriverExtra;
    if ( dmSize < 0xBC )
      goto LABEL_37;
    v20 = dmSize + dmDriverExtra;
    v21 = (struct _devicemodeW *)PALLOCNOZ(dmSize + dmDriverExtra, 1986356295LL);
    v13 = v21;
    if ( !v21 )
      goto LABEL_37;
    memmove(v21, Src, v20);
    dmFields = v13->dmFields;
    v13->dmSize = v75;
    v13->dmDriverExtra = dmDriverExtra;
    v23 = 1;
    if ( dmFields )
      v23 = a8;
    Srca = v23;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
      goto LABEL_37;
    }
    Buffer = (_OWORD *)PALLOCNOZ(220LL, 1986356295LL);
    if ( !Buffer )
      goto LABEL_37;
    memset((void *)v15, 0, 0xDCuLL);
    *(_WORD *)(v15 + 70) = -1;
    *(_WORD *)(v15 + 68) = -8739;
    if ( a6 )
    {
      v48 = a1;
      DrvGetDisplayDriverParameters((__int64)a1, (struct _devicemodeW *)v15, 1, (__int64)v17);
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters((__int64)a1, (struct _devicemodeW *)v15, 0, (__int64)v17) < 0 )
        *(_DWORD *)(v15 + 68) = 220;
      *Buffer = *(_OWORD *)v15;
      Buffer[1] = *(_OWORD *)(v15 + 16);
      Buffer[2] = *(_OWORD *)(v15 + 32);
      Buffer[3] = *(_OWORD *)(v15 + 48);
      Buffer[4] = *(_OWORD *)(v15 + 64);
      Buffer[5] = *(_OWORD *)(v15 + 80);
      Buffer[6] = *(_OWORD *)(v15 + 96);
      Buffer[7] = *(_OWORD *)(v15 + 112);
      Buffer[8] = *(_OWORD *)(v15 + 128);
      Buffer[9] = *(_OWORD *)(v15 + 144);
      Buffer[10] = *(_OWORD *)(v15 + 160);
      Buffer[11] = *(_OWORD *)(v15 + 176);
      Buffer[12] = *(_OWORD *)(v15 + 192);
      *((_QWORD *)Buffer + 26) = *(_QWORD *)(v15 + 208);
      *((_DWORD *)Buffer + 54) = *(_DWORD *)(v15 + 216);
      if ( (v13->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v13->dmBitsPerPel;
        if ( dmBitsPerPel )
          *(_DWORD *)(v15 + 168) = dmBitsPerPel;
      }
      if ( (v13->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v13->dmPelsWidth;
        if ( dmPelsWidth )
          *(_DWORD *)(v15 + 172) = dmPelsWidth;
      }
      if ( (v13->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v13->dmPelsHeight;
        if ( dmPelsHeight )
          *(_DWORD *)(v15 + 176) = dmPelsHeight;
      }
      if ( (v13->dmFields & 0x400000) != 0 && (dmDisplayFrequency = v13->dmDisplayFrequency) != 0 )
      {
        *(_DWORD *)(v15 + 184) = dmDisplayFrequency;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        v59 = *(_DWORD *)(v15 + 184);
        *(_DWORD *)(v15 + 184) = 0;
        v79 = v59;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v20 == 244 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 6235;
        }
      }
      v48 = a1;
    }
    v49 = 0;
    if ( _bittest((const signed __int32 *)&v13->dmFields, 0x15u) )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      *(_DWORD *)(v15 + 180) = dmDisplayFlags;
      LOBYTE(v49) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( _bittest((const signed __int32 *)(v15 + 72), 0x15u) )
    {
      *(_DWORD *)(v15 + 180) &= 6u;
    }
    v50 = v13->dmFields;
    if ( (v50 & 0x18000000) == 0x18000000 )
    {
      if ( v75 < 0xDC )
      {
        v50 &= 0xE7FFFFFF;
        v13->dmFields = v50;
      }
      else
      {
        dmPanningWidth = v13->dmPanningWidth;
        if ( dmPanningWidth > *(_DWORD *)(v15 + 172) || v13->dmPanningHeight > *(_DWORD *)(v15 + 176) )
          v49 = 1;
        dmPanningHeight = v13->dmPanningHeight;
      }
      v51 = v50;
    }
    else
    {
      v51 = v50;
      if ( (*(_DWORD *)(v15 + 72) & 0x18000000) == 0x18000000
        && *(_DWORD *)(v15 + 216) < *(_DWORD *)(v15 + 176)
        && *(_DWORD *)(v15 + 212) < *(_DWORD *)(v15 + 172) )
      {
        dmPanningWidth = *(_DWORD *)(v15 + 212);
        dmPanningHeight = *(_DWORD *)(v15 + 216);
      }
    }
    if ( v51 < 0 )
    {
      dmDisplayOrientation = v13->dmDisplayOrientation;
      *(_DWORD *)(v15 + 84) = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v49 = 1;
    }
    v86 = 1LL;
    if ( (*((_DWORD *)v48 + 40) & 0x800000) != 0 )
    {
      v62 = v13->dmFields;
      v86 = 1LL;
      if ( (v62 & 0x20400000) == 0x400000 )
      {
        v13->dmDisplayFixedOutput = 0;
        v13->dmFields = v62 | 0x20000000;
        v86 = 0LL;
      }
    }
    if ( (v13->dmFields & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
      *(_DWORD *)(v15 + 88) = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        v77 = 1;
        if ( dmDisplayFixedOutput > 2 )
          v49 = 1;
      }
      else
      {
        v77 = 3;
      }
      if ( (*((_DWORD *)v48 + 40) & 0x800000) != 0 )
        *(_DWORD *)(v15 + 72) |= 0x20000000u;
    }
    else
    {
      v52 = 0;
      if ( (*(_DWORD *)(v15 + 72) & 0x20000000) != 0 )
        v52 = 2;
      v77 = v52;
    }
    if ( v87 )
      v84 = *(_DWORD *)(v15 + 88) == 0;
    if ( (v13->dmFields & 0x20) != 0 )
    {
      x = v13->dmPosition.x;
      y = v13->dmPosition.y;
      v78 = 1;
    }
    else
    {
      v78 = *(_DWORD *)(v15 + 72) & 0x20;
      x = *(_DWORD *)(v15 + 76);
      y = *(_DWORD *)(v15 + 80);
    }
    v81 = y;
    if ( v49 == 1 )
      goto LABEL_36;
    v54 = dmDriverExtra;
    if ( !dmDriverExtra )
    {
      if ( (*((_DWORD *)v48 + 40) & 0x800000) != 0 )
      {
        v54 = 24;
      }
      else if ( !v13->dmPelsWidth && !v13->dmPelsHeight
             || AreEquivalentDevModes(v13, (const struct _devicemodeW *const)Buffer) )
      {
        Size = *(unsigned __int16 *)(v15 + 70);
        v54 = Size;
      }
    }
    v37 = PALLOCMEM(v54 + 220, 1986356295LL);
    if ( !v37 )
      goto LABEL_36;
    if ( !Size )
    {
      if ( v54 )
        memset((void *)(v37 + 220), 0, v54);
LABEL_52:
      v38 = Srca;
      v28 = 0LL;
      Srcb = 0;
      v76 = 0;
      DrvBuildDevmodeList(v48, 0LL, 0);
      v40 = (_DWORD *)*((_QWORD *)v48 + 22);
      v85 = v40;
      if ( !*(_DWORD *)(v15 + 168) && !*(_DWORD *)(v15 + 172) && !*(_DWORD *)(v15 + 176) && !*(_DWORD *)(v15 + 84) )
      {
        v41 = *((_DWORD *)v48 + 40);
        if ( (v41 & 0x6000000) != 0 )
        {
          if ( v40 )
          {
            *(_DWORD *)(v15 + 168) = v40[42];
            *(_DWORD *)(v15 + 172) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 172LL);
            *(_DWORD *)(v15 + 176) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 176LL);
            *(_DWORD *)(v15 + 184) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 184LL);
            *(_DWORD *)(v15 + 84) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 84LL);
            *(_DWORD *)(v15 + 88) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 88LL);
            *(_DWORD *)(v15 + 180) = *(_DWORD *)(*((_QWORD *)v48 + 22) + 180LL);
          }
          goto LABEL_59;
        }
        if ( (v41 & 8) != 0 )
        {
          v12 = *((_DWORD *)v48 + 46) != 0 ? -1073741823 : -1073741776;
          goto LABEL_59;
        }
        v65 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v39) + 88) + 1060LL) == 0;
        *(_DWORD *)(v15 + 168) = 0;
        v66 = 8LL * !v65;
        v67 = !v65;
        if ( v38 )
        {
          v68 = (_DWORD *)((char *)&unk_140271178 + v66 + 4);
          do
          {
            *(_DWORD *)(v15 + 172) = *(v68 - 1);
            *(_DWORD *)(v15 + 176) = *v68;
            ClosestMode = GetClosestMode(a1, (struct _devicemodeW *)v15, a7, 1);
            if ( (ClosestMode || (ClosestMode = GetClosestMode(a1, (struct _devicemodeW *)v15, a7, 0)) != 0LL)
              && ClosestMode->dmBitsPerPel > 0x10 )
            {
              goto LABEL_180;
            }
            ++v67;
            v68 += 2;
          }
          while ( v67 < 3 );
          if ( ClosestMode )
          {
LABEL_180:
            *(_DWORD *)(v15 + 168) = ClosestMode->dmBitsPerPel;
            *(_DWORD *)(v15 + 172) = ClosestMode->dmPelsWidth;
            *(_DWORD *)(v15 + 176) = ClosestMode->dmPelsHeight;
            *(_DWORD *)(v15 + 184) = ClosestMode->dmDisplayFrequency;
            *(_DWORD *)(v15 + 84) = ClosestMode->dmDisplayOrientation;
            *(_DWORD *)(v15 + 88) = ClosestMode->dmDisplayFixedOutput;
            *(_DWORD *)(v15 + 180) = ClosestMode->dmDisplayFlags;
          }
        }
        else
        {
          *(_DWORD *)(v15 + 172) = *(_DWORD *)((char *)&unk_140271178 + v66);
          *(_DWORD *)(v15 + 176) = *(_DWORD *)((char *)&unk_140271178 + v66 + 4);
        }
        v48 = a1;
LABEL_182:
        v40 = v85;
        goto LABEL_59;
      }
      v47 = *((_DWORD *)v48 + 40);
      if ( (v47 & 8) != 0 && !*((_DWORD *)v48 + 46) )
      {
        v28 = v15;
LABEL_59:
        v26 = 0;
        v42 = 0;
        v43 = *((_DWORD *)v48 + 47);
        v44 = 0;
        v27 = 0;
        while ( 1 )
        {
          v45 = v26;
          if ( v42 >= v43 )
          {
LABEL_21:
            if ( v28 )
              goto LABEL_22;
            GreDeleteFastMutex((char *)v37);
LABEL_36:
            GreDeleteFastMutex((char *)Buffer);
LABEL_37:
            GreDeleteFastMutex((char *)v15);
            if ( v13 )
              GreDeleteFastMutex((char *)v13);
            return v12;
          }
          if ( a7 )
          {
            v26 = Srcb;
            if ( *(_DWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42) )
              goto LABEL_66;
          }
          v40 = *(_DWORD **)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
          v46 = *(_DWORD *)(v15 + 168);
          if ( v46 )
          {
            if ( v46 != v40[42] )
              goto LABEL_66;
          }
          if ( *(_DWORD *)(v15 + 172) != v40[43]
            || *(_DWORD *)(v15 + 176) != v40[44]
            || *(_DWORD *)(v15 + 84) != v40[21]
            || v86 && *(_DWORD *)(v15 + 88) != v40[22] && (v77 == 1 || v44 == 2 && v26 == 2) )
          {
            goto LABEL_66;
          }
          if ( !v28 )
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
          if ( v26 && (Srcb = v45, v45 == 2) )
          {
            if ( v44 == 2 )
              goto LABEL_78;
          }
          else
          {
            Srcb = 2;
            v44 = 0;
            v27 = 0;
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
          }
          if ( *(_DWORD *)(v15 + 88) == v40[22] || !v86 )
          {
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
            v44 = 2;
            v27 = 0;
            goto LABEL_79;
          }
LABEL_78:
          if ( v27 )
          {
            if ( v27 == 2 )
              goto LABEL_47;
            goto LABEL_16;
          }
LABEL_79:
          if ( v40[46] == 60 && v40[45] == *(_DWORD *)(v15 + 180) )
          {
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
            v27 = 1;
          }
LABEL_16:
          v24 = v40[46];
          if ( v24 == 1 && *(_DWORD *)(v15 + 184) == 64 && v40[45] == *(_DWORD *)(v15 + 180) )
          {
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
            v27 = 2;
LABEL_47:
            v26 = 2;
            goto LABEL_66;
          }
          v25 = *(_DWORD *)(v15 + 184);
          if ( v24 != v25
            && ((*((_DWORD *)v48 + 40) & 0x800000) == 0
             || *(unsigned __int16 *)(v15 + 70) + *(unsigned __int16 *)(v15 + 68) != 244
             || v25
             || v79 != v24) )
          {
            goto LABEL_47;
          }
          v26 = 2;
          if ( v40[45] == *(_DWORD *)(v15 + 180) )
          {
            v27 = 2;
            v28 = *(_QWORD *)(*((_QWORD *)v48 + 24) + 16LL * v42 + 8);
            if ( v44 == 2 || !*(_DWORD *)(v15 + 88) && (*((_DWORD *)v48 + 40) & 0x800000) == 0 )
            {
              v76 = 1;
              goto LABEL_21;
            }
          }
LABEL_66:
          v43 = *((_DWORD *)v48 + 47);
          ++v42;
        }
      }
      if ( !a9
        || (v47 & 0x800000) == 0
        || *(unsigned __int16 *)(v15 + 68) + *(unsigned __int16 *)(v15 + 70) != 244
        || v13->dmBitsPerPel == 4
        || !*(_DWORD *)(v15 + 184) )
      {
        if ( !v38 )
          goto LABEL_59;
        v71 = GetClosestMode(v48, (struct _devicemodeW *)v15, a7, 1);
        if ( v71 || (v71 = GetClosestMode(v48, (struct _devicemodeW *)v15, a7, 0)) != 0LL )
        {
          *(_DWORD *)(v15 + 168) = v71->dmBitsPerPel;
          *(_DWORD *)(v15 + 172) = v71->dmPelsWidth;
          *(_DWORD *)(v15 + 176) = v71->dmPelsHeight;
          *(_DWORD *)(v15 + 184) = v71->dmDisplayFrequency;
          *(_DWORD *)(v15 + 84) = v71->dmDisplayOrientation;
          *(_DWORD *)(v15 + 88) = v71->dmDisplayFixedOutput;
          *(_DWORD *)(v15 + 180) = v71->dmDisplayFlags;
        }
        goto LABEL_182;
      }
      v28 = v15;
      if ( *((_DWORD *)v48 + 47) )
      {
        v70 = *(_OWORD **)(*((_QWORD *)v48 + 24) + 8LL);
        if ( v70 )
        {
          *(_OWORD *)v15 = *v70;
          *(_OWORD *)(v15 + 16) = v70[1];
          *(_OWORD *)(v15 + 32) = v70[2];
          *(_OWORD *)(v15 + 48) = v70[3];
        }
      }
      v76 = 1;
      v26 = 2;
      v44 = 2;
      v27 = 2;
LABEL_22:
      if ( v27 != 2 && a8 && *(_DWORD *)(v28 + 184) == *(_DWORD *)(v15 + 184) )
        v27 = 2;
      if ( (*((_DWORD *)v48 + 40) & 0x800000) != 0 )
      {
        if ( v26 == 2 && v44 == 2 && (v77 & 0xFFFFFFFD) == 0 )
          v27 = 2;
        v72 = *(unsigned __int16 *)(v28 + 68);
        if ( v72 + Size != 244 || *(_DWORD *)(v15 + 184) || v79 == v40[46] )
        {
          if ( !Size && v27 && v72 + *(unsigned __int16 *)(v28 + 70) == 244 )
          {
            *(_QWORD *)(v37 + 220) = *(_QWORD *)(v28 + 220);
            Size = *(unsigned __int16 *)(v28 + 70);
          }
        }
        else
        {
          Size = 0;
        }
      }
      memmove((void *)v37, (const void *)v28, *(unsigned __int16 *)(v28 + 68));
      *(_WORD *)(v37 + 70) = Size;
      v31 = *(_QWORD *)(W32GetSessionState(v29) + 88);
      if ( !*(_WORD *)(v31 + 1080) )
      {
        a8 = 0;
        v32 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30, 0LL) + 48) + 3112LL);
        if ( v32 )
          v32(1LL, &a8);
        v33 = a8;
        *(_WORD *)(v15 + 166) = a8;
        *(_WORD *)(v31 + 1080) = v33;
      }
      v34 = *(_WORD *)(v15 + 166);
      v35 = *(_DWORD *)(v37 + 72) | 0x18220000u;
      *(_DWORD *)(v37 + 72) = v35;
      *(_WORD *)(v37 + 166) = v34;
      if ( (*((_DWORD *)v48 + 40) & 0x4000000) != 0 )
      {
        if ( !v78 )
        {
LABEL_31:
          *(_DWORD *)(v37 + 212) = dmPanningWidth;
          *(_DWORD *)(v37 + 216) = dmPanningHeight;
          if ( (*((_DWORD *)v48 + 40) & 0x800000) != 0 && Size + *(unsigned __int16 *)(v37 + 68) == 244 )
          {
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v35);
            (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 232))(v37, v37);
          }
          if ( v87 )
          {
            if ( *(_DWORD *)&v87[1].dmDeviceName[6] )
            {
              v74 = *(_DWORD *)(v37 + 72) | 0x2000000;
              *(_DWORD *)(v37 + 72) = v74;
              *(_DWORD *)(v37 + 196) = *(_DWORD *)&v87[1].dmDeviceName[6];
              if ( v84 )
              {
                *(_DWORD *)(v37 + 72) = v74 | 0x4000000;
                *(_DWORD *)(v37 + 88) = *(_DWORD *)&v87[1].dmDeviceName[8];
              }
            }
          }
          if ( a4
            && *(unsigned __int16 *)(v28 + 68) + *(unsigned __int16 *)(v28 + 70) == 244
            && (*(_DWORD *)(v28 + 240) & 0x20) != 0 )
          {
            *a4 = 1;
          }
          *a2 = (struct _devicemodeW *)v37;
          if ( v76 || v27 == 2 )
            v12 = 0;
          else
            v12 = *(_DWORD *)(v15 + 184) != 0 ? -1073741811 : 1073741839;
          goto LABEL_36;
        }
        v35 = (unsigned int)v35 | 0x20;
        *(_DWORD *)(v37 + 72) = v35;
      }
      else
      {
        *(_DWORD *)(v37 + 72) = v35 | (v78 != 0 ? 0x20 : 0);
      }
      *(_DWORD *)(v37 + 76) = x;
      *(_DWORD *)(v37 + 80) = v81;
      goto LABEL_31;
    }
    if ( dmDriverExtra )
    {
      v64 = (char *)v13 + v75;
    }
    else
    {
      if ( !*(_WORD *)(v15 + 70) )
        goto LABEL_52;
      v64 = (char *)(v15 + *(unsigned __int16 *)(v15 + 68));
    }
    memmove((void *)(v37 + 220), v64, Size);
    goto LABEL_52;
  }
  return v12;
}
