/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1401BE89C
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  int (*v6)(void); // rax
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(__int64, _QWORD, __int64); // rax

  v5 = 0;
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5152LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48)
                                                                   + 5160LL);
      if ( v8 )
        return v8(a1, 0LL, a3);
    }
  }
  return v5;
}
