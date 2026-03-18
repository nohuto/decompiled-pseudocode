/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GreConvertMemToRedirectionDC @ 0x1400574D0 (GreConvertMemToRedirectionDC.c)
 *     ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140057588 (-GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GreExcludeClipRect @ 0x1400A1BB0 (GreExcludeClipRect.c)
 *     GreExtSelectClipRgn @ 0x1400C353C (GreExtSelectClipRgn.c)
 *     GreConvertRedirectionToMemDC @ 0x140333098 (GreConvertRedirectionToMemDC.c)
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
  BOOL v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  LONG bmHeight; // edi
  HDC v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  HBRUSH SpriteFillBrush; // rsi
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+70h] [rbp-58h]
  int v49; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+7Ch] [rbp-4Ch]
  __int64 v51; // [rsp+80h] [rbp-48h]
  RECT v52; // [rsp+88h] [rbp-40h] BYREF
  bool v53; // [rsp+E8h] [rbp+20h] BYREF

  v49 = 0;
  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  UserSessionState = W32GetUserSessionState(v13, v12);
  v15 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43248), a2);
  v18 = W32GetUserSessionState(v17, v16);
  v51 = GreSelectBitmap(*(_QWORD *)(v18 + 43256), a3);
  v21 = W32GetUserSessionState(v20, v19);
  v22 = GreConvertMemToRedirectionDC(*(HDC *)(v21 + 43256), &v49);
  LODWORD(v48) = -a7;
  HIDWORD(v48) = -a6;
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
    a4->bmHeight,
    v48,
    v49);
  v25 = W32GetUserSessionState(v24, v23);
  bmHeight = a4->bmHeight;
  v27 = *(HDC *)(v25 + 43248);
  v30 = W32GetUserSessionState(v29, v28);
  v50 = GreBitBltInternal(*(HDC *)(v30 + 43256), bmHeight, v27, 0, 0, -2134114272, 0, 2);
  v33 = v50;
  if ( v11 )
  {
    v53 = 0;
    SpriteFillBrush = (HBRUSH)GetSpriteFillBrush(a1, 0LL, &v53);
    if ( SpriteFillBrush )
    {
      v35 = a4->bmHeight - a7;
      v36 = W32GetUserSessionState(v32, v31);
      GreExcludeClipRect(*(HDC *)(v36 + 43256), v35);
      v52.left = 0;
      v52.top = 0;
      v52.right = a5->bmWidth;
      v52.bottom = a5->bmHeight;
      v38 = W32GetUserSessionState(a5, v37);
      FillRect(*(HDC *)(v38 + 43256), &v52, SpriteFillBrush);
      v41 = W32GetUserSessionState(v40, v39);
      GreExtSelectClipRgn(*(HDC *)(v41 + 43256), 0LL);
      v33 = v50;
    }
    if ( v53 )
      GreDeleteObject(SpriteFillBrush);
  }
  if ( v22 )
  {
    v47 = W32GetUserSessionState(v32, v31);
    GreConvertRedirectionToMemDC(*(HDC *)(v47 + 43256));
  }
  v42 = W32GetUserSessionState(v32, v31);
  GreSelectBitmap(*(_QWORD *)(v42 + 43248), v15);
  v45 = W32GetUserSessionState(v44, v43);
  GreSelectBitmap(*(_QWORD *)(v45 + 43256), v51);
  return v33;
}
