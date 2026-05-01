/*
 * XREFs of ??0CWRLObjectWithSite@@QEAA@XZ @ 0x18007FFBC
 * Callers:
 *     ??0?$Selector@VCWRLObjectWithSite@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007FF58 (--0-$Selector@VCWRLObjectWithSite@@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$.c)
 * Callees:
 *     <none>
 */

CWRLObjectWithSite *__fastcall CWRLObjectWithSite::CWRLObjectWithSite(CWRLObjectWithSite *this)
{
  CWRLObjectWithSite *result; // rax

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
