/*
 * XREFs of xxxSetSystemMenu @ 0x1402E9E68
 * Callers:
 *     NtUserSetSystemMenu @ 0x14021ECA0 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140047038 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     MNPositionSysMenu @ 0x140209594 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD ***a2)
{
  struct _HEAD *v4; // rsi
  _QWORD *v5; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v4 = *(struct _HEAD **)(a1 + 160);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v4);
    v5 = a2[2];
    if ( !v5 )
      v5 = **a2;
    MNPositionSysMenu(a1, v5);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437);
    return 0LL;
  }
}
