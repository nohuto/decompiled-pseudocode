/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z @ 0x1802143EC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CMessageConversationHost@@IEAAJXZ @ 0x1801DE18C (-Initialize@CMessageConversationHost@@IEAAJXZ.c)
 *     ??0CMessageConversationHost@@IEAA@PEAUIMessageSession@@@Z @ 0x18028D6A0 (--0CMessageConversationHost@@IEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMessageConversationHost::Create(
        struct IMessageSession *a1,
        struct IDwmMessageConversationHost **a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  CMessageConversationHost *v7; // rax
  CMessageConversationHost *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CMessageConversationHost *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
  if ( !v4 )
  {
    v7 = (CMessageConversationHost *)DefaultHeap::AllocClear(0x30uLL);
    if ( v7 )
    {
      v8 = CMessageConversationHost::CMessageConversationHost(v7, a1);
      v12 = v8;
      if ( v8 )
      {
        (*(void (__fastcall **)(CMessageConversationHost *))(*(_QWORD *)v8 + 8LL))(v8);
        if ( v12 )
        {
          v9 = CMessageConversationHost::Initialize(v12);
          v6 = v9;
          if ( v9 >= 0 )
          {
            *a2 = v12;
            v12 = 0LL;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalmessageconversationhost.cpp",
            (const char *)(unsigned int)v9);
          if ( v12 )
            (*(void (__fastcall **)(CMessageConversationHost *))(*(_QWORD *)v12 + 64LL))(v12);
LABEL_14:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
          return v6;
        }
      }
    }
    else
    {
      v12 = 0LL;
    }
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalmessageconversationhost.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, struct IMessageSession *, struct IDwmMessageConversationHost **))(*(_QWORD *)v4 + 56LL))(
         v4,
         a1,
         a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalmessageconversationhost.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
