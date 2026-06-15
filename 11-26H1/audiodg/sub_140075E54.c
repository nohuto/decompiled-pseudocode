/*
 * XREFs of sub_140075E54 @ 0x140075E54
 * Callers:
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 *     sub_14007DE90 @ 0x14007DE90 (sub_14007DE90.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall sub_140075E54(HSTRING *string)
{
  if ( WindowsCreateStringReference(
         L"Windows.Storage.Streams.DataReader",
         0x22u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
