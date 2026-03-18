/*
 * XREFs of _ThreadMessageQueueAttached @ 0x140175180
 * Callers:
 *     NtUserThreadMessageQueueAttached @ 0x140175140 (NtUserThreadMessageQueueAttached.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall ThreadMessageQueueAttached(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *CurrentThreadNonPaged; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rax

  v2 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0;
  if ( !CurrentThreadNonPaged )
    return 0LL;
  v5 = *CurrentThreadNonPaged;
  if ( !*CurrentThreadNonPaged )
    return 0LL;
  *(_QWORD *)(v5 + 1360) &= ~0x200uLL;
  if ( v2 )
  {
    v12 = PtiFromThreadId(v2);
    if ( v12 )
    {
      LOBYTE(v4) = *(_QWORD *)(v5 + 472) == *(_QWORD *)(v12 + 472);
      return v4;
    }
    UserSetLastError(87);
    return 0LL;
  }
  v6 = *(_QWORD *)(v5 + 472);
  v7 = 1;
  v8 = 0;
  v9 = *(_QWORD *)(v6 + 504);
  if ( !v9 || (v8 = 1, !*(_QWORD *)(v9 + 1688)) )
  {
    v10 = *(_QWORD *)(v6 + 512);
    if ( !v10 || (unsigned int)(v8 + 1) <= 1 && !*(_QWORD *)(v10 + 1696) )
      return 0;
  }
  return v7;
}
