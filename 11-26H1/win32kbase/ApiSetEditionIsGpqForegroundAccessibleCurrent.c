/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleCurrent(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(_QWORD); // rax

  v1 = a1;
  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4664LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4672LL);
      if ( v5 )
        return v5(v1);
    }
  }
  return v2;
}
