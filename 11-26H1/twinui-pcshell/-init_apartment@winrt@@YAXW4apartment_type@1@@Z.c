/*
 * XREFs of ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x180453CFC
 * Callers:
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180453AC0 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     CoInitializeEx_0 @ 0x1802CA8F3 (CoInitializeEx_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

HRESULT winrt::init_apartment()
{
  HRESULT result; // eax
  unsigned int *v1; // rax
  __int64 v2; // r8
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  result = CoInitializeEx_0(0LL, 2u);
  if ( result < 0 )
  {
    v1 = (unsigned int *)winrt::impl::slim_source_location::current((__int64)v3);
    winrt::throw_hresult(v2, v1, v2);
  }
  return result;
}
