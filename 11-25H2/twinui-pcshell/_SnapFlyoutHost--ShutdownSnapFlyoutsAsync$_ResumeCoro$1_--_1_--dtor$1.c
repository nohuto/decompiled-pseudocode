/*
 * XREFs of _SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806D1A48
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ @ 0x180240DF0 (--1-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 208) + 40LL;
  return winrt::com_ptr<SnapFlyoutHost>::~com_ptr<SnapFlyoutHost>(*(_QWORD **)(a2 + 128));
}
