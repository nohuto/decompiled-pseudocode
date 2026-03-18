/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14000C220
 * Callers:
 *     <none>
 * Callees:
 *     OffDrawStream @ 0x14000C080 (OffDrawStream.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x14000C1BC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA4C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x140171570 (EngDrawStream.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401EF4E4 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MulDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  struct _SURFOBJ *v11; // r12
  unsigned int v13; // r15d
  int v14; // ebx
  struct _RECTL *v15; // r8
  struct _SURFOBJ *v16; // r10
  int Surface; // eax
  int v18; // r14d
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rdi
  __int64 v22; // rbx
  struct _SURFOBJ *v23; // r9
  struct _XLATEOBJ *v24; // r14
  struct _DISPSURF *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64); // r10
  HDEV hdev; // rcx
  HDEV v30; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v32; // rdi
  struct PALETTE *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  struct Gre::Base::SESSION_GLOBALS *v36; // rax
  FLONG flXlate; // r12d
  int v38; // r8d
  ULONG iUniq; // r9d
  __int64 v40; // rax
  __int64 v41; // rcx
  ULONG *v42; // r10
  ULONG v43; // r11d
  FLONG v44; // eax
  int v45; // ecx
  ULONG v46; // edx
  _QWORD *v47; // r12
  FLONG v48; // ecx
  int v49; // edx
  ULONG v50; // r8d
  int inited; // eax
  FLONG v52; // ecx
  int v53; // edx
  ULONG v54; // r8d
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // r8
  unsigned int v58; // eax
  int NearestIndexFromColorref; // eax
  struct Gre::Base::SESSION_GLOBALS *v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v69; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v70; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  __int64 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  _BYTE v77[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v78; // [rsp+118h] [rbp+18h]
  char v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+124h] [rbp+24h]
  int v81[6]; // [rsp+148h] [rbp+48h]
  _BYTE v82[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v83; // [rsp+198h] [rbp+98h]
  int v84[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v85; // [rsp+1A8h] [rbp+A8h]
  int v86[2]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v87[88]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v88; // [rsp+218h] [rbp+118h]

  v11 = a2;
  v72 = (__int64)a6;
  v71 = (__int64)a8;
  v75 = *((_QWORD *)a9 + 5);
  v74 = *((_QWORD *)a9 + 6);
  v76 = *((_QWORD *)a9 + 4);
  v64 = *((_DWORD *)a9 + 1);
  v73 = (__int64)a5;
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0LL || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
    v61 = 1;
    v13 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v82, v16, a3, v15);
    v70.right = v11->sizlBitmap.cx;
    v18 = Surface;
    v70.bottom = v11->sizlBitmap.cy;
    v78 = 0LL;
    v79 = 0;
    v80 = 0;
    *(_QWORD *)&v70.left = 0LL;
    MULTISURF::vInit((MULTISURF *)v77, v11, &v70);
    if ( v14 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v87, a1);
      v61 = EngDrawStream(v88, v81[0], (int)a3, (int)a4, v73, v72, a7, v71, (__int64)a9);
      v13 = v61;
      MULTISURF::~MULTISURF((MULTISURF *)v87);
    }
    v60 = Gre::Base::Globals(v19);
    v20 = v60;
    if ( !v18 )
    {
LABEL_5:
      MULTISURF::~MULTISURF((MULTISURF *)v77);
      return v13;
    }
    while ( 1 )
    {
      v69 = 0LL;
      v68 = 0LL;
      v67 = 0LL;
      v66 = 0LL;
      v22 = *((_QWORD *)v20 + 472);
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v77, (HDEV *)v83) )
        goto LABEL_64;
      v23 = *(struct _SURFOBJ **)v81;
      v24 = a4;
      v25 = v83;
      v26 = *(_QWORD *)v84 - 24LL;
      v27 = *(_QWORD *)v81 - 24LL;
      v62 = *(_QWORD *)v81 - 24LL;
      if ( !*((_DWORD *)v83 + 6) )
        goto LABEL_8;
      v30 = (HDEV)*((_QWORD *)v83 + 6);
      pulXlate = *(HDEV *)(v27 + 128);
      v32 = (struct PALETTE *)*((_QWORD *)v20 + 471);
      if ( ((_DWORD)v30[539] & 0x100) != 0 )
      {
        v33 = DrvRealizeHalftonePalette(v30, 0);
        v23 = *(struct _SURFOBJ **)v81;
        v32 = v33;
        v27 = v62;
      }
      v34 = v26;
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_31;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v35 = 0;
LABEL_23:
          v36 = v60;
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            if ( v32 == *((struct PALETTE **)v60 + 471) )
              v35 = 0x2000;
            else
              v35 = 0x4000;
          }
          goto LABEL_36;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_31:
          v34 = v26;
          if ( v23 == v11 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v32 = *(struct PALETTE **)&a4[2].iSrcType;
          if ( !v32 )
            goto LABEL_63;
          if ( *(_DWORD *)(v27 + 96) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
          v34 = v26;
        }
      }
      v35 = 0;
      if ( pulXlate )
        goto LABEL_23;
      v36 = v60;
LABEL_36:
      v26 = v34;
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        v38 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v38 = 0;
        iUniq = 0;
      }
      v40 = *((_QWORD *)v36 + 471);
      *(_QWORD *)&v70.left = v34 + 128;
      v41 = *(_QWORD *)(v34 + 128);
      if ( a4 )
      {
        v42 = a4[2].pulXlate;
        v43 = a4[3].iUniq;
      }
      else
      {
        v42 = 0LL;
        v43 = 0;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v69, v42, v43, pulXlate, v41, v40, v32, flXlate, v38, iUniq, v35)
        || ((v24 = v69, !a4)
          ? (v44 = 0, v45 = 0, v46 = 0)
          : (v44 = a4[1].flXlate, v45 = *(_DWORD *)&a4[1].iSrcType, v46 = a4[1].iUniq),
            v47 = *(_QWORD **)&v70.left,
            !(unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v68,
                             0LL,
                             0LL,
                             **(_QWORD **)&v70.left,
                             v22,
                             v32,
                             v32,
                             v44,
                             v45,
                             v46,
                             0)) )
      {
        v11 = a2;
LABEL_63:
        v20 = v60;
        goto LABEL_64;
      }
      *((_QWORD *)a9 + 5) = v68;
      if ( a4 )
      {
        v48 = a4[1].flXlate;
        v49 = *(_DWORD *)&a4[1].iSrcType;
        v50 = a4[1].iUniq;
      }
      else
      {
        v48 = 0;
        v49 = 0;
        v50 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(&v67, 0LL, 0LL, v22, *v47, v32, v32, v48, v49, v50, 0);
      v11 = a2;
      if ( !inited )
        goto LABEL_63;
      v23 = *(struct _SURFOBJ **)v81;
      *((_QWORD *)a9 + 6) = v67;
      if ( v23 == a2 )
      {
        v20 = v60;
        goto LABEL_58;
      }
      if ( a4 )
      {
        v52 = a4[1].flXlate;
        v53 = *(_DWORD *)&a4[1].iSrcType;
        v54 = a4[1].iUniq;
      }
      else
      {
        v52 = 0;
        v53 = 0;
        v54 = 0;
      }
      v55 = EXLATEOBJ::bInitXlateObj(
              &v66,
              0LL,
              0LL,
              *(_QWORD *)(v62 + 128),
              v22,
              *((_QWORD *)v60 + 471),
              v32,
              v52,
              v53,
              v54,
              0);
      v20 = v60;
      if ( v55 )
      {
        v57 = *((unsigned int *)a9 + 1);
        *((_QWORD *)a9 + 4) = v66;
        v58 = ulIndexToRGB(a2[1].hdev, *((_QWORD *)v60 + 471), v57, v56);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *(_QWORD *)(v62 + 128),
                                     *((_QWORD *)v60 + 471),
                                     v58,
                                     1LL);
        v23 = *(struct _SURFOBJ **)v81;
        *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_58:
        v27 = v62;
        v25 = v83;
LABEL_8:
        v28 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
        if ( *(_QWORD *)(*((_QWORD *)v25 + 7) + 3400LL) )
          v28 = *(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))(*((_QWORD *)v25 + 7) + 3400LL);
        if ( v23->iType == 1 && *(_QWORD *)(v27 + 48) != *(_QWORD *)(v26 + 48) )
          v28 = (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream;
        v13 = OffDrawStream(
                v28,
                *(int **)v86,
                *(__int64 *)v84,
                (__int64)v23,
                v85,
                (__int64)v24,
                (__int128 *)v73,
                (__int64 *)v72,
                a7,
                v71,
                (__int64)a9) & v61;
        goto LABEL_12;
      }
LABEL_64:
      v13 = 0;
LABEL_12:
      *((_QWORD *)a9 + 6) = v74;
      *((_QWORD *)a9 + 5) = v75;
      *((_QWORD *)a9 + 4) = v76;
      *((_DWORD *)a9 + 1) = v64;
      v61 = v13;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v82) )
        goto LABEL_5;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return 1LL;
}
