/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_8441d61fff3622fd578730ad9b988339_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18061DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDataWriter@Streams@Storage@23@XZ @ 0x18061E70C (--$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_8441d61fff3622fd578730ad9b988339_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::DataWriter>(a2, a1);
  return a1;
}
