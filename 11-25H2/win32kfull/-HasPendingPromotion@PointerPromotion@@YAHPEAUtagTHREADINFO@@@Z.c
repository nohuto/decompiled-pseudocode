/*
 * XREFs of ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x14013A968
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x140139330 (-HasPendingPromotion@@YAHXZ.c)
 */

__int64 __fastcall PointerPromotion::HasPendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v5 = 0;
  if ( HasPendingPromotion((__int64)this, (__int64)a2) )
    return *(_QWORD *)(W32GetUserSessionState(v4, v3) + 16648) == (_QWORD)this;
  return v5;
}
