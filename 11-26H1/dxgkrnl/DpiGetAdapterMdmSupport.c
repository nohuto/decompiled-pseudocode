/*
 * XREFs of DpiGetAdapterMdmSupport @ 0x1400629C4
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140358108 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DpiGetAdapterMdmSupport(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // edx
  int v7; // r8d
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 result; // rax

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4392;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      4392LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 2LL;
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4394;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        4394,
        v6,
        v7,
        0LL,
        2,
        -1,
        (__int64)L"IS_FDO(FdoContext)",
        4394LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  v8 = (_OWORD *)(v4 + 6024);
  do
  {
    *a2 = *v8;
    a2[1] = v8[1];
    a2[2] = v8[2];
    a2[3] = v8[3];
    a2[4] = v8[4];
    a2[5] = v8[5];
    a2[6] = v8[6];
    a2 += 8;
    v9 = v8[7];
    v8 += 8;
    *(a2 - 1) = v9;
    --v5;
  }
  while ( v5 );
  *a2 = *v8;
  a2[1] = v8[1];
  a2[2] = v8[2];
  a2[3] = v8[3];
  a2[4] = v8[4];
  a2[5] = v8[5];
  result = *((unsigned int *)v8 + 24);
  *((_DWORD *)a2 + 24) = result;
  return result;
}
