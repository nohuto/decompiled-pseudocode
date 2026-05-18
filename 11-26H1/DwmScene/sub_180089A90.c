/*
 * XREFs of sub_180089A90 @ 0x180089A90
 * Callers:
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

void __fastcall sub_180089A90(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = (_DWORD *)o__errno();
  v6 = sub_1800148EC(a1);
  v8 = 0LL;
  *v5 = 0;
  v7 = v6;
  o_strtol(v6, &v8, a3);
  if ( v7 == v8 )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v5 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}
