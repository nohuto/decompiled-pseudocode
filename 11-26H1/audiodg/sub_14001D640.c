/*
 * XREFs of sub_14001D640 @ 0x14001D640
 * Callers:
 *     sub_14001D0C8 @ 0x14001D0C8 (sub_14001D0C8.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_14001D564 @ 0x14001D564 (sub_14001D564.c)
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_14004DAB4 @ 0x14004DAB4 (sub_14004DAB4.c)
 *     sub_14004F8D0 @ 0x14004F8D0 (sub_14004F8D0.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 * Callees:
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 */

void __fastcall sub_14001D640(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_14001D6A8(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
