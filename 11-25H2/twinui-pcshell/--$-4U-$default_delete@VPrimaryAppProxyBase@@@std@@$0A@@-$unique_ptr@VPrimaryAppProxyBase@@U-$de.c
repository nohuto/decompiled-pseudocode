/*
 * XREFs of ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DCA1C
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800E5EAC (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x1800BD5FC (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<SnapLayoutBase>::operator()((__int64)a1, v4);
  return a1;
}
