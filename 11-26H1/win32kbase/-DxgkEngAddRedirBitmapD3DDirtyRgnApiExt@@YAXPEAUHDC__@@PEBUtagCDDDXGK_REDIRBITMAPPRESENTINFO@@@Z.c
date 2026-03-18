/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x140140610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(HDC, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 288LL);
  if ( v4 && v4() >= 0 )
  {
    v6 = *(void (__fastcall **)(HDC, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5)
                                                                                                  + 24)
                                                                                      + 296LL);
    if ( v6 )
      v6(a1, a2);
  }
}
