/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x14017FB54
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401E2140 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int16 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int16 a5)
{
  int IsEnabledDeviceUsageNoInline; // eax

  IsEnabledDeviceUsageNoInline = Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( a3 != 13 || a4 != 48 )
      return IsEnabledDeviceUsageNoInline;
    LOWORD(IsEnabledDeviceUsageNoInline) = a5 - 4;
    if ( (unsigned __int16)(a5 - 4) <= 1u )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( a3 != 13 || a4 != 48 )
    return IsEnabledDeviceUsageNoInline;
  if ( a5 != 4 )
  {
LABEL_9:
    if ( a5 != 1 )
      return IsEnabledDeviceUsageNoInline;
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 1041) )
    *(_DWORD *)(a2 + 368) |= 0x4000u;
  return IsEnabledDeviceUsageNoInline;
}
