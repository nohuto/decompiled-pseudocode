/*
 * XREFs of ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x18017935C
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805D24AC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805D4D5C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805D6FC8 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805D7E50 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1801793E4 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x18017965C (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180179738 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TraceLoggingCorrelationVector **__fastcall CorrelationVector::Increment(TraceLoggingCorrelationVector **this)
{
  TraceLoggingCorrelationVector *v1; // rbx
  unsigned __int64 v3; // rax
  bool v4; // dl
  struct TraceLoggingCorrelationVector *v5; // rax
  TraceLoggingCorrelationVector *v6; // rcx
  char Str[144]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *this;
  v3 = TraceLoggingCorrelationVector::IncrementImpl(*this);
  TraceLoggingCorrelationVector::ToStringImpl(v1, v3, Str);
  v5 = TraceLoggingCorrelationVector::Set(Str, v4);
  v6 = *this;
  *this = v5;
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x90);
  return this;
}
