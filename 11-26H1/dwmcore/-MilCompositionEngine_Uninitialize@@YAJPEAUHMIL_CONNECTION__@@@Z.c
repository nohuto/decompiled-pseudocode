/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180229120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAAXPEAVCInternalMilCmdConnection@@@Z @ 0x180229178 (-reset@-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@s.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18022C42C (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 && g_pConnection == a1 )
  {
    CConnection::Disconnect(g_pConnection);
    std::unique_ptr<CInternalMilCmdConnection>::reset(v1, 0LL, v2, v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
