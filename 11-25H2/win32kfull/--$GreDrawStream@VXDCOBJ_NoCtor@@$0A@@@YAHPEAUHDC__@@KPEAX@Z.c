/*
 * XREFs of ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC
 * Callers:
 *     NtGdiDrawStream @ 0x14018A0B0 (NtGdiDrawStream.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x14007E6F4 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
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

__int64 __fastcall GreDrawStream<XDCOBJ_NoCtor,0>(Gre::Base *a1, unsigned int a2, int *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  Gre::Base *v17; // r10
  int v18; // eax
  _DWORD *v19; // r12
  unsigned int v20; // r13d
  int v21; // r11d
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // r10d
  int v26; // eax
  int v27; // r9d
  int v28; // eax
  LONG *v29; // rdx
  char *v30; // rcx
  int inited; // eax
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  Gre::Base *v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  Gre::Base *v46; // [rsp+80h] [rbp-88h] BYREF
  Gre::Base *v47[2]; // [rsp+88h] [rbp-80h] BYREF
  char *v48; // [rsp+98h] [rbp-70h]
  struct SURFACE *v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  struct _XLATEOBJ *v53; // [rsp+C0h] [rbp-48h] BYREF
  struct _XLATEOBJ *v54; // [rsp+C8h] [rbp-40h]
  struct _RECTL v55; // [rsp+D0h] [rbp-38h] BYREF
  DC *v56[5]; // [rsp+E0h] [rbp-28h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v57; // [rsp+108h] [rbp+0h]
  Gre::Base *v58; // [rsp+110h] [rbp+8h]
  __int64 v59; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v60[2]; // [rsp+120h] [rbp+18h] BYREF
  struct SURFACE *v61; // [rsp+140h] [rbp+38h]
  _QWORD v62[6]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v63; // [rsp+178h] [rbp+70h] BYREF
  __int64 v64; // [rsp+188h] [rbp+80h]
  int v65; // [rsp+190h] [rbp+88h]
  __int64 v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1E8h] [rbp+E0h]
  __int64 v68; // [rsp+1F0h] [rbp+E8h]
  __int64 v69; // [rsp+1F8h] [rbp+F0h]
  _QWORD v70[4]; // [rsp+208h] [rbp+100h] BYREF
  Gre::Base *v71; // [rsp+228h] [rbp+120h]
  Gre::Base *v72; // [rsp+230h] [rbp+128h]
  Gre::Base *v73; // [rsp+238h] [rbp+130h]
  struct _RECTL v74; // [rsp+258h] [rbp+150h] BYREF

  v58 = a1;
  v57 = Gre::Base::Globals(a1);
  v5 = v57;
  XDCOBJ::XDCOBJ((XDCOBJ *)v56);
  XDCOBJ::XDCOBJ((XDCOBJ *)v62);
  v6 = 0LL;
  memset(v60, 0, sizeof(v60));
  PushThreadGuardedObject(
    v60,
    v60,
    UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic,
    v7);
  v61 = 0LL;
  v52 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v63);
  v8 = *((_QWORD *)v5 + 472);
  v51 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v10 = 0LL;
  v54 = 0LL;
  v11 = 0LL;
  v50 = 0LL;
  memset_0(v70, 0, 0x48uLL);
  v45 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  SessionState = W32GetSessionState(v13, v12);
  v17 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 140LL) )
  {
    if ( a2 >= 4 )
    {
      v18 = *a3;
      v19 = a3 + 1;
      if ( v18 == 1148352339 )
      {
        v20 = a2 - 4;
        while ( 1 )
        {
          v15 = 1LL;
          if ( v20 < 4 )
          {
            LODWORD(v11) = 1;
            goto LABEL_82;
          }
          if ( !*v19 )
            break;
          if ( *v19 == 1 )
          {
            v30 = v48;
            if ( !v48 )
            {
              if ( (Gre::Base *)v62[0] != v17 )
              {
                XDCOBJ::vUnlockFast((XDCOBJ *)v62);
                v17 = 0LL;
              }
              v62[0] = v17;
              SURFREFDC::vUnlock((SURFREFDC *)v60);
              LODWORD(v44) = 8;
              if ( v20 < 8 )
                goto LABEL_81;
              if ( !(_DWORD)v45 )
                goto LABEL_81;
              SURFREFDC::vLock((SURFREFDC *)v60, (HSURF)(int)v19[1]);
              v15 = (__int64)v61;
              v49 = v61;
              if ( !v61 )
                goto LABEL_81;
              v6 = *((_QWORD *)v61 + 16);
              v50 = v6;
              v9 = *((_QWORD *)v57 + 471);
              if ( !v6
                || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v50)
                || v15 == v51
                || *(_DWORD *)(v15 + 96) != 6 )
              {
                goto LABEL_81;
              }
              inited = EXLATEOBJ::bInitXlateObj(
                         (Gre::Base *)&v53,
                         0LL,
                         *((_DWORD *)v56[0] + 30),
                         v6,
                         v10,
                         v9,
                         v11,
                         *(_DWORD *)(*((_QWORD *)v56[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v56[0] + 122) + 176LL),
                         0,
                         0);
              v17 = 0LL;
              if ( !inited )
                goto LABEL_88;
              v54 = v53;
              goto LABEL_51;
            }
LABEL_69:
            if ( v56[0] != v17 && v49 != v17 )
            {
              v70[2] = 0LL;
              v47[0] = v17;
              v46 = v17;
              v44 = v17;
              v70[0] = 72LL;
              v70[1] = 33488896LL;
              if ( HIDWORD(v45) == (_DWORD)v17 )
              {
                v73 = v17;
                v72 = v17;
                v71 = v17;
              }
              else
              {
                if ( (unsigned int)(*(_DWORD *)(v51 + 96) - 1) <= 2
                  || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (Gre::Base *)v47,
                                      0LL,
                                      0,
                                      v6,
                                      v8,
                                      v9,
                                      v9,
                                      (int)v17,
                                      (int)v17,
                                      (int)v17,
                                      (int)v17)
                  || (v71 = v47[0],
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v46, 0LL, 0, v10, v8, v11, v11, 0, 0, 0, 0))
                  || (v72 = v46,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v44, 0LL, 0, v8, v10, v11, v11, 0, 0, 0, 0)) )
                {
LABEL_80:
                  EXLATEOBJ::vAltUnlock(&v44, v15, v16);
                  EXLATEOBJ::vAltUnlock(&v46, v39, v40);
                  EXLATEOBJ::vAltUnlock(v47, v41, v42);
LABEL_81:
                  LODWORD(v11) = 0;
                  goto LABEL_82;
                }
                v30 = v48;
                v73 = v44;
              }
              if ( !(unsigned int)NtGdiDrawStreamInternal(
                                    v56,
                                    (struct EXFORMOBJ *)&v52,
                                    v49,
                                    v54,
                                    &v74,
                                    &v55,
                                    (int)v19 - (int)v30,
                                    v30,
                                    (struct _DRAWSTREAMINFO *)v70) )
                goto LABEL_80;
              v48 = 0LL;
              HIDWORD(v45) = 0;
              EXLATEOBJ::vAltUnlock(&v44, v15, v16);
              EXLATEOBJ::vAltUnlock(&v46, v35, v36);
              EXLATEOBJ::vAltUnlock(v47, v37, v38);
              v17 = 0LL;
            }
          }
          else
          {
            if ( *v19 != 9 )
              goto LABEL_81;
            LODWORD(v44) = 60;
            if ( v20 < 0x3C )
              goto LABEL_81;
            v21 = v19[9];
            if ( (v21 & 0xFFFFFF80) != 0 )
              goto LABEL_81;
            if ( !v49 )
              goto LABEL_81;
            v16 = (unsigned int)v19[5];
            if ( (int)v16 < 0 )
              goto LABEL_81;
            v22 = v19[6];
            if ( v22 < 0 )
              goto LABEL_81;
            v15 = (unsigned int)v19[7];
            if ( (int)v15 > *((_DWORD *)v49 + 14) )
              goto LABEL_81;
            v23 = v19[8];
            if ( v23 > *((_DWORD *)v49 + 15) )
              goto LABEL_81;
            v15 = (unsigned int)(v15 - v16);
            v24 = v23 - v22;
            if ( (int)v15 <= 0 || v24 <= 0 )
              goto LABEL_81;
            if ( (v21 & 0x20) == 0 )
            {
              v25 = v19[10];
              if ( v25 < 0 )
                goto LABEL_81;
              v26 = v19[11];
              if ( v26 < 0 )
                goto LABEL_81;
              v27 = v19[12];
              if ( v27 < 0 )
                goto LABEL_81;
              v16 = (unsigned int)v19[13];
              if ( (int)v16 < 0
                || v25 > (int)v15
                || v26 > (int)v15
                || v27 > v24
                || (int)v16 > v24
                || v25 + v26 > (int)v15
                || (int)v16 + v27 > v24 )
              {
                goto LABEL_81;
              }
              v17 = 0LL;
            }
            if ( (v21 & 0xC) == 0xC )
              goto LABEL_81;
            if ( (v21 & 8) != 0 )
            {
              v19[14] = ulGetNearestIndexFromColorref(v6, v9, (unsigned int)v19[14], 1LL);
              v17 = 0LL;
            }
            else
            {
              v28 = HIDWORD(v45);
              if ( (v21 & 4) != 0 )
                v28 = 1;
              HIDWORD(v45) = v28;
            }
            v29 = v19 + 1;
            if ( v48 == (char *)v17 )
            {
              v55.left = *v29;
              v55.top = v19[2];
              v55.right = v19[3];
              v55.bottom = v19[4];
              v48 = (char *)v19;
            }
            else
            {
              ERECTL::operator+=((__int64)&v55, (__int64)v29);
              v17 = 0LL;
            }
LABEL_51:
            v15 = 1LL;
LABEL_67:
            v20 -= (unsigned int)v44;
            v19 += (unsigned __int64)(unsigned int)v44 >> 2;
            if ( !v20 )
            {
              v30 = v48;
              if ( v48 )
                goto LABEL_69;
            }
          }
        }
        v30 = v48;
        if ( !v48 )
        {
          LODWORD(v44) = 24;
          if ( v20 < 0x18 )
            goto LABEL_81;
          v15 = (int)v19[1];
          if ( (Gre::Base *)v15 != v58 )
            goto LABEL_81;
          v32 = v45;
          if ( !(_DWORD)v45 )
          {
            XDCOBJ::vLock((XDCOBJ *)v56, (HDC)v15);
            v32 = v45;
          }
          if ( !v56[0]
            || (*((_DWORD *)v56[0] + 9) & 0x10000) != 0
            || !v32 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v63, (struct XDCOBJ *)v56, 0) )
          {
            goto LABEL_81;
          }
          DC::QuickInitXform(v56[0], &v59, 516LL);
          v15 = 1LL;
          v52 = v59;
          if ( (*(_BYTE *)(v59 + 32) & 1) == 0 )
            goto LABEL_81;
          v74 = *(struct _RECTL *)(v19 + 2);
          DC::bXform(v56[0], (const struct EXFORMOBJ *)&v52, (struct ERECTL *)&v74, v33);
          ERECTL::vOrder((ERECTL *)&v74);
          if ( (*((_DWORD *)v56[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v56, (struct ERECTL *)&v74);
          LODWORD(v17) = 0;
          v34 = *((_QWORD *)v56[0] + 62);
          v51 = v34;
          if ( !v34
            || (v10 = *(_QWORD *)(v34 + 128),
                v11 = *((_QWORD *)v56[0] + 11),
                (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v50)) )
          {
LABEL_88:
            LODWORD(v11) = (_DWORD)v17;
            goto LABEL_82;
          }
          v15 = 1LL;
          LODWORD(v45) = 1;
          goto LABEL_67;
        }
        goto LABEL_69;
      }
    }
  }
LABEL_82:
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v53, v15, v16);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v63);
  SURFREFDC::~SURFREFDC((SURFREFDC *)v60);
  if ( v56[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v56);
  v56[0] = 0LL;
  if ( v62[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v62);
  return (unsigned int)v11;
}
