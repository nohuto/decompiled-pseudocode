/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x14014B860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(struct tagHOOK *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2440LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(struct tagHOOK *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 2448LL);
    if ( v4 )
      v4(a1);
  }
}
