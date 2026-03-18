/*
 * XREFs of NtUserMNDragLeave @ 0x14029B120
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14015BD30 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 *     xxxMNSetGapState @ 0x1402E998C (xxxMNSetGapState.c)
 */

__int64 NtUserMNDragLeave()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v4 = *((_QWORD *)PtiCurrent(v1, v0) + 81);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 92);
    v6 = *(unsigned int *)(v4 + 88);
    v7 = *(_QWORD *)(v4 + 80);
    ++*(_DWORD *)(v4 + 40);
    xxxMNSetGapState(v7, v6, v5, 0LL);
    UnlockMFMWFPWindow((__int64 *)(v4 + 80));
    *(_DWORD *)(v4 + 88) = -1;
    *(_DWORD *)(v4 + 8) &= ~0x8000u;
    *(_DWORD *)(v4 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v4, 1);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
