/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x14019589C
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(__int64, _QWORD, __int64); // rax

  v5 = 0;
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5592LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v9 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48)
                                                                   + 5600LL);
      if ( v9 )
        return v9(a1, 0LL, a3);
    }
  }
  return v5;
}
