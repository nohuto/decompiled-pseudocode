/*
 * XREFs of ?ForceHidePenCursor@@YAXH@Z @ 0x1402A5380
 * Callers:
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1401F0E24 (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1402EE654 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::SwitchMouseCursors @ 0x1402A5508 (_anonymous_namespace_--SwitchMouseCursors.c)
 */

void __fastcall ForceHidePenCursor(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a1;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36312);
  if ( v2 != *(_DWORD *)(v3 + 96) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36312);
    *(_DWORD *)(v5 + 96) = v2;
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 36312) + 88LL) )
      anonymous_namespace_::SwitchMouseCursors(3LL);
  }
}
