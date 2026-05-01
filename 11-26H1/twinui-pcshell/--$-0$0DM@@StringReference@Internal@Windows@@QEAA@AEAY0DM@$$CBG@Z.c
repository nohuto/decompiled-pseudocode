/*
 * XREFs of ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x180213EC8
 * Callers:
 *     _lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef_::operator() @ 0x18043A8C4 (_lambda_d52ccf2fb40d48112c11e0ea0a6fb7ef_--operator().c)
 *     _lambda_9378343b320afa124df06e8933a6190f_::operator() @ 0x180445E08 (_lambda_9378343b320afa124df06e8933a6190f_--operator().c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[60])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
