/*
 * XREFs of ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900
 * Callers:
 *     NtGdiDrawStream @ 0x14018A0B0 (NtGdiDrawStream.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x14007E6F4 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400A02D8 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1400D7804 (-vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400D78E8 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14014AFD0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14016BED0 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1SURFREFDC@@QEAA@XZ @ 0x140263508 (--1SURFREFDC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GreDrawStream<APIDCOBJ_NoOp_vUnlock,1>(Gre::Base *a1, unsigned int a2, int *a3)
{
  unsigned int v5; // r12d
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  _DWORD *v17; // r13
  int v18; // r11d
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // r10d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  LONG *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v39; // [rsp+60h] [rbp-A0h]
  Gre::Base *v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  Gre::Base *v42; // [rsp+78h] [rbp-88h] BYREF
  Gre::Base *v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h]
  char *v45; // [rsp+90h] [rbp-70h]
  struct SURFACE *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  struct _XLATEOBJ *v50; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v51; // [rsp+C0h] [rbp-40h]
  struct _RECTL v52; // [rsp+C8h] [rbp-38h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v53; // [rsp+D8h] [rbp-28h]
  Gre::Base *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v56[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct SURFACE *v57; // [rsp+110h] [rbp+10h]
  DC *v58[14]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v59; // [rsp+190h] [rbp+90h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp+A0h]
  int v61; // [rsp+1A8h] [rbp+A8h]
  __int64 v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  __int64 v65; // [rsp+210h] [rbp+110h]
  _BYTE v66[48]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v67[4]; // [rsp+250h] [rbp+150h] BYREF
  Gre::Base *v68; // [rsp+270h] [rbp+170h]
  Gre::Base *v69; // [rsp+278h] [rbp+178h]
  Gre::Base *v70; // [rsp+280h] [rbp+180h]
  struct _RECTL v71; // [rsp+2A0h] [rbp+1A0h] BYREF

  v54 = a1;
  v53 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v58, (HDC)a1);
  XDCOBJ::XDCOBJ((XDCOBJ *)v66);
  v5 = 0;
  memset(v56, 0, sizeof(v56));
  PushThreadGuardedObject(
    v56,
    v56,
    UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic,
    v6);
  v57 = 0LL;
  v49 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v59);
  v7 = *((_QWORD *)v53 + 472);
  v48 = 0LL;
  v46 = 0LL;
  v8 = 0LL;
  v51 = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v10 = 0LL;
  v50 = 0LL;
  v11 = 0LL;
  v41 = 0;
  v45 = 0LL;
  memset_0(v67, 0, 0x48uLL);
  v44 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0;
  v62 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12) + 96) + 140LL) )
  {
    v14 = a2;
    if ( a2 >= 4 )
    {
      v16 = *a3;
      v17 = a3 + 1;
      if ( v16 == 1148352339 )
      {
        v14 = a2 - 4;
        v39 = a2 - 4;
        while ( 1 )
        {
          if ( (unsigned int)v14 < 4 )
          {
            v5 = 1;
            goto LABEL_76;
          }
          if ( !*v17 )
            break;
          if ( *v17 != 1 )
          {
            if ( *v17 != 9 )
              goto LABEL_76;
            LODWORD(v40) = 60;
            if ( (unsigned int)v14 < 0x3C )
              goto LABEL_76;
            v18 = v17[9];
            if ( (v18 & 0xFFFFFF80) != 0 )
              goto LABEL_76;
            if ( !v46 )
              goto LABEL_76;
            v15 = (unsigned int)v17[5];
            if ( (int)v15 < 0 )
              goto LABEL_76;
            v19 = v17[6];
            if ( v19 < 0 )
              goto LABEL_76;
            v14 = (unsigned int)v17[7];
            if ( (int)v14 > *((_DWORD *)v46 + 14) )
              goto LABEL_76;
            v20 = v17[8];
            if ( v20 > *((_DWORD *)v46 + 15) )
              goto LABEL_76;
            v14 = (unsigned int)(v14 - v15);
            v21 = v20 - v19;
            if ( (int)v14 <= 0 )
              goto LABEL_76;
            if ( v21 <= 0 )
              goto LABEL_76;
            if ( (v18 & 0x20) == 0 )
            {
              v22 = v17[10];
              if ( v22 < 0 )
                goto LABEL_76;
              v23 = v17[11];
              if ( v23 < 0 )
                goto LABEL_76;
              v24 = v17[12];
              if ( v24 < 0 )
                goto LABEL_76;
              v15 = (unsigned int)v17[13];
              if ( (int)v15 < 0
                || v22 > (int)v14
                || v23 > (int)v14
                || v24 > v21
                || (int)v15 > v21
                || v22 + v23 > (int)v14
                || (int)v15 + v24 > v21 )
              {
                goto LABEL_76;
              }
            }
            if ( (v18 & 0xC) == 0xC )
              goto LABEL_76;
            if ( (v18 & 8) != 0 )
            {
              v17[14] = ulGetNearestIndexFromColorref(v11, v8, (unsigned int)v17[14], 1LL);
            }
            else
            {
              v25 = v41;
              if ( (v18 & 4) != 0 )
                v25 = 1;
              v41 = v25;
            }
            v26 = v17 + 1;
            if ( v45 )
            {
              ERECTL::operator+=((__int64)&v52, (__int64)v26);
            }
            else
            {
              v52.left = *v26;
              v52.top = v17[2];
              v52.right = v17[3];
              v52.bottom = v17[4];
              v45 = (char *)v17;
            }
            goto LABEL_61;
          }
          if ( v45 )
          {
LABEL_63:
            if ( v58[0] && v46 )
            {
              v43 = 0LL;
              v42 = 0LL;
              v40 = 0LL;
              v67[0] = 72LL;
              v67[1] = 33488896LL;
              v67[2] = 0LL;
              if ( v41 )
              {
                if ( (unsigned int)(*(_DWORD *)(v48 + 96) - 1) <= 2
                  || !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v43, 0LL, 0, v11, v7, v8, v8, 0, 0, 0, 0)
                  || (v68 = v43,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v42, 0LL, 0, v9, v7, v10, v10, 0, 0, 0, 0))
                  || (v69 = v42,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v40, 0LL, 0, v7, v9, v10, v10, 0, 0, 0, 0)) )
                {
LABEL_74:
                  EXLATEOBJ::vAltUnlock(&v40, v14, v15);
                  EXLATEOBJ::vAltUnlock(&v42, v33, v34);
                  EXLATEOBJ::vAltUnlock(&v43, v35, v36);
                  goto LABEL_76;
                }
                v70 = v40;
              }
              else
              {
                v70 = 0LL;
                v69 = 0LL;
                v68 = 0LL;
              }
              if ( !(unsigned int)NtGdiDrawStreamInternal(
                                    v58,
                                    (struct EXFORMOBJ *)&v49,
                                    v46,
                                    v51,
                                    &v71,
                                    &v52,
                                    (int)v17 - (int)v45,
                                    v45,
                                    (struct _DRAWSTREAMINFO *)v67) )
                goto LABEL_74;
              v45 = 0LL;
              v41 = 0;
              EXLATEOBJ::vAltUnlock(&v40, v14, v15);
              EXLATEOBJ::vAltUnlock(&v42, v29, v30);
              EXLATEOBJ::vAltUnlock(&v43, v31, v32);
              v14 = v39;
            }
          }
          else
          {
            SURFREFDC::vUnlock((SURFREFDC *)v56);
            LODWORD(v40) = 8;
            if ( v39 < 8 )
              goto LABEL_76;
            if ( !v44 )
              goto LABEL_76;
            SURFREFDC::vLock((SURFREFDC *)v56, (HSURF)(int)v17[1]);
            v14 = (__int64)v57;
            v46 = v57;
            if ( !v57 )
              goto LABEL_76;
            v11 = *((_QWORD *)v57 + 16);
            v47 = v11;
            v8 = *((_QWORD *)v53 + 471);
            if ( !v11
              || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v47)
              || v14 == v48
              || *(_DWORD *)(v14 + 96) != 6
              || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  (Gre::Base *)&v50,
                                  0LL,
                                  *((_DWORD *)v58[0] + 30),
                                  v11,
                                  v9,
                                  v8,
                                  v10,
                                  *(_DWORD *)(*((_QWORD *)v58[0] + 122) + 184LL),
                                  *(_DWORD *)(*((_QWORD *)v58[0] + 122) + 176LL),
                                  0,
                                  0) )
            {
              goto LABEL_76;
            }
            v51 = v50;
LABEL_61:
            v14 = v39 - (unsigned int)v40;
            v39 = v14;
            v17 += (unsigned __int64)(unsigned int)v40 >> 2;
            if ( !(_DWORD)v14 && v45 )
              goto LABEL_63;
          }
        }
        if ( !v45 )
        {
          LODWORD(v40) = 24;
          if ( (unsigned int)v14 < 0x18
            || (Gre::Base *)(int)v17[1] != v54
            || !v58[0]
            || (*((_DWORD *)v58[0] + 9) & 0x10000) != 0
            || !v44 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v59, (struct XDCOBJ *)v58, 0) )
          {
            goto LABEL_76;
          }
          DC::QuickInitXform(v58[0], &v55, 516LL);
          v49 = v55;
          if ( (*(_BYTE *)(v55 + 32) & 1) == 0 )
            goto LABEL_76;
          v71 = *(struct _RECTL *)(v17 + 2);
          DC::bXform(v58[0], (const struct EXFORMOBJ *)&v49, (struct ERECTL *)&v71, v27);
          ERECTL::vOrder((ERECTL *)&v71);
          if ( (*((_DWORD *)v58[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v58, (struct ERECTL *)&v71);
          v28 = *((_QWORD *)v58[0] + 62);
          v48 = v28;
          if ( !v28 )
            goto LABEL_76;
          v9 = *(_QWORD *)(v28 + 128);
          v10 = *((_QWORD *)v58[0] + 11);
          if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v47) )
            goto LABEL_76;
          v44 = 1;
          goto LABEL_61;
        }
        goto LABEL_63;
      }
    }
  }
LABEL_76:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v50, v14, v15);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v59);
  SURFREFDC::~SURFREFDC((SURFREFDC *)v56);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v58);
  return v5;
}
