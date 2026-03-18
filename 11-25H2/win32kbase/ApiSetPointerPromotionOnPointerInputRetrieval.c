/*
 * XREFs of ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1400C55C4
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1400C4F80 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     PointerPromotionOnPointerInputRetrieval @ 0x140109A60 (PointerPromotionOnPointerInputRetrieval.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetPointerPromotionOnPointerInputRetrieval(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(void)
{
  unsigned int v6; // esi
  unsigned __int16 v7; // bp
  __int64 (*result)(void); // rax

  v6 = a2;
  v7 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6280LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))PointerPromotionOnPointerInputRetrieval(v7, v6, a3, a4);
  }
  return result;
}
