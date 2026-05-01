/*
 * XREFs of _lambda_2b23a0664410194b06926212d84c9639_::operator() @ 0x1803227B0
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_2b23a0664410194b06926212d84c9639___::Invoke @ 0x1803232C0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_2b23a0664410194b06_ea_1803232C0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2b23a0664410194b06926212d84c9639_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v10 = 0LL;
  v5 = *v2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
  if ( v5(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v10) < 0
    || (**(_BYTE **)(a1 + 8) = 1,
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, *(_QWORD *)a1),
        v7 = v6,
        v6 >= 0) )
  {
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
  return v7;
}
