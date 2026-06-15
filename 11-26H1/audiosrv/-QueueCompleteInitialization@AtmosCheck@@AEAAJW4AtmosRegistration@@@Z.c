/*
 * XREFs of ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180156D60
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180155E5C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_ @ 0x1800C4208 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___ @ 0x18015400C (Windows--Internal--ComTaskPool--QueueTask__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___.c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_ @ 0x180154700 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_.c)
 */

__int64 __fastcall AtmosCheck::QueueCompleteInitialization(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  v6 = 1;
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v8,
    a1);
  v2 = (__int64 *)lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_(
                    (__int64)v7,
                    &v8,
                    &v6);
  LODWORD(v1) = Windows::Internal::ComTaskPool::QueueTask__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___(
                  v4,
                  v3,
                  *(_DWORD *)(v1 + 220),
                  v2);
  lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_(v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return (unsigned int)v1;
}
