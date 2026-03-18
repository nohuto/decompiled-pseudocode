/*
 * XREFs of DpiIsDriverUpdateInProgress @ 0x1403D04C0
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyDataBoolean @ 0x1403D0590 (DpiGetDevicePropertyDataBoolean.c)
 */

char __fastcall DpiIsDriverUpdateInProgress(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  char v5; // bl
  char v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  v8 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (int)DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_InstallInProgress, &v7) < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2112;
  }
  v5 = v7;
  if ( !v7 && *(_DWORD *)(v4 + 28) < 0x6000u )
  {
    if ( (int)DpiGetDevicePropertyDataBoolean(*(_QWORD *)(v2 + 152), &DEVPKEY_Device_IsRebootRequired, &v8) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2127;
    }
    if ( v8 )
    {
      v5 = 1;
      *a2 = 1;
    }
  }
  return v5;
}
