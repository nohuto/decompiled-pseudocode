/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C9F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x1801A0840 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(InputInfoValidator **this, struct InputInfo *a2, bool a3)
{
  __int64 v6; // rdi
  InputInfoValidator *v7; // rax
  const char *v8; // r9
  _DWORD v9[3]; // [rsp+20h] [rbp-5C8h] BYREF
  _BYTE v10[4]; // [rsp+2Ch] [rbp-5BCh] BYREF
  _BYTE v11[1440]; // [rsp+30h] [rbp-5B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    InputInfoValidator::OnInputReport(this[9], a2, a3);
    memset_0(v10, 0, 0x5A4uLL);
    v6 = *((unsigned int *)a2 + 79);
    if ( (_DWORD)v6 )
      memcpy_0(v11, (char *)a2 + 320, 144 * v6);
    v7 = this[5];
    v9[0] = v6;
    v9[2] = 1;
    v9[1] = *((unsigned __int8 *)v7 + 40);
    if ( (unsigned int)MITSynthesizeTouchInput(v9) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x86,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
               v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
