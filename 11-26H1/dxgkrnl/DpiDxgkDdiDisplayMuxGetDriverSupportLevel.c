/*
 * XREFs of DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x140093A98
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x14009475C (Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxGetDriverSupportLevel(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v12; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiDisplayMuxGetDriverSupportLevel);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(a1 + 5928))(*(_QWORD *)(a1 + 48), &v14);
  v7 = v4;
  if ( bTracingEnabled )
  {
    if ( v4 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_10;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_10;
      v6 = (unsigned int)v14;
    }
    McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&EventExitDdiDisplayMuxGetDriverSupportLevel);
  }
LABEL_10:
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = a1;
  v10 = v14;
  *(_QWORD *)(v8 + 32) = v14;
  *(_QWORD *)(v8 + 40) = v7;
  *(_OWORD *)(v8 + 48) = 0LL;
  WdLogGlobalForLineNumber = 1065;
  if ( (int)v7 >= 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline(
                                     v10,
                                     v9);
    v12 = v14;
    if ( IsEnabledDeviceUsageNoInline && v14 != 1 )
    {
      v12 = 4;
      v14 = 4;
    }
    switch ( v12 )
    {
      case 1:
        *a2 = 1;
        break;
      case 2:
        *a2 = 2;
        break;
      case 3:
        *a2 = 3;
        break;
      case 4:
        *a2 = 4;
        break;
      default:
        WdLogSingleEntry1(1LL);
        WdLogGlobalForLineNumber = 1107;
        LODWORD(v7) = -1073739509;
        break;
    }
  }
  return (unsigned int)v7;
}
