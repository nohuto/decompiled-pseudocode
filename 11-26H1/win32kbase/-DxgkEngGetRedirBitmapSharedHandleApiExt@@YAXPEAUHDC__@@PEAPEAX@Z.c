/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x14013F360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(HDC, void **); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 272LL);
  if ( v4 && v4() >= 0 )
  {
    v6 = *(void (__fastcall **)(HDC, void **))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 280LL);
    if ( v6 )
      v6(a1, a2);
  }
}
