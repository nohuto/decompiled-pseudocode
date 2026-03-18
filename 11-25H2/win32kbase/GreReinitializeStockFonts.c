/*
 * XREFs of GreReinitializeStockFonts @ 0x140150400
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReinitializeStockFonts(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int (*v4)(void); // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v2 = a2;
  v3 = a1;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 864LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v6) + 24);
      v8 = *(void (__fastcall **)(_QWORD))(v5 + 872);
      if ( v8 )
        v8(v3);
    }
  }
  result = W32GetSessionState(v5);
  if ( v2 )
    *(_DWORD *)(*(_QWORD *)(result + 88) + 1116LL) = 1;
  return result;
}
