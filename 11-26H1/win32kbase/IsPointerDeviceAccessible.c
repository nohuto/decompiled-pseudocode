/*
 * XREFs of IsPointerDeviceAccessible @ 0x14016E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsTouchpadCapable @ 0x140199460 (IsTouchpadCapable.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = 1;
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    v3 = PtiCurrent(a1, a2);
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v5, v4, v6) )
    {
      return (unsigned int)IsTouchpadCapable(v3, 0LL);
    }
    else if ( (*((_QWORD *)v3 + 170) & 0x2000002000LL) == 0 && !*((_WORD *)v3 + 633) )
    {
      return *((_WORD *)v3 + 632) != 0;
    }
  }
  return v2;
}
