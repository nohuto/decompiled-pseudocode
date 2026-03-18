/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E1FB8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400E1C54 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026DF64 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned __int8 *i; // r15
  __int64 SolidBrush; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  __int128 v30; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v30 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v30);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v30, (unsigned int)-DWORD1(v30));
      v14 = 0;
    }
    else
    {
      v26 = -(int)v30;
      LODWORD(v30) = 0;
      v27 = HIDWORD(v30) - DWORD1(v30);
      DWORD1(v30) = 0;
      HIDWORD(v30) = v27;
      DWORD2(v30) += v26;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v30), v27);
      v14 = 1;
    }
    *a5 = v14;
    if ( PtiCurrent(v13, v12)
      && *((_QWORD *)PtiCurrent(v16, v15) + 62)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v23, v22) + 62) + 8LL) + 64LL) & 1) != 0
      && (v24 = *((_QWORD *)this + 5), (*(_DWORD *)(v24 + 288) & 0x4000000F) == 0x40000000)
      && (v25 = *(unsigned __int16 *)(v24 + 284), (_WORD)v25 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v25, RectRgn);
      if ( !v7 )
        goto LABEL_16;
    }
    else
    {
      v7 = 1;
    }
    v17 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v18 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v18 = 0LL;
    }
    GreOffsetRgn(v10, v18, 5LL);
    if ( !*a5 || a4 )
    {
      for ( i = (unsigned __int8 *)&unk_1403514A4; ; --i )
      {
        if ( v17 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_15;
        }
        SolidBrush = GreCreateSolidBrush(*i | (*i << 8) | _byteswap_ulong(*i << 8));
        if ( !SolidBrush )
          break;
        GreFrameRgn(a2, v17);
        GreDeleteObject(SolidBrush);
        --v17;
      }
      v7 = 0;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_15:
      GreFillRgn(a2);
    }
  }
LABEL_16:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
