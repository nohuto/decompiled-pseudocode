/*
 * XREFs of FreeHidTLCInfo @ 0x14011DFF0
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x14011CEF4 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x14011DEE0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x14011EE40 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1402744BC (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     CleanupHidRequestList @ 0x140275000 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidTLCInfo(_QWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0LL;
  if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
  {
    v4 = UserSessionState + 104;
    RIMLockExclusive(UserSessionState + 104);
  }
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  Win32FreePool(a1);
  if ( v4 )
    RIMUnlockExclusive(v4);
}
