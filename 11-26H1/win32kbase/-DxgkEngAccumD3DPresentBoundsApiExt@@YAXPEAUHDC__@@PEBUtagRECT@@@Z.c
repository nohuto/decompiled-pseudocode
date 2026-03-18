/*
 * XREFs of ?DxgkEngAccumD3DPresentBoundsApiExt@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x14015EDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(HDC, const struct tagRECT *); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 304LL);
  if ( v4 && v4() >= 0 )
  {
    v6 = *(void (__fastcall **)(HDC, const struct tagRECT *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24) + 312LL);
    if ( v6 )
      v6(a1, a2);
  }
}
