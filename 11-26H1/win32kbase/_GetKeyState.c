/*
 * XREFs of _GetKeyState @ 0x140087680
 * Callers:
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int16 __fastcall GetKeyState(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 *CurrentThreadWin32Thread; // rax
  __int16 v4; // r9
  __int64 v5; // rax
  int v6; // r8d
  __int16 result; // ax

  v2 = a1;
  if ( (unsigned int)a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    return 0;
  }
  else
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    HIBYTE(v4) = 0;
    if ( CurrentThreadWin32Thread )
      v5 = *CurrentThreadWin32Thread;
    else
      v5 = 0LL;
    v6 = *(unsigned __int8 *)(((unsigned __int64)v2 >> 2) + *(_QWORD *)(v5 + 464) + 280);
    LOBYTE(v4) = _bittest(&v6, (unsigned __int8)(2 * (v2 & 3) + 1));
    result = (unsigned __int8)v4 | 0xFF80;
    if ( !_bittest(&v6, 2 * (v2 & 3)) )
      return v4;
  }
  return result;
}
