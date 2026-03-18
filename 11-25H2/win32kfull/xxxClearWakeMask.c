/*
 * XREFs of xxxClearWakeMask @ 0x14001ECD0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserClearWakeMask @ 0x140294DB0 (NtUserClearWakeMask.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxClearWakeMask(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(v3 + 488) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(v3 + 1304) )
    xxxUpdateInputHangInfo(0LL, 1LL);
  result = 1LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v3 + 488) + 16LL), 0);
  *(_QWORD *)(v3 + 1360) &= ~0x400uLL;
  return result;
}
