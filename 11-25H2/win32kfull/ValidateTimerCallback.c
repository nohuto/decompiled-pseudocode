/*
 * XREFs of ValidateTimerCallback @ 0x140142700
 * Callers:
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD **v4; // r9
  _QWORD *i; // rcx
  HANDLE v7; // rbx

  v3 = a1;
  if ( *(_DWORD *)(a1 + 672) <= 0x501u && (*(_DWORD *)(a1 + 688) & 0x1000000) != 0 )
  {
    a1 = 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0xC) == 0 )
    {
      v7 = *(HANDLE *)(W32GetUserSessionState(0LL, a2) + 63544);
      if ( PsGetProcessId(**(PEPROCESS **)(v3 + 464)) != v7 )
        return 1LL;
    }
  }
  v4 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 57544);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(*(i - 6) + 464LL) == *(_QWORD *)(v3 + 464) && (*(_DWORD *)(i - 3) & 6) == 0 && *(i - 5) == a2 )
      return 1LL;
  }
  return 0LL;
}
