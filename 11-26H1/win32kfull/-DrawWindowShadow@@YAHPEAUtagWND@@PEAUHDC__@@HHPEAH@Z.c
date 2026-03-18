/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400836B8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x140295600 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  HRGN v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  unsigned __int8 *v17; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v19; // r12
  HBRUSH StockObject; // rax
  HRGN v22; // rdx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int128 v30; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v30 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = (HRGN)v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v30);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v30, (unsigned int)-DWORD1(v30));
      v13 = 0;
    }
    else
    {
      v23 = -(int)v30;
      LODWORD(v30) = 0;
      v24 = HIDWORD(v30) - DWORD1(v30);
      DWORD1(v30) = 0;
      HIDWORD(v30) = v24;
      DWORD2(v30) += v23;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v30), v24);
      v13 = 1;
    }
    *a5 = v13;
    if ( PtiCurrent(v12)
      && *((_QWORD *)PtiCurrent(v14) + 61)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v25) + 61) + 8LL) + 64LL) & 1) != 0
      && (v26 = *((_QWORD *)this + 5), (*(_DWORD *)(v26 + 288) & 0x4000000F) == 0x40000000)
      && (v27 = *(unsigned __int16 *)(v26 + 284), (_WORD)v27 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v27, RectRgn);
      if ( !v7 )
        goto LABEL_15;
    }
    else
    {
      v7 = 1;
    }
    v15 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v16 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v16 = 0LL;
    }
    GreOffsetRgn(v10, v16, 5LL);
    if ( !*a5 || a4 )
    {
      v17 = (unsigned __int8 *)&unk_14035E6D4;
      while ( v15 > 0 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v17 | (*v17 << 16) | _byteswap_ulong(*v17 << 16));
        v19 = SolidBrush;
        if ( !SolidBrush )
        {
          v7 = 0;
          goto LABEL_15;
        }
        GreFrameRgn(a2, v10, SolidBrush, v15, v15);
        GreDeleteObject(v19);
        --v15;
        --v17;
      }
      StockObject = (HBRUSH)GreGetStockObject(4LL);
      v22 = (HRGN)RectRgn;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      StockObject = (HBRUSH)GreGetStockObject(0LL);
      v22 = v10;
    }
    GreFillRgn(a2, v22, StockObject);
  }
LABEL_15:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
