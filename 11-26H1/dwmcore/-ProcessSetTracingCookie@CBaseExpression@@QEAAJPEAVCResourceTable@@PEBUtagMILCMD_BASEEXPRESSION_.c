/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801A9D90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  CExpressionManager *v6; // rcx

  if ( *((_DWORD *)this + 55) )
  {
    if ( !*((_DWORD *)a3 + 2) )
      --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 200LL);
  }
  else if ( *((_DWORD *)a3 + 2) )
  {
    v6 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
    ++*((_DWORD *)v6 + 50);
    CExpressionManager::Invalidate(v6);
  }
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 2);
  return 0LL;
}
