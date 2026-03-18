/*
 * XREFs of ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400AD828
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400ADB54 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelectTightenRao(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  __int64 v8; // rbx
  unsigned int sizeScan; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  bool v12; // zf
  RGNOBJ *v13; // rcx
  int v14; // eax
  char *v15; // rcx
  __int64 v16; // rax
  LONG left; // r9d
  const struct _POINTL *v18; // rbx
  __int64 v19; // rdx
  LONG top; // r10d
  char *v21; // r8
  LONG v22; // r9d
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  struct REGION *v26; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v28; // [rsp+40h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 20);
  v4 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v4 = 2;
      if ( v3 )
      {
        v26 = (struct REGION *)*((_QWORD *)this + 20);
        --*(_DWORD *)(v3 + 76);
        if ( !*((_DWORD *)v26 + 19) )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
        *((_QWORD *)this + 20) = 0LL;
      }
      return v4;
    }
  }
  else if ( a3 != 1 || !a2 || v3 )
  {
    v26 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v25);
    if ( !v25 )
      return v4;
    if ( v3 )
    {
      v24 = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v26, a3);
      if ( v4 )
      {
        ++*(_DWORD *)(v25 + 76);
        *((_QWORD *)this + 20) = v25;
        if ( --*(_DWORD *)(v24 + 76) )
          return v4;
        v13 = (RGNOBJ *)&v24;
        goto LABEL_17;
      }
LABEL_16:
      v13 = (RGNOBJ *)&v25;
LABEL_17:
      RGNOBJ::vDeleteRGNOBJ(v13);
      return v4;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
    if ( v24 )
    {
      v14 = DC::bDpiScaledSurface(this);
      v15 = (char *)this + 532;
      if ( !v14 )
        v15 = (char *)this + 512;
      v16 = *(_QWORD *)v15;
      left = 0;
      v18 = (const struct _POINTL *)*((_QWORD *)this + 6);
      v19 = HIDWORD(*(_QWORD *)v15);
      top = 0;
      *(_QWORD *)&v28.left = 0LL;
      v28.right = v16;
      v28.bottom = v19;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v27);
        if ( (v18[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v28, v18 + 322, 0);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v27);
        LODWORD(v19) = v28.bottom;
        LODWORD(v16) = v28.right;
        top = v28.top;
        left = v28.left;
      }
      v21 = (char *)this + 1024;
      if ( (*((_DWORD *)this + 10) & 1) == 0 )
        v21 = (char *)this + 1016;
      v22 = left - *(_DWORD *)v21;
      v28.right = v16 - *(_DWORD *)v21;
      v23 = *((_DWORD *)v21 + 1);
      v28.left = v22;
      v28.bottom = v19 - v23;
      v28.top = top - v23;
      RGNOBJ::vSet((RGNOBJ *)&v24, &v28);
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v26, a3);
      if ( v4 )
      {
        ++*(_DWORD *)(v25 + 76);
        *((_QWORD *)this + 20) = v25;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
    v12 = v4 == 0;
LABEL_15:
    if ( !v12 )
      return v4;
    goto LABEL_16;
  }
  v26 = a2;
  v25 = v3;
  if ( !v3 || *(_DWORD *)(v3 + 76) != 1 )
  {
    sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)a2 + 24));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24, sizeScan);
    if ( !v24 )
      return v4;
    RGNOBJ::vCopy((RGNOBJ *)&v24, (struct RGNOBJ *)&v26);
    ++*(_DWORD *)(v24 + 76);
    v10 = v24;
    v11 = RGNOBJ::iComplexity((RGNOBJ *)&v24);
    *((_QWORD *)this + 20) = v10;
    v4 = v11;
    if ( !v3 )
      return v4;
    v12 = --*(_DWORD *)(v25 + 76) == 0;
    goto LABEL_15;
  }
  if ( RGNOBJ::bCopy((RGNOBJ *)&v25, (struct RGNOBJ *)&v26) )
  {
    v8 = v25;
    v4 = RGNOBJ::iComplexity((RGNOBJ *)&v25);
    *((_QWORD *)this + 20) = v8;
  }
  return v4;
}
