/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x14009FD70 (NtGdiGetPixel.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1401E7990 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x14009B30C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400A02A8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x140117B90 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140177478 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401C9E38 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, int a3, int a4, int a5)
{
  struct REGION *v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // r12d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rbx
  LONG *v16; // rax
  LONG v17; // ecx
  LONG v18; // eax
  __int64 v19; // r14
  __int64 v20; // rax
  LONG v21; // ecx
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rcx
  LONG *v25; // r13
  __int64 v26; // r14
  LONG v27; // ecx
  LONG v28; // eax
  LONG v29; // eax
  __int64 v30; // rax
  LONG x; // ecx
  LONG y; // edx
  LONG v33; // eax
  __int64 v34; // r14
  struct _POINTL *v35; // rdx
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // ecx
  LONG left; // r12d
  LONG top; // r13d
  struct _POINTL *v42; // rdx
  HSURF v43; // r15
  __int64 v44; // r14
  int v45; // ebx
  __int64 v46; // rax
  struct _POINTL v47; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+60h] [rbp-A0h]
  struct REGION *v50; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v53; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  int v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C4h] [rbp-3Ch]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  int v63; // [rsp+D0h] [rbp-30h]
  int v64; // [rsp+D4h] [rbp-2Ch]
  int v65; // [rsp+D8h] [rbp-28h]
  int v66; // [rsp+DCh] [rbp-24h]
  int v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E4h] [rbp-1Ch]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  _BYTE v71[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72; // [rsp+110h] [rbp+10h]
  _BYTE v73[144]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v74[144]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagRECT v75; // [rsp+240h] [rbp+140h] BYREF
  struct _RECTL v76; // [rsp+250h] [rbp+150h] BYREF

  v53 = 0LL;
  v5 = 0LL;
  v55 = 0;
  v58 = 0LL;
  v7 = *(_QWORD *)a1;
  v8 = a4;
  v9 = a3;
  v47.x = a2;
  v49 = 8;
  if ( !v7
    || (*(_DWORD *)(v7 + 36) & 0x200) == 0
    || !(unsigned int)IsDwmActive(a1)
    || (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4001) != 0x4001
    || !*(_QWORD *)(*(_QWORD *)a1 + 472LL) )
  {
    return 0LL;
  }
  v11 = 1;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 288) & 1) == 0 )
          return 0LL;
        RecordCapabilityUsage(CurrentProcessWin32Process, 1LL);
      }
    }
  }
  v13 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) || !*(_DWORD *)(v13 + 488) && !*(_DWORD *)(v13 + 492) || KeAreApcsDisabled() )
    return 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v74);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v74, a1, 0) )
    goto LABEL_63;
  v14 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v74);
    return v11;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 48) + 24LL);
  if ( !*(_DWORD *)(v14 + 492) )
  {
    v16 = (LONG *)DC::prgnVisSnap(*(DC **)a1);
    if ( !v16 )
      goto LABEL_63;
    v54.left = v16[13];
    v54.top = v16[14];
    v17 = v16[15];
    v18 = v16[16];
    v54.right = v17;
    v54.bottom = v18;
    if ( IsRectEmptyInl(&v54) )
      goto LABEL_63;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_63;
  if ( !a5 )
    goto LABEL_63;
  if ( (unsigned __int64)(v8 + v47.x + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_63;
  if ( (unsigned __int64)(a5 + v9 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_63;
  DC::QuickInitXform(v14, &v57, 516LL);
  if ( (*(_DWORD *)(v57 + 32) & 2) == 0 )
    goto LABEL_63;
  v47.y = v9;
  EXFORMOBJ::bXform((EXFORMOBJ *)&v57, &v47, 1uLL);
  v19 = *(_QWORD *)a1;
  v20 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
  v21 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v20 + 1020) + v47.y;
  v54.left = *(_DWORD *)(*(_QWORD *)a1 + 8 * v20 + 1016) + v47.x;
  v54.top = v21;
  v54.right = v54.left + v8;
  v54.bottom = v21 + a5;
  v75 = v54;
  ERECTL::vOrder((ERECTL *)&v75);
  v22 = *(_QWORD *)(v19 + 496);
  v59 = 0;
  v60 = 0;
  v61 = *(_DWORD *)(v22 + 56);
  v62 = *(_DWORD *)(v22 + 60);
  ERECTL::operator*=(&v75);
  if ( IsRectEmptyInl(&v75) )
    goto LABEL_63;
  if ( !*(_DWORD *)(v19 + 492) )
  {
    if ( (*(_DWORD *)(v19 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v19 + 496));
    v23 = 0;
    SEMOBJ<7>::SEMOBJ<7>(&v50, *((_QWORD *)a1 + 2));
    if ( !(unsigned int)IsDwmActive(v24) )
    {
LABEL_52:
      if ( v50 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v50);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL)) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_61:
        if ( v5 )
        {
          v50 = v5;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
        }
        goto LABEL_63;
      }
      if ( v23 )
        goto LABEL_58;
LABEL_63:
      v11 = 0;
      goto LABEL_64;
    }
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v71, *(HWND *)(*(_QWORD *)a1 + 472LL));
    v25 = (LONG *)v72;
    if ( v72 )
    {
      v26 = *(_QWORD *)(v72 + 144);
      if ( (*(_DWORD *)(v26 + 252) & 0x80u) == 0
        && *(_QWORD *)(v26 + 184) == ((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL)) )
      {
        if ( *(_QWORD *)(v26 + 80) )
        {
          v56 = *(_QWORD *)(v26 + 80);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v52);
          if ( v56 )
          {
            if ( v52 )
            {
              if ( !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v56, (struct _RECTL *)&v75) )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
                if ( v51 )
                {
                  v27 = v25[15];
                  v28 = v25[16];
                  v76.left = v25[14];
                  v76.top = v27;
                  v76.right = v28;
                  v29 = v25[17];
                  v48.x = v76.left;
                  v48.y = v27;
                  v76.bottom = v29;
                  ERECTL::bOffsetSubtract((ERECTL *)&v76, &v48, 0);
                  RGNOBJ::vSet((RGNOBJ *)&v52, &v76);
                  if ( RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v52, (struct RGNOBJ *)&v56, 4) )
                  {
                    v5 = v51;
                    v23 = 1;
                  }
                  else if ( v51 )
                  {
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
                  }
                }
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v52);
          if ( !v23 )
            goto LABEL_51;
        }
        else
        {
          v23 = 1;
        }
        v48 = 0LL;
        v30 = *(_QWORD *)(v26 + 184);
        if ( v30 )
        {
          x = *(_DWORD *)(v30 + 32);
          y = *(_DWORD *)(v30 + 36);
        }
        else
        {
          y = v48.y;
          x = v48.x;
        }
        v53.x = v25[14];
        v33 = v25[15];
        v75.top = 0;
        v75.left = 0;
        v75.right = x;
        v75.bottom = y;
        *(_DWORD *)(v26 + 252) |= 0x80u;
        v53.y = v33;
        if ( v5 )
        {
          v63 = *((_DWORD *)v5 + 13);
          v64 = *((_DWORD *)v5 + 14);
          v65 = *((_DWORD *)v5 + 15);
          v66 = *((_DWORD *)v5 + 16);
          ERECTL::operator*=(&v75);
          if ( ERECTL::bEmpty((ERECTL *)&v75) )
          {
            v48 = (struct _POINTL)v5;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
            *(_DWORD *)(v26 + 252) |= 0x80u;
            v23 = 0;
          }
        }
      }
    }
LABEL_51:
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v71);
    goto LABEL_52;
  }
LABEL_58:
  v34 = *(_QWORD *)a1;
  v35 = (struct _POINTL *)(v15 + 2576);
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 492LL) )
    v35 = &v53;
  ERECTL::bOffsetAdd((ERECTL *)&v75, v35, 0);
  v36 = *(_QWORD *)(v15 + 2544);
  v37 = *(_DWORD *)(v15 + 2580);
  v67 = *(_DWORD *)(v15 + 2576);
  v69 = *(_DWORD *)(v36 + 56) + v67;
  v38 = *(_DWORD *)(v36 + 60);
  v68 = v37;
  v70 = v37 + v38;
  ERECTL::operator*=(&v75);
  if ( IsRectEmptyInl(&v75) )
    goto LABEL_61;
  left = v75.left;
  top = v75.top;
  v42 = (struct _POINTL *)(v15 + 2576);
  if ( !*(_DWORD *)(v34 + 492) )
    v42 = &v53;
  ERECTL::bOffsetSubtract((ERECTL *)&v75, v42, 0);
  v43 = *(HSURF *)(*(_QWORD *)(v34 + 496) + 32LL);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v74);
  v44 = *((_QWORD *)a1 + 2);
  v45 = v55;
  while ( 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v73);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v73, a1, 0) )
    {
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
      goto LABEL_80;
    }
    v46 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v46 )
    {
      if ( *(_QWORD *)(v46 + 3456) )
      {
        v45 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v46 + 3456))(*(_QWORD *)(v46 + 1784), &v58);
        if ( v45 == 258 )
        {
          KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v44 + 2192));
          --v49;
        }
      }
    }
    else
    {
      v45 = -1073741823;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v73);
    if ( v45 != 258 )
      break;
    if ( !v49 )
      goto LABEL_80;
  }
  if ( v45 >= 0 )
    return bSpDwmUpdateSurface(0LL, v58, a1, v43, 1.0, left, top, (struct ERECTL *)&v75, v5);
LABEL_80:
  if ( v5 )
  {
    v50 = v5;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  }
  return 0LL;
}
