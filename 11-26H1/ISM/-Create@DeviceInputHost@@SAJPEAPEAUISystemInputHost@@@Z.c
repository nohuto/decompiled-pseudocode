/*
 * XREFs of ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x1800592E8
 * Callers:
 *     CreateSystemInputHost @ 0x1800591B0 (CreateSystemInputHost.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@ISMTestMode@@SAX_N@Z @ 0x1800593F4 (-Create@ISMTestMode@@SAX_N@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x180096D40 (-Create@ISMScenarios@@SAXW4ISMScenario@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeviceInputHost::Create(struct ISystemInputHost **a1)
{
  unsigned int v2; // ebx
  DeviceInputHost *v4; // rax
  DeviceInputHost *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ISMTestMode::Create((bool)a1);
  ISMScenarios::Create(1LL);
  if ( !a1 )
  {
    v2 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x80070057LL,
      v8);
    return v2;
  }
  v4 = (DeviceInputHost *)RefCountedObject::operator new(0x48uLL);
  if ( v4 )
    v5 = DeviceInputHost::DeviceInputHost(v4);
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x8007000ELL,
      v8);
    return v2;
  }
  v6 = (**(__int64 (__fastcall ***)(DeviceInputHost *, GUID *, struct ISystemInputHost **))v5)(
         v5,
         &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
         a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)(unsigned int)v6,
      v8);
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
}
