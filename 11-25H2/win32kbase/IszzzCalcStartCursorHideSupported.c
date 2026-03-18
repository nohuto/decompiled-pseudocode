/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x140122358
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IszzzCalcStartCursorHideSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1072LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
