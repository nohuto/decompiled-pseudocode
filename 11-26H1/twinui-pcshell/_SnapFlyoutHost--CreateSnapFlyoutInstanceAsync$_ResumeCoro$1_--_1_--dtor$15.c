/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1806F8FCE
 * Callers:
 *     <none>
 * Callees:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1801C4730 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 600) = *(_QWORD *)(a2 + 800) + 256LL;
  SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(*(SnapFlyoutHost::FlyoutInstanceRecord **)(a2 + 600));
}
