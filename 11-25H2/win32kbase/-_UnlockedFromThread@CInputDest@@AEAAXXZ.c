/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1401F7314
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x14009F128 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_ @ 0x1401F6CF0 (_lambda_3cf49cee9a6682970a5610bc379494ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3CF8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2)
{
  bool v3; // zf

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1159);
  if ( !*((_BYTE *)this + 112) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1160);
  v3 = (*((_BYTE *)this + 112))-- == 1;
  if ( v3
    && ((*(_BYTE *)(HMPheFromObject(*((int **)this + 10), a2) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 1152)
     || CInputDest::TestWindowFlag(this, 896)) )
  {
    CInputDest::~CInputDest(this);
  }
}
