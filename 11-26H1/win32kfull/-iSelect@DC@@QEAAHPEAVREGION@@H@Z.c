/*
 * XREFs of ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC
 * Callers:
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x14006D408 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x1400AEFA0 (NtGdiExtSelectClipRgn.c)
 *     NtGdiSelectClipPath @ 0x140228790 (NtGdiSelectClipPath.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // r14d
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  __int64 v10; // rbx
  RGNOBJ *v12; // rcx
  LONG v13; // r9d
  int v14; // eax
  bool v15; // zf
  unsigned int sizeScan; // eax
  __int64 v17; // rbx
  unsigned int v18; // eax
  int v19; // eax
  char *v20; // rcx
  __int64 v21; // rax
  LONG left; // r9d
  const struct _POINTL *v23; // rbx
  __int64 v24; // rdx
  LONG top; // r10d
  char *v26; // r8
  __int64 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+28h] [rbp-38h] BYREF
  struct REGION *v29; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v31; // [rsp+40h] [rbp-20h] BYREF

  v6 = Gre::Base::Globals(this);
  v7 = *((_QWORD *)this + 20);
  v8 = 0;
  v9 = v6;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v8 = 2;
      if ( !v7 )
        return v8;
      v29 = (struct REGION *)*((_QWORD *)this + 20);
      --*(_DWORD *)(v7 + 76);
      if ( !*((_DWORD *)v29 + 19) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
      *((_QWORD *)this + 20) = 0LL;
      goto LABEL_7;
    }
  }
  else if ( a3 != 1 || !a2 || v7 )
  {
    v29 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
    if ( !v28 )
      return v8;
    if ( v7 )
    {
      v27 = v7;
      v8 = RGNOBJ::iCombine((RGNOBJ *)&v28, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v29, a3);
      if ( v8 )
      {
        ++*(_DWORD *)(v28 + 76);
        *((_QWORD *)this + 20) = v28;
        DC::vReleaseRao(this, v9);
        if ( --*(_DWORD *)(v27 + 76) )
          return v8;
        v12 = (RGNOBJ *)&v27;
LABEL_26:
        RGNOBJ::vDeleteRGNOBJ(v12);
        return v8;
      }
LABEL_25:
      v12 = (RGNOBJ *)&v28;
      goto LABEL_26;
    }
    v27 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v27, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
    if ( v27 )
    {
      v19 = DC::bDpiScaledSurface(this);
      v20 = (char *)this + 532;
      if ( !v19 )
        v20 = (char *)this + 512;
      v21 = *(_QWORD *)v20;
      left = 0;
      v23 = (const struct _POINTL *)*((_QWORD *)this + 6);
      v24 = HIDWORD(*(_QWORD *)v20);
      top = 0;
      *(_QWORD *)&v31.left = 0LL;
      v31.right = v21;
      v31.bottom = v24;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v30);
        if ( (v23[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v31, v23 + 322, 0);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v30);
        LODWORD(v24) = v31.bottom;
        LODWORD(v21) = v31.right;
        top = v31.top;
        left = v31.left;
      }
      v26 = (char *)this + 1024;
      if ( (*((_DWORD *)this + 10) & 1) == 0 )
        v26 = (char *)this + 1016;
      v13 = left - *(_DWORD *)v26;
      v31.right = v21 - *(_DWORD *)v26;
      v14 = *((_DWORD *)v26 + 1);
      v31.left = v13;
      v31.bottom = v24 - v14;
      v31.top = top - v14;
      RGNOBJ::vSet((RGNOBJ *)&v27, &v31);
      v8 = RGNOBJ::iCombine((RGNOBJ *)&v28, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v29, a3);
      if ( v8 )
      {
        ++*(_DWORD *)(v28 + 76);
        *((_QWORD *)this + 20) = v28;
        DC::vReleaseRao(this, v9);
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
    v15 = v8 == 0;
LABEL_24:
    if ( !v15 )
      return v8;
    goto LABEL_25;
  }
  v29 = a2;
  v28 = v7;
  if ( !v7 || *(_DWORD *)(v7 + 76) != 1 )
  {
    sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)a2 + 24));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27, sizeScan);
    if ( !v27 )
      return v8;
    RGNOBJ::vCopy((RGNOBJ *)&v27, (struct RGNOBJ *)&v29);
    ++*(_DWORD *)(v27 + 76);
    v17 = v27;
    v18 = RGNOBJ::iComplexity((RGNOBJ *)&v27);
    *((_QWORD *)this + 20) = v17;
    v8 = v18;
    DC::vReleaseRao(this, v9);
    if ( !v7 )
      return v8;
    v15 = --*(_DWORD *)(v28 + 76) == 0;
    goto LABEL_24;
  }
  if ( RGNOBJ::bCopy((RGNOBJ *)&v28, (struct RGNOBJ *)&v29) )
  {
    v10 = v28;
    v8 = RGNOBJ::iComplexity((RGNOBJ *)&v28);
    *((_QWORD *)this + 20) = v10;
LABEL_7:
    DC::vReleaseRao(this, v9);
  }
  return v8;
}
