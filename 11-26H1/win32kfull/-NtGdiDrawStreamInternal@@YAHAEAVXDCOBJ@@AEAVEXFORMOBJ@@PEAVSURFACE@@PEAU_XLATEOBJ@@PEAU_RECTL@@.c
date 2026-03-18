/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140077868
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14006B7F4 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14006B880 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400781D0 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1400D3558 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        DC **this,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v10; // ebx
  DC *v12; // rcx
  struct SURFACE *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  DC *v16; // rdi
  int right; // eax
  int left; // ecx
  Gre::Base *top; // rcx
  DC *v20; // r10
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  char *i; // rdi
  __int64 v27; // rdx
  int v28; // edx
  __int32 v29; // r9d
  __int32 v30; // r11d
  __int32 v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rdi
  LONG v35; // r12d
  LONG v36; // edi
  LONG v37; // r14d
  LONG v38; // r10d
  __int64 v39; // r13
  struct REGION *v40; // rax
  int v41; // r11d
  __m128i v42; // xmm1
  DC *v43; // rcx
  int v44; // r10d
  __int64 v45; // rax
  LONG v46; // edx
  int v47; // r8d
  int v48; // r9d
  LONG v49; // r10d
  __int64 (__fastcall *v50)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, int, __int64, __int64); // rdi
  __int64 v51; // rdx
  char v52; // al
  struct SURFACE *v53; // rsi
  struct _SURFOBJ *v54; // rdx
  char *v55; // rdx
  DC *v56; // rcx
  int v57; // eax
  __int64 v58; // [rsp+50h] [rbp-91h] BYREF
  __int64 v59; // [rsp+58h] [rbp-89h] BYREF
  __int64 v60; // [rsp+60h] [rbp-81h] BYREF
  int v61; // [rsp+68h] [rbp-79h]
  __int64 v62; // [rsp+70h] [rbp-71h] BYREF
  HSEMAPHORE v63; // [rsp+78h] [rbp-69h]
  struct SURFACE *v64; // [rsp+80h] [rbp-61h]
  struct _DRAWSTREAMINFO *v65; // [rsp+88h] [rbp-59h]
  char *v66; // [rsp+90h] [rbp-51h]
  struct _XLATEOBJ *v67; // [rsp+98h] [rbp-49h]
  struct _RECTL v68; // [rsp+A0h] [rbp-41h] BYREF
  __m128i v69; // [rsp+B0h] [rbp-31h] BYREF
  __m128i v70; // [rsp+C0h] [rbp-21h] BYREF

  v10 = 0;
  v65 = a9;
  v69.m128i_i64[0] = *(_QWORD *)&a5->left;
  v69.m128i_i32[2] = a5->right;
  v12 = *this;
  v69.m128i_i32[3] = a5->bottom;
  v67 = a4;
  v60 = 0LL;
  v64 = a3;
  v61 = a7;
  v68 = *a6;
  v13 = (struct SURFACE *)*((_QWORD *)v12 + 62);
  v66 = a8;
  if ( !(unsigned int)DestSurfaceAccessCheck(v13) )
  {
    EngSetLastError(5u);
    return v10;
  }
  v14 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 1) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 32);
    if ( (v15 & 2) != 0 )
    {
      if ( (v15 & 0x43) != 0x43 )
        bCvtPts1(v14, &v60);
    }
    else
    {
      for ( i = a8 + 36; i - 36 < &a8[a7]; i += 60 )
      {
        if ( *((_DWORD *)i - 9) != 9 )
          return v10;
        DC::bXform(*this, a2, (struct ERECTL *)(i - 32));
        if ( (unsigned int)DC::bDpiScaledSurface(*this) )
          *(_DWORD *)i &= ~0x20u;
      }
    }
    v16 = *this;
    if ( ((*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 || (unsigned int)bCvtPts1(*(_QWORD *)a2, &v68))
      && (*(_DWORD *)(*((_QWORD *)v16 + 122) + 108LL) & 1) != 0 )
    {
      left = v68.left + 1;
      right = v68.right + 1;
      ++v68.left;
      ++v68.right;
    }
    else
    {
      right = v68.right;
      left = v68.left;
    }
    if ( left > right )
    {
      v68.left = right;
      v68.right = left;
    }
    top = (Gre::Base *)(unsigned int)v68.top;
    if ( v68.top > v68.bottom )
    {
      v68.top = v68.bottom;
      v68.bottom = (int)top;
    }
    if ( v69.m128i_i32[0] != v69.m128i_i32[2] && v69.m128i_i32[1] != v69.m128i_i32[3] )
    {
      v63 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(top) + 624LL);
      GreAcquireSemaphoreSharedInternal(v63);
      GrepAcquireLockValidate<1>();
      v20 = *this;
      v21 = *((_QWORD *)*this + 62);
      v22 = *((_DWORD *)*this + 10) & 1;
      LODWORD(v60) = *((_DWORD *)*this + 2 * v22 + 254) + v60;
      HIDWORD(v60) += *((_DWORD *)v20 + 2 * v22 + 255);
      v23 = *((_DWORD *)v20 + 10) & 1;
      v24 = *((int *)v20 + 2 * v23 + 254);
      if ( (unsigned __int64)(v24 + v69.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v24 + v69.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v27 = *((int *)v20 + 2 * v23 + 255);
        if ( (unsigned __int64)(v27 + v69.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v27 + v69.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v28 = v24 + v69.m128i_i32[0];
          v69.m128i_i32[0] += v24;
          v29 = *((_DWORD *)v20 + 2 * v23 + 254) + v69.m128i_i32[2];
          v30 = *((_DWORD *)v20 + 2 * v23 + 255) + v69.m128i_i32[1];
          *(__int64 *)((char *)v69.m128i_i64 + 4) = __PAIR64__(v29, v30);
          v31 = *((_DWORD *)v20 + 2 * v23 + 255) + v69.m128i_i32[3];
          v69.m128i_i32[3] = v31;
          v32 = *((_DWORD *)v20 + 10) & 1;
          v33 = *((int *)v20 + 2 * v32 + 254);
          if ( (unsigned __int64)(v33 + v68.left + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v33 + v68.right + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v34 = *((int *)v20 + 2 * v32 + 255);
            if ( (unsigned __int64)(v34 + v68.top + 0x80000000LL) <= 0xFFFFFFFF
              && (unsigned __int64)(v34 + v68.bottom + 0x80000000LL) <= 0xFFFFFFFF )
            {
              v35 = v68.left + v33;
              v68.left = v35;
              v36 = v68.right + *((_DWORD *)v20 + 2 * v32 + 254);
              v68.right = v36;
              v37 = *((_DWORD *)v20 + 2 * v32 + 255) + v68.top;
              v68.top = v37;
              v38 = v68.bottom + *((_DWORD *)v20 + 2 * v32 + 255);
              v39 = 0LL;
              v68.bottom = v38;
              if ( v31 >= v38
                && v28 <= v35
                && v30 <= v37
                && v29 >= v36
                && (v56 = *this, v57 = *((_DWORD *)*this + 250), v57 <= v35)
                && *((_DWORD *)v56 + 252) >= v36
                && *((_DWORD *)v56 + 251) <= v37
                && *((_DWORD *)v56 + 253) >= v38 )
              {
                if ( v57 > v28 )
                  v28 = *((_DWORD *)*this + 250);
                v69.m128i_i32[0] = v28;
                if ( *((_DWORD *)v56 + 251) > v30 )
                  v30 = *((_DWORD *)v56 + 251);
                v69.m128i_i32[1] = v30;
                if ( *((_DWORD *)v56 + 252) < v29 )
                  v29 = *((_DWORD *)v56 + 252);
                v69.m128i_i32[2] = v29;
                if ( *((_DWORD *)v56 + 253) < v31 )
                  v31 = *((_DWORD *)v56 + 253);
                v69.m128i_i32[3] = v31;
                if ( v29 < v28 )
                {
                  v69.m128i_i32[0] = v29;
                  goto LABEL_90;
                }
                if ( v31 < v30 )
                  v69.m128i_i32[1] = v31;
                v42 = v69;
              }
              else
              {
                v39 = (__int64)*this + 1768;
                v40 = XDCOBJ::prgnEffRao(this);
                XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v40, (const struct ERECTL *)&v69, v41);
                v69 = *(__m128i *)(v39 + 4);
                v42 = v69;
                v29 = _mm_cvtsi128_si32(_mm_srli_si128(v69, 8));
                v28 = _mm_cvtsi128_si32(v69);
              }
              if ( v28 != v29 && v42.m128i_i32[1] != _mm_srli_si128(v42, 8).m128i_i32[1] )
              {
                v43 = *this;
                v44 = *((_DWORD *)*this + 9);
                if ( (v44 & 0xE0) != 0 )
                {
                  v70 = v42;
                  v45 = *((_DWORD *)v43 + 10) & 1;
                  v46 = v28 - *((_DWORD *)v43 + 2 * v45 + 254);
                  v70.m128i_i32[0] = v46;
                  v47 = v42.m128i_i32[2] - *((_DWORD *)v43 + 2 * v45 + 254);
                  v70.m128i_i32[2] = v47;
                  v48 = v42.m128i_i32[1] - *((_DWORD *)v43 + 2 * v45 + 255);
                  v70.m128i_i32[1] = v48;
                  v70.m128i_i32[3] = v42.m128i_i32[3] - *((_DWORD *)v43 + 2 * v45 + 255);
                  if ( (v44 & 0x40) != 0 )
                  {
                    v49 = *((_DWORD *)v43 + 270);
                    if ( v49 == *((_DWORD *)v43 + 272) || *((_DWORD *)v43 + 271) == *((_DWORD *)v43 + 273) )
                    {
                      *(__m128i *)((char *)v43 + 1080) = v70;
                    }
                    else
                    {
                      if ( v46 < v49 )
                      {
                        *((_DWORD *)v43 + 270) = v46;
                        v47 = v70.m128i_i32[2];
                        v48 = v70.m128i_i32[1];
                      }
                      if ( v48 < *((_DWORD *)v43 + 271) )
                      {
                        *((_DWORD *)v43 + 271) = v48;
                        v47 = v70.m128i_i32[2];
                      }
                      if ( v47 > *((_DWORD *)v43 + 272) )
                        *((_DWORD *)v43 + 272) = v47;
                      if ( v70.m128i_i32[3] > *((_DWORD *)v43 + 273) )
                        *((_DWORD *)v43 + 273) = v70.m128i_i32[3];
                    }
                    v62 = *((_QWORD *)*this + 148);
                    if ( v62 )
                    {
                      v59 = 0LL;
                      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v59, 0x70u);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v59);
                      v58 = 0LL;
                      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v58, 0x70u);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v58);
                      if ( v59 )
                      {
                        if ( v58 )
                        {
                          RGNOBJ::vSet((RGNOBJ *)&v58, (const struct _RECTL *const)&v70);
                          if ( RGNOBJ::bMerge((RGNOBJ *)&v59, (struct RGNOBJ *)&v62, (struct RGNOBJ *)&v58, 0xEu) )
                          {
                            RGNOBJ::vSwap((RGNOBJ *)&v62, (struct RGNOBJ *)&v59);
                            *((_QWORD *)*this + 148) = v62;
                          }
                        }
                      }
                      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v58);
                      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
                      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v59);
                      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v59);
                    }
                  }
                }
                ++*(_DWORD *)(v21 + 92);
                v50 = EngDrawStream;
                v51 = *(_QWORD *)(v21 + 48);
                if ( *(_QWORD *)(v51 + 3400) )
                  v50 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, int, __int64, __int64))(v51 + 3400);
                if ( (*((_DWORD *)*this + 9) & 0x200) == 0 || !v51 || (v52 = 1, (*(_DWORD *)(v51 + 40) & 0x20000) == 0) )
                  v52 = 0;
                if ( *(int *)(v21 + 112) >= 0 && (!v52 || *(_WORD *)(v21 + 100) != 3) )
                  v50 = EngDrawStream;
                v53 = v64;
                v54 = (struct _SURFOBJ *)((char *)v64 + 24);
                if ( !v64 )
                  v54 = 0LL;
                v70.m128i_i64[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)&v70, v54);
                if ( v70.m128i_i64[0] )
                {
                  v55 = (char *)v53 + 24;
                  if ( !v53 )
                    v55 = 0LL;
                  if ( (unsigned int)v50(v21 + 24, v55, v39, v67, &v69, (__int64)&v60, v61, (__int64)v66, (__int64)v65) )
                    v10 = 1;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)&v70);
                goto LABEL_66;
              }
LABEL_90:
              v10 = 1;
LABEL_66:
              EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v63);
              GrepReleaseLockValidate<1>();
              GreReleaseSemaphoreSharedInternal(v63);
              return v10;
            }
          }
        }
      }
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v63);
    }
  }
  return v10;
}
