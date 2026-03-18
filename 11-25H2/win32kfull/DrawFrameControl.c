/*
 * XREFs of DrawFrameControl @ 0x140054934
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140054630 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x14025F678 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E488C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1402EA96C (MNDrawArrow.c)
 * Callees:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreSetBkMode @ 0x140054F30 (GreSetBkMode.c)
 *     ?UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z @ 0x140054FB0 (-UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z.c)
 *     DrawPushButton @ 0x140055100 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x140055878 (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x140056144 (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1400568B8 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x140056E58 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1400573AC (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1401E5A0C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     GreSetGraphicsMode @ 0x140231C10 (GreSetGraphicsMode.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  unsigned int v8; // esi
  int v9; // r15d
  int TextAlign; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // ecx
  unsigned int v15; // edi
  LONG v16; // r12d
  HFONT v17; // r12
  unsigned __int16 CaptionChar; // r9
  unsigned int v19; // r8d
  __int64 left; // rcx
  __int64 top; // rdx
  int v23; // eax
  int v24; // eax
  RECT v25; // [rsp+30h] [rbp-69h] BYREF
  HFONT v26; // [rsp+40h] [rbp-59h]
  _DWORD v27[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v28; // [rsp+58h] [rbp-41h]
  struct tagLOGFONTW v29; // [rsp+60h] [rbp-39h] BYREF
  int v31; // [rsp+110h] [rbp+77h]

  v31 = 0;
  v25 = *a2;
  v8 = 1;
  v9 = 0;
  TextAlign = 0;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v9 = GreSetGraphicsMode(a1);
    if ( v9 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
    }
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  v14 = a4 | 0x8000;
  if ( *(_WORD *)(*(_QWORD *)(UserSessionState + 19872) + 6996LL) != 1 )
    v14 = a4;
  v15 = v14 | 0x4000;
  if ( (v14 & 0x8000) == 0 )
    v15 = v14;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v15 & 0x10) != 0) && (a3 != 3 || (v15 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v15 & 0x2000) != 0 )
      *a2 = v25;
    v31 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v16 = v25.right - v25.left;
    if ( v25.right - v25.left >= v25.bottom - v25.top )
      v16 = v25.bottom - v25.top;
    if ( v16 > 0 )
    {
      memset_0(&v29, 0, sizeof(v29));
      v29.lfHeight = v16;
      v29.lfWeight = 400;
      wcscpy(v29.lfFaceName, L"Marlett");
      v29.lfCharSet = 2;
      v17 = UserCreateFontIndirectW(&v29);
      v26 = (HFONT)GreSelectFont(a1, v17);
      if ( v31 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v15);
        }
        else
        {
          if ( a3 != 3 )
          {
            if ( a3 != 4 )
              v8 = 0;
            goto LABEL_22;
          }
          CaptionChar = (v15 & 2) != 0 ? 52 : 54;
          if ( (v15 & 1) == 0 )
            CaptionChar = (v15 & 2) != 0 ? 51 : 53;
        }
        v19 = v15;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v25, v15);
          else
            DrawGrip(a1, a2, v15);
LABEL_22:
          if ( v9 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1, TextAlign);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v26);
          GreDeleteObject(v17);
          return v8;
        }
        if ( (v15 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v25, a3, v15);
          goto LABEL_22;
        }
        if ( (v15 & 0x800) == 0 )
        {
          left = (unsigned int)a2->left;
          top = (unsigned int)a2->top;
          v23 = a2->right - left;
          v27[0] = a2->left;
          v27[2] = v23;
          v24 = a2->bottom - top;
          v27[1] = top;
          v27[3] = v24;
          v28 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(left, top) + 19872) + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v27, 1u);
        }
        v19 = v15 & 0x1100 | (((v15 >> 3) & 1) == 0);
        CaptionChar = (((v15 >> 3) & 1) == 0) + 53;
      }
      DrawIt(a1, &v25, v19, CaptionChar);
      goto LABEL_22;
    }
  }
  if ( v9 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  return 0LL;
}
