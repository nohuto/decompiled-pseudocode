/*
 * XREFs of HmgShareLockCheck @ 0x140017AD0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400715A4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x140085DF4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140086F7C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     GreSetBitmapOwner @ 0x14008CDB0 (GreSetBitmapOwner.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7A2C (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EBB0C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngDeletePalette @ 0x140117250 (EngDeletePalette.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401338F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401D07C0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019500 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockCheck(__int64 a1, char a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r15
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // r10
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r11d
  __int64 v33; // r10
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  __int64 v38; // r10
  __int64 v39; // rcx
  unsigned int *v40; // [rsp+20h] [rbp-38h] BYREF
  int v41; // [rsp+28h] [rbp-30h]
  __int16 v42; // [rsp+2Ch] [rbp-2Ch]
  __int64 v43; // [rsp+30h] [rbp-28h]

  v3 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v4 = a1;
  v42 = 0;
  v43 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(&v40, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000, 0LL);
  v5 = v43;
  if ( !v41 )
    return v3;
  v6 = v40;
  if ( *((_BYTE *)v40 + 14) == a2 && *((_WORD *)v40 + 6) == HIWORD(v4) )
  {
    v7 = *v40;
    v8 = *(_QWORD *)(v43 + 5672);
    if ( (unsigned int)v7 >= 0x10000 )
    {
      v9 = (unsigned __int16)v7;
      if ( *(_DWORD *)v8 <= 0x10000u )
      {
        v7 = (unsigned __int16)v7;
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 16);
        v11 = *(_DWORD *)(v10 + 2056);
        if ( (unsigned __int16)v7 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
        {
          v13 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v7 >= v11 )
          {
            v12 = *(_QWORD *)(v10 + 8LL * ((((unsigned __int16)v7 - v11) >> 16) + 1) + 8);
            v9 = -65536 * (((unsigned __int16)v7 - v11) >> 16) - v11 + (unsigned __int16)v7;
          }
          else
          {
            v12 = *(_QWORD *)(v10 + 8);
          }
          v13 = 0LL;
          if ( v9 < *(_DWORD *)(v12 + 20) )
            v13 = *(_QWORD *)v12 + 24LL * v9;
        }
        if ( *(unsigned __int8 *)(v13 + 13) == WORD1(v7) )
          v7 = (unsigned __int16)v7;
      }
    }
    v19 = *(_QWORD *)(v8 + 16);
    v20 = *(_DWORD *)(v19 + 2056);
    if ( (unsigned int)v7 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v7 >= v20 )
      {
        v21 = *(_QWORD *)(v19 + 8LL * ((((unsigned int)v7 - v20) >> 16) + 1) + 8);
        v7 = -65536 * (((unsigned int)v7 - v20) >> 16) - v20 + (unsigned int)v7;
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 8);
      }
      if ( (unsigned int)v7 < *(_DWORD *)(v21 + 20) )
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
    }
    ++*(_DWORD *)(v3 + 8);
    if ( a2 == 5 )
    {
      v22 = *(_QWORD *)(v3 + 680);
      v23 = 0LL;
      goto LABEL_28;
    }
    if ( a2 == 16 )
    {
      v22 = *(_QWORD *)(v3 + 136);
      v23 = 2LL;
LABEL_28:
      TrackObjectReferenceIncrement(v23, v22);
    }
  }
  v24 = *v6;
  v25 = *(_QWORD *)(v5 + 5672);
  if ( (unsigned int)v24 >= 0x10000 )
  {
    v26 = (unsigned __int16)v24;
    if ( *(_DWORD *)v25 <= 0x10000u )
    {
      v24 = (unsigned __int16)v24;
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 16);
      v28 = *(_DWORD *)(v27 + 2056);
      if ( (unsigned __int16)v24 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
      {
        v30 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v24 >= v28 )
        {
          v29 = *(_QWORD *)(v27 + 8LL * ((((unsigned __int16)v24 - v28) >> 16) + 1) + 8);
          v26 = -65536 * (((unsigned __int16)v24 - v28) >> 16) - v28 + (unsigned __int16)v24;
        }
        else
        {
          v29 = *(_QWORD *)(v27 + 8);
        }
        v30 = 0LL;
        if ( v26 < *(_DWORD *)(v29 + 20) )
          v30 = *(_QWORD *)v29 + 24LL * v26;
      }
      if ( *(unsigned __int8 *)(v30 + 13) == WORD1(v24) )
        v24 = (unsigned __int16)v24;
    }
  }
  v31 = *(_QWORD *)(v25 + 16);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( (unsigned int)v24 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16)
    || ((unsigned int)v24 >= v32
      ? (v33 = *(_QWORD *)(v31 + 8LL * ((((unsigned int)v24 - v32) >> 16) + 1) + 8),
         v24 = -65536 * (((unsigned int)v24 - v32) >> 16) - v32 + (unsigned int)v24)
      : (v33 = *(_QWORD *)(v31 + 8)),
        (unsigned int)v24 >= *(_DWORD *)(v33 + 20)) )
  {
    v34 = 0LL;
  }
  else
  {
    v34 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  }
  v18 = (unsigned __int16)*v34 | (*v34 >> 8) & 0xFF0000;
  if ( v18 >= 0x10000 )
  {
    v35 = (unsigned __int16)*v34;
    if ( *(_DWORD *)v25 <= 0x10000u )
    {
      v18 = (unsigned __int16)*v34;
    }
    else
    {
      v36 = *(_QWORD *)(v25 + 16);
      v37 = *(_DWORD *)(v36 + 2056);
      if ( (unsigned __int16)*v34 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
      {
        v39 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*v34 >= v37 )
        {
          v38 = *(_QWORD *)(v36 + 8LL * ((((unsigned __int16)*v34 - v37) >> 16) + 1) + 8);
          v35 = -65536 * (((unsigned __int16)v18 - v37) >> 16) - v37 + (unsigned __int16)v18;
        }
        else
        {
          v38 = *(_QWORD *)(v36 + 8);
        }
        v39 = 0LL;
        if ( (unsigned int)v35 < *(_DWORD *)(v38 + 20) )
          v39 = *(_QWORD *)v38 + 24 * v35;
      }
      if ( *(unsigned __int8 *)(v39 + 13) == HIWORD(v18) )
        v18 = (unsigned __int16)v18;
    }
  }
  v14 = *(_QWORD *)(v25 + 16);
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v18 < v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
  {
    if ( v18 >= v15 )
    {
      v16 = *(_QWORD *)(v14 + 8LL * (((v18 - v15) >> 16) + 1) + 8);
      v18 += -65536 * ((v18 - v15) >> 16) - v15;
    }
    else
    {
      v16 = *(_QWORD *)(v14 + 8);
    }
    *(_BYTE *)(*(_QWORD *)v16 + 24LL * v18 + 6) = 0;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v3;
}
