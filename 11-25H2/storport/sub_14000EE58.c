/*
 * XREFs of sub_14000EE58 @ 0x14000EE58
 * Callers:
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_14000EE58(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 40));
  if ( v2 < 0 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x20) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_140055930(off_140168120->AttachedDevice, 10LL, &unk_14014B9D8);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 40), 1u);
    return 0;
  }
  else
  {
    v3 = 0;
    if ( !v2 )
    {
      v3 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 208), 1);
    }
  }
  return v3;
}
