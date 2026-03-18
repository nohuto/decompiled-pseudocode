/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreExcludeClipRect @ 0x1400406B0 (GreExcludeClipRect.c)
 *     ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140040868 (-GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z.c)
 *     GreExtSelectClipRgn @ 0x140040B5C (GreExtSelectClipRgn.c)
 *     GreConvertMemToRedirectionDC @ 0x14004114C (GreConvertMemToRedirectionDC.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     GreConvertRedirectionToMemDC @ 0x140326788 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v8; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r12d
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  LONG bmHeight; // edi
  unsigned int bmWidth; // esi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  HBRUSH SpriteFillBrush; // rsi
  LONG v36; // edi
  LONG v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v49; // rax
  unsigned int v50; // [rsp+70h] [rbp-58h]
  int v51; // [rsp+74h] [rbp-54h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-50h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  __int64 v54; // [rsp+88h] [rbp-40h]
  RECT v55; // [rsp+90h] [rbp-38h] BYREF
  bool v56; // [rsp+E8h] [rbp+20h] BYREF

  v51 = 0;
  v8 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v8 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  UserSessionState = W32GetUserSessionState(v13, v12);
  v53 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), a2);
  v17 = W32GetUserSessionState(v16, v15);
  v54 = GreSelectBitmap(*(_QWORD *)(v17 + 43256), a3);
  v20 = W32GetUserSessionState(v19, v18);
  v21 = GreConvertMemToRedirectionDC(*(HDC *)(v20 + 43256), &v51);
  v22 = -a7;
  v50 = -a6;
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a2,
    (unsigned int)-a6,
    -a7,
    a4->bmWidth - a6,
    a4->bmHeight - a7,
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a3,
    0,
    0,
    a4->bmWidth + a6,
    a4->bmHeight);
  v25 = W32GetUserSessionState(v24, v23);
  bmHeight = a4->bmHeight;
  bmWidth = a4->bmWidth;
  v28 = *(_QWORD *)(v25 + 43248);
  v31 = W32GetUserSessionState(v30, v29);
  v52 = GreBitBltInternal(*(_QWORD *)(v31 + 43256), v50, v22, bmWidth, bmHeight, v28, 0, 0, -2134114272, 0, 2);
  v34 = v52;
  if ( v8 )
  {
    v56 = 0;
    SpriteFillBrush = (HBRUSH)GetSpriteFillBrush(a1, 0LL, &v56);
    if ( SpriteFillBrush )
    {
      v36 = a4->bmHeight - a7;
      v37 = a4->bmWidth - a6;
      v38 = W32GetUserSessionState(v33, v32);
      GreExcludeClipRect(*(HDC *)(v38 + 43256), v50, v22, v37, v36);
      *(_QWORD *)&v55.left = 0LL;
      v55.right = a5->bmWidth;
      v55.bottom = a5->bmHeight;
      v40 = W32GetUserSessionState(a5, v39);
      FillRect(*(HDC *)(v40 + 43256), &v55, SpriteFillBrush);
      v43 = W32GetUserSessionState(v42, v41);
      GreExtSelectClipRgn(*(HDC *)(v43 + 43256), 0LL);
      v34 = v52;
    }
    if ( v56 )
      GreDeleteObject(SpriteFillBrush);
  }
  if ( v21 )
  {
    v49 = W32GetUserSessionState(v33, v32);
    GreConvertRedirectionToMemDC(*(HDC *)(v49 + 43256));
  }
  v44 = W32GetUserSessionState(v33, v32);
  GreSelectBitmap(*(_QWORD *)(v44 + 43248), v53);
  v47 = W32GetUserSessionState(v46, v45);
  GreSelectBitmap(*(_QWORD *)(v47 + 43256), v54);
  return v34;
}
