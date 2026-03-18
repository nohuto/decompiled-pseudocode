/*
 * XREFs of ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140065E64
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140066C38 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140066CCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1401AB494 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     OffBitBlt @ 0x1401BB830 (OffBitBlt.c)
 *     ??1MULTISORTBLTORDER@@QEAA@XZ @ 0x140251CB0 (--1MULTISORTBLTORDER@@QEAA@XZ.c)
 *     ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x14028CE94 (--0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bBitBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        struct _POINTL *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  DHPDEV dhpdev; // rbx
  int v13; // r14d
  int v14; // ecx
  unsigned int v15; // esi
  _QWORD *v16; // r12
  Gre::Base *v17; // rcx
  __int64 v18; // r13
  int v19; // ebx
  __int64 v20; // rdi
  int v21; // eax
  ULONG *pulXlate; // r10
  struct _SURFOBJ *v23; // rax
  struct _SURFOBJ *v24; // r14
  __int64 v25; // rbx
  LONG v26; // esi
  LONG v27; // r14d
  ULONG v28; // r8d
  SURFOBJ *v29; // rax
  SURFOBJ *v30; // r8
  __int64 v31; // rcx
  int (*v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  struct _XLATEOBJ *v33; // r11
  HDEV v34; // rbx
  struct _XLATEOBJ *v35; // rsi
  int v36; // ecx
  __int64 v37; // rsi
  __int64 v38; // r14
  struct PALETTE *v39; // rax
  int v40; // edx
  FLONG flXlate; // edi
  int v42; // ecx
  ULONG iUniq; // r8d
  USHORT fjBitmap; // di
  int (*v45)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  HSURF v47; // rbx
  int v49; // [rsp+70h] [rbp-90h]
  __int16 v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+7Ch] [rbp-84h]
  struct _POINTL v53; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v54; // [rsp+88h] [rbp-78h]
  struct _POINTL *v55; // [rsp+90h] [rbp-70h]
  HSURF hsurf; // [rsp+98h] [rbp-68h]
  SIZEL sizl; // [rsp+A0h] [rbp-60h]
  struct _XLATEOBJ *v58; // [rsp+A8h] [rbp-58h] BYREF
  SURFOBJ *pso; // [rsp+B0h] [rbp-50h]
  struct _POINTL v60; // [rsp+B8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v61; // [rsp+C0h] [rbp-40h]
  struct PALETTE *v62; // [rsp+C8h] [rbp-38h]
  struct _SURFOBJ *v63; // [rsp+D0h] [rbp-30h]
  _QWORD *v64; // [rsp+D8h] [rbp-28h]
  struct _RECTL v65; // [rsp+E0h] [rbp-20h] BYREF
  const struct _RECTL *v66; // [rsp+F0h] [rbp-10h]
  struct Gre::Base::SESSION_GLOBALS *v67; // [rsp+F8h] [rbp-8h]
  struct PALETTE *v68; // [rsp+100h] [rbp+0h]
  struct _POINTL *v69; // [rsp+108h] [rbp+8h]
  struct _BRUSHOBJ *v70; // [rsp+110h] [rbp+10h]
  struct _POINTL *v71; // [rsp+118h] [rbp+18h]
  struct _SURFOBJ *v72; // [rsp+120h] [rbp+20h]
  void *v73[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD *v74; // [rsp+138h] [rbp+38h]
  _DWORD v75[12]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v76; // [rsp+170h] [rbp+70h] BYREF
  RECTL rclBounds; // [rsp+180h] [rbp+80h] BYREF

  dhpdev = a1->dhpdev;
  v13 = a5->left - a6->x;
  v66 = a5;
  v14 = a5->top - a6->y;
  v71 = a7;
  v69 = a9;
  v61 = a4;
  v51 = v14;
  v72 = a2;
  v15 = 1;
  v70 = a8;
  v49 = 1;
  v76 = 0LL;
  v53 = 0LL;
  sizl = 0LL;
  pso = 0LL;
  v65 = 0LL;
  v52 = v13;
  rclBounds = 0LL;
  MULTISORTBLTORDER::MULTISORTBLTORDER((MULTISORTBLTORDER *)v73, (struct _VDEV *)dhpdev, v13, v14);
  v16 = v74;
  v64 = v74;
  if ( !v74 )
  {
    if ( v73[0] )
      Win32FreePool(v73[0]);
    return 0LL;
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v75,
    a8,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a10 ^ (unsigned __int16)(a10 >> 4)) & 0xF0F);
  if ( !v75[0] )
  {
    MULTISORTBLTORDER::~MULTISORTBLTORDER((MULTISORTBLTORDER *)v73);
    return 0LL;
  }
  if ( a3 )
    rclBounds = a3->rclBounds;
  v50 = a1->fjBitmap & 0x40;
  v67 = Gre::Base::Globals(v17);
  do
  {
    v18 = v16[1];
    v19 = v51;
    do
    {
      v20 = v16[1];
      v76.left = v13 + *(_DWORD *)(v20 + 28);
      v76.right = v13 + *(_DWORD *)(v20 + 36);
      v76.top = v19 + *(_DWORD *)(v20 + 32);
      v76.bottom = v19 + *(_DWORD *)(v20 + 40);
      if ( bIntersect(v66, &v76, &v76) )
      {
        v21 = bIntersect(&v76, (const struct _RECTL *)(v18 + 28), &v76);
        pulXlate = 0LL;
        if ( v21 )
        {
          v55 = (struct _POINTL *)(v20 + 72);
          v53.x = v76.left - v13;
          hsurf = 0LL;
          v53.y = v76.top - v19;
          v23 = *(struct _SURFOBJ **)(v20 + 64);
          v24 = *(struct _SURFOBJ **)(v18 + 64);
          v54 = v23;
          v63 = v24;
          v60 = 0LL;
          if ( v23 == v24 )
            goto LABEL_18;
          if ( *(_DWORD *)(v20 + 20) )
          {
            v25 = *(_QWORD *)(v20 + 48);
            v26 = v76.right - v76.left;
            v27 = v76.bottom - v76.top;
            sizl.cx = v76.right - v76.left;
            v28 = *(_DWORD *)(v25 + 2092);
            sizl.cy = v76.bottom - v76.top;
            hsurf = (HSURF)EngCreateBitmap(sizl, 0, v28, 0, 0LL);
            v29 = EngLockSurface(hsurf);
            pulXlate = 0LL;
            pso = v29;
            v30 = v29;
            if ( v29 )
            {
              v31 = *(_QWORD *)(v25 + 2544);
              *(_QWORD *)&v65.left = 0LL;
              v65.right = v26;
              v65.bottom = v27;
              if ( (*(_DWORD *)(v31 + 112) & 0x400) != 0 )
                v32 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v25 + 2832);
              else
                v32 = EngCopyBits;
              v49 &= OffCopyBitsInternal(v32, &v60, v29, v55, v54, 0LL, 0LL, &v65, &v53);
              v30 = pso;
              pulXlate = 0LL;
            }
            v24 = v63;
            v23 = v30;
            v55 = &v60;
            v54 = v30;
            v53 = 0LL;
LABEL_18:
            if ( v23 )
            {
              v33 = v61;
              v34 = *(HDEV *)(v18 + 48);
              v35 = v61;
              v58 = 0LL;
              if ( v24 == v23 )
                goto LABEL_32;
              v36 = *(_DWORD *)(v18 + 24);
              if ( !v36 && !*(_DWORD *)(v20 + 24) )
                goto LABEL_32;
              v37 = *(_QWORD *)(*(_QWORD *)(v20 + 56) + 2544LL);
              v38 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 2544LL);
              v68 = (struct PALETTE *)*((_QWORD *)v67 + 484);
              v62 = v68;
              if ( v36 && ((_DWORD)v34[539] & 0x100) != 0 )
              {
                v39 = DrvRealizeHalftonePalette(v34, 0);
                v33 = v61;
                pulXlate = 0LL;
                v62 = v39;
              }
              v40 = 32 * (*(_DWORD *)(*(_QWORD *)(v20 + 56) + 2156LL) & 0x100);
              if ( v33 )
              {
                flXlate = v33[1].flXlate;
                v42 = *(_DWORD *)&v33[1].iSrcType;
                iUniq = v33[1].iUniq;
              }
              else
              {
                flXlate = 0;
                v42 = 0;
                iUniq = 0;
              }
              if ( v33 )
              {
                pulXlate = v33[2].pulXlate;
                LODWORD(v33) = v33[3].iUniq;
              }
              if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                   &v58,
                                   pulXlate,
                                   (unsigned int)v33,
                                   *(_QWORD *)(v37 + 128),
                                   *(_QWORD *)(v38 + 128),
                                   v68,
                                   v62,
                                   flXlate,
                                   v42,
                                   iUniq,
                                   v40) )
              {
                v35 = v58;
                v24 = v63;
LABEL_32:
                if ( !a3 || bIntersect(&rclBounds, &v76, &a3->rclBounds) )
                {
                  if ( a10 == 52428 )
                  {
                    fjBitmap = v24->fjBitmap;
                    if ( v50 )
                      v24->fjBitmap = fjBitmap | 0x40;
                    if ( (*(_DWORD *)(*((_QWORD *)v34 + 318) + 112LL) & 0x400) != 0 )
                      v45 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v34 + 354);
                    else
                      v45 = EngCopyBits;
                    v49 &= OffCopyBitsInternal(v45, (struct _POINTL *)(v18 + 72), v24, v55, v54, a3, v35, &v76, &v53);
                    v24->fjBitmap = fjBitmap;
                  }
                  else
                  {
                    MULTIBRUSH::LoadElement(
                      (MULTIBRUSH *)v75,
                      (struct _DISPSURF *)v18,
                      (struct SURFACE *)&v24[-1].pvScan0);
                    if ( (*(_DWORD *)(*((_QWORD *)v34 + 318) + 112LL) & 1) != 0 )
                      v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v34 + 353);
                    else
                      v46 = EngBitBlt;
                    v49 &= OffBitBlt(
                             (_DWORD)v46,
                             (int)v18 + 72,
                             (_DWORD)v24,
                             (_DWORD)v55,
                             (__int64)v54,
                             (__int64)v72,
                             (__int64)a3,
                             (__int64)v35,
                             (__int64)&v76,
                             (__int64)&v53,
                             (__int64)v71,
                             (__int64)v70,
                             (__int64)v69,
                             a10);
                    MULTIBRUSH::StoreElement((MULTIBRUSH *)v75, *(_DWORD *)(v18 + 16));
                  }
                }
                else
                {
                  a3->rclBounds = rclBounds;
                }
              }
              else
              {
                v49 = 0;
              }
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v58);
            }
            v47 = hsurf;
            if ( hsurf )
            {
              EngUnlockSurface(pso);
              EngDeleteSurface(v47);
            }
            v19 = v51;
            v15 = v49;
          }
          v13 = v52;
        }
      }
      v16 = (_QWORD *)*v16;
    }
    while ( v16 );
    v16 = (_QWORD *)*v64;
    v64 = v16;
  }
  while ( v16 );
  if ( a3 )
    a3->rclBounds = rclBounds;
  MULTISORTBLTORDER::~MULTISORTBLTORDER((MULTISORTBLTORDER *)v73);
  return v15;
}
