/*
 * XREFs of ApiSetGetUndimSourceInputTypeMask @ 0x140225FF0
 * Callers:
 *     ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x14014A6C4 (-InitDimAndWakeSources@CInputGlobals@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetUndimSourceInputTypeMask(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  result = 0LL;
  if ( *(_QWORD *)(v2 + 7328) )
    return (*(__int64 (**)(void))(v2 + 7328))();
  return result;
}
