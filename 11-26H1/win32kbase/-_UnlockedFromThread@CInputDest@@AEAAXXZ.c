/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1400875C0
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x140087568 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_ @ 0x140211D10 (_lambda_3cf49cee9a6682970a5610bc379494ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x140087B68 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, int a2, int a3)
{
  bool v4; // zf

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1159LL);
  if ( !*((_BYTE *)this + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1160LL);
  v4 = (*((_BYTE *)this + 112))-- == 1;
  if ( v4
    && ((*(_BYTE *)(HMPheFromObject(*((_DWORD **)this + 10), a2, a3) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 0x480u)
     || CInputDest::TestWindowFlag(this, 0x380u)) )
  {
    CInputDest::~CInputDest(this);
  }
}
