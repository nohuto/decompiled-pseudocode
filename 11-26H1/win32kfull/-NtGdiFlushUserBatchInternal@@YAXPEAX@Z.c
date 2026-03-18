/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1401ACBD0 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x14007327C (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400781D0 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x14007B438 (-GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400ADB54 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140159278 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ??0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z @ 0x1401AEACC (--0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z.c)
 *     ??1GdiBatchProcessingStatus@@QEAA@XZ @ 0x1401B9BD8 (--1GdiBatchProcessingStatus@@QEAA@XZ.c)
 *     ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1401C1E98 (-GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GreEnableAppContainerRestriction @ 0x14021A9AC (GreEnableAppContainerRestriction.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(__int64 a1)
{
  struct _NT_TIB *Self; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v3; // r9
  PVOID *p_ArbitraryUserPointer; // r13
  HDC v5; // rdx
  int *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 SessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // edx
  __int64 v17; // r12
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  PVOID v25; // rax
  HFONT v26; // rdx
  int v27; // ebx
  int v28; // r8d
  int v29; // r9d
  DC *v30; // rdx
  __int64 v31; // rax
  int v32; // r9d
  DC *v33; // rcx
  __int64 v34; // rax
  int v35; // edi
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  unsigned int v38; // esi
  unsigned int v39; // r14d
  unsigned int v40; // r15d
  int v41; // r8d
  __int64 v42; // r8
  PVOID v43; // rbx
  int v44; // rax^4
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // r15d
  int v50; // edi
  DC *v51; // r9
  __int64 v52; // rcx
  int v53; // r14d
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // esi
  __int64 v58; // r8
  unsigned int v59; // ebx
  LONG top; // rax^4
  struct EXFORMOBJ *v61; // rdx
  struct SURFACE *v62; // rcx
  _DWORD *v63; // rcx
  int v64; // edi
  int v65; // esi
  int v66; // r14d
  int v67; // r15d
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  int *v72; // rcx
  int v73; // ecx
  __int64 v74; // rbx
  int v75; // ecx
  PVOID v76; // rcx
  char v77; // [rsp+70h] [rbp-358h]
  int StackLimit; // [rsp+8Ch] [rbp-33Ch]
  int v79; // [rsp+90h] [rbp-338h]
  int v80; // [rsp+90h] [rbp-338h]
  unsigned int v81; // [rsp+94h] [rbp-334h]
  unsigned int v82; // [rsp+94h] [rbp-334h]
  int v83; // [rsp+98h] [rbp-330h]
  unsigned int v84; // [rsp+A0h] [rbp-328h]
  unsigned int v85; // [rsp+A4h] [rbp-324h]
  unsigned int v86; // [rsp+A8h] [rbp-320h]
  unsigned int v87; // [rsp+ACh] [rbp-31Ch]
  int v88; // [rsp+B0h] [rbp-318h]
  int v89; // [rsp+B4h] [rbp-314h]
  int v90; // [rsp+B8h] [rbp-310h]
  int v91; // [rsp+C0h] [rbp-308h]
  unsigned __int64 p_Self; // [rsp+D0h] [rbp-2F8h]
  int v93; // [rsp+D8h] [rbp-2F0h]
  DC *v94[14]; // [rsp+E0h] [rbp-2E8h] BYREF
  int v95; // [rsp+150h] [rbp-278h]
  int v96; // [rsp+154h] [rbp-274h]
  int *p_SubSystemTib; // [rsp+158h] [rbp-270h]
  HDC FiberData; // [rsp+160h] [rbp-268h]
  PVOID v99; // [rsp+168h] [rbp-260h]
  PVOID v100; // [rsp+170h] [rbp-258h]
  HFONT v101; // [rsp+178h] [rbp-250h]
  __int64 v102; // [rsp+180h] [rbp-248h] BYREF
  __int64 v103; // [rsp+188h] [rbp-240h]
  PVOID v104; // [rsp+190h] [rbp-238h]
  PVOID v105; // [rsp+198h] [rbp-230h]
  PVOID *p_StackLimit; // [rsp+1A0h] [rbp-228h]
  PVOID v107; // [rsp+1A8h] [rbp-220h]
  int v108; // [rsp+1B0h] [rbp-218h]
  unsigned int v109; // [rsp+1B4h] [rbp-214h]
  unsigned int v110; // [rsp+1B8h] [rbp-210h]
  unsigned int v111; // [rsp+1BCh] [rbp-20Ch]
  unsigned int v112; // [rsp+1C0h] [rbp-208h]
  int v113; // [rsp+1C4h] [rbp-204h]
  int v114; // [rsp+1C8h] [rbp-200h]
  int v115; // [rsp+1CCh] [rbp-1FCh]
  int v116; // [rsp+1D0h] [rbp-1F8h]
  int v117; // [rsp+1D4h] [rbp-1F4h]
  unsigned int v118; // [rsp+1D8h] [rbp-1F0h]
  unsigned int v119; // [rsp+1DCh] [rbp-1ECh]
  unsigned int v120; // [rsp+1E0h] [rbp-1E8h]
  unsigned int v121; // [rsp+1E4h] [rbp-1E4h]
  unsigned int v122; // [rsp+1E8h] [rbp-1E0h]
  unsigned int v123; // [rsp+1ECh] [rbp-1DCh]
  int v124; // [rsp+1F0h] [rbp-1D8h]
  int v125; // [rsp+1F4h] [rbp-1D4h]
  unsigned int v126; // [rsp+1F8h] [rbp-1D0h]
  int v127; // [rsp+1FCh] [rbp-1CCh]
  int v128; // [rsp+200h] [rbp-1C8h]
  int v129; // [rsp+204h] [rbp-1C4h]
  __int64 v130; // [rsp+208h] [rbp-1C0h]
  struct _NT_TIB *v131; // [rsp+210h] [rbp-1B8h]
  int v132; // [rsp+218h] [rbp-1B0h]
  _BYTE v133[16]; // [rsp+220h] [rbp-1A8h] BYREF
  PVOID v134; // [rsp+230h] [rbp-198h]
  _BYTE v135[56]; // [rsp+238h] [rbp-190h] BYREF
  _BYTE v136[112]; // [rsp+270h] [rbp-158h] BYREF
  _BYTE v137[160]; // [rsp+2E0h] [rbp-E8h] BYREF
  _DWORD v138[4]; // [rsp+380h] [rbp-48h] BYREF
  struct _RECTL v139; // [rsp+390h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v131 = Self;
  v91 = 1;
  CurrentThread = GreGetCurrentThread(a1);
  if ( CurrentThread )
  {
    v3 = *((_QWORD *)CurrentThread + 41);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 80) )
        GrepCaptureLiveMemoryDump(400LL, 52LL, 4LL);
    }
  }
  p_StackLimit = &Self[106].StackLimit;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  p_SubSystemTib = (int *)&Self[13].SubSystemTib;
  LODWORD(Self[13].SubSystemTib) &= 0xC0000000;
  p_Self = (unsigned __int64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) > 0x134 )
    goto LABEL_113;
  FiberData = 0LL;
  GdiBatchProcessingStatus::GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v133, (struct _TEB *)Self);
  FiberData = (HDC)Self[13].FiberData;
  v5 = FiberData;
  v6 = p_SubSystemTib;
  v7 = *p_SubSystemTib;
  v8 = (unsigned int)*p_SubSystemTib >> 31;
  Self[13].FiberData = 0LL;
  *v6 = v7 & 0x7FFFFFFF;
  if ( v5 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v94, v5);
    if ( v94[0] )
    {
      SessionState = W32GetSessionState(v10, v9, v11);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v135,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v135) )
      {
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v135);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v94);
        GdiBatchProcessingStatus::~GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v133);
        return;
      }
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v137);
      v77 = 0;
      if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v14, v13) && !(_BYTE)v8 )
      {
        v77 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v94, 0) )
      {
        v91 = 0;
        v130 = *(_QWORD *)(*((_QWORD *)v94[0] + 122) + 160LL);
        while ( 1 )
        {
          v15 = 1;
          v16 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v117 = v16;
          v17 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v17 > p_Self )
          {
LABEL_97:
            *(_DWORD *)p_StackLimit = 0;
            v72 = p_SubSystemTib;
            *p_SubSystemTib &= 0xC0000000;
            *v72 &= ~0x80000000;
            *(_QWORD *)(*((_QWORD *)v94[0] + 122) + 160LL) = v130;
            *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 0x1000u;
            goto LABEL_98;
          }
          if ( !v16 )
            break;
          v18 = v16 - 1;
          if ( !v18 )
          {
            if ( v77 )
              goto LABEL_95;
            if ( (unsigned int)v17 < 0x38 )
              goto LABEL_95;
            GreProbeUntrustedVaRange(p_ArbitraryUserPointer, p_Self - (_QWORD)p_ArbitraryUserPointer, 1uLL, 8uLL);
            v118 = *((_DWORD *)p_ArbitraryUserPointer + 3);
            v32 = v118;
            if ( v118 >= 0xAAAAAAA || 24 * (unsigned __int64)v118 > (unsigned int)(v17 - 48) )
              goto LABEL_95;
            v33 = v94[0];
            v34 = *((_QWORD *)v94[0] + 122);
            v35 = *(_DWORD *)(v34 + 192);
            v79 = *(_DWORD *)(v34 + 196);
            v36 = *((_DWORD *)p_ArbitraryUserPointer + 2);
            v119 = v36;
            v37 = *((_DWORD *)p_ArbitraryUserPointer + 4);
            v120 = v37;
            v38 = *((_DWORD *)p_ArbitraryUserPointer + 5);
            v121 = v38;
            v39 = *((_DWORD *)p_ArbitraryUserPointer + 7);
            v122 = v39;
            v40 = *((_DWORD *)p_ArbitraryUserPointer + 8);
            v123 = v40;
            v124 = *((_DWORD *)p_ArbitraryUserPointer + 6);
            v41 = *((_DWORD *)p_ArbitraryUserPointer + 9);
            v125 = v41;
            v81 = *((_DWORD *)p_ArbitraryUserPointer + 1);
            v126 = v81;
            if ( v35 != v124 )
            {
              *(_DWORD *)(v34 + 192) = v124;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 196LL) = v41;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
              v33 = v94[0];
            }
            v42 = *((_QWORD *)v33 + 122);
            v43 = *(PVOID *)(v42 + 324);
            v107 = p_ArbitraryUserPointer[5];
            v44 = HIDWORD(v107);
            if ( v43 != v107 )
            {
              *(_DWORD *)(v42 + 324) = (_DWORD)v107;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 328LL) = v44;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 340LL) |= 0x2010u;
            }
            GrepPolyPatBlt(
              (struct XDCOBJ *)v94,
              v81,
              (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
              v32,
              v36,
              v37,
              v38,
              v39,
              v40);
            v45 = *((_QWORD *)v94[0] + 122);
            if ( v35 != *(_DWORD *)(v45 + 192) )
            {
              *(_DWORD *)(v45 + 192) = v35;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 196LL) = v79;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
            }
            v46 = *((_QWORD *)v94[0] + 122);
            if ( v43 == *(PVOID *)(v46 + 324) )
              goto LABEL_95;
            *(_DWORD *)(v46 + 324) = (_DWORD)v43;
            v47 = *((_QWORD *)v94[0] + 122);
            v48 = HIDWORD(v43);
            goto LABEL_64;
          }
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( !v77 )
              GrepBatchTextOut((struct XDCOBJ *)v94, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v17);
            goto LABEL_95;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            if ( !v77 )
              GrepBatchTextOutRect((struct XDCOBJ *)v94, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v17);
            goto LABEL_95;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            v28 = 0;
            v29 = 0;
            if ( (unsigned int)v17 >= 0xC )
            {
              v28 = *((_DWORD *)p_ArbitraryUserPointer + 1);
              v29 = *((_DWORD *)p_ArbitraryUserPointer + 2);
            }
            else
            {
              v15 = 0;
            }
            if ( v15 )
            {
              v30 = v94[0];
              *((_DWORD *)v94[0] + 31) = v28;
              *((_DWORD *)v30 + 32) = v29;
              v31 = *((_DWORD *)v30 + 10) & 1;
              *((_DWORD *)v30 + 298) = *((_DWORD *)v30 + 2 * v31 + 254) + v28;
              *((_DWORD *)v30 + 299) = v29 + *((_DWORD *)v30 + 2 * v31 + 255);
            }
            goto LABEL_95;
          }
          v22 = v21 - 1;
          if ( !v22 )
          {
            v139 = 0LL;
            v27 = 0;
            if ( (unsigned int)v17 >= 0x18 )
            {
              v139 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
              v27 = *((_DWORD *)p_ArbitraryUserPointer + 1);
            }
            else
            {
              v15 = 0;
            }
            if ( v15 )
            {
              DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v137, 0);
              GreExtSelectClipRgnLocked(v94, &v139, v27);
            }
            goto LABEL_95;
          }
          v23 = v22 - 1;
          if ( !v23 )
          {
            v26 = 0LL;
            v101 = 0LL;
            if ( (unsigned int)v17 >= 0x10 )
            {
              v26 = (HFONT)p_ArbitraryUserPointer[1];
              v101 = v26;
            }
            else
            {
              v15 = 0;
            }
            if ( v15 )
              GrepSelectFont(v94, v26, 0LL);
            goto LABEL_95;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            v25 = 0LL;
            v100 = 0LL;
            if ( (unsigned int)v17 >= 0x10 )
            {
              v25 = p_ArbitraryUserPointer[1];
              v100 = v25;
            }
            else
            {
              v15 = 0;
            }
LABEL_31:
            if ( v15 )
              NtGdiDeleteObjectApp(v25);
            goto LABEL_95;
          }
          if ( v24 == 1 )
          {
            v25 = 0LL;
            v99 = 0LL;
            if ( (unsigned int)v17 >= 0x10 )
            {
              v25 = p_ArbitraryUserPointer[1];
              v99 = v25;
            }
            else
            {
              v15 = 0;
            }
            goto LABEL_31;
          }
LABEL_95:
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v17 + 7) & 0xFFFFFFF8));
          if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
            goto LABEL_97;
        }
        if ( (unsigned int)v17 < 0x48 )
          goto LABEL_95;
        if ( v77 )
          goto LABEL_95;
        v49 = *((_DWORD *)p_ArbitraryUserPointer + 1);
        v83 = v49;
        v127 = v49;
        v90 = *((_DWORD *)p_ArbitraryUserPointer + 2);
        v128 = v90;
        v89 = *((_DWORD *)p_ArbitraryUserPointer + 3);
        v129 = v89;
        v88 = *((_DWORD *)p_ArbitraryUserPointer + 4);
        v132 = v88;
        v108 = *((_DWORD *)p_ArbitraryUserPointer + 8);
        v84 = *((_DWORD *)p_ArbitraryUserPointer + 9);
        v109 = v84;
        v85 = *((_DWORD *)p_ArbitraryUserPointer + 10);
        v110 = v85;
        v86 = *((_DWORD *)p_ArbitraryUserPointer + 15);
        v111 = v86;
        v87 = *((_DWORD *)p_ArbitraryUserPointer + 16);
        v112 = v87;
        v50 = BYTE2(v108) | (BYTE2(v108) << 8);
        v95 = v50;
        if ( ((BYTE2(v108) ^ (unsigned __int8)(4 * BYTE2(v108))) & 0xCC) != 0 )
          goto LABEL_95;
        v107 = *(PVOID *)(*((_QWORD *)v94[0] + 122) + 160LL);
        v80 = 0;
        v82 = 0;
        v134 = p_ArbitraryUserPointer[3];
        GreDCSelectBrush(v94[0], v134);
        v51 = v94[0];
        v52 = *((_QWORD *)v94[0] + 122);
        v96 = *(_DWORD *)(v52 + 192);
        v53 = v96;
        v93 = *(_DWORD *)(v52 + 196);
        v113 = *((_DWORD *)p_ArbitraryUserPointer + 11);
        v54 = *((_DWORD *)p_ArbitraryUserPointer + 17);
        v114 = v54;
        if ( v96 != v113 )
        {
          *(_DWORD *)(v52 + 192) = v113;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 196LL) = v54;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
          v51 = v94[0];
        }
        if ( (*((_DWORD *)v51 + 30) & 1) != 0 )
        {
          v55 = *((_QWORD *)v51 + 122);
          if ( *(_QWORD *)(v55 + 248) )
          {
            v82 = *(_DWORD *)(v55 + 152) & 0x40000;
            *(_DWORD *)(v55 + 152) |= 0x40000u;
            v51 = v94[0];
            v56 = *((_QWORD *)v94[0] + 122);
            v57 = *(_DWORD *)(v56 + 256);
            v80 = v57;
            v115 = *((_DWORD *)p_ArbitraryUserPointer + 12);
            if ( v57 != v115 )
            {
              *(_DWORD *)(v56 + 256) = v115;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
              v51 = v94[0];
            }
          }
        }
        v58 = *((_QWORD *)v51 + 122);
        v103 = *(_QWORD *)(v58 + 324);
        v59 = v103;
        *(_QWORD *)&v139.left = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
        top = v139.top;
        if ( v103 != *(_QWORD *)&v139.left )
        {
          *(_DWORD *)(v58 + 324) = v139.left;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 328LL) = top;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 340LL) |= 0x2010u;
          v51 = v94[0];
        }
        DC::QuickInitXform(v51, &v102, 516LL);
        if ( (*(_BYTE *)(v102 + 32) & 1) != 0 )
        {
          v138[0] = v49;
          v138[1] = v90;
          v138[2] = v49 + v89;
          v138[3] = v90 + v88;
          DC::bXform(v94[0], (const struct EXFORMOBJ *)&v102, (struct ERECTL *)v138);
          ERECTL::vOrder((ERECTL *)v138);
          if ( !ERECTL::bEmpty((ERECTL *)v138) )
          {
            if ( (*((_DWORD *)v94[0] + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v94, (struct ERECTL *)v138);
            v62 = (struct SURFACE *)*((_QWORD *)v94[0] + 62);
            if ( v62 )
              GrePatBltLockedDC((struct XDCOBJ *)v94, v61, (struct ERECTL *)v138, v50, v62, v84, v85, v86, v87);
          }
        }
        else
        {
          v63 = (_DWORD *)*((_QWORD *)v94[0] + 122);
          v64 = v63[46];
          v65 = v63[44];
          v66 = v63[47];
          v67 = v63[45];
          v63[46] = v84;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 176LL) = v85;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 188LL) = v86;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 180LL) = v87;
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v136, 0LL);
          GrepMaskBlt(v94, v83, v90, v89, v88, (struct OPTAPIDCOBJ *)v136, 0, 0, 0LL, 0, 0, v95 << 16, 0);
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 184LL) = v64;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 176LL) = v65;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 188LL) = v66;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 180LL) = v67;
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v136);
          v53 = v96;
        }
        v68 = *((_QWORD *)v94[0] + 122);
        if ( *(PVOID *)(v68 + 160) != v107 )
        {
          *(_QWORD *)(v68 + 160) = v107;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 0x1000u;
        }
        v69 = *((_QWORD *)v94[0] + 122);
        if ( v53 != *(_DWORD *)(v69 + 192) )
        {
          *(_DWORD *)(v69 + 192) = v53;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 196LL) = v93;
          *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
        }
        if ( (*((_DWORD *)v94[0] + 30) & 1) != 0 )
        {
          v70 = *((_QWORD *)v94[0] + 122);
          if ( *(_QWORD *)(v70 + 248) )
          {
            if ( v80 != *(_DWORD *)(v70 + 256) )
            {
              *(_DWORD *)(v70 + 256) = v80;
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) |= 1u;
            }
            if ( !v82 )
              *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 152LL) &= ~0x40000u;
          }
        }
        v71 = *((_QWORD *)v94[0] + 122);
        if ( __PAIR64__(HIDWORD(v103), v59) == *(_QWORD *)(v71 + 324) )
          goto LABEL_95;
        *(_DWORD *)(v71 + 324) = v59;
        v47 = *((_QWORD *)v94[0] + 122);
        v48 = HIDWORD(v103);
LABEL_64:
        *(_DWORD *)(v47 + 328) = v48;
        *(_DWORD *)(*((_QWORD *)v94[0] + 122) + 340LL) |= 0x2010u;
        goto LABEL_95;
      }
LABEL_98:
      if ( v77 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v137);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v135);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v94);
  }
  if ( !v91 )
    goto LABEL_112;
  do
  {
    v73 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
    v116 = v73;
    v74 = *(unsigned __int16 *)p_ArbitraryUserPointer;
    if ( (unsigned __int64)p_ArbitraryUserPointer + v74 > p_Self )
      break;
    v75 = v73 - 7;
    if ( v75 )
    {
      if ( v75 != 1 )
        goto LABEL_109;
      v104 = 0LL;
      v76 = p_ArbitraryUserPointer[1];
      v104 = v76;
    }
    else
    {
      v105 = 0LL;
      v76 = p_ArbitraryUserPointer[1];
      v105 = v76;
    }
    NtGdiDeleteObjectApp(v76);
LABEL_109:
    --StackLimit;
    p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v74 + 7) & 0xFFFFFFF8));
  }
  while ( StackLimit && (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
  *(_DWORD *)p_StackLimit = 0;
  *p_SubSystemTib &= 0xC0000000;
LABEL_112:
  GdiBatchProcessingStatus::~GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v133);
LABEL_113:
  v131[13].FiberData = 0LL;
}
