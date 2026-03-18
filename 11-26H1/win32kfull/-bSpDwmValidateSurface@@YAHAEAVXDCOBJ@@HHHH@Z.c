/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C
 * Callers:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x1400BB9B0 (NtGdiGetPixel.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x140216054 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401FECF0 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v8; // rsi
  HSEMAPHORE v9; // r15
  __int64 v10; // rdi
  __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // rbx
  struct REGION *v19; // rax
  LONG v20; // r10d
  HSURF v21; // rdi
  __int64 v22; // rbx
  int v23; // r13d
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(_QWORD, unsigned __int64 *); // rax
  __int64 v26; // r8
  __int64 v27; // rax
  LONG right; // edi
  int left; // r14d
  LONG v30; // esi
  LONG v31; // ecx
  int top; // esi
  LONG bottom; // r10d
  __int64 v34; // rax
  LONG v35; // ecx
  LONG v36; // edx
  int v37; // r14d
  HSEMAPHORE v38; // rsi
  Gre::Base *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  Gre::Base *v42; // rdi
  __int64 v43; // rdi
  Gre::Base *v44; // rcx
  struct Gre::Base::SESSION_GLOBALS *v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  LONG v50; // ecx
  LONG v51; // edx
  int v52; // r13d
  int v53; // r11d
  __int64 v54; // rax
  LONG v55; // r14d
  LONG v56; // edi
  LONG v57; // esi
  LONG v58; // r10d
  LONG v59; // edx
  LONG v60; // r8d
  __int64 v61; // rcx
  LONG v62; // r9d
  LONG v63; // ecx
  __int64 CurrentProcessWin32Process; // rcx
  int v65; // eax
  HSEMAPHORE v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+5Ch] [rbp-A4h]
  int v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-98h]
  LONG v71; // [rsp+70h] [rbp-90h] BYREF
  LONG v72; // [rsp+74h] [rbp-8Ch]
  HSEMAPHORE v73; // [rsp+78h] [rbp-88h] BYREF
  HSEMAPHORE v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h] BYREF
  int v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  HSEMAPHORE v78; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v80[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h]
  _BYTE v82[160]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[160]; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v84; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v85; // [rsp+230h] [rbp+130h] BYREF

  v5 = *(_QWORD *)a1;
  v6 = a4;
  v8 = a3;
  v9 = 0LL;
  v10 = a2;
  v66 = 0LL;
  v76 = 0;
  v69 = 8;
  v79 = 0LL;
  if ( !v5
    || (*(_DWORD *)(v5 + 36) & 0x200) == 0
    || !IsDwmActive(a1)
    || (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4001) != 0x4001
    || !*(_QWORD *)(*(_QWORD *)a1 + 472LL) )
  {
    return 0LL;
  }
  v13 = 1;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
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
  v14 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) || !*(_DWORD *)(v14 + 488) && !*(_DWORD *)(v14 + 492) || KeAreApcsDisabled() )
    return 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v83);
  v15 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v83, a1, 0);
  v16 = 0;
  if ( !v15 )
    goto LABEL_17;
  v17 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 24LL);
    if ( !*(_DWORD *)(v17 + 492) )
    {
      v19 = DC::prgnVisSnap(*(DC **)a1);
      if ( !v19 || *((_DWORD *)v19 + 13) >= *((_DWORD *)v19 + 15) || *((_DWORD *)v19 + 14) >= *((_DWORD *)v19 + 16) )
        goto LABEL_17;
    }
    if ( !(_DWORD)v6
      || !a5
      || v6 + v10 > 0x7FFFFFFF
      || v6 + v10 < (__int64)0xFFFFFFFF80000000uLL
      || (unsigned __int64)(a5 + v8 + 0x80000000LL) > 0xFFFFFFFF )
    {
      goto LABEL_17;
    }
    DC::QuickInitXform(v17, &v78, 516LL);
    if ( ((_DWORD)v78[8] & 2) == 0 )
      goto LABEL_105;
    v71 = v10;
    v72 = v8;
    if ( ((_BYTE)v78[8] & 0x43) != 0x43 )
    {
      bCvtPts1((__int64)v78, (__int64)&v71, 1LL);
      LODWORD(v8) = v72;
      LODWORD(v10) = v71;
    }
    v26 = *(_QWORD *)a1;
    v27 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
    right = *(_DWORD *)(*(_QWORD *)a1 + 8 * v27 + 1016) + v10;
    left = right + v6;
    v71 = right;
    v30 = *(_DWORD *)(v26 + 8 * v27 + 1020) + v8;
    v31 = v30 + a5;
    v84.left = right;
    v84.bottom = v30 + a5;
    v84.top = v30;
    v84.right = left;
    v72 = v30;
    if ( right <= left )
    {
      right = v84.right;
      left = v84.left;
    }
    else
    {
      v84.left = left;
      v84.right = right;
    }
    top = v84.top;
    if ( v84.top <= v31 )
    {
      bottom = v84.bottom;
    }
    else
    {
      bottom = v84.top;
      top = v84.bottom;
      v84.top = v84.bottom;
      v84.bottom = bottom;
    }
    v34 = *(_QWORD *)(v26 + 496);
    v16 = 0;
    if ( left < 0 )
      left = 0;
    v35 = *(_DWORD *)(v34 + 56);
    v36 = *(_DWORD *)(v34 + 60);
    if ( top < 0 )
      top = 0;
    v84.left = left;
    v84.top = top;
    if ( v35 < right )
      right = v35;
    v84.right = right;
    if ( v36 < bottom )
      bottom = v36;
    v84.bottom = bottom;
    if ( right < left )
    {
      v84.left = right;
      goto LABEL_17;
    }
    if ( bottom < top )
      top = bottom;
    v84.top = top;
    if ( left >= right || top >= bottom )
      goto LABEL_17;
    if ( *(_DWORD *)(v26 + 492) )
    {
      v52 = HIDWORD(v66);
      v53 = (int)v66;
LABEL_83:
      v54 = *(_QWORD *)a1;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 492LL) )
      {
        v55 = *(_DWORD *)(v18 + 2576) + left;
        v84.left = v55;
        v56 = *(_DWORD *)(v18 + 2576) + right;
        v84.right = v56;
        v57 = *(_DWORD *)(v18 + 2580) + top;
        v84.top = v57;
        v58 = *(_DWORD *)(v18 + 2580) + bottom;
      }
      else
      {
        v55 = v53 + left;
        v56 = v53 + right;
        v57 = v52 + top;
        v84.left = v55;
        v84.right = v56;
        v58 = v52 + bottom;
        v84.top = v57;
      }
      v84.bottom = v58;
      v59 = *(_DWORD *)(v18 + 2576);
      v60 = *(_DWORD *)(v18 + 2580);
      v61 = *(_QWORD *)(v18 + 2544);
      v62 = v59 + *(_DWORD *)(v61 + 56);
      v63 = v60 + *(_DWORD *)(v61 + 60);
      if ( v59 > v55 )
        v55 = *(_DWORD *)(v18 + 2576);
      v84.left = v55;
      if ( v60 > v57 )
        v57 = v60;
      v84.top = v57;
      if ( v62 < v56 )
        v56 = v62;
      v84.right = v56;
      if ( v63 < v58 )
        v58 = v63;
      v84.bottom = v58;
      if ( v56 < v55 )
      {
        v84.left = v56;
        goto LABEL_103;
      }
      if ( v58 < v57 )
        v57 = v58;
      v84.top = v57;
      if ( v55 >= v56 || v57 >= v58 )
      {
LABEL_103:
        v16 = 0;
        if ( v9 )
        {
          v73 = v9;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
LABEL_105:
          v16 = 0;
        }
LABEL_17:
        v13 = v16;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v54 + 492) )
      {
        v84.left = v55 - *(_DWORD *)(v18 + 2576);
        v84.right = v56 - *(_DWORD *)(v18 + 2576);
        v84.top = v57 - *(_DWORD *)(v18 + 2580);
        v20 = v58 - *(_DWORD *)(v18 + 2580);
      }
      else
      {
        v84.left = v55 - v53;
        v84.right = v56 - v53;
        v84.top = v57 - v52;
        v20 = v58 - v52;
      }
      v84.bottom = v20;
      v21 = *(HSURF *)(*(_QWORD *)(v54 + 496) + 32LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v83);
      v22 = *((_QWORD *)a1 + 2);
      v23 = v76;
      while ( 1 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v82);
        if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v82, a1, 0) )
        {
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v82);
          goto LABEL_33;
        }
        v24 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v24 )
        {
          v25 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v24 + 3456);
          if ( v25 )
          {
            v23 = v25(*(_QWORD *)(v24 + 1784), &v79);
            if ( v23 == 258 )
            {
              KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v22 + 2280));
              --v69;
            }
          }
        }
        else
        {
          v23 = -1073741823;
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v82);
        if ( v23 != 258 )
          break;
        if ( !v69 )
          goto LABEL_33;
      }
      if ( v23 >= 0 )
        return bSpDwmUpdateSurface(0LL, v79, a1, v21, 1.0, v55, v57, (struct ERECTL *)&v84, (struct REGION *)v9);
LABEL_33:
      if ( v9 )
      {
        v78 = v9;
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v78);
      }
      return 0LL;
    }
    if ( (*(_DWORD *)(v26 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v26 + 496));
    v37 = 0;
    v73 = (HSEMAPHORE)(**((_QWORD **)a1 + 2) + 520LL);
    v38 = v73;
    GreAcquireSemaphoreInternal(v73);
    GrepAcquireLockValidate<7>();
    if ( !IsDwmActive(v39) )
    {
      v52 = HIDWORD(v66);
      v70 = (int)v66;
      goto LABEL_78;
    }
    v42 = *(Gre::Base **)(*(_QWORD *)a1 + 472LL);
    memset(v80, 0, sizeof(v80));
    PushThreadGuardedObject(
      v80,
      v80,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
    v81 = 0LL;
    v43 = DWMSPRITEREF::hspLookupWindow(v42);
    v45 = Gre::Base::Globals(v44);
    v46 = 0LL;
    if ( v43 )
    {
      LOBYTE(v46) = 15;
      v47 = HmgLock(v45, v43, v46, 0LL);
      v81 = v47;
    }
    else
    {
      v47 = v81;
    }
    if ( !v47 )
    {
      v52 = HIDWORD(v66);
      v70 = (int)v66;
LABEL_77:
      v81 = 0LL;
      PopThreadGuardedObject(v80);
LABEL_78:
      if ( v38 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v38);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL), v40, v41) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
        goto LABEL_103;
      }
      v16 = 0;
      if ( !v37 )
        goto LABEL_17;
      bottom = v84.bottom;
      right = v84.right;
      top = v84.top;
      left = v84.left;
      v53 = v70;
      goto LABEL_83;
    }
    v48 = *(_QWORD *)(v47 + 144);
    if ( (*(_DWORD *)(v48 + 252) & 0x80u) == 0
      && *(_QWORD *)(v48 + 184) == ((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL)) )
    {
      if ( !*(_QWORD *)(v48 + 80) )
      {
        v37 = 1;
LABEL_68:
        v49 = *(_QWORD *)(v48 + 184);
        v66 = 0LL;
        if ( v49 )
        {
          v50 = *(_DWORD *)(v49 + 32);
          v51 = *(_DWORD *)(v49 + 36);
        }
        else
        {
          v51 = HIDWORD(v66);
          v50 = (int)v66;
        }
        v65 = *(_DWORD *)(v47 + 56);
        v52 = *(_DWORD *)(v47 + 60);
        *(_QWORD *)&v84.left = 0LL;
        v84.right = v50;
        v84.bottom = v51;
        *(_DWORD *)(v48 + 252) |= 0x80u;
        v70 = v65;
        if ( v9 )
        {
          v66 = *(HSEMAPHORE *)(v9 + 13);
          v67 = *((_DWORD *)v9 + 15);
          v68 = *((_DWORD *)v9 + 16);
          ERECTL::operator*=(&v84, &v66);
          if ( ERECTL::bEmpty((ERECTL *)&v84) )
          {
            v66 = v9;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v66);
            *(_DWORD *)(v48 + 252) |= 0x80u;
            v37 = 0;
          }
        }
        v47 = v81;
        goto LABEL_74;
      }
      v77 = *(_QWORD *)(v48 + 80);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
      if ( v77 )
      {
        if ( v75 )
        {
          if ( !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v77, &v84) )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v74);
            if ( v74 )
            {
              v85.right = *(_DWORD *)(v47 + 64) - *(_DWORD *)(v47 + 56);
              v85.bottom = *(_DWORD *)(v47 + 68) - *(_DWORD *)(v47 + 60);
              *(_QWORD *)&v85.left = 0LL;
              RGNOBJ::vSet((RGNOBJ *)&v75, &v85);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v74, (struct RGNOBJ *)&v75, (struct RGNOBJ *)&v77, 4) )
              {
                v9 = v74;
                v37 = 1;
              }
              else if ( v74 )
              {
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
              }
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
      if ( v37 )
        goto LABEL_68;
      v47 = v81;
    }
    v52 = HIDWORD(v66);
    v70 = (int)v66;
LABEL_74:
    if ( v47 )
      _InterlockedDecrement16((volatile signed __int16 *)(v47 + 12));
    v38 = v73;
    goto LABEL_77;
  }
LABEL_18:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v83);
  return v13;
}
