/*
 * XREFs of xxxDrawState @ 0x140190760
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x14003F55C (GreSetViewportOrg.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x140191F60 (BltColor.c)
 *     GreGetHFONT @ 0x14021EDF8 (GreGetHFONT.c)
 *     GreGetTextColor @ 0x14021FA6C (GreGetTextColor.c)
 *     GreGetTextCharacterExtra @ 0x140311E10 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140311E58 (GreSetTextCharacterExtra.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r14d
  int v14; // r13d
  int v15; // esi
  int v16; // ebx
  HDC v17; // r15
  unsigned int Layout; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  signed int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 Bitmap; // rdi
  __int64 UserSessionState; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int16 v56; // ax
  HFONT v57; // rbx
  HFONT v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rdx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct tagTHREADINFO *v70; // rax
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r10
  Gre::Base *v75; // rbx
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  unsigned int v105; // ebx
  BOOL v108; // [rsp+50h] [rbp-B0h]
  struct _POINTL v109; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v110; // [rsp+60h] [rbp-A0h]
  int v111; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  unsigned int v113; // [rsp+6Ch] [rbp-94h]
  __int64 *v114; // [rsp+70h] [rbp-90h]
  __int64 v115; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v117; // [rsp+90h] [rbp-70h]
  HFONT v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h] BYREF
  int v120; // [rsp+A8h] [rbp-58h]
  int v121; // [rsp+ACh] [rbp-54h]
  __int64 v122; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v124[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v125; // [rsp+100h] [rbp+0h]

  v8 = a8;
  v114 = a3;
  v115 = a2;
  v10 = a4;
  v118 = 0LL;
  v109 = 0LL;
  v110 = 0;
  TextAlign = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( (a8 & 0x20) != 0 )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(1LL, a2) + 19872);
    if ( *(_WORD *)(v12 + 6996) == 1 || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872) + 2188LL) )
      v8 = a8 & 0xFFFFFFCF | 0x10;
  }
  v13 = a6;
  v14 = v8 | 0x80;
  if ( (v8 & 0x170) == 0 )
    v14 = v8;
  if ( !a6 )
    return 1LL;
  v15 = a7;
  if ( !a7 )
    return 1LL;
  v122 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v117 = -1LL;
  v16 = v14 & 0x80;
  v111 = v16;
  if ( (v14 & 0x80) != 0 )
  {
    v17 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(1LL, 128LL) + 56968) + 80LL);
    GreSetLayout(v17, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v17, a6, Layout);
    v21 = a6 + 1;
    v23 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 56968);
    if ( *(_DWORD *)(v23 + 96) < (signed int)(a6 + 1)
      || (v23 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968), *(_DWORD *)(v23 + 100) < a7) )
    {
      v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968);
      if ( *(_DWORD *)(v25 + 100) <= a7 )
      {
        v26 = a7;
      }
      else
      {
        v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968);
        v26 = *(_DWORD *)(v25 + 100);
      }
      v28 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 56968);
      if ( *(_DWORD *)(v28 + 96) <= v21 )
        v29 = (unsigned int)v21;
      else
        v29 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v28, v27) + 56968) + 96LL);
      Bitmap = GreCreateBitmap(v29, v26, 1LL, 1LL);
      if ( Bitmap )
      {
        UserSessionState = W32GetUserSessionState(v31, v30);
        v34 = GreSelectBitmap(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 80LL), Bitmap);
        GreDeleteObject(v34);
        GreSetBitmapOwner(Bitmap, 0LL);
        v38 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 56968);
        if ( *(_DWORD *)(v38 + 96) > v21 )
        {
          v38 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 56968);
          v21 = *(_DWORD *)(v38 + 96);
        }
        v39 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 56968);
        *(_DWORD *)(v39 + 96) = v21;
        v42 = *(_QWORD *)(W32GetUserSessionState(v39, v40) + 56968);
        if ( *(_DWORD *)(v42 + 100) <= a7 )
        {
          v43 = a7;
        }
        else
        {
          v42 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968);
          v43 = *(_DWORD *)(v42 + 100);
        }
        v23 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 56968);
        *(_DWORD *)(v23 + 100) = v43;
      }
      else
      {
        v44 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 56968);
        v13 = *(_DWORD *)(v44 + 96) - 1;
        v23 = *(_QWORD *)(W32GetUserSessionState(v44, v45) + 56968);
        v15 = *(_DWORD *)(v23 + 100);
      }
    }
    v46 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 56968);
    v47 = *(_DWORD *)(v46 + 100);
    v49 = *(_QWORD *)(W32GetUserSessionState(v46, v48) + 56968);
    v50 = *(_DWORD *)(v49 + 96);
    v52 = W32GetUserSessionState(v49, v51);
    GrePatBlt(*(HDC *)(*(_QWORD *)(v52 + 56968) + 80LL), 0, 0, v50, v47, 16711778);
    GreGetTextCharacterExtra(a1);
    v55 = W32GetUserSessionState(v54, v53);
    GreSetTextCharacterExtra(*(HDC *)(*(_QWORD *)(v55 + 56968) + 80LL));
    TextAlign = GreGetTextAlign(v17);
    v56 = GreGetTextAlign(a1);
    GreSetTextAlign(v17, TextAlign ^ ((unsigned __int16)TextAlign ^ v56) & 0x106);
    v57 = *(HFONT *)(GetDPIServerInfo() + 24);
    if ( (HFONT)GreGetHFONT(a1) != v57 )
    {
      v58 = GreSelectFont(a1, v57);
      GreSelectFont(a1, v58);
      v61 = W32GetUserSessionState(v60, v59);
      v118 = GreSelectFont(*(HDC *)(*(_QWORD *)(v61 + 56968) + 80LL), v58);
      v64 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 56968);
      v65 = *(_QWORD *)(v64 + 80);
      BugCheckParameter3[0] = v65;
      BugCheckParameter3[1] = (ULONG_PTR)v118;
      if ( v117 != -1 )
      {
        BugCheckParameter4 = PtiCurrent(v64, v65);
        KeBugCheckEx(
          0x164u,
          0x12uLL,
          (ULONG_PTR)BugCheckParameter2,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter4);
      }
      v67 = PtiCurrent(v64, v65);
      BugCheckParameter2[0] = *((_QWORD *)v67 + 48);
      *((_QWORD *)v67 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter3;
      v117 = (__int64)SelectFont;
    }
    v16 = v111;
    v10 = a4;
  }
  else
  {
    v17 = a1;
    GreGetDCPoint(a1, 4u, &v109);
    GreSetViewportOrg(a1, v10 + v109.x, a5 + v109.y);
  }
  v113 = xxxRealDrawMenuItem((_DWORD)v17, (_DWORD)v114, v13, v15, 0, v14);
  if ( v117 != -1 )
  {
    v70 = PtiCurrent(v69, v68);
    v69 = BugCheckParameter2[0];
    *((_QWORD *)v70 + 48) = BugCheckParameter2[0];
    v117 = -1LL;
  }
  v108 = 1;
  if ( !v16 )
  {
    v71 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v69, v68) + 19872) + 4636LL);
    if ( (unsigned int)GreGetTextColor(v17) != v71 )
      v108 = 0;
  }
  if ( MNIspItemValid(*v114, v114[1]) )
  {
    v75 = *(Gre::Base **)(*(_QWORD *)v74 + 96LL);
    if ( v75 )
    {
      memset_0(v124, 0, 0x68uLL);
      v110 = (unsigned int)GreExtGetObjectW(v75, 104LL, v124, v76) == 104 && v124[23] == 32 && !v125;
    }
  }
  v78 = *(_QWORD *)(W32GetUserSessionState(v73, v72) + 56968);
  if ( v17 == *(HDC *)(v78 + 80) )
  {
    v79 = W32GetUserSessionState(v78, v77);
    GreSetBkColor(*(HDC *)(*(_QWORD *)(v79 + 56968) + 80LL), 0xFFFFFF);
    v82 = W32GetUserSessionState(v81, v80);
    GreSetTextColor(*(HDC *)(*(_QWORD *)(v82 + 56968) + 80LL), 0);
    v85 = *(_QWORD *)(W32GetUserSessionState(v84, v83) + 43056);
    v88 = W32GetUserSessionState(v87, v86);
    GreSelectBrush(*(_QWORD *)(*(_QWORD *)(v88 + 56968) + 80LL), v85);
    v91 = W32GetUserSessionState(v90, v89);
    GreSetBkMode(*(HDC *)(*(_QWORD *)(v91 + 56968) + 80LL), 2);
  }
  if ( v111 )
  {
    if ( v118 )
      GreSelectFont(v17, v118);
    GreSetTextAlign(v17, TextAlign);
    if ( (v14 & 0x10) != 0 )
    {
      v119 = 0LL;
      v120 = v13;
      v121 = v15;
      v94 = *(_QWORD *)(W32GetUserSessionState(v93, v92) + 19872);
      v122 = *(_QWORD *)(v94 + 4944);
      v96 = W32GetUserSessionState(v94, v95);
      GrePolyPatBlt(*(HDC *)(*(_QWORD *)(v96 + 56968) + 80LL), 0xFA0089u, (struct _POLYPATBLT *)&v119, 1u);
    }
    v97 = W32GetUserSessionState(v93, v92);
    if ( (v14 & 0x100) != 0 )
    {
      W32GetUserSessionState(*(_QWORD *)(v97 + 56968), v98);
    }
    else if ( (v14 & 0x20) != 0 )
    {
      W32GetUserSessionState(*(_QWORD *)(v97 + 56968), v98);
      BltColor(a1, a5 + 1, v13, v15, 0, 0, 1);
      v101 = *(_QWORD *)(W32GetUserSessionState(v100, v99) + 56968);
      W32GetUserSessionState(v101, v102);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      BltColor(a1, a5, v13, v15, 0, 0, 1);
      W32GetUserSessionState(v104, v103);
    }
    BltColor(a1, a5, v13, v15, 0, 0, 1);
    GreSetLayout(v17, 0xFFFFFFFFLL, 0LL);
    if ( v110 )
    {
      GreGetDCPoint(a1, 4u, &v109);
      GreSetViewportOrg(a1, v10 + v109.x, a5 + v109.y);
      v105 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v114, v13, v15, 1, v108) & v113;
      GreSetViewportOrg(a1, v109.x, v109.y);
    }
    else
    {
      return v113;
    }
    return v105;
  }
  else
  {
    if ( v110 )
      xxxRealDrawMenuItem((_DWORD)v17, (_DWORD)v114, v13, v15, 1, v108);
    GreSetViewportOrg(v17, v109.x, v109.y);
    return 1LL;
  }
}
