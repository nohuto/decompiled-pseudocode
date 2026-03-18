/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140066750
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14006438C (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x140064B84 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140066C38 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140066CCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1401AB494 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  unsigned int v13; // esi
  DHPDEV dhpdev; // rbx
  LONG left; // r13d
  LONG top; // edi
  int v17; // edi
  struct _RECTL v18; // xmm0
  int v19; // r13d
  struct _BRUSHOBJ *v20; // rdx
  __int64 result; // rax
  Gre::Base *v22; // rcx
  int i; // eax
  __int64 v24; // r10
  __int64 v25; // r9
  struct _SURFOBJ *v26; // rdi
  bool v27; // zf
  struct _XLATEOBJ *v28; // rbx
  HDEV hdev; // rcx
  FLONG flXlate; // r11d
  int v31; // edx
  ULONG v32; // r8d
  __int64 v33; // r9
  ULONG *pulXlate; // r10
  ULONG iUniq; // ebx
  int (*v36)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+78h] [rbp-88h]
  struct _XLATEOBJ *v40; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL v41; // [rsp+88h] [rbp-78h] BYREF
  struct _SURFOBJ *v42; // [rsp+98h] [rbp-68h]
  struct _RECTL *v43; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v44; // [rsp+A8h] [rbp-58h]
  struct _POINTL v45; // [rsp+B0h] [rbp-50h] BYREF
  struct _XLATEOBJ *v46; // [rsp+B8h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v47; // [rsp+C0h] [rbp-40h]
  struct _POINTL *v48; // [rsp+C8h] [rbp-38h]
  struct _POINTL *v49; // [rsp+D0h] [rbp-30h]
  struct _POINTL *v50; // [rsp+D8h] [rbp-28h]
  struct _SURFOBJ *v51; // [rsp+E0h] [rbp-20h]
  _DWORD v52[14]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v53[56]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  struct _POINTL *v57; // [rsp+170h] [rbp+70h]
  _BYTE v58[40]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  char v60; // [rsp+1B0h] [rbp+B0h]
  int v61; // [rsp+1B4h] [rbp+B4h]
  __int64 v62; // [rsp+1D0h] [rbp+D0h]
  struct _SURFOBJ *v63; // [rsp+1D8h] [rbp+D8h]
  struct _RECTL v64; // [rsp+1F0h] [rbp+F0h] BYREF

  v42 = a2;
  v46 = a5;
  v13 = 1;
  dhpdev = a2->dhpdev;
  v51 = a3;
  left = a6->left;
  top = a6->top;
  v41 = 0LL;
  v17 = top - a7->y;
  v18 = *a6;
  v19 = left - a7->x;
  v50 = a8;
  v20 = a9;
  v43 = a6;
  v48 = a7;
  v44 = a9;
  v49 = a10;
  v38 = 0LL;
  v39 = v17;
  v64 = v18;
  if ( a4 && a4->iDComplexity )
  {
    if ( !bIntersect(&a4->rclBounds, &v64, &v64) )
      return 1LL;
    v20 = v44;
  }
  v64.left -= v19;
  v64.right -= v19;
  v64.top -= v17;
  v64.bottom -= v17;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v52,
    v20,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  result = 0LL;
  if ( v52[0] )
  {
    v59 = 0LL;
    v60 = 0;
    v61 = 0;
    MULTISURF::vInit((MULTISURF *)v58, a1, v43);
    v47 = Gre::Base::Globals(v22);
    for ( i = MSURF::bFindSurface((MSURF *)v53, v42, 0LL, &v64); ; i = MSURF::bNextSurface((MSURF *)v53) )
    {
      if ( !i )
      {
        MULTISURF::~MULTISURF((MULTISURF *)v58);
        return v13;
      }
      v24 = v55;
      v25 = v54;
      if ( (*(_DWORD *)(*(_QWORD *)(v55 + 24) + 1808LL) & 0x8000000) == 0 && !IsMetaRedirectionBitmap(a1) )
        break;
      if ( v62 )
      {
        v26 = *(struct _SURFOBJ **)(*(_QWORD *)(v62 + 8) + 8LL * *(unsigned int *)(v25 + 16));
        if ( v26 )
          goto LABEL_13;
      }
LABEL_43:
      ;
    }
    v26 = v63;
LABEL_13:
    v27 = *(_DWORD *)(v25 + 24) == 0;
    v28 = v46;
    v40 = 0LL;
    if ( v27 )
      goto LABEL_29;
    hdev = v26[1].hdev;
    if ( !hdev )
    {
      if ( v46 )
      {
        if ( *(_QWORD *)&v46[2].iUniq )
        {
          hdev = *(HDEV *)&v46[2].iUniq;
          goto LABEL_22;
        }
        if ( (v46->flXlate & 1) == 0 )
          goto LABEL_31;
      }
      if ( v26 == a1 )
        hdev = v42[1].hdev;
    }
    if ( !v46 )
    {
      flXlate = 0;
      v31 = 0;
      v32 = 0;
LABEL_24:
      v33 = *(_QWORD *)(v24 + 104);
      if ( v46 )
      {
        pulXlate = v46[2].pulXlate;
        iUniq = v46[3].iUniq;
      }
      else
      {
        pulXlate = 0LL;
        iUniq = 0;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v40,
                           pulXlate,
                           iUniq,
                           v33,
                           hdev,
                           *((_QWORD *)v47 + 484),
                           *((_QWORD *)v47 + 484),
                           flXlate,
                           v31,
                           v32,
                           0x2000) )
      {
        v28 = v40;
        v24 = v55;
        v25 = v54;
LABEL_29:
        if ( *(_BYTE *)(v56 + 20) )
        {
          v38 = *(struct _POINTL *)(v56 + 4);
          v41.left = v19 + *(_DWORD *)(v56 + 4);
          v41.right = v19 + *(_DWORD *)(v56 + 12);
          v41.top = v39 + *(_DWORD *)(v56 + 8);
          v41.bottom = v39 + *(_DWORD *)(v56 + 16);
        }
        else
        {
          v38 = *v48;
          v41 = *v43;
        }
        v45 = 0LL;
        if ( a11 == 52428 )
        {
          if ( (*(_DWORD *)(v24 + 88) & 0x400) != 0 )
            v36 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v25 + 56) + 2832LL);
          else
            v36 = EngCopyBits;
          v13 &= OffCopyBitsInternal(v36, &v45, v26, v57, (struct _SURFOBJ *)v24, a4, v28, &v41, &v38);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v52, (struct _DISPSURF *)v25, (struct SURFACE *)(v24 - 24));
          if ( (*(_DWORD *)(v55 + 88) & 1) != 0 )
            v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v54 + 56) + 2824LL);
          else
            v37 = EngBitBlt;
          v13 &= OffBitBlt(
                   (_DWORD)v37,
                   (unsigned int)&v45,
                   (_DWORD)v26,
                   (_DWORD)v57,
                   v55,
                   (__int64)v51,
                   (__int64)a4,
                   (__int64)v28,
                   (__int64)&v41,
                   (__int64)&v38,
                   (__int64)v50,
                   (__int64)v44,
                   (__int64)v49,
                   a11);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v52, *(_DWORD *)(v54 + 16));
        }
        goto LABEL_42;
      }
LABEL_31:
      v13 = 0;
LABEL_42:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v40);
      goto LABEL_43;
    }
LABEL_22:
    flXlate = v46[1].flXlate;
    v31 = *(_DWORD *)&v46[1].iSrcType;
    v32 = v46[1].iUniq;
    goto LABEL_24;
  }
  return result;
}
