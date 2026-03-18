/*
 * XREFs of RIMApiSetIsPointerInputTypeRedirected @ 0x14013B8B4
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     RIMUpdatePrimaryDevice @ 0x14013B858 (RIMUpdatePrimaryDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMApiSetIsPointerInputTypeRedirected(int a1, int a2, int a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v3 = 1;
  if ( a1 == 2 )
  {
    v3 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(2, a2, a3) + 336) )
    {
      v8 = *(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 340);
LABEL_8:
      LOBYTE(v3) = v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    }
  }
  else if ( a1 == 3 )
  {
    v3 = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(3, a2, a3) + 344) )
    {
      v8 = *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 348);
      goto LABEL_8;
    }
  }
  return v3;
}
