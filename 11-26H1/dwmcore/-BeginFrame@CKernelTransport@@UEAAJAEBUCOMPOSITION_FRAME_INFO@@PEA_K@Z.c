/*
 * XREFs of ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x180191D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::BeginFrame(
        CKernelTransport *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  int v4; // eax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct COMPOSITION_FRAME_INFO *, unsigned __int64 *))(*(_QWORD *)v3 + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
    v7 = v6;
    if ( v6 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v4 = NtDCompositionBeginFrame(*((_QWORD *)this + 1), a2, a3);
    if ( v4 >= 0 )
      return 0LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xBE,
             (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
             (const char *)(unsigned int)v4);
  }
}
