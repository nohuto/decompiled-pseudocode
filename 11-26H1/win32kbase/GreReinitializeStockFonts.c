/*
 * XREFs of GreReinitializeStockFonts @ 0x14018F9B0
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReinitializeStockFonts(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int (*v4)(void); // rax
  __int64 v5; // rcx
  __int64 result; // rax
  void (__fastcall *v7)(_QWORD); // rax

  v3 = a1;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 864LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24);
      v7 = *(void (__fastcall **)(_QWORD))(v5 + 872);
      if ( v7 )
        v7(v3);
    }
  }
  result = W32GetSessionState(v5);
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)(result + 88) + 1204LL) = 1;
  return result;
}
