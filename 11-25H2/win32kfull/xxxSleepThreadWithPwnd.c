/*
 * XREFs of xxxSleepThreadWithPwnd @ 0x14017BE54
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxSleepThreadWithPwnd(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  struct tagWND *v4; // rbx
  _QWORD *CurrentThreadNonPaged; // rax
  unsigned int v6; // edi

  v2 = 0;
  v3 = a2;
  v4 = (struct tagWND *)a1;
  if ( (a2 & 7) == 7 || (a2 & 6) != 0 && (a1 = *((_QWORD *)PtiCurrent(a1, a2) + 59), *(_QWORD *)(a1 + 112)) )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    if ( *((_QWORD **)v4 + 2) == CurrentThreadNonPaged )
    {
      v2 = 1;
      xxxUpdateInputHangInfo(v4, 0LL);
    }
  }
  v6 = xxxRealSleepThread(v3, 0LL, 1, 0, 0LL);
  if ( v2 )
    xxxUpdateInputHangInfo(v4, 1LL);
  return v6;
}
