/*
 * XREFs of ApiSetEditionUserBeep @ 0x140227F44
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionUserBeep(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(__int64, __int64); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5376LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 5384LL);
      if ( v4 )
        return v4(440LL, 125LL);
    }
  }
  return v1;
}
