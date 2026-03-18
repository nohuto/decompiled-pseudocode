/*
 * XREFs of xxxWaitMessageEx @ 0x14016BF60
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x14016C040 (ClientWaitMessageExMPH.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, __int64 a2, enum SLEEP_STATUS *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  _QWORD *CurrentThreadNonPaged; // rax

  v4 = a2;
  v5 = a1;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( *(int *)(CurrentThreadNonPaged[61] + 28LL) <= 0 )
    return xxxSleepThread2(v5, v4, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(v5, v4);
}
