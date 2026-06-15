/*
 * XREFs of ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18013AF88
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180071FC8 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007D194 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     _lambda_2105041f0c5016ef5fdaddf32fc575ff_::operator() @ 0x1801357F0 (_lambda_2105041f0c5016ef5fdaddf32fc575ff_--operator().c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::IsSPDIFEndpoint(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *v3; // rax
  bool v4; // bl
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID Ptr; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 1030;
  AcquireSRWLockExclusive(this + 1030);
  v9 = v2;
  if ( !LODWORD(this[1031].Ptr) )
  {
    LODWORD(this[1031].Ptr) = 2;
    if ( (unsigned int)CEndpointCharacteristics::FormFactor((CEndpointCharacteristics *)this) - 7 <= 1
      || (Ptr = this[5].Ptr,
          v7 = 0,
          v3 = lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(
                 v6,
                 (__int64)&Ptr,
                 (__int64)&v7),
          lambda_2105041f0c5016ef5fdaddf32fc575ff_::operator()((_BYTE **)v3),
          v7) )
    {
      LODWORD(this[1031].Ptr) = 1;
    }
  }
  v4 = LODWORD(this[1031].Ptr) == 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  return v4;
}
