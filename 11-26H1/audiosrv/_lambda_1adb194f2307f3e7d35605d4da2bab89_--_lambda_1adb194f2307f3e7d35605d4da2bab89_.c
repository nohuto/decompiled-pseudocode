/*
 * XREFs of _lambda_1adb194f2307f3e7d35605d4da2bab89_::_lambda_1adb194f2307f3e7d35605d4da2bab89_ @ 0x180154660
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x1800875F0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

_QWORD *__fastcall lambda_1adb194f2307f3e7d35605d4da2bab89_::_lambda_1adb194f2307f3e7d35605d4da2bab89_(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rax

  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    a1,
    *a2);
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = a3[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  return a1;
}
