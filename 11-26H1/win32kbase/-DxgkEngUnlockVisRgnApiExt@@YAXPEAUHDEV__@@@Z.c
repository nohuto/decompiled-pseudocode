/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x140141240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(HDEV); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 112LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(HDEV))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 120LL);
    if ( v4 )
      v4(a1);
  }
}
