/*
 * XREFs of sub_1800C1830 @ 0x1800C1830
 * Callers:
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 * Callees:
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 */

__int64 __fastcall sub_1800C1830(__int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800425BC(a1, &v4, a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800C1877LL);
  }
  return v5 + 40;
}
