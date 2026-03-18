/*
 * XREFs of zzzWakeInputIdle @ 0x14001EC00
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x14001E960 (xxxGetInputEvent.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall zzzWakeInputIdle(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v3; // rax
  struct _KEVENT *v4; // rcx
  __int64 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  v3 = *(_QWORD *)(a1 + 464);
  if ( !*(_QWORD *)(v3 + 328) )
    *(_QWORD *)(v3 + 328) = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 464) + 328LL) == a1 )
  {
    EtwTraceWakeInputIdle(0LL, a1);
    v4 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
    if ( v4 )
    {
      if ( v4 == (struct _KEVENT *)-1LL )
        goto LABEL_11;
      KeSetEvent(v4, 1, 0);
      ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
    }
    *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
  }
LABEL_11:
  result = *(unsigned int *)(CurrentProcessWin32Process + 12);
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = result & 0xFFFFFFFB;
    return zzzCalcStartCursorHide(0LL, 0LL);
  }
  return result;
}
