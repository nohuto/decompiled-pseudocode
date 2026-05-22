/*
 * XREFs of ?Initialize@TouchProcessor@@IEAAJXZ @ 0x1801C9E78
 * Callers:
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801C9D60 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x1801A0774 (--0InputInfoValidator@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchProcessor::Initialize(TouchProcessor *this)
{
  InputInfoValidator *v2; // rax
  InputInfoValidator *v3; // rbx
  InputInfoValidator *v4; // rax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (InputInfoValidator *)RefCountedObject::operator new(0x50uLL);
  if ( v2 )
    v3 = InputInfoValidator::InputInfoValidator(v2);
  else
    v3 = 0LL;
  v4 = (InputInfoValidator *)*((_QWORD *)this + 9);
  if ( v4 != v3 )
  {
    if ( v3 )
      (*(void (__fastcall **)(InputInfoValidator *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v3;
    v4 = v3;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (InputInfoValidator *)*((_QWORD *)this + 9);
    }
  }
  if ( v4 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
