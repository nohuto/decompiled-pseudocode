/*
 * XREFs of ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1400A5648
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1400A50E0 (NtGdiGetBitmapBits.c)
 *     GreGetBitmapBits @ 0x140326818 (GreGetBitmapBits.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140078660 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBitsInternal(Gre::Base *a1, __int64 a2, unsigned int *a3)
{
  ULONG cjBits; // edi
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  LONG v13; // edx
  LONG v14; // ecx
  HDEV v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  struct _SURFOBJ *v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // r9
  ULONG v21; // edx
  void *v22; // rcx
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  POINTL pptlSrc; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  char v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  _OWORD v30[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  char v33[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v36[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D4h] [rbp-2Ch]
  struct _SURFOBJ v40; // [rsp+E0h] [rbp-20h] BYREF
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF

  cjBits = 0;
  v7 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v34, v7);
  memset(v30, 0, sizeof(v30));
  PushThreadGuardedObject(
    v30,
    v30,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v9 = Gre::Base::Globals(v8);
  LOBYTE(v10) = 5;
  v11 = HmgShareLock(v9, a1, v10, 0LL);
  v31 = v11;
  v12 = v11;
  if ( v11 && (*(_DWORD *)(v11 + 112) & 0x4000000) != 0 )
  {
    v27 = 0LL;
    v28 = 0;
    v29 = 0;
    v13 = *(_DWORD *)(v11 + 56);
    v14 = *(_DWORD *)(v11 + 60);
    cjBits = v14
           * (((unsigned int)(*(_DWORD *)&gaulConvert[2 * *(unsigned int *)(v11 + 96)] * v13 + 15) >> 3) & 0x1FFFFFFE);
    if ( !*(_QWORD *)a2 )
    {
LABEL_21:
      SURFMEM::~SURFMEM((SURFMEM *)&v27);
      goto LABEL_22;
    }
    *(_OWORD *)&v40.dhsurf = 0LL;
    v40.dhpdev = *(DHPDEV *)(v11 + 40);
    v15 = *(HDEV *)(v11 + 48);
    v40.sizlBitmap.cx = v13;
    v40.sizlBitmap.cy = v14;
    prclDest.right = v13;
    prclDest.bottom = v14;
    v40.hdev = v15;
    memset(&v40.cjBits, 0, 40);
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v32 = *(_QWORD *)(v12 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v32);
    v16 = 0LL;
    if ( v12 != -24 )
    {
      v17 = *(_DWORD *)(v12 + 112);
      if ( ((v17 & 0x4000) != 0 || v17 < 0) && (v17 & 0x200) == 0 )
      {
        v16 = v12;
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v12 + 48));
      }
    }
    v35[0] = 0LL;
    v18 = (struct _SURFOBJ *)(v31 + 24);
    if ( !v31 )
      v18 = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v35, v18) )
    {
      if ( *(_WORD *)(v31 + 100) == 3 )
      {
        v36[3] = 0;
        v39 = 0;
        v36[0] = *(_DWORD *)(v31 + 96);
        v36[1] = *(_DWORD *)(v31 + 56);
        v36[2] = *(_DWORD *)(v31 + 60);
        v37 = 0LL;
        v38 = *(_DWORD *)(v31 + 112) & 0x40000;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v36, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
          goto LABEL_28;
        v12 = v27;
        EngCopyBits(
          (SURFOBJ *)((v27 + 24) & -(__int64)(v27 != 0)),
          (SURFOBJ *)((v31 + 24) & -(__int64)(v31 != 0)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v19 = *a3;
        if ( (*a3 & 0x80000000) == 0 && v19 < cjBits )
        {
          v20 = *(_QWORD *)(a2 + 16);
          v21 = cjBits - v19;
          if ( *(_DWORD *)(a2 + 8) - (_DWORD)v20 + v19 <= cjBits )
            v21 = *(_DWORD *)(a2 + 8) - v20;
          if ( v21 )
          {
            v22 = (void *)(v20 + *(_QWORD *)a2);
            v40.cjBits = v21;
            v40.pvBits = v22;
            v40.lDelta = v19;
            bDoGetSetBitmapBits(&v40, (struct _SURFOBJ *)((v12 + 24) & -(__int64)(v12 != 0)), 1);
            cjBits = v40.cjBits;
            *a3 = v19 + v40.cjBits;
            goto LABEL_18;
          }
        }
LABEL_28:
        cjBits = 0;
      }
    }
LABEL_18:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
    if ( v16 )
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v16 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
    goto LABEL_21;
  }
  EngSetLastError(6u);
LABEL_22:
  if ( v31 )
  {
    v24 = Gre::Base::Globals(v23);
    DEC_SHARE_REF_CNT(v24, v31);
  }
  PopThreadGuardedObject(v30);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v34);
  return cjBits;
}
