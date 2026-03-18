/*
 * XREFs of ?GetSceneLightRealization@CAmbientLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180269750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAmbientLight::GetSceneLightRealization(
        CAmbientLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 13);
  v4 = *((_QWORD *)this + 13);
  if ( !v4 )
  {
    v5 = -2147467259;
    v6 = 32LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ambientlight.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *(_OWORD *)((char *)this + 232);
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 80LL))(v4, &v8);
  if ( v5 < 0 )
  {
    v6 = 35LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
  if ( v5 < 0 )
  {
    v6 = 36LL;
    goto LABEL_3;
  }
  return 0LL;
}
