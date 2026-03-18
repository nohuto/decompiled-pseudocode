/*
 * XREFs of ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1400ADE60 (NtGdiPolyPatBlt.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1400AE6E4 (-bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  struct _POLYPATBLT *v10; // r13
  unsigned int locked; // edi
  bool v13; // zf
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  int v18; // r14d
  int v19; // r15d
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r14
  int v24; // edx
  int v25; // r8d
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rax
  int v28; // ecx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int v32; // [rsp+70h] [rbp-1C8h]
  int v33; // [rsp+74h] [rbp-1C4h]
  int v34; // [rsp+78h] [rbp-1C0h]
  __int64 v35; // [rsp+80h] [rbp-1B8h]
  __int64 v36; // [rsp+98h] [rbp-1A0h] BYREF
  struct SURFACE *v37; // [rsp+A0h] [rbp-198h]
  __int64 v38; // [rsp+A8h] [rbp-190h]
  __int64 v39; // [rsp+B0h] [rbp-188h]
  struct XDCOBJ *v40; // [rsp+B8h] [rbp-180h]
  __int64 v41; // [rsp+C0h] [rbp-178h]
  _BYTE v42[112]; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE v43[160]; // [rsp+140h] [rbp-F8h] BYREF
  int v44; // [rsp+1E0h] [rbp-58h] BYREF
  int v45; // [rsp+1E4h] [rbp-54h]
  int v46; // [rsp+1E8h] [rbp-50h]
  struct EXFORMOBJ *v47; // [rsp+1ECh] [rbp-4Ch]

  v9 = a4;
  v10 = a3;
  v40 = this;
  locked = 1;
  v13 = a4 == 0;
  if ( a4 )
  {
    if ( a3 && !a5 )
    {
      v14 = BYTE2(a2) | (BYTE2(a2) << 8);
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
        v39 = v17;
        if ( (*(_DWORD *)(v16 + 152) & 0x1000) != 0 )
          GreDCSelectBrush(v15, v17);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v43);
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v43, this, 0) )
        {
          DC::QuickInitXform(*(_QWORD *)this, &v36, 516LL);
          v37 = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
          while ( 1 )
          {
            v34 = v9 - 1;
            if ( !v9 )
              break;
            v35 = 0LL;
            v18 = *(_DWORD *)v10;
            v19 = *((_DWORD *)v10 + 1);
            v20 = *((_DWORD *)v10 + 2);
            v33 = v20;
            v21 = *((_DWORD *)v10 + 3);
            v32 = v21;
            v22 = *((_QWORD *)v10 + 2);
            v38 = v22;
            v41 = v22;
            if ( v22 )
            {
              v35 = GreDCSelectBrush(*(_QWORD *)this, v22);
              v20 = v33;
              v21 = v32;
            }
            if ( (*(_BYTE *)(v36 + 32) & 1) != 0 )
            {
              v44 = v18;
              v45 = v19;
              v46 = v18 + v20;
              LODWORD(v47) = v21 + v19;
              v23 = *(_QWORD *)this;
              if ( ((*(_BYTE *)(v36 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v36, (__int64)&v44, 2LL))
                && (*(_DWORD *)(*(_QWORD *)(v23 + 976) + 108LL) & 1) != 0 )
              {
                ++v44;
                ++v46;
              }
              v24 = v44;
              if ( v44 > v46 )
              {
                v44 = v46;
                v46 = v24;
              }
              v25 = v45;
              if ( v45 > (int)v47 )
              {
                v45 = (int)v47;
                LODWORD(v47) = v25;
              }
              v26 = (unsigned int)v44;
              if ( v44 != v46 && v45 != (_DWORD)v47 )
              {
                v27 = *(_DWORD **)this;
                v28 = *(_DWORD *)(*(_QWORD *)this + 36LL);
                if ( (v28 & 0xE0) != 0 )
                {
                  if ( (v28 & 0x20) != 0 )
                  {
                    if ( v44 < v27[266] )
                      v27[266] = v44;
                    if ( v45 < v27[267] )
                      v27[267] = v45;
                    if ( v46 > v27[268] )
                      v27[268] = v46;
                    v26 = (unsigned int)v47;
                    if ( (int)v47 > v27[269] )
                      v27[269] = (_DWORD)v47;
                  }
                  v29 = *(_DWORD **)this;
                  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x80u) != 0 )
                  {
                    if ( v44 < v29[274] )
                      v29[274] = v44;
                    if ( v45 < v29[275] )
                      v29[275] = v45;
                    if ( v46 > v29[276] )
                      v29[276] = v46;
                    v26 = (unsigned int)v47;
                    if ( (int)v47 > v29[277] )
                      v29[277] = (_DWORD)v47;
                  }
                }
                if ( v37 )
                  locked = GrePatBltLockedDC(
                             this,
                             (struct EXFORMOBJ *)v26,
                             (struct ERECTL *)&v44,
                             v14,
                             v37,
                             a6,
                             a7,
                             a8,
                             a9);
              }
            }
            else
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v42, 0LL);
              locked = GrepMaskBlt(this, v18, v19, v33, v32, (struct OPTAPIDCOBJ *)v42, 0, 0, 0LL, 0, 0, v14 << 16, 0);
              OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v42);
            }
            if ( v38 )
              GreDCSelectBrush(*(_QWORD *)this, v35);
            DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v43);
            v10 = (struct _POLYPATBLT *)((char *)v10 + 24);
            v9 = v34;
          }
        }
        else
        {
          locked = XDCOBJ::bFullScreen(this);
        }
        v30 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        if ( *(_QWORD *)(v30 + 160) != v17 )
        {
          *(_QWORD *)(v30 + 160) = v17;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) |= 0x1000u;
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v43);
      }
      return locked;
    }
    v13 = a4 == 0;
  }
  if ( !v13 )
    return 0;
  return locked;
}
