/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x14003DA44
 * Callers:
 *     xxxGetMenuItemRect @ 0x14003D798 (xxxGetMenuItemRect.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxMenuItemFromPoint @ 0x14026C8F0 (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1402E16B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     GetCaptionHeight @ 0x140049968 (GetCaptionHeight.c)
 *     GetWindowBordersForDpi @ 0x14004B870 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  int v4; // esi
  __int64 result; // rax
  _DWORD *v7; // r8
  int v8; // ecx
  int WindowDpiLastNotify; // eax
  __int64 v10; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  v4 = (int)a2;
  result = *(_QWORD *)(*(_QWORD *)*a2 + 40LL);
  if ( (*(_DWORD *)(result + 40) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)*a2 + 80LL) != a1
      || !*(_DWORD *)(*(_QWORD *)*a2 + 64LL)
      || (result = *a2, !*(_DWORD *)(*(_QWORD *)*a2 + 68LL)) )
    {
      v7 = *(_DWORD **)(a1 + 40);
      v8 = v7[72] & 0xF;
      if ( v8 == 3 )
      {
        WindowDpiLastNotify = (v7[72] >> 8) & 0x1FF;
      }
      else if ( (v7[58] & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v8
             && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (_DWORD)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               v4,
               a1,
               WindowBordersForDpi + CaptionHeight,
               WindowBordersForDpi,
               *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
             - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
             - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
