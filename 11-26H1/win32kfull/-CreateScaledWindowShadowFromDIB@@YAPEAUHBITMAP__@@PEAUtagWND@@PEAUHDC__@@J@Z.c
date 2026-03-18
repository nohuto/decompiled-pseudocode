/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14028DF44
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 */

HBITMAP __fastcall CreateScaledWindowShadowFromDIB(struct tagWND *a1, HDC a2, int a3)
{
  Gre::Base *DCEx; // rax
  Gre::Base *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r12d
  int v11; // r13d
  HBITMAP CompatibleBitmap; // rsi
  __int64 CompatibleDC; // rax
  HDC v14; // rbp
  __int64 v15; // rdi
  int v16; // ebx

  DCEx = (Gre::Base *)_GetDCEx(a1, 0LL, 3LL);
  v7 = DCEx;
  if ( !DCEx )
    return 0LL;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v8 + 96) - v9 + 5;
  v11 = HIDWORD(*(_QWORD *)(v8 + 96)) - HIDWORD(v9) + 5;
  CompatibleBitmap = GreCreateCompatibleBitmapEx(DCEx, v10, v11, 0, 0LL, 0LL);
  _ReleaseDC(v7);
  if ( !CompatibleBitmap )
    return 0LL;
  CompatibleDC = GreCreateCompatibleDC(a2);
  v14 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v15 = GreSelectBitmap(CompatibleDC, CompatibleBitmap),
        v16 = GreStretchBlt(v14, 0, 0, v10, v11, a2, 0, 0, a3 * v10, a3 * v11, 0xCC0020u, 0),
        GreSelectBitmap(v14, v15),
        GreDeleteDC(v14),
        !v16) )
  {
    GreDeleteObject(CompatibleBitmap);
    return 0LL;
  }
  return CompatibleBitmap;
}
