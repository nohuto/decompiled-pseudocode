/*
 * XREFs of PopSetHiberFileSize @ 0x1407D3928
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopSetHiberFileType @ 0x14077A2FC (PopSetHiberFileType.c)
 *     PopDiagTraceSetHiberFileFailurePoint @ 0x1407D7B20 (PopDiagTraceSetHiberFileFailurePoint.c)
 *     PopCalculateHiberFileSize @ 0x140B03088 (PopCalculateHiberFileSize.c)
 *     PopValidateHiberFileSize @ 0x140B03344 (PopValidateHiberFileSize.c)
 *     PopSetHiberPersistedRegValue @ 0x140B1C110 (PopSetHiberPersistedRegValue.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, _QWORD *a2, unsigned int *a3)
{
  int v5; // edi
  __int64 v6; // rbp
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  if ( a1 > 0x64 )
  {
    v8 = 2;
    v7 = -1073741811;
  }
  else
  {
    v5 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&v11, 0LL);
    v6 = v11;
    v7 = PopValidateHiberFileSize(v11, 0LL, 0LL, &v10);
    if ( v7 >= 0 )
    {
      if ( (unsigned int)PopHiberFileSizePercent < 0x28 || (v7 = PopSetHiberFileType(2, 0LL, &v10), v7 >= 0) )
      {
        v7 = PopSetHiberPersistedRegValue(1LL, (unsigned int)PopHiberFileSizePercent, &v10);
        if ( v7 >= 0 )
        {
          if ( a2 )
            *a2 = v6;
          return (unsigned int)v7;
        }
      }
    }
    v8 = v10;
    PopHiberFileSizePercent = v5;
  }
  if ( a3 )
    *a3 = v8;
  PopDiagTraceSetHiberFileFailurePoint((unsigned int)v7, v8);
  return (unsigned int)v7;
}
