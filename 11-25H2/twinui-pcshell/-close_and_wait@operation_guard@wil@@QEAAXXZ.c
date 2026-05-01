/*
 * XREFs of ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1801AFD9C
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801AFD50 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@Compos.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1801AFDC4 (--1operation_guard@wil@@QEAA@XZ.c)
 * Callees:
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1803FE8E4 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

void __fastcall wil::operation_guard::close_and_wait(wil::operation_guard *this)
{
  *((_BYTE *)this + 8) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
    wil::slim_event_t<1>::wait(this);
}
