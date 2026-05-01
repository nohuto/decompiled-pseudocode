/*
 * XREFs of _CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E74EA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ @ 0x180395E40 (--1-$com_ptr@VCVirtualTouchpadExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 16LL;
  return winrt::com_ptr<CVirtualTouchpadExperienceManager>::~com_ptr<CVirtualTouchpadExperienceManager>(*(_QWORD **)(a2 + 40));
}
