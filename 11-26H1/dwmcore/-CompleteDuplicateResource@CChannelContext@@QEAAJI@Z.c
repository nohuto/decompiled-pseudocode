/*
 * XREFs of ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z @ 0x180189730
 * Callers:
 *     ?Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE@@@Z @ 0x18018971C (-Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z @ 0x18018984C (-AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180189A4C (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannelContext::CompleteDuplicateResource(CChannelContext *this, unsigned int a2)
{
  __int64 v2; // r8
  const char *v4; // r9
  unsigned int v6; // r14d
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 10);
  v4 = (const char *)*((_QWORD *)this + 11);
  if ( (const char *)v2 == v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      v4);
  v6 = *(_DWORD *)(v2 + 8);
  v7 = v2 + 16;
  v8 = *(_DWORD **)v2;
  while ( (const char *)v7 != v4 )
  {
    *(_QWORD *)v2 = *(_QWORD *)v7;
    v2 += 16LL;
    v12 = *(_DWORD *)(v7 + 8);
    v7 += 16LL;
    *(_DWORD *)(v2 - 8) = v12;
  }
  *((_QWORD *)this + 11) -= 16LL;
  v9 = CResourceTable::AddResourceAtHandle(*((_QWORD *)this + 6), a2, v6, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
      McTemplateU0qqxqx_EventWriteTransfer(
        a2,
        (unsigned int)&EVTDESC_DCOMPEVENT_COMPLETE_DUPLICATE,
        *((_DWORD *)this + 6),
        a2,
        a2,
        v6,
        (char)v8);
    v8[10] |= 2u;
    return 0LL;
  }
}
