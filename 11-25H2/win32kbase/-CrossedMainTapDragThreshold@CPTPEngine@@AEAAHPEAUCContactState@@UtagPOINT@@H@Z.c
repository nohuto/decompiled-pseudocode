/*
 * XREFs of ?CrossedMainTapDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x140193658
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPTPEngine::CrossedMainTapDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  LONG x; // ebx
  _QWORD *v8; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v10; // r10d
  bool v11; // zf
  char *v12; // rax
  LONG y; // [rsp+54h] [rbp+1Ch]

  y = a3.y;
  x = a3.x;
  v8 = (_QWORD *)((char *)a2 + 32);
  IsEnabledDeviceUsageNoInline = Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline();
  v10 = 0;
  v11 = IsEnabledDeviceUsageNoInline == 0;
  v12 = (char *)a2 + 16;
  if ( !v11 )
    v12 = (char *)a2 + 24;
  if ( !a4 )
    v8 = v12;
  LOBYTE(v10) = *((unsigned int *)this + 782) * (__int64)(int)((*v8 - x) * (*v8 - x))
              + (unsigned __int64)*((unsigned int *)this + 781) * (int)((HIDWORD(*v8) - y) * (HIDWORD(*v8) - y)) >= *((unsigned int *)this + 782) * (unsigned __int64)*((unsigned int *)this + 781);
  return v10;
}
