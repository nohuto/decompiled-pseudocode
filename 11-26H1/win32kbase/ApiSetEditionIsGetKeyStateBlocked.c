/*
 * XREFs of ApiSetEditionIsGetKeyStateBlocked @ 0x1400D300C
 * Callers:
 *     AllocQueue @ 0x1400D2A10 (AllocQueue.c)
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsGetKeyStateBlocked(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v5)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 688LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v5 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 696LL);
      if ( v5 )
        return v5();
    }
  }
  return v1;
}
