/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1400FC080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void (__fastcall *v7)(void *, _QWORD); // rax

  v2 = a2;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 400LL);
  if ( v4 && v4() >= 0 )
  {
    v7 = *(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 408LL);
    if ( v7 )
      v7(a1, v2);
  }
}
