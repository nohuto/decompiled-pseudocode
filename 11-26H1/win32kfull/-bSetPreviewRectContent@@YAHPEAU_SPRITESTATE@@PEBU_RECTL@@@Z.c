/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x140219F84
 * Callers:
 *     bMoveDevPreviewRect @ 0x140219C58 (bMoveDevPreviewRect.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?vSetPID@SURFMEM@@QEAAXK@Z @ 0x140233D04 (-vSetPID@SURFMEM@@QEAAXK@Z.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x140312C80 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSetPreviewRectContent(struct _SPRITESTATE *a1, const struct _RECTL *a2)
{
  unsigned int updated; // r15d
  __int64 v5; // rdx
  __int64 UserSessionState; // rax
  struct HOBJ__ *CompatibleDC; // rsi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdi
  void *v15; // rbx
  HDEV HDEV; // rax
  __int64 v17; // r9
  struct _BLENDFUNCTION v19; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v20; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  char v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v24; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+A8h] [rbp-58h]
  struct _RECTL v26; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-20h] BYREF
  char v30; // [rsp+E8h] [rbp-18h]
  int v31; // [rsp+ECh] [rbp-14h]
  struct tagPOINT v32[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct PALETTE *v33; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+108h] [rbp+8h]
  _QWORD v35[14]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v36[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v37[16]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v38[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v39[112]; // [rsp+210h] [rbp+110h] BYREF
  struct _RECTL v40; // [rsp+280h] [rbp+180h] BYREF
  __m128i si128; // [rsp+290h] [rbp+190h] BYREF
  int v42; // [rsp+2A0h] [rbp+1A0h]
  __m128i v43; // [rsp+2A4h] [rbp+1A4h]

  updated = 0;
  v5 = (unsigned int)(a2->right - a2->left);
  v20.cy = a2->bottom - a2->top;
  v27 = 0LL;
  v20.cx = v5;
  v28 = 0LL;
  UserSessionState = W32GetUserSessionState((unsigned int)v20.cy, v5);
  CompatibleDC = (struct HOBJ__ *)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
  v9 = Gre::Base::Globals(v8);
  v10 = v9;
  if ( CompatibleDC )
  {
    GrepSetDCOwnerEx(v9, CompatibleDC, 0, 0, 0);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v35, (HDC)CompatibleDC, v10);
    if ( v35[0] )
    {
      v34 = 0;
      v33 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v33, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v25 = 0;
        v24 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v24, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v27 + 4) = v20;
          v25 = 1;
          LODWORD(v27) = 6;
          HIDWORD(v27) = 0;
          *(_QWORD *)&v28 = *(_QWORD *)v24;
          DWORD2(v28) = 1;
          v21 = 0LL;
          v22 = 0;
          v23 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0)
            && v21 )
          {
            SURFMEM::vSetPID((SURFMEM *)&v21, v11);
            *((_QWORD *)&v27 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v42 = 1174412344;
            v43 = si128;
            *(_QWORD *)&v27 = 0x300000006LL;
            *(_QWORD *)&v28 = *(_QWORD *)v24;
            DWORD2(v28) = 1;
            v29 = 0LL;
            v30 = 0;
            v31 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v29, (struct _DEVBITMAPINFO *)&v27, &si128, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
            {
              if ( v29 )
              {
                *(struct tagSIZE *)&v26.right = v20;
                *(_QWORD *)&v26.left = 0LL;
                v40 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                *(__m128i *)&v32[0].x = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v35,
                            v24,
                            v33,
                            (struct _SURFOBJ *)(v21 + 24),
                            (struct _SURFOBJ *)(v29 + 24),
                            &v26,
                            &v40,
                            (struct _MARGINS *)v32);
                if ( updated )
                {
                  LOBYTE(v12) = 4;
                  v13 = *(_QWORD *)(v21 + 32);
                  *(_DWORD *)(v21 + 112) |= 0x4000000u;
                  v14 = *(_QWORD *)GrepSelectBitmap(v36, v35, v13, v12);
                  *(_DWORD *)(v21 + 112) &= ~0x4000000u;
                  v26.left = a2->left;
                  v26.top = a2->top;
                  v19 = (struct _BLENDFUNCTION)33488896;
                  v32[0] = 0LL;
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v38, (struct XDCOBJ *)v35);
                  v15 = (void *)*((_QWORD *)a1 + 146);
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GrepUpdateSprite(
                              HDEV,
                              0LL,
                              v15,
                              (struct OPTAPIDCOBJ *)v39,
                              (struct tagPOINT *)&v26,
                              &v20,
                              (struct OPTAPIDCOBJ *)v38,
                              v32,
                              0,
                              &v19,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0,
                              0);
                  LOBYTE(v17) = 4;
                  *(_DWORD *)(v21 + 112) |= 0x4000000u;
                  GrepSelectBitmap(v37, v35, v14, v17);
                  *(_DWORD *)(v21 + 112) &= ~0x4000000u;
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v38);
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v29);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v24);
          SURFMEM::~SURFMEM((SURFMEM *)&v21);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v33);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v35);
    GrepSetDCOwnerEx(v10, CompatibleDC, 0x80000002, 0, 0);
    GreDeleteDC(CompatibleDC);
  }
  return updated;
}
