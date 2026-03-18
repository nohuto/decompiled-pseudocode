/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x140142860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(struct tagIMC *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2520LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(struct tagIMC *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 2528LL);
    if ( v4 )
      v4(a1);
  }
}
