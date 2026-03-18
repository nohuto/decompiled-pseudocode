/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140199090
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x14006F020 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall HandleAdapterTeardownEvent(PVOID IoObject, unsigned int *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp-28h] BYREF
  __int64 v7; // [rsp+54h] [rbp-24h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int64 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+68h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 368);
  WdLogSingleEntry3(4LL, *(_QWORD *)Context, Context[2], Context[3]);
  WdLogGlobalForLineNumber = 2285;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v5, (__int64)&HardwareContentProtectionTeardown);
  v7 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v6 = 11;
  v9 = 1LL;
  SMgrGdiCallout(&v6, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(&WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION, Context + 4, 8LL) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2317;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware content protection teardown notification failed",
      2317LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
