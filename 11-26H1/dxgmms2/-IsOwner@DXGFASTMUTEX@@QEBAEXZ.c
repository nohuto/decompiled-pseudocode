/*
 * XREFs of ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x140036084
 * Callers:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 * Callees:
 *     Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline @ 0x14004DD88 (Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DXGFASTMUTEX::IsOwner(DXGFASTMUTEX *this)
{
  Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline();
  return *((_QWORD *)this + 3) == (_QWORD)KeGetCurrentThread();
}
