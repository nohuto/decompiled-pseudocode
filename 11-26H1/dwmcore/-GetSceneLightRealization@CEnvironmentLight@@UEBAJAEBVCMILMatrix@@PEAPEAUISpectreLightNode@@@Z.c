/*
 * XREFs of ?GetSceneLightRealization@CEnvironmentLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18028BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEnvironmentLight::GetSceneLightRealization(
        CEnvironmentLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 13);
  if ( !v4 )
  {
    v5 = -2147467259;
    v6 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\environmentlight.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, const struct CMILMatrix *))(*(_QWORD *)v4 + 88LL))(v4, a2);
  if ( v5 < 0 )
  {
    v6 = 49LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 112LL))(
         *((_QWORD *)this + 13),
         (char *)this + 236);
  if ( v5 < 0 )
  {
    v6 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
