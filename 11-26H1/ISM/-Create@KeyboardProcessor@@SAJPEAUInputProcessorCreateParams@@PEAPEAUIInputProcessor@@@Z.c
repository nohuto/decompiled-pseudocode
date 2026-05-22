/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18019B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180011120 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RefCountedObject::operator new(0x58uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)a1;
    v7 = *((_QWORD *)a1 + 1);
    v4[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 4) = 1;
    *v4 = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
    v4[4] = v6;
    v4[1] = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
    v4[3] = v7;
    *((_DWORD *)v4 + 11) = 300;
    *((_DWORD *)v4 + 10) = 0;
    v4[6] = 0LL;
    v4[8] = 0LL;
    v4[9] = 0LL;
    v4[10] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4 + 6);
    *((_DWORD *)v5 + 14) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5 + 6);
    v8 = KeyboardModifierState::Create((struct KeyboardModifierState **)v5 + 6);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a2 = (struct IInputProcessor *)v5;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v8);
    v10 = 71LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
    (const char *)v9);
  return v9;
}
