/*
 * XREFs of ??R_lambda_1f0bee7b591eec396a7438297aca16b6_@@QEBAJPEAUIBasicPositioner@@@Z @ 0x1804D6E0C
 * Callers:
 *     ?Invoke@?$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositionerHelpers@@UEAAJPEAUIBasicPositioner@@@Z @ 0x1804D7790 (-Invoke@-$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPosi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_1f0bee7b591eec396a7438297aca16b6_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, int *, __int64); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  v3 = *a1;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*a1 + 32LL));
  v6 = v5(a2, a1[1], &v10, v3 + 32);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v10 )
      *(_DWORD *)(*a1 + 24LL) |= 1u;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
