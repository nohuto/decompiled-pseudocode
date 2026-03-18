/*
 * XREFs of IsPointerDeviceAccessible @ 0x140167190
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     IsTouchpadCapable @ 0x1401A98E0 (IsTouchpadCapable.c)
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagTHREADINFO *v2; // rdi
  __int64 v3; // rcx

  v1 = 1;
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    v2 = PtiCurrent();
    if ( (unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v3) )
    {
      return (unsigned int)IsTouchpadCapable(v2, 0LL);
    }
    else if ( (*((_QWORD *)v2 + 170) & 0x2000002000LL) == 0 && !*((_WORD *)v2 + 633) )
    {
      return *((_WORD *)v2 + 632) != 0;
    }
  }
  return v1;
}
