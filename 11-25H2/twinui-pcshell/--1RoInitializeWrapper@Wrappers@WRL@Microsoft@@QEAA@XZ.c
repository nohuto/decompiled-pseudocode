/*
 * XREFs of ??1RoInitializeWrapper@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802CFD10
 * Callers:
 *     __lambda_e637c9f76490f66fe2e1ec9f853f38ce_::operator()_::_1_::dtor$1 @ 0x1806B5B81 (__lambda_e637c9f76490f66fe2e1ec9f853f38ce_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper(
        Microsoft::WRL::Wrappers::RoInitializeWrapper *this)
{
  if ( *(int *)this >= 0 )
    RoUninitialize();
}
