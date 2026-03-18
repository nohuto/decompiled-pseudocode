/*
 * XREFs of ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     DxgkEngColorFillViaGDI @ 0x140348650 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPatBlt(struct XDCOBJ *a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // ebx
  int v11; // r14d
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // eax
  int v18; // r10d
  _DWORD *v19; // rax
  int v20; // ecx
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  struct SURFACE *v23; // rsi
  __int64 v24; // rdx
  unsigned int locked; // eax
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[96]; // [rsp+C0h] [rbp-40h] BYREF
  int v30; // [rsp+120h] [rbp+20h] BYREF
  int v31; // [rsp+124h] [rbp+24h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+12Ch] [rbp+2Ch]

  v6 = 0;
  v11 = BYTE2(a6) | (BYTE2(a6) << 8);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    DC::QuickInitXform(*(_QWORD *)a1, &v27, 516LL);
    if ( (*(_BYTE *)(v27 + 32) & 1) == 0 )
    {
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v28, 0LL);
      v6 = GrepMaskBlt(a1, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v28, 0, 0, 0LL, 0, 0, v11 << 16, 0);
      v28[0] &= -(__int64)(v29[40] != 0);
      PopThreadGuardedObject(v29);
      DCOBJ::~DCOBJ((DCOBJ *)v28);
      return v6;
    }
    v30 = a2;
    v12 = *(_QWORD *)a1;
    v13 = a2 + a4;
    v33 = a5 + a3;
    v14 = a2;
    v32 = a2 + a4;
    v15 = a3;
    v31 = a3;
    if ( (*(_BYTE *)(v27 + 32) & 0x43) == 0x43
      || (v16 = bCvtPts1(v27, (__int64)&v30, 2LL), v13 = v32, v15 = v31, v14 = v30, v16) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 976) + 108LL) & 1) != 0 )
      {
        ++v14;
        ++v13;
        v30 = v14;
        v32 = v13;
      }
    }
    if ( v14 > v13 )
    {
      v17 = v14;
      v30 = v13;
      v14 = v13;
      v32 = v17;
      v13 = v17;
    }
    v18 = v33;
    if ( v15 > v33 )
    {
      v31 = v33;
      v33 = v15;
      v15 = v18;
    }
    if ( v15 == v33 || v14 == v13 )
      return 1;
    v19 = *(_DWORD **)a1;
    v20 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( (v20 & 0xE0) != 0 )
    {
      if ( (v20 & 0x20) != 0 )
      {
        if ( v14 < v19[266] )
        {
          v19[266] = v14;
          v13 = v32;
          v15 = v31;
          v14 = v30;
        }
        if ( v15 < v19[267] )
        {
          v19[267] = v15;
          v13 = v32;
          v15 = v31;
          v14 = v30;
        }
        if ( v13 > v19[268] )
        {
          v19[268] = v13;
          v13 = v32;
          v15 = v31;
          v14 = v30;
        }
        if ( v33 > v19[269] )
        {
          v19[269] = v33;
          v13 = v32;
          v15 = v31;
          v14 = v30;
        }
      }
      v21 = *(_DWORD **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x80u) != 0 )
      {
        if ( v14 < v21[274] )
        {
          v21[274] = v14;
          v13 = v32;
          v15 = v31;
        }
        if ( v15 < v21[275] )
        {
          v21[275] = v15;
          v13 = v32;
        }
        if ( v13 > v21[276] )
          v21[276] = v13;
        if ( v33 > v21[277] )
          v21[277] = v33;
      }
    }
    if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)(BYTE2(a6) | (BYTE2(a6) << 8)) >> 8]) & 0xB2) != 0 )
      bSpDwmValidateSurface(a1, a2, a3, a4, a5);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v28, a1, 0) )
    {
      v22 = *(_QWORD *)a1;
      v23 = *(struct SURFACE **)(*(_QWORD *)a1 + 496LL);
      if ( !v23 )
      {
        v6 = 1;
        goto LABEL_40;
      }
      v24 = *(_QWORD *)(v22 + 976);
      if ( (*(_DWORD *)(v24 + 152) & 0x1000) != 0 )
        GreDCSelectBrush(v22, *(_QWORD *)(v24 + 160));
      locked = GrePatBltLockedDC(
                 a1,
                 *(struct EXFORMOBJ **)(*(_QWORD *)a1 + 976LL),
                 (struct ERECTL *)&v30,
                 v11,
                 v23,
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL));
    }
    else
    {
      locked = XDCOBJ::bFullScreen(a1);
    }
    v6 = locked;
LABEL_40:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v28);
  }
  return v6;
}
