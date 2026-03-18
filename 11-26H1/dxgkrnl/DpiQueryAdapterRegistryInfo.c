/*
 * XREFs of DpiQueryAdapterRegistryInfo @ 0x14039137C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DpiQueryAdapterRegistryInfo(__int64 a1, char *a2)
{
  __int64 result; // rax
  int v5; // ebx
  bool v6; // bl

  memset(a2, 0, 0x820uLL);
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.AdapterString", a2, 518LL, 2);
  v5 = result;
  if ( (int)result >= 0 || (_DWORD)result == -1073741772 )
  {
    result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.BiosString", a2 + 520, 518LL, 2);
    if ( (int)result >= 0 )
    {
      v6 = 1;
    }
    else
    {
      v6 = v5 >= 0;
      if ( (_DWORD)result != -1073741772 )
        return result;
    }
    result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.DacType", a2 + 1040, 518LL, 2);
    if ( (int)result >= 0 )
    {
      v6 = 1;
    }
    else if ( (_DWORD)result != -1073741772 )
    {
      return result;
    }
    result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.ChipType", a2 + 1560, 518LL, 2);
    if ( (_DWORD)result == -1073741772 && v6 )
      return 0LL;
  }
  return result;
}
