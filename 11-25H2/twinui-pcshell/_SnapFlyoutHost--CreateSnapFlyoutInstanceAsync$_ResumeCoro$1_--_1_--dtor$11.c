/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806D0857
 * Callers:
 *     <none>
 * Callees:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1800A8078 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 792) = *(_QWORD *)(a2 + 1280) + 208LL;
  SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(*(SnapFlyoutHost::FlyoutInstanceRecord **)(a2 + 792));
}
