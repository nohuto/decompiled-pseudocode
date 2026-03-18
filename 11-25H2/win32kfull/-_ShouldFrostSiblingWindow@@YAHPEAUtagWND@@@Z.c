/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AEBB0
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001EF1C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001F054 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v1 = 0;
  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD **)(v2 + 464);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && *(_QWORD *)(v2 + 496) == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19144)
    && !IsGhostWindowClass(a1, v7)
    && !GetGhostProp(a1, v8)
    && !GetFrostProp(a1, v9)
    && (*(_DWORD *)(*(_QWORD *)(v2 + 464) + 12LL) & 0x8000000) == 0
    && *v4 != *(_QWORD *)(W32GetUserGdiSessionState(v10) + 40)
    && !(unsigned int)IsProcessDwm(*v4)
    && (*(_DWORD *)(v2 + 672) > 0x9900u || (*(_DWORD *)(v2 + 688) & 0x80000) == 0)
    && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
    && a1 != *(struct tagWND **)(*(_QWORD *)(v2 + 504) + 168LL) )
  {
    return 1;
  }
  return v1;
}
