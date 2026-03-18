/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x14013F980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(void *, _QWORD); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 400LL);
  if ( v4 && v4() >= 0 )
  {
    v6 = *(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 408LL);
    if ( v6 )
      v6(a1, a2);
  }
}
