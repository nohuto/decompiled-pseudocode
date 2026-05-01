/*
 * XREFs of ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x180668ED0
 * Callers:
 *     ?GetTransitionScreenTimeout@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@XZ @ 0x180668F40 (-GetTransitionScreenTimeout@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@M.c)
 *     ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180669F20 (-Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(CloudPCHelpers *this)
{
  int PolicyInt; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 5;
  PolicyInt = PolicyManager_GetPolicyInt(L"CloudDesktop", L"SetMaxConnectionTimeout", &v4);
  if ( PolicyInt >= 0 )
  {
    result = (unsigned int)v4;
    if ( v4 < 5 )
      return 5LL;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
      (const char *)(unsigned int)PolicyInt);
    return 5LL;
  }
  return result;
}
