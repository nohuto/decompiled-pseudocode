/*
 * XREFs of ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800216A4
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x1800217A8 (--0HidLampMultiUpdateReportBuilder@@AEAA@XZ.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x180021860 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampMultiUpdateReportBuilder::CreateAndInitialize(
        struct HidLampArrayDevice *a1,
        int a2,
        struct HidLampMultiUpdateReportBuilder **a3)
{
  HidLampMultiUpdateReportBuilder *v6; // rax
  HidLampMultiUpdateReportBuilder *updated; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (HidLampMultiUpdateReportBuilder *)RefCountedObject::operator new(0x50uLL);
  if ( v6 )
    updated = HidLampMultiUpdateReportBuilder::HidLampMultiUpdateReportBuilder(v6);
  else
    updated = 0LL;
  if ( updated )
  {
    v8 = HidLampMultiUpdateReportBuilder::Initialize(updated, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
        (const char *)(unsigned int)v8,
        v11);
      InputContext::Release(updated);
      return v9;
    }
    else
    {
      *a3 = updated;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL,
      v11);
    return 2147942414LL;
  }
}
