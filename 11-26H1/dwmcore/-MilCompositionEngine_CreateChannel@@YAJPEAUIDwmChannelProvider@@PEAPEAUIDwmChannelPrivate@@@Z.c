/*
 * XREFs of ?MilCompositionEngine_CreateChannel@@YAJPEAUIDwmChannelProvider@@PEAPEAUIDwmChannelPrivate@@@Z @ 0x180153A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilCompositionEngine_CreateChannel(struct IDwmChannelProvider *a1, struct IDwmChannelPrivate **a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CChannel *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( !g_pConnection )
  {
    v6 = -2003303402;
    v7 = 23LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a1 )
  {
    v6 = -2147024809;
    v7 = 24LL;
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 25LL;
    goto LABEL_7;
  }
  v3 = CInternalMilCmdConnection::CreateChannel(g_pConnection, a1, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    *a2 = v9;
    return 0LL;
  }
}
