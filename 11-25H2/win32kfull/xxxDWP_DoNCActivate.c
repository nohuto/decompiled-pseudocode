/*
 * XREFs of xxxDWP_DoNCActivate @ 0x14003EE4C
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DwmAsyncActivationChange @ 0x14003EFD0 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x14003F08C (IsModelessMenuNotificationWindow.c)
 *     ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x14003F0E4 (-AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  BOOL v5; // ecx
  __int64 result; // rax
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  HDC DCEx; // rdi
  __int64 v11; // rax
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, a1, 0x40u, 1);
  if ( a3 != -1 )
  {
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0x10) != 0
      && (*(_BYTE *)(v8 + 17) & 1) == 0
      && (unsigned __int16)AreNonClientAreasToBePainted(a1) )
    {
      v9 = UserValidateCopyRgn(a3);
      DCEx = (HDC)_GetDCEx(a1, v9, 65537LL);
      if ( DCEx )
      {
        v11 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(unsigned int *)(v11 + 28), *(unsigned int *)(v11 + 24));
          xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
        }
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
      else
      {
        GreDeleteObject(v9);
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v7 = (void *)ReferenceDwmApiPort();
      return DwmAsyncActivationChange(v7);
    }
  }
  return result;
}
