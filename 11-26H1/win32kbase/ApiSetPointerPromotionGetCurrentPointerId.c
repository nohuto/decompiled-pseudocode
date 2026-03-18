/*
 * XREFs of ApiSetPointerPromotionGetCurrentPointerId @ 0x1401C1528
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x14006775C (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetPointerPromotionGetCurrentPointerId(__int64 a1)
{
  unsigned __int16 v1; // bx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned __int16 (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5824LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned __int16 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 5832LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
