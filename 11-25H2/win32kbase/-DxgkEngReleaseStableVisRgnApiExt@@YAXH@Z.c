/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXH@Z @ 0x1400FF0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngReleaseStableVisRgnApiExt(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(_QWORD); // rax

  v2 = a1;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 336LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 344LL);
    if ( v6 )
      v6(v2);
  }
}
