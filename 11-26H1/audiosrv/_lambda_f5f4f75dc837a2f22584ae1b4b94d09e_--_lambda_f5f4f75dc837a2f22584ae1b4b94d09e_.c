/*
 * XREFs of _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_ @ 0x180154700
 * Callers:
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180156D60 (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 */

__int64 __fastcall lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    (_QWORD *)a1,
    *a2);
  *(_DWORD *)(a1 + 8) = *a3;
  return a1;
}
