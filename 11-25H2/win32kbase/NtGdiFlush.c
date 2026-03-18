/*
 * XREFs of NtGdiFlush @ 0x1400ED2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiFlush(__int64 a1, __int64 a2)
{
  int (*v2)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void (*v5)(void); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2280LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 24) + 2288LL);
      if ( v5 )
        v5();
    }
  }
  return 0LL;
}
