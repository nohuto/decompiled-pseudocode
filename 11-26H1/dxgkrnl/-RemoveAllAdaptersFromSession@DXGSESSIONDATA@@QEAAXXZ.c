/*
 * XREFs of ?RemoveAllAdaptersFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x140203584
 * Callers:
 *     DxgkDestroyCsrssProcess @ 0x140204FC0 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x140082134 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403FD334 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::RemoveAllAdaptersFromSession(DXGSESSIONDATA *this)
{
  char *v1; // rdi
  char *v2; // rbx
  SESSION_ADAPTER *v3; // rsi
  char *v4; // r14
  __int64 v5; // rcx
  char **v6; // rax

  v1 = (char *)this + 18584;
  v2 = (char *)*((_QWORD *)this + 2323);
  while ( v2 != v1 )
  {
    v3 = (SESSION_ADAPTER *)(v2 - 32);
    v4 = v2;
    v2 = *(char **)v2;
    SESSION_ADAPTER::Cleanup(v3);
    v5 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( v3 )
      SESSION_ADAPTER::`scalar deleting destructor'(v3);
  }
}
