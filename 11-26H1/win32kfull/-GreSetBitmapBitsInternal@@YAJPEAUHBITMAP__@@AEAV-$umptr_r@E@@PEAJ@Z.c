/*
 * XREFs of ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1400773DC
 * Callers:
 *     NtGdiSetBitmapBits @ 0x140078AE0 (NtGdiSetBitmapBits.c)
 *     GreSetBitmapBits @ 0x140207060 (GreSetBitmapBits.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007854C (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140078660 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetBitmapBitsInternal(Gre::Base *a1, __int64 a2, LONG *a3)
{
  ULONG v6; // edi
  ULONG cjBits; // r14d
  __int64 v8; // r13
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  LONG v14; // r15d
  void *v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  struct _SURFOBJ *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  struct _SURFOBJ *v21; // rsi
  __int64 v22; // rcx
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  int v26; // eax
  POINTL pptlSrc; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  char v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  _OWORD v31[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  char v34[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v36[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  _SURFOBJ v40; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v6 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
  if ( !v6 )
    return 0LL;
  cjBits = 0;
  v8 = *(_QWORD *)Gre::Base::Globals(a1);
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal, v8 + 624);
  memset(v31, 0, sizeof(v31));
  PushThreadGuardedObject(
    v31,
    v31,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v10 = Gre::Base::Globals(v9);
  LOBYTE(v11) = 5;
  v12 = HmgShareLock(v10, a1, v11, 0LL);
  v32 = v12;
  v13 = v12;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  if ( v12 && (*(_DWORD *)(v12 + 112) & 0x4000000) != 0 )
  {
    v14 = *a3;
    *(&v40.cjBits + 1) = 0;
    v40.iBitmapFormat = 0;
    *(_OWORD *)&v40.dhsurf = 0LL;
    v40.dhpdev = *(DHPDEV *)(v12 + 40);
    v40.hdev = *(HDEV *)(v12 + 48);
    v40.sizlBitmap = *(SIZEL *)(v12 + 56);
    v15 = (void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
    v40.cjBits = v6;
    v40.pvBits = v15;
    v40.pvScan0 = 0LL;
    v40.lDelta = v14;
    v40.iUniq = 0;
    *(_DWORD *)&v40.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = *(_DWORD *)(v13 + 56);
    prclDest.bottom = *(_DWORD *)(v13 + 60);
    v33 = *(_QWORD *)(v13 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v34, (struct PDEVOBJ *)&v33);
    v16 = 0LL;
    if ( v13 != -24 )
    {
      v17 = *(_DWORD *)(v13 + 112);
      if ( ((v17 & 0x4000) != 0 || v17 < 0) && (v17 & 0x200) == 0 )
      {
        v16 = v13;
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v13 + 48));
      }
    }
    v35[0] = 0LL;
    v18 = (struct _SURFOBJ *)(v32 + 24);
    if ( !v32 )
      v18 = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v35, v18) )
      goto LABEL_13;
    v19 = v32;
    if ( *(_WORD *)(v32 + 100) == 3 )
    {
      v36[3] = 0;
      v39 = 0;
      v36[0] = *(_DWORD *)(v32 + 96);
      v36[1] = *(_DWORD *)(v32 + 56);
      v36[2] = *(_DWORD *)(v32 + 60);
      v37 = 0LL;
      v38 = *(_DWORD *)(v32 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)v36, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
        goto LABEL_13;
      v13 = v28;
      if ( !v14 )
      {
        v19 = v32;
LABEL_12:
        v20 = *(_QWORD *)(v19 + 48);
        ++*(_DWORD *)(v19 + 92);
        v21 = (struct _SURFOBJ *)((v13 + 24) & -(__int64)(v13 != 0));
        bDoGetSetBitmapBits(v21, &v40, 0);
        cjBits = v40.cjBits;
        v22 = v32;
        *a3 = v14 + v40.cjBits;
        if ( *(_WORD *)(v22 + 100) == 3 )
        {
          if ( (*(_DWORD *)(v22 + 112) & 0x400) != 0 )
            v26 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v20 + 2832))(
                    (v22 + 24) & -(__int64)(v22 != 0),
                    v21,
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          else
            v26 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                    (v22 + 24) & -(__int64)(v22 != 0),
                    v21,
                    0LL,
                    0LL,
                    &prclDest,
                    &pptlSrc);
          cjBits &= -(v26 != 0);
        }
        goto LABEL_13;
      }
      EngCopyBits(
        (SURFOBJ *)((v28 + 24) & -(__int64)(v28 != 0)),
        (SURFOBJ *)((v32 + 24) & -(__int64)(v32 != 0)),
        0LL,
        0LL,
        &prclDest,
        &pptlSrc);
      v19 = v32;
    }
    if ( v14 >= 0 )
      goto LABEL_12;
LABEL_13:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
    if ( v16 )
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v16 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v34);
    goto LABEL_16;
  }
  EngSetLastError(6u);
LABEL_16:
  SURFMEM::~SURFMEM((SURFMEM *)&v28);
  if ( v32 )
  {
    v24 = Gre::Base::Globals(v23);
    DEC_SHARE_REF_CNT(v24, v32);
  }
  PopThreadGuardedObject(v31);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8 + 624);
  return cjBits;
}
