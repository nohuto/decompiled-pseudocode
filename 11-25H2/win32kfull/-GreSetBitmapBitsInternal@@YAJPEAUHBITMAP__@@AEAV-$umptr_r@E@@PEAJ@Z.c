/*
 * XREFs of ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140093084
 * Callers:
 *     NtGdiSetBitmapBits @ 0x140092CC0 (NtGdiSetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1401D69A0 (GreSetBitmapBits.c)
 * Callees:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140093588 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetBitmapBitsInternal(Gre::Base *a1, __int64 a2, LONG *a3)
{
  ULONG v6; // edi
  ULONG cjBits; // r14d
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  unsigned __int64 v9; // rsi
  LONG v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  struct _SURFOBJ *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r8
  int v20; // eax
  POINTL pptlSrc; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  _BYTE v33[32]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+E0h] [rbp-20h]
  _SURFOBJ v35; // [rsp+F0h] [rbp-10h] BYREF
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF

  v6 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    cjBits = 0;
    v8 = Gre::Base::Globals(a1);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v27, v8);
    SURFREF::SURFREF((SURFREF *)v33, (HSURF)a1);
    v9 = v34;
    v22 = 0LL;
    v23 = 0;
    v24 = 0;
    if ( !v34 || (*(_DWORD *)(v34 + 112) & 0x4000000) == 0 )
    {
      EngSetLastError(6u);
LABEL_17:
      SURFMEM::~SURFMEM((SURFMEM *)&v22);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v27);
      return cjBits;
    }
    v10 = *a3;
    *(&v35.cjBits + 1) = 0;
    v35.iBitmapFormat = 0;
    *(_OWORD *)&v35.dhsurf = 0LL;
    v35.dhpdev = *(DHPDEV *)(v34 + 40);
    v35.hdev = *(HDEV *)(v34 + 48);
    v35.sizlBitmap = *(SIZEL *)(v34 + 56);
    v35.pvBits = (PVOID)(*(_QWORD *)(a2 + 16) + *(_QWORD *)a2);
    v35.cjBits = v6;
    v35.pvScan0 = 0LL;
    v35.lDelta = v10;
    v35.iUniq = 0;
    *(_DWORD *)&v35.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = *(_DWORD *)(v34 + 56);
    prclDest.bottom = *(_DWORD *)(v34 + 60);
    v25 = *(_QWORD *)(v34 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct PDEVOBJ *)&v25);
    v11 = 0LL;
    v12 = (v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64);
    if ( v12 )
    {
      v13 = *(_DWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) + 0x58);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v11 = v12 - 24;
        GreLockDisplayDevice(*(_QWORD *)(((v9 + 24) & ((unsigned __int128)-(__int128)v9 >> 64)) - 24 + 0x30));
      }
    }
    v28[0] = 0LL;
    v14 = (struct _SURFOBJ *)(v34 + 24);
    if ( !v34 )
      v14 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v28, v14) )
    {
      v15 = v34;
      if ( *(_WORD *)(v34 + 100) == 3 )
      {
        v29[3] = 0;
        v32 = 0;
        v29[0] = *(_DWORD *)(v34 + 96);
        v29[1] = *(_DWORD *)(v34 + 56);
        v29[2] = *(_DWORD *)(v34 + 60);
        v30 = 0LL;
        v31 = *(_DWORD *)(v34 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v22, (struct _DEVBITMAPINFO *)v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_14;
        v9 = v22;
        if ( !v10 )
        {
          v15 = v34;
LABEL_13:
          v16 = *(_QWORD *)(v15 + 48);
          v17 = v9 + 24;
          ++*(_DWORD *)(v15 + 92);
          bDoGetSetBitmapBits((struct _SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)), &v35, 0);
          cjBits = v35.cjBits;
          v18 = v34;
          *a3 = v10 + v35.cjBits;
          if ( *(_WORD *)(v18 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v18 + 112) & 0x400) != 0 )
              v20 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))(v16 + 2832))(
                      (v18 + 24) & -(__int64)(v18 != 0),
                      v17 & -(__int64)(v9 != 0),
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v20 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      (v18 + 24) & -(__int64)(v18 != 0),
                      v17 & -(__int64)(v9 != 0),
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v20 != 0);
          }
          goto LABEL_14;
        }
        EngCopyBits(
          (SURFOBJ *)(-(__int64)(v22 != 0) & (v22 + 24)),
          (SURFOBJ *)((v34 + 24) & -(__int64)(v34 != 0)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
        v15 = v34;
      }
      if ( v10 >= 0 )
        goto LABEL_13;
    }
LABEL_14:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v28);
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26);
    goto LABEL_17;
  }
  return 0LL;
}
