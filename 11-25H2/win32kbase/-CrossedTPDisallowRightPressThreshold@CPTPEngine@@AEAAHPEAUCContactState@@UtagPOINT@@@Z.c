/*
 * XREFs of ?CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1401936F8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140194508 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline @ 0x140225560 (Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDisallowRightPressThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  LONG x; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v7; // r11d
  __int64 v8; // rax
  int v9; // edx
  LONG y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  x = a3.x;
  IsEnabledDeviceUsageNoInline = Feature_PTPButtonUpdates__private_IsEnabledDeviceUsageNoInline();
  v7 = 0;
  if ( IsEnabledDeviceUsageNoInline )
    v8 = *((_QWORD *)a2 + 3);
  else
    v8 = *((_QWORD *)a2 + 2);
  v9 = *((_DWORD *)this + 807);
  LOBYTE(v7) = (unsigned int)(*((_DWORD *)this + 808) * *((_DWORD *)this + 808))
             * (__int64)(((int)v8 - x) * ((int)v8 - x))
             + (unsigned __int64)(unsigned int)(v9 * v9) * (HIDWORD(v8) - y) * (HIDWORD(v8) - y) >= (unsigned int)(*((_DWORD *)this + 808) * *((_DWORD *)this + 808)) * (unsigned __int64)(unsigned int)(v9 * v9);
  return v7;
}
