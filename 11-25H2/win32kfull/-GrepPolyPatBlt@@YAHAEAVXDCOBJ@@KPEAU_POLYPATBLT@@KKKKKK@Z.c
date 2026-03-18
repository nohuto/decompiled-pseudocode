/*
 * XREFs of ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8
 * Callers:
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPolyPatBlt @ 0x140175E20 (NtGdiPolyPatBlt.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x140080D20 (-bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x14008114C (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyPatBlt(
        struct XDCOBJ *this,
        int a2,
        struct _POLYPATBLT *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // r14d
  int *v10; // r13
  unsigned int locked; // edi
  bool v13; // zf
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r9
  int v19; // esi
  int v20; // r14d
  int v21; // r12d
  int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // rsi
  bool v25; // al
  int v26; // edx
  int v27; // r8d
  struct EXFORMOBJ *v28; // rdx
  int v29; // eax
  _DWORD *v30; // rax
  int v31; // ecx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  int v35; // [rsp+74h] [rbp-1D4h]
  struct _POLYPATBLT *v36; // [rsp+78h] [rbp-1D0h]
  __int64 v37; // [rsp+80h] [rbp-1C8h]
  __int64 v38; // [rsp+98h] [rbp-1B0h] BYREF
  struct SURFACE *v39; // [rsp+A0h] [rbp-1A8h]
  __int64 v40; // [rsp+A8h] [rbp-1A0h]
  __int64 v41; // [rsp+B0h] [rbp-198h]
  struct XDCOBJ *v42; // [rsp+C0h] [rbp-188h]
  __int64 v43; // [rsp+D0h] [rbp-178h]
  __int64 v44; // [rsp+D8h] [rbp-170h]
  _BYTE v45[144]; // [rsp+E0h] [rbp-168h] BYREF
  _BYTE v46[128]; // [rsp+170h] [rbp-D8h] BYREF
  int v47; // [rsp+1F0h] [rbp-58h] BYREF
  int v48; // [rsp+1F4h] [rbp-54h]
  int v49; // [rsp+1F8h] [rbp-50h]
  struct EXFORMOBJ *v50; // [rsp+1FCh] [rbp-4Ch]

  v9 = a4;
  v10 = (int *)a3;
  v36 = a3;
  v42 = this;
  locked = 1;
  v13 = a4 == 0;
  if ( a4 )
  {
    if ( a3 && !a5 )
    {
      v14 = (BYTE2(a2) << 8) | BYTE2(a2);
      if ( ((BYTE2(a2) ^ (unsigned __int8)(4 * BYTE2(a2))) & 0xCC) != 0 )
        return 0;
      v15 = *(_QWORD *)this;
      if ( !v15 )
      {
        return 0;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 976);
        v17 = *(_QWORD *)(v16 + 160);
        v43 = v17;
        v41 = v17;
        if ( (*(_DWORD *)(v16 + 152) & 0x1000) != 0 )
          GreDCSelectBrush(v15, v17);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v45);
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v45, this, 0) )
        {
          DC::QuickInitXform(*(_QWORD *)this, &v38, 516LL);
          v39 = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
          while ( 1 )
          {
            v35 = v9 - 1;
            if ( !v9 )
              break;
            v37 = 0LL;
            v19 = *v10;
            v20 = v10[1];
            v21 = v10[2];
            v22 = v10[3];
            v23 = *((_QWORD *)v36 + 2);
            v40 = v23;
            v44 = v23;
            if ( v23 )
              v37 = GreDCSelectBrush(*(_QWORD *)this, v23);
            if ( (*(_BYTE *)(v38 + 32) & 1) != 0 )
            {
              v47 = v19;
              v48 = v20;
              v49 = v21 + v19;
              LODWORD(v50) = v20 + v22;
              v24 = *(_QWORD *)this;
              v25 = (*(_BYTE *)(v38 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v38, &v47, 2LL, v18);
              if ( v25 && (*(_BYTE *)(*(_QWORD *)(v24 + 976) + 108LL) & 1) != 0 )
              {
                ++v47;
                ++v49;
              }
              v26 = v47;
              if ( v47 > v49 )
              {
                v47 = v49;
                v49 = v26;
              }
              v27 = v48;
              v28 = (struct EXFORMOBJ *)(unsigned int)v50;
              if ( v48 > (int)v50 )
              {
                v48 = (int)v50;
                LODWORD(v50) = v27;
              }
              if ( v47 == v49 || (v29 = 0, v48 == (_DWORD)v50) )
                v29 = 1;
              if ( !v29 )
              {
                v30 = *(_DWORD **)this;
                v31 = *(_DWORD *)(*(_QWORD *)this + 36LL);
                if ( (v31 & 0xE0) != 0 )
                {
                  if ( (v31 & 0x20) != 0 )
                  {
                    if ( v47 < v30[266] )
                      v30[266] = v47;
                    if ( v48 < v30[267] )
                      v30[267] = v48;
                    if ( v49 > v30[268] )
                      v30[268] = v49;
                    v28 = (struct EXFORMOBJ *)(unsigned int)v50;
                    if ( (int)v50 > v30[269] )
                      v30[269] = (_DWORD)v50;
                  }
                  v32 = *(_DWORD **)this;
                  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x80u) != 0 )
                  {
                    if ( v47 < v32[274] )
                      v32[274] = v47;
                    if ( v48 < v32[275] )
                      v32[275] = v48;
                    if ( v49 > v32[276] )
                      v32[276] = v49;
                    v28 = (struct EXFORMOBJ *)(unsigned int)v50;
                    if ( (int)v50 > v32[277] )
                      v32[277] = (_DWORD)v50;
                  }
                }
                if ( v39 )
                  locked = GrePatBltLockedDC(this, v28, (struct ERECTL *)&v47, v14, v39, a6, a7, a8, a9);
              }
            }
            else
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v46, 0LL);
              locked = GrepMaskBlt(this, v19, v20, v21, v22, (struct OPTAPIDCOBJ *)v46, 0, 0, 0LL, 0, 0, v14 << 16, 0);
              OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v46);
            }
            if ( v40 )
              GreDCSelectBrush(*(_QWORD *)this, v37);
            DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v45);
            v10 = (int *)((char *)v36 + 24);
            v36 = (struct _POLYPATBLT *)((char *)v36 + 24);
            v9 = v35;
          }
          v17 = v43;
        }
        else
        {
          locked = XDCOBJ::bFullScreen(this);
        }
        v33 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        if ( *(_QWORD *)(v33 + 160) != v17 )
        {
          *(_QWORD *)(v33 + 160) = v17;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) |= 0x1000u;
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v45);
      }
      return locked;
    }
    v13 = a4 == 0;
  }
  if ( !v13 )
    return 0;
  return locked;
}
