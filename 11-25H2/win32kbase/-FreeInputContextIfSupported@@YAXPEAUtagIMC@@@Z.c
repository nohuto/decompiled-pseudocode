/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x140104870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(struct tagIMC *); // rax

  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2896LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(void (__fastcall **)(struct tagIMC *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2904LL);
    if ( v6 )
      v6(a1);
  }
}
