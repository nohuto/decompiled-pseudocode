/*
 * XREFs of ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1802819D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneFrameTick(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  char *v2; // rdi
  _QWORD *v5; // r15
  __int64 (__fastcall *v6)(struct ISpectreRenderer *, _QWORD *); // rbx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 72;
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = (_QWORD *)((char *)this + 8);
    v6 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD *))(*(_QWORD *)a2 + 80LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
    v7 = v6(a2, v5);
    if ( v7 < 0 )
    {
      v8 = 202LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(
           *v5,
           *((unsigned int *)this + 10),
           *((unsigned int *)this + 11),
           *((unsigned int *)this + 12));
    if ( v7 < 0 )
    {
      v8 = 207LL;
      goto LABEL_4;
    }
    (*(void (__fastcall **)(char *, _QWORD, char *))(*(_QWORD *)v2 + 80LL))(v2, 0LL, v2);
  }
  return 0LL;
}
