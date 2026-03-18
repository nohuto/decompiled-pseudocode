/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x14019936C
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fd77beed04b6b1a39114e0f43ae1b0ce_@@CA@PEAVCMonitorTopology@@@Z @ 0x1401C6D50 (-_lambda_invoker_cdecl_@_lambda_fd77beed04b6b1a39114e0f43ae1b0ce_@@CA@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
}
