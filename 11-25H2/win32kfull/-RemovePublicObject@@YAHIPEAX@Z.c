/*
 * XREFs of ?RemovePublicObject@@YAHIPEAX@Z @ 0x1402B1758
 * Callers:
 *     FreeDdeXact @ 0x14026C370 (FreeDdeXact.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402B1EA0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1402B1540 (-GiveObject@@YAHIPEAXK@Z.c)
 */

__int64 __fastcall RemovePublicObject(__int64 a1, void *a2)
{
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rsi

  v3 = a1;
  if ( (_DWORD)a1 == 2 || (_DWORD)a1 == 9 || (_DWORD)a1 == 130 )
  {
    v4 = 0LL;
    for ( i = *(__int64 **)(W32GetUserSessionState(a1, a2) + 19792); i; i = (__int64 *)*i )
    {
      if ( (void *)i[1] == a2 )
      {
        if ( (*((_DWORD *)i + 4))-- == 1 )
        {
          GiveObject(v3, a2, *((_DWORD *)i + 5));
          v10 = (__int64 *)*i;
          if ( v4 )
            *v4 = v10;
          else
            *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19792) = v10;
          Win32FreePool(i);
        }
        return 1LL;
      }
      v4 = i;
    }
  }
  return 0LL;
}
