/*
 * XREFs of ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18019C6A8
 * Callers:
 *     _lambda_de32a61301aa02ed510f29790f759930_::_lambda_invoker_cdecl_ @ 0x18019B8E0 (_lambda_de32a61301aa02ed510f29790f759930_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x18017D2C4 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x18017F320 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall MouseProcessor::UpdateMouseAsTouchMode(MouseProcessor *this, HKEY a2)
{
  LSTATUS v3; // eax
  bool v4; // sf
  char v5; // al
  int v6; // eax
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  DWORD v14; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v14 = 4;
  v13 = 0;
  v3 = RegQueryValueExW(a2, L"EnableMouseAsTouch", 0LL, &v12, (LPBYTE)&v13, &v14);
  v4 = v3 < 0;
  if ( v3 > 0 )
    v4 = 1;
  v5 = !v4 && v12 == 4 && v13 == 1;
  if ( v5 != *((_BYTE *)this + 144) )
  {
    *((_BYTE *)this + 144) = v5;
    if ( v5 )
    {
      v6 = InjectionDevice::Attach((MouseProcessor *)((char *)this + 152));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v6,
          v10);
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x1E0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v7);
    }
    else
    {
      if ( !(unsigned int)NtMITDisableMouseIntercept() )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x1E4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          v8);
      v9 = InjectionDevice::Remove((MouseProcessor *)((char *)this + 152));
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v9,
          v10);
    }
  }
}
