/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1401DE660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(struct tagXSTATE *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2488LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(struct tagXSTATE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 2496LL);
    if ( v4 )
      v4(a1);
  }
}
