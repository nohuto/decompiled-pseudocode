/*
 * XREFs of ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1401256F0
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x140125814 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x140125918 (-GetCaptionChar@@YAGI@Z.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, unsigned int a4)
{
  LONG left; // edi
  LONG top; // esi
  int v8; // r10d
  int v9; // ebx
  int v10; // r11d
  _BOOL8 v13; // rcx
  __int64 v14; // rdx
  int v15; // r13d
  int v16; // ebx
  __int64 UserSessionState; // rax
  int v18; // edi
  unsigned __int16 CaptionChar; // ax
  int v21; // [rsp+20h] [rbp-38h]
  unsigned __int16 v22; // [rsp+70h] [rbp+18h] BYREF

  left = a2->left;
  top = a2->top;
  v8 = a2->right - a2->left;
  v9 = a2->bottom - top;
  v10 = v8;
  if ( v8 >= v9 )
    v10 = a2->bottom - top;
  v13 = v8 > 11;
  v14 = (unsigned int)((v9 - v10) >> 31);
  v15 = left + (v8 - v10) / 2 - v13;
  LODWORD(v14) = (v9 - v10) % 2;
  v16 = top + (v9 - v10) / 2;
  UserSessionState = W32GetUserSessionState(v13, v14);
  FillRect(a1, a2, *(HBRUSH *)(UserSessionState + 43072));
  v18 = GreSetTextColor(a1, 0);
  if ( a3 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      CaptionChar = 97;
    }
    else if ( (a4 & 2) != 0 )
    {
      CaptionChar = 104;
    }
    else if ( (a4 & 4) != 0 )
    {
      CaptionChar = 119;
    }
    else
    {
      CaptionChar = 56;
    }
  }
  else
  {
    CaptionChar = GetCaptionChar(a4);
  }
  v22 = CaptionChar;
  FlipUserTextOutW(a1, v15, v16, &v22, v21);
  GreSetTextColor(a1, v18);
  return 1LL;
}
