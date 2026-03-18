/*
 * XREFs of ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x18018F430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::ConfirmFrame(
        CKernelTransport *this,
        const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *))(*(_QWORD *)v2 + 32LL))(
           *((_QWORD *)this + 3),
           a2);
    v6 = v5;
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v3 = NtDCompositionConfirmFrame(*((_QWORD *)this + 1), a2);
    if ( v3 >= 0 )
      return 0LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xCD,
             (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
             (const char *)(unsigned int)v3);
  }
}
