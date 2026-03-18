/*
 * XREFs of RIMApiSetIsPointerInputTypeRedirected @ 0x1400D9BF0
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1400D94CC (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsPointerInputTypeRedirected(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 1;
  if ( (_DWORD)a1 == 2 )
  {
    v2 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 336) )
    {
      v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 340);
LABEL_8:
      LOBYTE(v2) = v6 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    }
  }
  else if ( (_DWORD)a1 == 3 )
  {
    v2 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 344) )
    {
      v6 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 348);
      goto LABEL_8;
    }
  }
  return v2;
}
