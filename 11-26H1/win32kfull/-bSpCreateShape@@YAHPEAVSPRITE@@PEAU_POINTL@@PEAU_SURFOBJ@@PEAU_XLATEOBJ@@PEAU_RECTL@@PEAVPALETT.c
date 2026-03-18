/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x140169778
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x140314B20 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x140314D04 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1401AB494 (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140227634 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x140328F90 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  __int64 v10; // r13
  unsigned int v11; // edi
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  int v14; // r14d
  int v15; // r12d
  SURFOBJ *Surface; // rcx
  __int64 v17; // r14
  LONG left; // r8d
  int v19; // eax
  int v20; // edx
  LONG v21; // edi
  LONG top; // r10d
  LONG right; // r15d
  LONG bottom; // r11d
  int v25; // eax
  int v26; // ecx
  int v27; // r9d
  LONG v28; // edx
  LONG v29; // r8d
  int v30; // ecx
  __int64 v32; // rax
  struct _SURFOBJ *v33; // r12
  __int64 v34; // rdi
  HDEV v35; // rbx
  int (*v36)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r15
  int v37; // eax
  struct _SURFOBJ *v38; // rcx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+50h] [rbp-B0h]
  struct _RECTL v43; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v44; // [rsp+70h] [rbp-90h] BYREF
  struct _SURFOBJ *v45[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v46[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  struct _XLATEOBJ *v48; // [rsp+A0h] [rbp-60h]
  struct _RECTL v49; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v50[88]; // [rsp+C0h] [rbp-40h] BYREF
  struct _SURFOBJ *v51; // [rsp+118h] [rbp+18h]
  struct _POINTL *v52; // [rsp+120h] [rbp+20h]

  v10 = *((_QWORD *)a1 + 2);
  v11 = a7;
  v46[0] = a9;
  v48 = a4;
  v45[0] = a3;
  v44 = (struct _POINTL)a2;
  v42 = 0;
  SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(v10 + 120));
  v47 = *((_QWORD *)a1 + 18);
  if ( a6 )
  {
    v13 = Gre::Base::Globals(v12);
    INC_SHARE_REF_CNT(v13, a6);
  }
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v47);
  *((_QWORD *)a1 + 18) = a6;
  v14 = a5->right - a5->left;
  v15 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( Surface
    && (!Surface->iType && (Surface->fjBitmap & 0x20) == 0 || !a8)
    && Surface->iBitmapFormat == v11
    && Surface->sizlBitmap.cx >= v14
    && Surface->sizlBitmap.cy >= v15 )
  {
    goto LABEL_11;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( Surface->iBitmapFormat != v11 )
    {
      EngUnlockSurface(Surface);
      v32 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 16) = 0LL;
      *(_DWORD *)a1 &= ~0x40u;
      Surface = 0LL;
      *((_QWORD *)a1 + 30) = 0LL;
      if ( v32 )
        *(_DWORD *)(v32 + 16) &= ~0x40u;
    }
  }
  else
  {
    vSpDeleteSurface(Surface);
    Surface = 0LL;
  }
  if ( (*(_DWORD *)a1 & 0x40) != 0 || !*((_QWORD *)a1 + 30) || !a8 )
  {
    if ( Surface )
      goto LABEL_47;
LABEL_46:
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v14, v15, v41);
    goto LABEL_47;
  }
  Surface = EngLockSurface(*((HSURF *)a1 + 30));
  if ( !Surface )
    goto LABEL_46;
  *(_DWORD *)a1 |= 0x40u;
LABEL_47:
  *((_QWORD *)a1 + 16) = Surface;
LABEL_11:
  SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 120));
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v10 + 120));
  v17 = *((_QWORD *)a1 + 16);
  if ( !v17 )
    goto LABEL_32;
  left = a5->left;
  v42 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v19 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  *((_DWORD *)a1 + 35) = v19;
  if ( a6 )
    v20 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v20 = 0;
  *((_DWORD *)a1 + 39) = v20;
  v21 = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v43.left = a5->left;
  v43.top = top;
  v43.right = right;
  v43.bottom = bottom;
  if ( v46[0] )
  {
    v25 = *((_DWORD *)a1 + 35);
    v26 = left + *(_DWORD *)v46[0];
    v27 = left + *(_DWORD *)(v46[0] + 8LL);
    v28 = *(_DWORD *)(v46[0] + 4LL) - v25;
    v29 = *(_DWORD *)(v46[0] + 12LL) - v25;
    if ( v26 > v21 )
      v21 = v26;
    v43.left = v21;
    if ( v28 > top )
      top = v28;
    if ( v27 < right )
      right = v27;
    v43.right = right;
    if ( v29 < bottom )
      bottom = v29;
    v43.bottom = bottom;
    if ( right < v21 )
      goto LABEL_32;
    if ( bottom < top )
      top = bottom;
    v43.top = top;
  }
  if ( top == bottom || v21 == right )
  {
LABEL_32:
    SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v10 + 120));
    return v42;
  }
  v30 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (v30 & 0x200) == 0 || (v33 = v45[0], *(HSURF *)(v17 + 320) != v45[0]->hsurf) )
    {
      *(_DWORD *)a1 = v30 | 0x80;
      goto LABEL_32;
    }
  }
  else
  {
    v33 = v45[0];
  }
  v49 = v43;
  ERECTL::bOffsetAdd((ERECTL *)&v49, *(const struct _POINTL **)&v44, 0);
  MULTISURF::MULTISURF((MULTISURF *)v50, v33, &v49);
  v34 = 0LL;
  v45[0] = 0LL;
  v46[0] = 0LL;
  if ( !_bittest((const signed __int32 *)(v17 + 88), 0xAu) )
  {
    if ( _bittest((const signed __int32 *)&v33[1].hsurf, 0xAu) )
      v36 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v33->hdev + 354);
    else
      v36 = EngCopyBits;
    goto LABEL_58;
  }
  v35 = *(HDEV *)(v17 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v50, v35) )
  {
    v36 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)v35 + 354);
LABEL_58:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v45, v51) && SURFREFVIEW::bMap((SURFREFVIEW *)v46, (struct _SURFOBJ *)v17) )
    {
      v37 = *(_DWORD *)(v17 + 88);
      if ( ((v37 & 0x4000) != 0 || v37 < 0) && (v37 & 0x200) == 0 )
      {
        v34 = v17 - 24;
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v17 + 24));
      }
      v38 = v51;
      p_pvScan0 = 0LL;
      if ( v51 )
      {
        hsurf = (int)v51[1].hsurf;
        if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v51[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)v51->hdev);
          v38 = v51;
        }
      }
      v44 = 0LL;
      OffCopyBitsInternal(v36, (struct _POINTL *)a1 + 17, (struct _SURFOBJ *)v17, &v44, v38, 0LL, v48, &v43, v52);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v17 && *(HSURF *)(v17 + 320) == v33->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( p_pvScan0 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      if ( v34 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v34 + 48));
    }
    else
    {
      v42 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v46);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v45);
    MULTISURF::~MULTISURF((MULTISURF *)v50);
    goto LABEL_32;
  }
  SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(v10 + 120));
  SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(v10 + 120));
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 120));
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v46);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v45);
  MULTISURF::~MULTISURF((MULTISURF *)v50);
  return 0LL;
}
