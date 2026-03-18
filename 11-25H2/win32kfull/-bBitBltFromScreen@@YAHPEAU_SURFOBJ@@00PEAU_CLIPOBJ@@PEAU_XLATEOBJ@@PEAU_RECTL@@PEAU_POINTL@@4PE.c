/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000E26C
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x14000E6EC (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x14000E784 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14000E994 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA6C (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14000ED9C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x140175488 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     OffBitBlt @ 0x1401853F4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bBitBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  LONG left; // r12d
  unsigned int v13; // esi
  LONG top; // r13d
  DHPDEV dhpdev; // rbx
  struct _RECTL v16; // xmm0
  int v17; // r12d
  int v18; // r13d
  struct _BRUSHOBJ *v19; // rdx
  __int64 result; // rax
  Gre::Base *v21; // rcx
  int i; // eax
  __int64 v23; // r10
  __int64 v24; // r9
  struct _SURFOBJ *v25; // rdx
  struct _SURFOBJ *v26; // rdi
  struct _XLATEOBJ *v27; // rbx
  HDEV hdev; // rcx
  FLONG flXlate; // r11d
  int v30; // edx
  ULONG v31; // r8d
  __int64 v32; // r9
  ULONG *pulXlate; // r10
  ULONG iUniq; // ebx
  int (*v35)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v36)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL v37; // [rsp+70h] [rbp-90h] BYREF
  struct _SURFOBJ *v38; // [rsp+78h] [rbp-88h]
  struct _XLATEOBJ *v39; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v40; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v41; // [rsp+90h] [rbp-70h]
  struct _POINTL v42; // [rsp+98h] [rbp-68h] BYREF
  struct _XLATEOBJ *v43; // [rsp+A0h] [rbp-60h]
  struct Gre::Base::SESSION_GLOBALS *v44; // [rsp+A8h] [rbp-58h]
  struct _POINTL *v45; // [rsp+B0h] [rbp-50h]
  struct _RECTL *v46; // [rsp+B8h] [rbp-48h]
  struct _POINTL *v47; // [rsp+C0h] [rbp-40h]
  struct _POINTL *v48; // [rsp+C8h] [rbp-38h]
  struct _SURFOBJ *v49; // [rsp+D0h] [rbp-30h]
  _DWORD v50[14]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v51[56]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v52; // [rsp+148h] [rbp+48h]
  __int64 v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  struct _POINTL *v55; // [rsp+160h] [rbp+60h]
  _BYTE v56[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v57; // [rsp+198h] [rbp+98h]
  char v58; // [rsp+1A0h] [rbp+A0h]
  int v59; // [rsp+1A4h] [rbp+A4h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  struct _SURFOBJ *v61; // [rsp+1C8h] [rbp+C8h]
  struct _RECTL v62; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v63; // [rsp+1F0h] [rbp+F0h] BYREF

  v37 = 0LL;
  v38 = a1;
  left = a6->left;
  v13 = 1;
  top = a6->top;
  dhpdev = a2->dhpdev;
  v40 = a2;
  v43 = a5;
  v63 = 0LL;
  v49 = a3;
  v16 = *a6;
  v17 = left - a7->x;
  v18 = top - a7->y;
  v48 = a8;
  v19 = a9;
  v46 = a6;
  v45 = a7;
  v41 = a9;
  v47 = a10;
  v62 = v16;
  if ( a4 && a4->iDComplexity )
  {
    if ( !bIntersect(&a4->rclBounds, &v62, &v62) )
      return 1LL;
    v19 = v41;
  }
  v62.left -= v17;
  v62.right -= v17;
  v62.top -= v18;
  v62.bottom -= v18;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v50,
    v19,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  result = 0LL;
  if ( v50[0] )
  {
    v57 = 0LL;
    v58 = 0;
    v59 = 0;
    MULTISURF::vInit((MULTISURF *)v56, v38, a6);
    v44 = Gre::Base::Globals(v21);
    for ( i = MSURF::bFindSurface((MSURF *)v51, v40, 0LL, &v62); ; i = MSURF::bNextSurface((MSURF *)v51) )
    {
      if ( !i )
      {
        MULTISURF::~MULTISURF((MULTISURF *)v56);
        return v13;
      }
      v23 = v53;
      v24 = v52;
      v25 = v38;
      if ( (*(_DWORD *)(*(_QWORD *)(v53 + 24) + 1808LL) & 0x8000000) == 0 && !(unsigned int)IsMetaRedirectionBitmap(v38) )
        break;
      if ( v60 )
      {
        v26 = *(struct _SURFOBJ **)(*(_QWORD *)(v60 + 8) + 8LL * *(unsigned int *)(v24 + 16));
        if ( v26 )
          goto LABEL_13;
      }
LABEL_43:
      ;
    }
    v26 = v61;
LABEL_13:
    v39 = 0LL;
    v27 = v43;
    if ( !*(_DWORD *)(v24 + 24) )
      goto LABEL_29;
    hdev = v26[1].hdev;
    if ( !hdev )
    {
      if ( v43 )
      {
        if ( *(_QWORD *)&v43[2].iUniq )
        {
          hdev = *(HDEV *)&v43[2].iUniq;
          goto LABEL_22;
        }
        if ( (v43->flXlate & 1) == 0 )
          goto LABEL_31;
      }
      if ( v26 == v25 )
        hdev = v40[1].hdev;
    }
    if ( !v43 )
    {
      flXlate = 0;
      v30 = 0;
      v31 = 0;
LABEL_24:
      v32 = *(_QWORD *)(v23 + 104);
      if ( v43 )
      {
        pulXlate = v43[2].pulXlate;
        iUniq = v43[3].iUniq;
      }
      else
      {
        pulXlate = 0LL;
        iUniq = 0;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v39,
                           pulXlate,
                           iUniq,
                           v32,
                           hdev,
                           *((_QWORD *)v44 + 471),
                           *((_QWORD *)v44 + 471),
                           flXlate,
                           v30,
                           v31,
                           0x2000) )
      {
        v27 = v39;
        v23 = v53;
        v24 = v52;
LABEL_29:
        if ( *(_BYTE *)(v54 + 20) )
        {
          v37 = *(struct _POINTL *)(v54 + 4);
          v63.left = v17 + *(_DWORD *)(v54 + 4);
          v63.right = v17 + *(_DWORD *)(v54 + 12);
          v63.top = v18 + *(_DWORD *)(v54 + 8);
          v63.bottom = v18 + *(_DWORD *)(v54 + 16);
        }
        else
        {
          v37 = *v45;
          v63 = *v46;
        }
        v42 = 0LL;
        if ( a11 == 52428 )
        {
          if ( (*(_DWORD *)(v23 + 88) & 0x400) != 0 )
            v35 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v24 + 56) + 2832LL);
          else
            v35 = EngCopyBits;
          v13 &= OffCopyBitsInternal(v35, &v42, v26, v55, (struct _SURFOBJ *)v23, a4, v27, &v63, &v37);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v50, (struct _DISPSURF *)v24, (struct SURFACE *)(v23 - 24));
          if ( (*(_DWORD *)(v53 + 88) & 1) != 0 )
            v36 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v52 + 56) + 2824LL);
          else
            v36 = EngBitBlt;
          v13 &= OffBitBlt(
                   (_DWORD)v36,
                   (unsigned int)&v42,
                   (_DWORD)v26,
                   (_DWORD)v55,
                   v53,
                   (__int64)v49,
                   (__int64)a4,
                   (__int64)v27,
                   (__int64)&v63,
                   (__int64)&v37,
                   (__int64)v48,
                   (__int64)v41,
                   (__int64)v47,
                   a11);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v50, *(_DWORD *)(v52 + 16));
        }
        goto LABEL_42;
      }
LABEL_31:
      v13 = 0;
LABEL_42:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v39);
      goto LABEL_43;
    }
LABEL_22:
    flXlate = v43[1].flXlate;
    v30 = *(_DWORD *)&v43[1].iSrcType;
    v31 = v43[1].iUniq;
    goto LABEL_24;
  }
  return result;
}
