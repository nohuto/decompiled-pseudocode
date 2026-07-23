/*
 * XREFs of PopSetHiberFileType @ 0x14077A2FC
 * Callers:
 *     PopSetHiberFileSize @ 0x1407D3928 (PopSetHiberFileSize.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopDiagTraceSetHiberFileFailurePoint @ 0x1407D7B20 (PopDiagTraceSetHiberFileFailurePoint.c)
 *     PopCalculateHiberFileSize @ 0x140B03088 (PopCalculateHiberFileSize.c)
 *     PopValidateHiberFileSize @ 0x140B03344 (PopValidateHiberFileSize.c)
 *     PopSetHiberPersistedRegValue @ 0x140B1C110 (PopSetHiberPersistedRegValue.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v7; // rbp
  int v8; // edi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  v10[0] = 0LL;
  v11 = 0;
  v5 = 1;
  if ( ((unsigned int)PopHiberFileSizePercent < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v6 = PopHiberFileType;
    PopHiberFileType = a1;
    PopCalculateHiberFileSize(v10, 0LL);
    v7 = v10[0];
    v8 = PopValidateHiberFileSize(v10[0], 0LL, 0LL, &v11);
    if ( v8 >= 0 )
    {
      v8 = PopSetHiberPersistedRegValue(2LL, (unsigned int)PopHiberFileType, &v11);
      if ( v8 >= 0 )
      {
        PopHiberFileTypeReg = PopHiberFileType;
        if ( a2 )
          *a2 = v7;
        return (unsigned int)v8;
      }
    }
    PopHiberFileType = v6;
    v5 = v11;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( a2 )
    PopDiagTraceSetHiberFileFailurePoint((unsigned int)v8, v5);
  if ( a3 )
    *a3 = v5;
  return (unsigned int)v8;
}
