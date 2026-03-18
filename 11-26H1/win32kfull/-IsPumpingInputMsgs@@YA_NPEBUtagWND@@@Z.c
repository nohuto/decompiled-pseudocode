/*
 * XREFs of ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x1400486EC
 * Callers:
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPumpingInputMsgs(const struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // di
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *i; // rbx
  int v10; // eax

  v2 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(v2 + 1304)
    || (unsigned int)(v5 - *(_DWORD *)(v2 + 1304)) <= *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, a2)
                                                                + 69104)
    || (unsigned int)PsGetThreadFreezeCount(*(_QWORD *)v2) )
  {
    return 1;
  }
  for ( i = *(__int64 **)(v2 + 1288); i; i = (__int64 *)*i )
  {
    v10 = *((_DWORD *)i + 4);
    if ( (const struct tagWND *)i[1] == a1 )
    {
      if ( !v10 || (unsigned int)(v5 - *((_DWORD *)i + 4)) <= *(_DWORD *)(W32GetUserSessionState(v7, v6) + 69104) )
        return 1;
      return v4;
    }
    if ( v10 )
    {
      v7 = *(unsigned int *)(W32GetUserSessionState(v7, v6) + 69104);
      if ( (int)v5 - *((_DWORD *)i + 4) > (unsigned int)v7 )
        return v4;
    }
  }
  return v4;
}
