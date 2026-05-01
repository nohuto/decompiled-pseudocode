/*
 * XREFs of ?IsValidState@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEBA_NAEBW4CloudPCState@3456@@Z @ 0x1806287E4
 * Callers:
 *     _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x180624938 (_lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::IsValidState(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const enum winrt::Windows::Internal::Shell::CloudPCState *a2)
{
  return *(_DWORD *)a2 != 100;
}
