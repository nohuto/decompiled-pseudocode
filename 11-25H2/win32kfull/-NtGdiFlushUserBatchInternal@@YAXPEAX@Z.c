/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x140083570 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140054DF0 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z @ 0x140077BC0 (-GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x14008114C (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z @ 0x1400848FC (--0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z.c)
 *     ??1GdiBatchProcessingStatus@@QEAA@XZ @ 0x140084938 (--1GdiBatchProcessingStatus@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x14009AD7C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1401658D0 (-GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(void *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r9
  struct _TEB *v6; // rbx
  ULONG *Buffer; // r13
  HDC v8; // rdx
  int *v9; // rax
  ULONG Offset; // ecx
  ULONG v11; // edi
  __int64 SessionState; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // ecx
  __int64 v20; // r12
  int v21; // eax
  GDI_TEB_BATCH *v22; // rax
  int v23; // ecx
  __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rcx
  ULONG v27; // eax
  ULONG v28; // r9d
  int v29; // r8d
  int v30; // ecx
  int v31; // eax
  LONG left; // edi
  LONG v33; // esi
  int v34; // r14d
  int v35; // r15d
  unsigned __int8 v36; // eax^2
  DC *v37; // r9
  __int64 v38; // rcx
  ULONG v39; // edx
  __int64 v40; // r8
  __int64 v41; // rbx
  LONG top; // rax^4
  __int64 v43; // r9
  unsigned __int64 right; // rdx
  LONG bottom; // r8d
  DC *v46; // r14
  int v47; // eax
  struct SURFACE *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct _GRETHREAD *v53; // rax
  int v54; // r9d
  DC *v55; // rdx
  __int64 v56; // rax
  int v57; // edi
  unsigned int v58; // r10d
  unsigned int v59; // r11d
  unsigned int v60; // esi
  unsigned int v61; // r14d
  unsigned int v62; // r15d
  ULONG v63; // r8d
  __int64 v64; // r8
  int v65; // rax^4
  __int64 v66; // rcx
  _DWORD *v67; // rcx
  int v68; // edi
  int v69; // esi
  int v70; // r14d
  int v71; // r15d
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  __int64 v75; // rcx
  LONG v76; // eax
  unsigned int v77; // eax
  struct _GRETHREAD *CurrentThread; // rax
  char v79; // [rsp+70h] [rbp-378h]
  ULONG GdiBatchCount; // [rsp+8Ch] [rbp-35Ch]
  int v81; // [rsp+90h] [rbp-358h]
  int v82; // [rsp+90h] [rbp-358h]
  unsigned int v83; // [rsp+94h] [rbp-354h]
  unsigned int v84; // [rsp+94h] [rbp-354h]
  unsigned int v85; // [rsp+A8h] [rbp-340h]
  unsigned int v86; // [rsp+ACh] [rbp-33Ch]
  unsigned int v87; // [rsp+B0h] [rbp-338h]
  unsigned int v88; // [rsp+B4h] [rbp-334h]
  ROP4 v89; // [rsp+B8h] [rbp-330h]
  int v90; // [rsp+BCh] [rbp-32Ch]
  unsigned __int64 v91; // [rsp+C8h] [rbp-320h]
  int v92; // [rsp+D0h] [rbp-318h]
  DC *v93[14]; // [rsp+E0h] [rbp-308h] BYREF
  int v94; // [rsp+150h] [rbp-298h]
  int v95; // [rsp+154h] [rbp-294h]
  int v96; // [rsp+158h] [rbp-290h]
  int v97; // [rsp+15Ch] [rbp-28Ch]
  _DWORD v98[2]; // [rsp+160h] [rbp-288h] BYREF
  GDI_TEB_BATCH *p_GdiTebBatch; // [rsp+168h] [rbp-280h]
  struct _TEB *Self; // [rsp+170h] [rbp-278h]
  int v101; // [rsp+178h] [rbp-270h]
  HDC HDC; // [rsp+180h] [rbp-268h]
  __int64 v103; // [rsp+188h] [rbp-260h]
  __int64 v104; // [rsp+190h] [rbp-258h]
  __int64 v105; // [rsp+198h] [rbp-250h]
  HFONT v106; // [rsp+1A0h] [rbp-248h]
  __int64 v107; // [rsp+1A8h] [rbp-240h]
  __int64 v108; // [rsp+1B0h] [rbp-238h]
  ULONG *p_GdiBatchCount; // [rsp+1B8h] [rbp-230h]
  __int64 v110; // [rsp+1C0h] [rbp-228h]
  unsigned int v111; // [rsp+1C8h] [rbp-220h]
  unsigned int v112; // [rsp+1CCh] [rbp-21Ch]
  unsigned int v113; // [rsp+1D0h] [rbp-218h]
  unsigned int v114; // [rsp+1D4h] [rbp-214h]
  ULONG v115; // [rsp+1D8h] [rbp-210h]
  ULONG v116; // [rsp+1DCh] [rbp-20Ch]
  ULONG v117; // [rsp+1E0h] [rbp-208h]
  int v118; // [rsp+1E4h] [rbp-204h]
  int v119; // [rsp+1E8h] [rbp-200h]
  unsigned int v120; // [rsp+1ECh] [rbp-1FCh]
  unsigned int v121; // [rsp+1F0h] [rbp-1F8h]
  unsigned int v122; // [rsp+1F4h] [rbp-1F4h]
  unsigned int v123; // [rsp+1F8h] [rbp-1F0h]
  unsigned int v124; // [rsp+1FCh] [rbp-1ECh]
  unsigned int v125; // [rsp+200h] [rbp-1E8h]
  ULONG v126; // [rsp+204h] [rbp-1E4h]
  ULONG v127; // [rsp+208h] [rbp-1E0h]
  unsigned int v128; // [rsp+20Ch] [rbp-1DCh]
  LONG v129; // [rsp+210h] [rbp-1D8h]
  LONG v130; // [rsp+214h] [rbp-1D4h]
  int v131; // [rsp+218h] [rbp-1D0h]
  __int64 v132; // [rsp+220h] [rbp-1C8h] BYREF
  int v133; // [rsp+228h] [rbp-1C0h]
  __int64 v134; // [rsp+230h] [rbp-1B8h]
  ULONG v135; // [rsp+238h] [rbp-1B0h]
  _BYTE v136[16]; // [rsp+240h] [rbp-1A8h] BYREF
  __int64 v137; // [rsp+250h] [rbp-198h]
  _BYTE v138[56]; // [rsp+258h] [rbp-190h] BYREF
  _BYTE v139[128]; // [rsp+290h] [rbp-158h] BYREF
  _BYTE v140[144]; // [rsp+310h] [rbp-D8h] BYREF
  RECTL v141; // [rsp+3A0h] [rbp-48h] BYREF
  struct _RECTL v142; // [rsp+3B0h] [rbp-38h] BYREF

  Self = (struct _TEB *)KeGetPcr()->NtTib.Self;
  v90 = 1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged && (v3 = *CurrentThreadNonPaged) != 0 && (v4 = v3 + 8) != 0 )
    v5 = *(_QWORD *)(v4 + 336);
  else
    v5 = 0LL;
  if ( v5 && *(_BYTE *)(v5 + 80) )
    GrepCaptureLiveMemoryDump(400LL, 52LL, 4LL);
  v6 = Self;
  p_GdiBatchCount = &Self->GdiBatchCount;
  GdiBatchCount = Self->GdiBatchCount;
  Buffer = Self->GdiTebBatch.Buffer;
  Self->GdiBatchCount = 0;
  p_GdiTebBatch = &v6->GdiTebBatch;
  v6->GdiTebBatch.Offset &= 0xC0000000;
  v91 = (unsigned __int64)(Buffer + 310);
  if ( GdiBatchCount - 1 <= 0x134 )
  {
    HDC = 0LL;
    GdiBatchProcessingStatus::GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v136, v6);
    HDC = (HDC)v6->GdiTebBatch.HDC;
    v8 = HDC;
    v9 = (int *)p_GdiTebBatch;
    Offset = p_GdiTebBatch->Offset;
    v11 = p_GdiTebBatch->Offset >> 31;
    v6->GdiTebBatch.HDC = 0LL;
    *v9 = Offset & 0x7FFFFFFF;
    if ( v8 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v93, v8);
      if ( v93[0] )
      {
        SessionState = W32GetSessionState();
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v138,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
        v13 = *((unsigned __int16 *)v93[0] + 6);
        v98[0] = 23;
        v98[1] = v13;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v140);
        v79 = 0;
        if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
        {
          if ( !(_BYTE)v11 )
          {
            v79 = 1;
            CurrentThread = GreGetCurrentThread(v15, v14);
            if ( CurrentThread )
              *((_DWORD *)CurrentThread + 86) |= 4u;
          }
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v140, (struct XDCOBJ *)v93, 0) )
        {
          v90 = 0;
          v134 = *(_QWORD *)(*((_QWORD *)v93[0] + 122) + 160LL);
          do
          {
            v18 = 1;
            v19 = *((unsigned __int16 *)Buffer + 1);
            v119 = v19;
            v20 = *(unsigned __int16 *)Buffer;
            if ( (unsigned __int64)Buffer + v20 > v91 )
              break;
            if ( v19 == 6 )
            {
              v16 = 0LL;
              v106 = 0LL;
              if ( (unsigned int)v20 < 0x10 )
              {
                v18 = 0;
              }
              else
              {
                v16 = *((_QWORD *)Buffer + 1);
                v106 = (HFONT)v16;
              }
              if ( v18 )
                GrepSelectFont((struct XDCOBJ *)v93, (HFONT)v16, 0);
            }
            else if ( v19 == 2 )
            {
              if ( !v79 )
                GrepBatchTextOut(
                  (struct XDCOBJ *)v93,
                  (struct _BATCHTEXTOUT *)Buffer,
                  v20,
                  (const struct RFONTOBJ::Tag *)v98);
            }
            else
            {
              switch ( v19 )
              {
                case 0:
                  if ( (unsigned int)v20 >= 0x48 && !v79 )
                  {
                    left = Buffer[1];
                    v97 = left;
                    v129 = left;
                    v33 = Buffer[2];
                    v96 = v33;
                    v130 = v33;
                    v34 = Buffer[3];
                    v101 = v34;
                    v131 = v34;
                    v35 = Buffer[4];
                    v95 = v35;
                    v133 = v35;
                    v135 = Buffer[8];
                    v36 = BYTE2(v135);
                    v88 = Buffer[9];
                    v111 = v88;
                    v87 = Buffer[10];
                    v112 = v87;
                    v86 = Buffer[15];
                    v113 = v86;
                    v85 = Buffer[16];
                    v114 = v85;
                    v89 = (v36 << 8) | v36;
                    if ( ((v36 ^ (unsigned __int8)(4 * v36)) & 0xCC) == 0 )
                    {
                      v110 = *(_QWORD *)(*((_QWORD *)v93[0] + 122) + 160LL);
                      v81 = 0;
                      v83 = 0;
                      v137 = *((_QWORD *)Buffer + 3);
                      GreDCSelectBrush(v93[0], v137);
                      v37 = v93[0];
                      v38 = *((_QWORD *)v93[0] + 122);
                      v94 = *(_DWORD *)(v38 + 192);
                      v92 = *(_DWORD *)(v38 + 196);
                      v115 = Buffer[11];
                      v39 = Buffer[17];
                      v116 = v39;
                      if ( v94 != v115 )
                      {
                        *(_DWORD *)(v38 + 192) = v115;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 196LL) = v39;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                        v37 = v93[0];
                      }
                      if ( (*((_DWORD *)v37 + 30) & 1) != 0 )
                      {
                        v72 = *((_QWORD *)v37 + 122);
                        if ( *(_QWORD *)(v72 + 248) )
                        {
                          v83 = *(_DWORD *)(v72 + 152) & 0x40000;
                          *(_DWORD *)(v72 + 152) |= 0x40000u;
                          v37 = v93[0];
                          v73 = *((_QWORD *)v93[0] + 122);
                          v74 = *(_DWORD *)(v73 + 256);
                          v81 = v74;
                          v117 = Buffer[12];
                          if ( v74 != v117 )
                          {
                            *(_DWORD *)(v73 + 256) = v117;
                            *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                            v37 = v93[0];
                          }
                        }
                      }
                      v40 = *((_QWORD *)v37 + 122);
                      v105 = *(_QWORD *)(v40 + 324);
                      LODWORD(v41) = v105;
                      *(_QWORD *)&v142.left = *(_QWORD *)(Buffer + 13);
                      top = v142.top;
                      if ( v105 != *(_QWORD *)&v142.left )
                      {
                        *(_DWORD *)(v40 + 324) = v142.left;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 328LL) = top;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 340LL) |= 0x2010u;
                        v37 = v93[0];
                      }
                      DC::QuickInitXform(v37, &v132, 516LL);
                      if ( (*(_BYTE *)(v132 + 32) & 1) != 0 )
                      {
                        v141.left = left;
                        v141.top = v33;
                        right = (unsigned int)(v34 + left);
                        v141.right = v34 + left;
                        bottom = v35 + v33;
                        v141.bottom = v35 + v33;
                        v46 = v93[0];
                        if ( (*(_BYTE *)(v132 + 32) & 0x43) == 0x43
                          || (v47 = bCvtPts1(v132, &v141, 2LL, v43),
                              bottom = v141.bottom,
                              right = (unsigned int)v141.right,
                              v33 = v141.top,
                              left = v141.left,
                              v47) )
                        {
                          LOBYTE(v47) = 1;
                        }
                        if ( (_BYTE)v47 && (*(_DWORD *)(*((_QWORD *)v46 + 122) + 108LL) & 1) != 0 )
                        {
                          v141.left = ++left;
                          right = (unsigned int)(right + 1);
                          v141.right = right;
                        }
                        if ( left > (int)right )
                        {
                          v77 = left;
                          left = right;
                          v141.left = right;
                          right = v77;
                          v141.right = v77;
                        }
                        if ( v33 > bottom )
                        {
                          v76 = v33;
                          v33 = bottom;
                          v141.top = bottom;
                          bottom = v76;
                          v141.bottom = v76;
                        }
                        if ( v33 != bottom && left != (_DWORD)right )
                        {
                          if ( (*((_DWORD *)v93[0] + 9) & 0xE0) != 0 )
                            XDCOBJ::vAccumulate((XDCOBJ *)v93, (struct ERECTL *)&v141);
                          v49 = (struct SURFACE *)*((_QWORD *)v93[0] + 62);
                          if ( v49 )
                            GrePatBltLockedDC(
                              (struct XDCOBJ *)v93,
                              (struct EXFORMOBJ *)right,
                              &v141,
                              v89,
                              v49,
                              v88,
                              v87,
                              v86,
                              v85);
                        }
                      }
                      else
                      {
                        v67 = (_DWORD *)*((_QWORD *)v93[0] + 122);
                        v68 = v67[46];
                        v69 = v67[44];
                        v70 = v67[47];
                        v71 = v67[45];
                        v67[46] = v88;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 176LL) = v87;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 188LL) = v86;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 180LL) = v85;
                        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v139, 0LL);
                        GrepMaskBlt(
                          (struct XDCOBJ *)v93,
                          v97,
                          v96,
                          v101,
                          v95,
                          (struct OPTAPIDCOBJ *)v139,
                          0,
                          0,
                          0LL,
                          0,
                          0,
                          v89 << 16,
                          0);
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 184LL) = v68;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 176LL) = v69;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 188LL) = v70;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 180LL) = v71;
                        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v139);
                      }
                      v50 = *((_QWORD *)v93[0] + 122);
                      if ( *(_QWORD *)(v50 + 160) != v110 )
                      {
                        *(_QWORD *)(v50 + 160) = v110;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 0x1000u;
                      }
                      v51 = *((_QWORD *)v93[0] + 122);
                      if ( v94 != *(_DWORD *)(v51 + 192) )
                      {
                        *(_DWORD *)(v51 + 192) = v94;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 196LL) = v92;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                      }
                      if ( (*((_DWORD *)v93[0] + 30) & 1) != 0 )
                      {
                        v75 = *((_QWORD *)v93[0] + 122);
                        if ( *(_QWORD *)(v75 + 248) )
                        {
                          if ( v81 != *(_DWORD *)(v75 + 256) )
                          {
                            *(_DWORD *)(v75 + 256) = v81;
                            *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                          }
                          if ( !v83 )
                            *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) &= ~0x40000u;
                        }
                      }
                      v16 = HIDWORD(v105);
                      goto LABEL_102;
                    }
                  }
                  break;
                case 1:
                  if ( !v79 && (unsigned int)v20 >= 0x38 )
                  {
                    GreProbeUntrustedVaRange(Buffer, v91 - (_QWORD)Buffer, 1uLL, 8uLL);
                    v120 = Buffer[3];
                    v54 = v120;
                    v16 = (unsigned int)(v20 - 48);
                    if ( v120 < 0xAAAAAAA && 24 * (unsigned __int64)v120 <= (unsigned int)v16 )
                    {
                      v55 = v93[0];
                      v56 = *((_QWORD *)v93[0] + 122);
                      v57 = *(_DWORD *)(v56 + 192);
                      v82 = *(_DWORD *)(v56 + 196);
                      v58 = Buffer[2];
                      v121 = v58;
                      v59 = Buffer[4];
                      v122 = v59;
                      v60 = Buffer[5];
                      v123 = v60;
                      v61 = Buffer[7];
                      v124 = v61;
                      v62 = Buffer[8];
                      v125 = v62;
                      v126 = Buffer[6];
                      v63 = Buffer[9];
                      v127 = v63;
                      v84 = Buffer[1];
                      v128 = v84;
                      if ( v57 != v126 )
                      {
                        *(_DWORD *)(v56 + 192) = v126;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 196LL) = v63;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                        v55 = v93[0];
                      }
                      v64 = *((_QWORD *)v55 + 122);
                      v41 = *(_QWORD *)(v64 + 324);
                      v110 = *((_QWORD *)Buffer + 5);
                      v65 = HIDWORD(v110);
                      if ( v41 != v110 )
                      {
                        *(_DWORD *)(v64 + 324) = v110;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 328LL) = v65;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 340LL) |= 0x2010u;
                      }
                      GrepPolyPatBlt(
                        (struct XDCOBJ *)v93,
                        v84,
                        (struct _POLYPATBLT *)(Buffer + 12),
                        v54,
                        v58,
                        v59,
                        v60,
                        v61,
                        v62);
                      v66 = *((_QWORD *)v93[0] + 122);
                      if ( v57 != *(_DWORD *)(v66 + 192) )
                      {
                        *(_DWORD *)(v66 + 192) = v57;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 196LL) = v82;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 152LL) |= 1u;
                      }
                      v16 = HIDWORD(v41);
LABEL_102:
                      v52 = *((_QWORD *)v93[0] + 122);
                      if ( (_DWORD)v41 != *(_DWORD *)(v52 + 324) || (_DWORD)v16 != *(_DWORD *)(v52 + 328) )
                      {
                        *(_DWORD *)(v52 + 324) = v41;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 328LL) = v16;
                        *(_DWORD *)(*((_QWORD *)v93[0] + 122) + 340LL) |= 0x2010u;
                      }
                    }
                  }
                  break;
                case 3:
                  if ( !v79 )
                    GrepBatchTextOutRect(
                      v93,
                      (struct _BATCHTEXTOUTRECT *)Buffer,
                      v20,
                      (const struct RFONTOBJ::Tag *)v98);
                  break;
                case 4:
                  v27 = 0;
                  v28 = 0;
                  if ( (unsigned int)v20 < 0xC )
                  {
                    v18 = 0;
                  }
                  else
                  {
                    v27 = Buffer[1];
                    v28 = Buffer[2];
                  }
                  if ( v18 )
                  {
                    v16 = (__int64)v93[0];
                    *((_DWORD *)v93[0] + 31) = v27;
                    *(_DWORD *)(v16 + 128) = v28;
                    v29 = *(_DWORD *)(v16 + 40) & 1;
                    if ( v29 )
                      v30 = *(_DWORD *)(v16 + 1024);
                    else
                      v30 = *(_DWORD *)(v16 + 1016);
                    *(_DWORD *)(v16 + 1192) = v27 + v30;
                    if ( v29 )
                      v31 = *(_DWORD *)(v16 + 1028);
                    else
                      v31 = *(_DWORD *)(v16 + 1020);
                    *(_DWORD *)(v16 + 1196) = v28 + v31;
                  }
                  break;
                case 5:
                  v142 = 0LL;
                  v21 = 0;
                  if ( (unsigned int)v20 < 0x18 )
                  {
                    v18 = 0;
                  }
                  else
                  {
                    v142 = *(struct _RECTL *)(Buffer + 2);
                    v21 = Buffer[1];
                  }
                  if ( v18 )
                    GreExtSelectClipRgnLocked((struct XDCOBJ *)v93, &v142, v21);
                  break;
                case 7:
                  v103 = 0LL;
                  if ( (unsigned int)v20 < 0x10 )
                    v18 = 0;
                  else
                    v103 = *((_QWORD *)Buffer + 1);
                  goto LABEL_51;
                case 8:
                  v104 = 0LL;
                  if ( (unsigned int)v20 < 0x10 )
                    v18 = 0;
                  else
                    v104 = *((_QWORD *)Buffer + 1);
LABEL_51:
                  if ( v18 )
                    ((void (*)(void))NtGdiDeleteObjectApp)();
                  break;
                default:
                  break;
              }
            }
            --GdiBatchCount;
            Buffer = (ULONG *)((char *)Buffer + (((_DWORD)v20 + 7) & 0xFFFFFFF8));
            if ( !GdiBatchCount )
              break;
          }
          while ( (unsigned __int64)(Buffer + 1) < v91 );
          *p_GdiBatchCount = 0;
          v22 = p_GdiTebBatch;
          p_GdiTebBatch->Offset &= 0xC0000000;
          v22->Offset &= ~0x80000000;
          *(_QWORD *)(*((_QWORD *)v93[0] + 122) + 160LL) = v134;
          v17 = *((_QWORD *)v93[0] + 122);
          *(_DWORD *)(v17 + 152) |= 0x1000u;
        }
        if ( v79 )
        {
          v53 = GreGetCurrentThread(v17, v16);
          if ( v53 )
            *((_DWORD *)v53 + 86) &= ~4u;
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v140);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v138);
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v93);
    }
    if ( !v90 )
    {
LABEL_32:
      GdiBatchProcessingStatus::~GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v136);
      goto LABEL_33;
    }
    while ( 1 )
    {
      v23 = *((unsigned __int16 *)Buffer + 1);
      v118 = v23;
      v24 = *(unsigned __int16 *)Buffer;
      if ( (unsigned __int64)Buffer + v24 > v91 )
      {
LABEL_40:
        *p_GdiBatchCount = 0;
        p_GdiTebBatch->Offset &= 0xC0000000;
        goto LABEL_32;
      }
      v25 = v23 - 7;
      if ( v25 )
      {
        if ( v25 != 1 )
          goto LABEL_39;
        v107 = 0LL;
        v26 = *((_QWORD *)Buffer + 1);
        v107 = v26;
      }
      else
      {
        v108 = 0LL;
        v26 = *((_QWORD *)Buffer + 1);
        v108 = v26;
      }
      NtGdiDeleteObjectApp(v26, 1LL);
LABEL_39:
      --GdiBatchCount;
      Buffer = (ULONG *)((char *)Buffer + (((_DWORD)v24 + 7) & 0xFFFFFFF8));
      if ( !GdiBatchCount || (unsigned __int64)(Buffer + 1) >= v91 )
        goto LABEL_40;
    }
  }
LABEL_33:
  Self->GdiTebBatch.HDC = 0LL;
}
