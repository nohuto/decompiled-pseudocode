/*
 * XREFs of ?SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18012C230
 * Callers:
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180055C7C (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180048340 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SetEndpointLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v6[16]; // [rsp+38h] [rbp-30h] BYREF

  v5 = a3;
  result = StringCchPrintfW(v6, 13LL, L"Level:%x", a2);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, __int64, __int64 *, int))(*(_QWORD *)a1 + 128LL))(
             a1,
             v6,
             11LL,
             &v5,
             8);
  return result;
}
