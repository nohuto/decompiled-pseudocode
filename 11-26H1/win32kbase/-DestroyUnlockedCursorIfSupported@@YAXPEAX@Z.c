/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x14015E4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(void *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2408LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(void *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 2416LL);
    if ( v4 )
      v4(a1);
  }
}
