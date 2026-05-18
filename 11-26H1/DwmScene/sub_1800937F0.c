/*
 * XREFs of sub_1800937F0 @ 0x1800937F0
 * Callers:
 *     sub_1800923D0 @ 0x1800923D0 (sub_1800923D0.c)
 * Callees:
 *     sub_18006F430 @ 0x18006F430 (sub_18006F430.c)
 *     sub_1800901F8 @ 0x1800901F8 (sub_1800901F8.c)
 */

__int64 __fastcall sub_1800937F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = sub_18006F430(a2);
  sub_1800901F8(v3, &v6, v4, v2);
  if ( !v7 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180093837LL);
  }
  return v7 + 48;
}
