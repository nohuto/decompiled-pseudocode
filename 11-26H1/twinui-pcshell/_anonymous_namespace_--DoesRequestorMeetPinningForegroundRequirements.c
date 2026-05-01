/*
 * XREFs of _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1805E580C
 * Callers:
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1802849C8 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C0B0C (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$RequestorForegroundChecked@W4ForegroundCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAX$$QEAW4ForegroundCheckResult@0@@Z @ 0x1805E01C0 (--$RequestorForegroundChecked@W4ForegroundCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56A4 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18067A12C (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements(HANDLE Process, __int64 a2)
{
  HWND ForegroundWindow; // rax
  DWORD ProcessId; // eax
  const unsigned __int16 *v6; // rdx
  _QWORD *v7; // rax
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v10; // rcx
  DWORD dwProcessId[4]; // [rsp+28h] [rbp-18h] BYREF

  ForegroundWindow = GetForegroundWindow();
  dwProcessId[0] = 0;
  GetWindowThreadProcessId(ForegroundWindow, dwProcessId);
  ProcessId = GetProcessId(Process);
  if ( dwProcessId[0] == ProcessId )
  {
    dwProcessId[0] = 1;
LABEL_8:
    PinManagerTelemetry::RequestorForegroundChecked<enum PinManagerTelemetry::ForegroundCheckResult>((int *)dwProcessId);
    v8 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 1;
  }
  *(_OWORD *)dwProcessId = 0LL;
  PinRequestContext::RequestorPackageAppId(*(__int64 **)a2, dwProcessId);
  if ( *(_QWORD *)&dwProcessId[2]
    && (int)CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
              *(struct IUnknown **)dwProcessId,
              v6) >= 0 )
  {
    dwProcessId[0] = 2;
    goto LABEL_8;
  }
  v7 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
         dwProcessId,
         (_QWORD *)a2);
  if ( anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(v7) )
  {
    dwProcessId[0] = 3;
    goto LABEL_8;
  }
  dwProcessId[0] = 0;
  PinManagerTelemetry::RequestorForegroundChecked<enum PinManagerTelemetry::ForegroundCheckResult>((int *)dwProcessId);
  v10 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0;
}
