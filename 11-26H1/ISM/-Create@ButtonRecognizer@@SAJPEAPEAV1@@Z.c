/*
 * XREFs of ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1801AA560
 * Callers:
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1801A95C0 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??0ButtonRecognizer@@QEAA@XZ @ 0x1801AA278 (--0ButtonRecognizer@@QEAA@XZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801AAA5C (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 */

__int64 __fastcall ButtonRecognizer::Create(struct ButtonRecognizer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  ButtonRecognizer *v4; // rax
  ButtonRecognizer *v5; // rbx
  ButtonRecognizer *v6; // rdi
  unsigned __int64 v7; // r9
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ButtonRecognizer *v11; // [rsp+30h] [rbp+8h] BYREF
  ButtonRecognizer *v12; // [rsp+38h] [rbp+10h]

  v11 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 90LL;
LABEL_8:
    v7 = v2;
    goto LABEL_9;
  }
  v4 = (ButtonRecognizer *)RefCountedObject::operator new(0xD0uLL);
  v5 = v4;
  v12 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xD0uLL);
    v6 = ButtonRecognizer::ButtonRecognizer(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v11 = v6;
  if ( !v6 )
  {
    v2 = -2147024882;
    v3 = 95LL;
    goto LABEL_8;
  }
  v8 = ButtonRecognizer::Initialize(v6);
  v2 = v8;
  if ( v8 >= 0 )
  {
    v11 = 0LL;
    *a1 = v6;
    v2 = 0;
    goto LABEL_13;
  }
  v7 = (unsigned int)v8;
  v3 = 98LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return v2;
}
