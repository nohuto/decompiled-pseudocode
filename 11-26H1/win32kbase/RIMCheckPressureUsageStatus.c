/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x1401B4BE8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 * Callees:
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401B4C80 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int16 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int16 a5)
{
  int IsEnabledDeviceUsageNoInline; // eax

  IsEnabledDeviceUsageNoInline = Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( a3 != 13 )
      return IsEnabledDeviceUsageNoInline;
    if ( a4 != 48 )
      return IsEnabledDeviceUsageNoInline;
    LOWORD(IsEnabledDeviceUsageNoInline) = a5;
    if ( a5 != 1 )
    {
      LOWORD(IsEnabledDeviceUsageNoInline) = a5 - 4;
      if ( (unsigned __int16)(a5 - 4) > 1u )
        return IsEnabledDeviceUsageNoInline;
    }
  }
  else if ( a3 != 13 || a4 != 48 || a5 != 4 && a5 != 1 )
  {
    return IsEnabledDeviceUsageNoInline;
  }
  if ( *(_BYTE *)(a1 + 1041) )
    *(_DWORD *)(a2 + 368) |= 0x4000u;
  return IsEnabledDeviceUsageNoInline;
}
