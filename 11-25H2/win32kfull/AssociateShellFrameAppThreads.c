/*
 * XREFs of AssociateShellFrameAppThreads @ 0x14026C424
 * Callers:
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateShellFrameAppThreads(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  result = Win32AllocPoolZInit(40LL, 2037609301LL);
  v6 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(result + 16) = a1;
    *(_QWORD *)(result + 24) = a2;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(result + 32) = v7;
    v8 = W32GetUserSessionState(v7, v5) + 19104;
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
      __fastfail(3u);
    v6[1] = v8;
    *v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    *(_QWORD *)v8 = v6;
    return 1LL;
  }
  return result;
}
