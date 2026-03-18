/*
 * XREFs of ApiSetEditionIsGetKeyStateBlocked @ 0x140060D68
 * Callers:
 *     AllocQueue @ 0x140060510 (AllocQueue.c)
 *     NtUserGetKeyboardState @ 0x140060B00 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 ApiSetEditionIsGetKeyStateBlocked()
{
  unsigned int v0; // ebx
  int (*v1)(void); // rax
  unsigned int (*v2)(void); // rax

  v0 = 0;
  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 728LL);
  if ( v1 )
  {
    if ( v1() >= 0 )
    {
      v2 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 736LL);
      if ( v2 )
        return v2();
    }
  }
  return v0;
}
