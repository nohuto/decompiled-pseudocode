/*
 * XREFs of ??0ApplicationViewOperation@@QEAA@XZ @ 0x180116CEC
 * Callers:
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180116BF4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewOperation@@@Z @ 0x1804DCC24 (--$MakeAndInitialize@VApplicationViewOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVApplicat.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIApplicationViewOperation@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180116DA8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIApplicationViewOperation@@VFtmBase@2.c)
 */

ApplicationViewOperation *__fastcall ApplicationViewOperation::ApplicationViewOperation(ApplicationViewOperation *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewOperation,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewOperation,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &ApplicationViewOperation::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IApplicationViewOperation,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &ApplicationViewOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_BYTE *)this + 84) = 0;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_WORD *)this + 52) = 0;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_DWORD *)this + 29) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_OWORD *)((char *)this + 124) = 0LL;
  *(_OWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_BYTE *)this + 228) = 0;
  *((_QWORD *)this + 29) = 0LL;
  return this;
}
