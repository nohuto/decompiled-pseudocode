/*
 * XREFs of ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1400644A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x140063260 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14006438C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x140064444 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffDrawStream @ 0x140067A54 (OffDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x1401B7B20 (EngDrawStream.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  struct Gre::Base::SESSION_GLOBALS *v20; // rsi
  __int64 v22; // rbx
  struct _SURFOBJ *v23; // r9
  struct _XLATEOBJ *v24; // r14
  struct _DISPSURF *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, __int64, __int64); // r10
  HDEV hdev; // rcx
  HDEV v30; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v32; // rsi
  struct PALETTE *v33; // rax
  int v34; // edx
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  FLONG flXlate; // r12d
  int v37; // r8d
  ULONG iUniq; // r9d
  __int64 v39; // rax
  ULONG *v40; // r10
  ULONG v41; // r11d
  FLONG v42; // eax
  int v43; // ecx
  ULONG v44; // edx
  _QWORD *v45; // r12
  FLONG v46; // ecx
  int v47; // edx
  ULONG v48; // r8d
  int inited; // eax
  FLONG v50; // ecx
  int v51; // edx
  ULONG v52; // r8d
  int v53; // eax
  __int64 v54; // r9
  __int64 v55; // r8
  unsigned int v56; // eax
  int NearestIndexFromColorref; // eax
  struct Gre::Base::SESSION_GLOBALS *v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  struct _XLATEOBJ *v67; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  _BYTE v75[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v76; // [rsp+118h] [rbp+18h]
  char v77; // [rsp+120h] [rbp+20h]
  int v78; // [rsp+124h] [rbp+24h]
  int v79[6]; // [rsp+148h] [rbp+48h]
  _BYTE v80[56]; // [rsp+160h] [rbp+60h] BYREF
  struct _DISPSURF *v81; // [rsp+198h] [rbp+98h]
  int v82[2]; // [rsp+1A0h] [rbp+A0h]
  struct _CLIPOBJ *v83; // [rsp+1A8h] [rbp+A8h]
  int v84[4]; // [rsp+1B0h] [rbp+B0h]
  _BYTE v85[88]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v86; // [rsp+218h] [rbp+118h]

  v11 = a2;
  v70 = (__int64)a6;
  v69 = (__int64)a8;
  v73 = *((_QWORD *)a9 + 5);
  v72 = *((_QWORD *)a9 + 6);
  v74 = *((_QWORD *)a9 + 4);
  v62 = *((_DWORD *)a9 + 1);
  v71 = (__int64)a5;
  if ( a2->iType != 1 || (hdev = a2->hdev) == 0LL || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
    v59 = 1;
    v13 = 1;
    v14 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v80, v16, a3, v15);
    v68.right = v11->sizlBitmap.cx;
    v68.bottom = v11->sizlBitmap.cy;
    v18 = Surface;
    v76 = 0LL;
    v77 = 0;
    v78 = 0;
    *(_QWORD *)&v68.left = 0LL;
    MULTISURF::vInit((MULTISURF *)v75, v11, &v68);
    if ( v14 )
    {
      MULTISURF::MULTISURF((MULTISURF *)v85, a1);
      v59 = EngDrawStream(v86, v79[0], (_DWORD)a3, (_DWORD)a4, v71, v70, a7, v69, (__int64)a9);
      v13 = v59;
      MULTISURF::~MULTISURF((MULTISURF *)v85);
    }
    v58 = Gre::Base::Globals(v19);
    v20 = v58;
    if ( !v18 )
    {
LABEL_5:
      MULTISURF::~MULTISURF((MULTISURF *)v75);
      return v13;
    }
    while ( 1 )
    {
      v22 = *((_QWORD *)v20 + 485);
      v67 = 0LL;
      v66 = 0LL;
      v65 = 0LL;
      v64 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v75, (HDEV *)v81) )
        goto LABEL_62;
      v23 = *(struct _SURFOBJ **)v79;
      v24 = a4;
      v25 = v81;
      v26 = *(_QWORD *)v82;
      v27 = *(_QWORD *)v79 - 24LL;
      v60 = *(_QWORD *)v79 - 24LL;
      if ( !*((_DWORD *)v81 + 6) )
        goto LABEL_8;
      v30 = (HDEV)*((_QWORD *)v81 + 6);
      pulXlate = *(HDEV *)(v27 + 128);
      v32 = (struct PALETTE *)*((_QWORD *)v20 + 484);
      if ( ((_DWORD)v30[539] & 0x100) != 0 )
      {
        v33 = DrvRealizeHalftonePalette(v30, 0);
        v23 = *(struct _SURFOBJ **)v79;
        v32 = v33;
        v27 = v60;
      }
      if ( !pulXlate )
      {
        if ( !a4 )
          goto LABEL_32;
        if ( a4[1].pulXlate )
        {
          pulXlate = (HDEV)a4[1].pulXlate;
          v34 = 0;
LABEL_23:
          v35 = v58;
          if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
          {
            v34 = 0x4000;
            if ( v32 == *((struct PALETTE **)v58 + 484) )
              v34 = 0x2000;
          }
          goto LABEL_26;
        }
        if ( (a4->flXlate & 1) != 0 )
        {
LABEL_32:
          if ( v23 == v11 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          v32 = *(struct PALETTE **)&a4[2].iSrcType;
          if ( !v32 )
            goto LABEL_61;
          if ( *(_DWORD *)(v27 + 96) == a1->iBitmapFormat )
            pulXlate = a1[1].hdev;
        }
      }
      v34 = 0;
      if ( pulXlate )
        goto LABEL_23;
      v35 = v58;
LABEL_26:
      if ( a4 )
      {
        flXlate = a4[1].flXlate;
        v37 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v37 = 0;
        iUniq = 0;
      }
      v39 = *((_QWORD *)v35 + 484);
      *(_QWORD *)&v68.left = v26 + 104;
      if ( a4 )
      {
        v40 = a4[2].pulXlate;
        v41 = a4[3].iUniq;
      }
      else
      {
        v40 = 0LL;
        v41 = 0;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v67,
                            v40,
                            v41,
                            pulXlate,
                            *(_QWORD *)(v26 + 104),
                            v39,
                            v32,
                            flXlate,
                            v37,
                            iUniq,
                            v34)
        || ((v24 = v67, !a4)
          ? (v42 = 0, v43 = 0, v44 = 0)
          : (v42 = a4[1].flXlate, v43 = *(_DWORD *)&a4[1].iSrcType, v44 = a4[1].iUniq),
            v45 = *(_QWORD **)&v68.left,
            !(unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v66,
                             0LL,
                             0LL,
                             **(_QWORD **)&v68.left,
                             v22,
                             v32,
                             v32,
                             v42,
                             v43,
                             v44,
                             0)) )
      {
        v11 = a2;
LABEL_61:
        v20 = v58;
        goto LABEL_62;
      }
      *((_QWORD *)a9 + 5) = v66;
      if ( a4 )
      {
        v46 = a4[1].flXlate;
        v47 = *(_DWORD *)&a4[1].iSrcType;
        v48 = a4[1].iUniq;
      }
      else
      {
        v46 = 0;
        v47 = 0;
        v48 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(&v65, 0LL, 0LL, v22, *v45, v32, v32, v46, v47, v48, 0);
      v11 = a2;
      if ( !inited )
        goto LABEL_61;
      v23 = *(struct _SURFOBJ **)v79;
      *((_QWORD *)a9 + 6) = v65;
      if ( v23 == a2 )
      {
        v20 = v58;
        goto LABEL_56;
      }
      if ( a4 )
      {
        v50 = a4[1].flXlate;
        v51 = *(_DWORD *)&a4[1].iSrcType;
        v52 = a4[1].iUniq;
      }
      else
      {
        v50 = 0;
        v51 = 0;
        v52 = 0;
      }
      v53 = EXLATEOBJ::bInitXlateObj(
              &v64,
              0LL,
              0LL,
              *(_QWORD *)(v60 + 128),
              v22,
              *((_QWORD *)v58 + 484),
              v32,
              v50,
              v51,
              v52,
              0);
      v20 = v58;
      if ( v53 )
      {
        v55 = *((unsigned int *)a9 + 1);
        *((_QWORD *)a9 + 4) = v64;
        v56 = ulIndexToRGB(a2[1].hdev, *((_QWORD *)v58 + 484), v55, v54);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                     *(_QWORD *)(v60 + 128),
                                     *((_QWORD *)v58 + 484),
                                     v56,
                                     1LL);
        v23 = *(struct _SURFOBJ **)v79;
        *((_DWORD *)a9 + 1) = NearestIndexFromColorref;
LABEL_56:
        v27 = v60;
        v25 = v81;
LABEL_8:
        v28 = EngDrawStream;
        if ( *(_QWORD *)(*((_QWORD *)v25 + 7) + 3400LL) )
          LODWORD(v28) = *(_QWORD *)(*((_QWORD *)v25 + 7) + 3400LL);
        if ( v23->iType == 1 && *(_QWORD *)(v27 + 48) != *(_QWORD *)(v26 + 24) )
          v28 = EngDrawStream;
        v13 = OffDrawStream((int)v28, v84[0], v82[0], (int)v23, v83, (__int64)v24, v71, v70, a7, v69, (__int64)a9) & v59;
        goto LABEL_12;
      }
LABEL_62:
      v13 = 0;
LABEL_12:
      *((_QWORD *)a9 + 6) = v72;
      *((_QWORD *)a9 + 5) = v73;
      *((_QWORD *)a9 + 4) = v74;
      *((_DWORD *)a9 + 1) = v62;
      v59 = v13;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v80) )
        goto LABEL_5;
    }
  }
  DbgPrint("MulDrawStream: this should never happen\n");
  return 1LL;
}
