/*
 * XREFs of _JointResize::EnsureTileCollectionAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F394D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall JointResize::EnsureTileCollectionAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 192) + 16LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD **)(a2 + 96));
}
