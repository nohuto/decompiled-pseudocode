/*
 * XREFs of ??D?$fast_iterator@UJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x180220BE8
 * Callers:
 *     GetStoredEnterprisePinGeneration @ 0x18066BBDC (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@I@Z @ 0x180220C10 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJs.c)
 */

__int64 __fastcall winrt::impl::fast_iterator<winrt::Windows::Data::Json::JsonArray>::operator*(__int64 a1, __int64 a2)
{
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::GetAt(
    *(_QWORD *)a1,
    a2,
    *(unsigned int *)(a1 + 8));
  return a2;
}
