/*
 * XREFs of ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18007AB00
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007AB64 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AABCC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GameControllerRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  GameControllerRawInputProvider *v5; // rax
  const char *v6; // r9
  struct IRawInputProvider *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (GameControllerRawInputProvider *)RefCountedObject::operator new(0xB8uLL);
  if ( !v5 )
  {
    *a3 = 0LL;
LABEL_5:
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xB0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      v6);
  }
  v7 = GameControllerRawInputProvider::GameControllerRawInputProvider(v5, a1);
  *a3 = v7;
  if ( !v7 )
    goto LABEL_5;
  return 0LL;
}
