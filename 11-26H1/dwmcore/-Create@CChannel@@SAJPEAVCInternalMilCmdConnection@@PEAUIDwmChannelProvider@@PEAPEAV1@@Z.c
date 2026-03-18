/*
 * XREFs of ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DD7C8 (--1-$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CChannel@@AEAAJXZ @ 0x18020155C (-Initialize@CChannel@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z @ 0x180232230 (--0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x180233670 (-Release@CChannel@@UEAAKXZ.c)
 */

__int64 __fastcall CChannel::Create(
        struct CInternalMilCmdConnection *a1,
        struct IDwmChannelProvider *a2,
        struct CChannel **a3)
{
  CChannel *v6; // rax
  volatile signed __int32 *v7; // rax
  struct CChannel *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = (CChannel *)DefaultHeap::AllocClear(0xC0uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = (volatile signed __int32 *)CChannel::CChannel(v6, a1, a2);
  v8 = (struct CChannel *)v7;
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v9 = CChannel::Initialize((CChannel *)v7);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v13 = 0LL;
    *a3 = v8;
    wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(&v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x165,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      CChannel::Release(v8);
    return v10;
  }
}
