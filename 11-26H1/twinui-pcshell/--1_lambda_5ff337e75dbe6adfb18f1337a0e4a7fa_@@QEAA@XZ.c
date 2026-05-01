/*
 * XREFs of ??1_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@QEAA@XZ @ 0x1801D338C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::dtor$5 @ 0x1806DB2FD (_winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--subscribe_to_service.c)
 *     _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::dtor$29 @ 0x1806DB30F (_winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--subscri_ea_1806DB30F.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801D33A8 (-unconditional_release_ref@-$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 */

void __fastcall _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_::~_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_(
        _lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_ *this)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::unconditional_release_ref();
}
