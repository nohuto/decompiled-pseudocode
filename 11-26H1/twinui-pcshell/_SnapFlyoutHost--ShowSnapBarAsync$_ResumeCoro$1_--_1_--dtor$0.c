/*
 * XREFs of _SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F993D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ @ 0x1801CC988 (--1-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 24LL;
  return winrt::com_ptr<SnapFlyoutHost>::~com_ptr<SnapFlyoutHost>(*(_QWORD **)(a2 + 40));
}
