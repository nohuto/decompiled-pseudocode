/*
 * XREFs of StringCbLengthW @ 0x14047D11C
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140987380 (PfVerifyScenarioBuffer.c)
 *     sub_140B638AC @ 0x140B638AC (sub_140B638AC.c)
 *     sub_140B6BD78 @ 0x140B6BD78 (sub_140B6BD78.c)
 *     sub_140B6C938 @ 0x140B6C938 (sub_140B6C938.c)
 *     sub_140B6DDD8 @ 0x140B6DDD8 (sub_140B6DDD8.c)
 *     sub_140B701DC @ 0x140B701DC (sub_140B701DC.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
