/*
 * XREFs of NtGdiFlush @ 0x140135D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiFlush(__int64 a1)
{
  int (*v1)(void); // rax
  __int64 v2; // rcx
  void (*v3)(void); // rax

  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2256LL);
  if ( v1 )
  {
    if ( v1() >= 0 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24) + 2264LL);
      if ( v3 )
        v3();
    }
  }
  return 0LL;
}
