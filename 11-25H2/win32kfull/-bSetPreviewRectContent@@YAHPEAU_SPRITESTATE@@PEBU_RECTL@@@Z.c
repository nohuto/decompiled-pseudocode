/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x14032AD1C
 * Callers:
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400986E8 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vSetPID@SURFMEM@@QEAAXK@Z @ 0x140204CE4 (-vSetPID@SURFMEM@@QEAAXK@Z.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x140329B68 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bSetPreviewRectContent(struct _SPRITESTATE *a1, const struct _RECTL *a2)
{
  LONG v3; // r8d
  unsigned int updated; // r14d
  __int64 UserSessionState; // rax
  __int64 CompatibleDC; // rax
  HDC v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdi
  void *v14; // rbx
  HDEV HDEV; // rax
  __int64 v16; // r9
  struct _BLENDFUNCTION v18; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v19; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v23; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+A8h] [rbp-58h]
  struct _RECTL v25; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-20h] BYREF
  char v29; // [rsp+E8h] [rbp-18h]
  int v30; // [rsp+ECh] [rbp-14h]
  struct tagPOINT v31[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct PALETTE *v32; // [rsp+100h] [rbp+0h] BYREF
  int v33; // [rsp+108h] [rbp+8h]
  _BYTE v34[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v35[16]; // [rsp+120h] [rbp+20h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v36[14]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v37[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v38[128]; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v39; // [rsp+2A0h] [rbp+1A0h] BYREF
  __m128i si128; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v41; // [rsp+2C0h] [rbp+1C0h]
  __m128i v42; // [rsp+2C4h] [rbp+1C4h]

  v3 = a2->right - a2->left;
  v19.cy = a2->bottom - a2->top;
  updated = 0;
  v26 = 0LL;
  v19.cx = v3;
  v27 = 0LL;
  UserSessionState = W32GetUserSessionState((unsigned int)v19.cy, a2);
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  v8 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v36, v8);
    if ( v36[0] )
    {
      v33 = 0;
      v32 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v32, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v24 = 0;
        v23 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v26 + 4) = v19;
          v24 = 1;
          LODWORD(v26) = 6;
          HIDWORD(v26) = 0;
          *(_QWORD *)&v27 = *(_QWORD *)v23;
          DWORD2(v27) = 1;
          v20 = 0LL;
          v21 = 0;
          v22 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v20, (struct _DEVBITMAPINFO *)&v26, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v20 )
          {
            SURFMEM::vSetPID((SURFMEM *)&v20, v9, v10);
            *((_QWORD *)&v26 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v41 = 1174412344;
            v42 = si128;
            *(_QWORD *)&v26 = 0x300000006LL;
            *(_QWORD *)&v27 = *(_QWORD *)v23;
            DWORD2(v27) = 1;
            v28 = 0LL;
            v29 = 0;
            v30 = 0;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v28,
                   (struct _DEVBITMAPINFO *)&v26,
                   &si128,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0,
                   1,
                   0,
                   0) )
            {
              if ( v28 )
              {
                *(struct tagSIZE *)&v25.right = v19;
                *(_QWORD *)&v25.left = 0LL;
                v39 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                *(__m128i *)&v31[0].x = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v36,
                            v23,
                            v32,
                            (struct _SURFOBJ *)(v20 + 24),
                            (struct _SURFOBJ *)(v28 + 24),
                            &v25,
                            &v39,
                            (struct _MARGINS *)v31);
                if ( updated )
                {
                  LOBYTE(v11) = 4;
                  v12 = *(_QWORD *)(v20 + 32);
                  *(_DWORD *)(v20 + 112) |= 0x4000000u;
                  v13 = *(_QWORD *)GrepSelectBitmap(v34, v36, v12, v11);
                  *(_DWORD *)(v20 + 112) &= ~0x4000000u;
                  v25.left = a2->left;
                  v25.top = a2->top;
                  v18 = (struct _BLENDFUNCTION)33488896;
                  v31[0] = 0LL;
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v38, 0LL);
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, v36);
                  v14 = (void *)*((_QWORD *)a1 + 146);
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GrepUpdateSprite(
                              HDEV,
                              0LL,
                              v14,
                              (struct OPTAPIDCOBJ *)v38,
                              (struct tagPOINT *)&v25,
                              &v19,
                              (struct OPTAPIDCOBJ *)v37,
                              v31,
                              0,
                              &v18,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0,
                              0);
                  LOBYTE(v16) = 4;
                  *(_DWORD *)(v20 + 112) |= 0x4000000u;
                  GrepSelectBitmap(v35, v36, v13, v16);
                  *(_DWORD *)(v20 + 112) &= ~0x4000000u;
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v38);
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v28);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v23);
          SURFMEM::~SURFMEM((SURFMEM *)&v20);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v32);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v36);
    GreSetDCOwnerEx(v8, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v8);
  }
  return updated;
}
