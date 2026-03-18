/*
 * XREFs of DpiIndirectDdiIoControl @ 0x14044250C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline @ 0x14009320C (Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiIndirectDdiIoControl(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall **v10)(_QWORD, _QWORD, __int64, _QWORD, __int64, __int64); // rax
  int v11; // ebx

  if ( (unsigned int)Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_BYTE *)(a1 + 1158) )
    {
      v10 = (__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, __int64))(a1 + 1056);
      if ( *(_QWORD *)(a1 + 1056) )
        goto LABEL_3;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 831;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 825;
    }
    return 3221225485LL;
  }
  v10 = (__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64, __int64))(a1 + 1056);
LABEL_3:
  v11 = (*v10)(*(_QWORD *)(a1 + 1008), a2, a3, a4, a5, a6);
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 840;
  }
  return (unsigned int)v11;
}
