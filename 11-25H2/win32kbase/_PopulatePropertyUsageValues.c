/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1401E1BD8
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1401E4200 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     _IsValidParallelValue @ 0x140108190 (_IsValidParallelValue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        USHORT a4,
        USHORT a5,
        PHIDP_VALUE_CAPS a6,
        unsigned int a7,
        __int64 a8,
        PHIDP_PREPARSED_DATA a9)
{
  __int64 v9; // rbp
  USHORT v10; // r15
  unsigned int v11; // ebx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  unsigned int v16; // r13d
  unsigned int v17; // esi
  NTSTATUS SpecificValueCaps; // r14d
  USHORT i; // r12
  PHIDP_VALUE_CAPS v20; // r8
  struct _HIDP_VALUE_CAPS *v21; // r15
  __int64 v22; // rdx
  USAGE UsageMin; // ax
  int v24; // eax
  int v25; // eax
  int UnitsExp; // eax
  USHORT ValueCapsLength; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]
  USHORT v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v9 = a8;
  v10 = a5;
  v11 = 0;
  ValueCapsLength = a5;
  if ( !a8 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3707);
  }
  PreparsedData = a9;
  if ( !a9 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3708);
  }
  if ( !a1 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3709);
  }
  ValueCaps = a6;
  if ( !a6 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3710);
  }
  if ( !a2 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3711);
  }
  if ( !v10 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3712);
  }
  v16 = a7;
  if ( !a7 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3713);
  }
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3716);
  }
  if ( !v10 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= v30 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3722);
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v31, 0, ValueCaps, &ValueCapsLength, PreparsedData);
  if ( ValueCapsLength != v10 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3731);
  }
  if ( SpecificValueCaps >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v17 >= v16 || i >= v10 )
      {
        v11 = 1;
        *v29 = v17;
        return v11;
      }
      v20 = a6;
      v21 = &a6[i];
      if ( *(_BYTE *)(a1 + 832) == v21->ReportID && v17 < v30 )
        break;
LABEL_48:
      v10 = a5;
    }
    if ( (*(_DWORD *)(a1 + 368) & 2) != 0 && v31 == *(_WORD *)(*(_QWORD *)(a1 + 768) + 4LL) )
    {
      if ( !(unsigned int)IsValidParallelValue(a1, &a6[i].UsagePage, a9) )
        goto LABEL_48;
      v20 = a6;
    }
    v22 = 28LL * v17;
    *(_WORD *)(v22 + v9 + 24) = v21->UsagePage;
    *(_WORD *)(v22 + v9 + 26) = v21->Range.UsageMin;
    *(_DWORD *)(v22 + v9) = v21->LogicalMin;
    *(_DWORD *)(v22 + v9 + 4) = v21->LogicalMax;
    if ( v21->UsagePage == 1 )
    {
      UsageMin = v21->Range.UsageMin;
      if ( UsageMin == 48 )
      {
        if ( *(_DWORD *)(a8 + 1336) )
        {
          *(_DWORD *)(v22 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
            v24 = *(_DWORD *)(a1 + 188);
          else
            v24 = *(_DWORD *)(a1 + 184);
          *(_DWORD *)(v22 + v9 + 12) = v24;
          *(_DWORD *)(v22 + v9 + 16) = 17;
LABEL_45:
          UnitsExp = 13;
LABEL_47:
          *(_DWORD *)(v22 + v9 + 20) = UnitsExp;
          ++v17;
          goto LABEL_48;
        }
      }
      else if ( UsageMin == 49 && *(_DWORD *)(a8 + 1336) )
      {
        *(_DWORD *)(v22 + v9 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          v25 = *(_DWORD *)(a1 + 184);
        else
          v25 = *(_DWORD *)(a1 + 188);
        *(_DWORD *)(v22 + v9 + 12) = v25;
        *(_DWORD *)(28LL * v17 + v9 + 16) = 17;
        goto LABEL_45;
      }
    }
    *(_DWORD *)(v22 + v9 + 8) = v20[i].PhysicalMin;
    *(_DWORD *)(v22 + v9 + 12) = v20[i].PhysicalMax;
    *(_DWORD *)(v22 + v9 + 16) = v20[i].Units;
    UnitsExp = v20[i].UnitsExp;
    goto LABEL_47;
  }
  return v11;
}
