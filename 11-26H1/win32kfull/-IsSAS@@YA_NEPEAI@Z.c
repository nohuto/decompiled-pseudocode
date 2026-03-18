/*
 * XREFs of ?IsSAS@@YA_NEPEAI@Z @ 0x1401E44F8
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     EditionDoHotKeys @ 0x1401E3D10 (EditionDoHotKeys.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionIsSAS @ 0x1401E44E0 (EditionIsSAS.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSAS(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // esi
  int v3; // ebp
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool result; // al
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx

  v2 = 0;
  v3 = (unsigned __int8)a1;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v2 >= 2 || !*(_DWORD *)(W32GetUserSessionState(a1, a2) + i + 14012) )
      return 0;
    if ( v3 == *(_DWORD *)(W32GetUserSessionState(v7, v6) + i + 14012) )
    {
      v9 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14004);
      if ( v9 == *(_DWORD *)(W32GetUserSessionState(v11, v10) + i + 14008) )
        break;
    }
    ++v2;
  }
  v12 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14004);
  result = 1;
  *a2 = v12;
  return result;
}
