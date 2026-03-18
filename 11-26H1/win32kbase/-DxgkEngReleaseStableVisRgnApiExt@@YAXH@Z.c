/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXH@Z @ 0x1401410C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngReleaseStableVisRgnApiExt(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(_QWORD); // rax

  v1 = a1;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 336LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 344LL);
    if ( v4 )
      v4(v1);
  }
}
