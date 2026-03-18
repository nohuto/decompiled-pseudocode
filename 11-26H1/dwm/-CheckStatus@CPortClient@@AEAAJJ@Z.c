/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002464
 * Callers:
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002398 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x140002CBC (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x14000D3E4 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 1, 0);
  return a2;
}
