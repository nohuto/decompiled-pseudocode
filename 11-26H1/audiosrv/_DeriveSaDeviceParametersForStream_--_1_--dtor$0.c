/*
 * XREFs of _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x1801643DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall DeriveSaDeviceParametersForStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 72));
}
