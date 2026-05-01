/*
 * XREFs of _lambda_2b23a0664410194b06926212d84c9639_::operator() @ 0x180325E4C
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_2b23a0664410194b06926212d84c9639___::Invoke @ 0x180326970 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_2b23a0664410194b06_ea_180326970.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2b23a0664410194b06926212d84c9639_::operator()(
        __int64 *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v11 = 0LL;
  v5 = *v2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  if ( v5(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v11) < 0
    || (v6 = *a1,
        *(_BYTE *)a1[1] = 1,
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, v6),
        v8 = v7,
        v7 >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  return v8;
}
