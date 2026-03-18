/*
 * XREFs of ?ProcessRoutingInfo@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_ROUTINGINFO@@@Z @ 0x1801D84D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801E0340 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessRoutingInfo(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_ROUTINGINFO *a3)
{
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)((char *)this + 296) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)((char *)a3 + 24);
  *((_QWORD *)this + 41) = *((_QWORD *)a3 + 5);
  *((_BYTE *)this + 336) = 1;
  v4 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= (unsigned int)v4 )
      return 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 40LL) + 24LL);
    v8 = CGenericInk::SetContextMsgRoutingInfo(this, (struct CD3DDevice *)((v7 - 16) & -(__int64)(v7 != 0)));
    v9 = v8;
    if ( v8 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
