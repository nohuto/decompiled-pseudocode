/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1401399F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(HDC, _QWORD); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 352LL);
  if ( v4 && v4() >= 0 )
  {
    v6 = *(void (__fastcall **)(HDC, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 360LL);
    if ( v6 )
      v6(a1, a2);
  }
}
