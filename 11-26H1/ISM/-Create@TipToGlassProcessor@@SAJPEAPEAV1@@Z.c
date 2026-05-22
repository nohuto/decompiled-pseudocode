/*
 * XREFs of ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x18007FCB8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008DAC8 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TipToGlassProcessor::Create(struct TipToGlassProcessor **a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v3 = RefCountedObject::operator new(0x20uLL);
    v7 = 0LL;
    if ( v3 )
    {
      v3[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v3 + 4) = 1;
      *v3 = &TipToGlassProcessor::`vftable'{for `IContextualProcessor'};
      v3[1] = &TipToGlassProcessor::`vftable'{for `RefCountedObject'};
      *((_BYTE *)v3 + 24) = 0;
      *a1 = (struct TipToGlassProcessor *)v3;
    }
    else
    {
      v1 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\"
                      "lib\\tiptoglassprocessor.cpp",
        (const char *)0x8007000ELL,
        v5);
    }
    std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(&v7);
  }
  else
  {
    v1 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\l"
                    "ib\\tiptoglassprocessor.cpp",
      (const char *)0x80070057LL,
      v5);
  }
  return v1;
}
