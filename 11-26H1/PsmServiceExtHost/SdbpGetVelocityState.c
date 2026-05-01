/*
 * XREFs of SdbpGetVelocityState @ 0x18009699C
 * Callers:
 *     SdbpCheckContainment @ 0x1800948B0 (SdbpCheckContainment.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922052__private_IsEnabledDeviceUsageNoInline @ 0x180093E0C (Feature_CompatPreallocatedVelocity55922052__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922053__private_IsEnabledDeviceUsageNoInline @ 0x180093E54 (Feature_CompatPreallocatedVelocity55922053__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline @ 0x180093E9C (Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline @ 0x180093EE4 (Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline @ 0x180093F2C (Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922057__private_IsEnabledDeviceUsageNoInline @ 0x180093F74 (Feature_CompatPreallocatedVelocity55922057__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922058__private_IsEnabledDeviceUsageNoInline @ 0x180093FBC (Feature_CompatPreallocatedVelocity55922058__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline @ 0x180094004 (Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922061__private_IsEnabledDeviceUsageNoInline @ 0x18009404C (Feature_CompatPreallocatedVelocity55922061__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922062__private_IsEnabledDeviceUsageNoInline @ 0x180094094 (Feature_CompatPreallocatedVelocity55922062__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline @ 0x1800940DC (Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline @ 0x180094124 (Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline @ 0x18009416C (Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline @ 0x1800941B4 (Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922068__private_IsEnabledDeviceUsageNoInline @ 0x1800941FC (Feature_CompatPreallocatedVelocity55922068__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922069__private_IsEnabledDeviceUsageNoInline @ 0x180094244 (Feature_CompatPreallocatedVelocity55922069__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922070__private_IsEnabledDeviceUsageNoInline @ 0x18009428C (Feature_CompatPreallocatedVelocity55922070__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922071__private_IsEnabledDeviceUsageNoInline @ 0x1800942D4 (Feature_CompatPreallocatedVelocity55922071__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922072__private_IsEnabledDeviceUsageNoInline @ 0x18009431C (Feature_CompatPreallocatedVelocity55922072__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922073__private_IsEnabledDeviceUsageNoInline @ 0x180094364 (Feature_CompatPreallocatedVelocity55922073__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922074__private_IsEnabledDeviceUsageNoInline @ 0x1800943AC (Feature_CompatPreallocatedVelocity55922074__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922075__private_IsEnabledDeviceUsageNoInline @ 0x1800943F4 (Feature_CompatPreallocatedVelocity55922075__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline @ 0x18009443C (Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline @ 0x180094484 (Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline @ 0x1800944CC (Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline.c)
 */

_BOOL8 __fastcall SdbpGetVelocityState(int *a1, _DWORD *a2, const wchar_t *a3, int a4)
{
  int v4; // ebx
  int v9; // edi
  BOOL v10; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  _BOOL8 result; // rax

  v4 = 0;
  v9 = 1;
  if ( _wcsicmp(a3, L"Velocity") )
  {
    v10 = _wcsicmp(a3, L"KIR") == 0;
LABEL_30:
    v9 = 0;
  }
  else
  {
    v10 = 1;
    switch ( a4 )
    {
      case 55922052:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922052__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922053:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922053__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922054:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922055:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922056:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922057:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922057__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922058:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922058__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922060:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922061:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922061__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922062:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922062__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922063:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922064:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922065:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922067:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922068:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922068__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922069:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922069__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922070:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922070__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922071:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922071__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922072:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922072__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922073:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922073__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922074:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922074__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922075:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922075__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922076:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922077:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline();
        break;
      case 55922078:
        IsEnabledDeviceUsageNoInline = Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline();
        break;
      default:
        goto LABEL_30;
    }
    LOBYTE(v4) = IsEnabledDeviceUsageNoInline != 0;
  }
  result = v10;
  *a1 = v9;
  *a2 = v4;
  return result;
}
