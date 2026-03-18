/*
 * XREFs of SdbpGetVelocityState @ 0x140884A20
 * Callers:
 *     SdbpCheckContainment @ 0x1408824D0 (SdbpCheckContainment.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     Feature_CompatPreallocatedVelocity55922052__private_IsEnabledDeviceUsageNoInline @ 0x14071381C (Feature_CompatPreallocatedVelocity55922052__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922053__private_IsEnabledDeviceUsageNoInline @ 0x140713878 (Feature_CompatPreallocatedVelocity55922053__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline @ 0x1407138D4 (Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline @ 0x140713930 (Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline @ 0x14071398C (Feature_CompatPreallocatedVelocity55922056__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922057__private_IsEnabledDeviceUsageNoInline @ 0x1407139E8 (Feature_CompatPreallocatedVelocity55922057__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922058__private_IsEnabledDeviceUsageNoInline @ 0x140713A44 (Feature_CompatPreallocatedVelocity55922058__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline @ 0x140713AA0 (Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922061__private_IsEnabledDeviceUsageNoInline @ 0x140713AFC (Feature_CompatPreallocatedVelocity55922061__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922062__private_IsEnabledDeviceUsageNoInline @ 0x140713B58 (Feature_CompatPreallocatedVelocity55922062__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline @ 0x140713BB4 (Feature_CompatPreallocatedVelocity55922063__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline @ 0x140713C10 (Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline @ 0x140713C6C (Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline @ 0x140713CC8 (Feature_CompatPreallocatedVelocity55922067__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922068__private_IsEnabledDeviceUsageNoInline @ 0x140713D24 (Feature_CompatPreallocatedVelocity55922068__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922069__private_IsEnabledDeviceUsageNoInline @ 0x140713D80 (Feature_CompatPreallocatedVelocity55922069__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922070__private_IsEnabledDeviceUsageNoInline @ 0x140713DDC (Feature_CompatPreallocatedVelocity55922070__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922071__private_IsEnabledDeviceUsageNoInline @ 0x140713E38 (Feature_CompatPreallocatedVelocity55922071__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922072__private_IsEnabledDeviceUsageNoInline @ 0x140713E94 (Feature_CompatPreallocatedVelocity55922072__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922073__private_IsEnabledDeviceUsageNoInline @ 0x140713EF0 (Feature_CompatPreallocatedVelocity55922073__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922074__private_IsEnabledDeviceUsageNoInline @ 0x140713F4C (Feature_CompatPreallocatedVelocity55922074__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922075__private_IsEnabledDeviceUsageNoInline @ 0x140713FA8 (Feature_CompatPreallocatedVelocity55922075__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline @ 0x140714004 (Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline @ 0x140714060 (Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline @ 0x1407140BC (Feature_CompatPreallocatedVelocity55922078__private_IsEnabledDeviceUsageNoInline.c)
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
  if ( wcsicmp(a3, L"Velocity") )
  {
    v10 = wcsicmp(a3, L"KIR") == 0;
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
