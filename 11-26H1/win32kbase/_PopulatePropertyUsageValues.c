/*
 * XREFs of _PopulatePropertyUsageValues @ 0x140052714
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x140052230 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     _IsValidParallelValue @ 0x140052B98 (_IsValidParallelValue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  int UnitsExp; // eax
  USAGE UsageMin; // ax
  int v25; // eax
  int v26; // eax
  int v28; // eax
  int v29; // eax
  USHORT ValueCapsLength; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  USHORT v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v9 = a8;
  v10 = a5;
  v11 = 0;
  ValueCapsLength = a5;
  if ( !a8 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3677LL);
  }
  PreparsedData = a9;
  if ( !a9 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3678LL);
  }
  if ( !a1 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3679LL);
  }
  ValueCaps = a6;
  if ( !a6 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3680LL);
  }
  if ( !a2 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3681LL);
  }
  if ( !v10 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3682LL);
  }
  v16 = a7;
  if ( !a7 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3683LL);
  }
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3686LL);
  }
  if ( !v10 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= v32 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3692LL);
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v33, 0, ValueCaps, &ValueCapsLength, PreparsedData);
  if ( ValueCapsLength != v10 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3701LL);
  }
  if ( SpecificValueCaps >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v17 >= v16 || i >= v10 )
      {
        v11 = 1;
        *v31 = v17;
        return v11;
      }
      v20 = a6;
      v21 = &a6[i];
      if ( *(_BYTE *)(a1 + 832) == v21->ReportID && v17 < v32 )
        break;
LABEL_36:
      v10 = a5;
    }
    if ( (*(_DWORD *)(a1 + 368) & 2) != 0 && v33 == *(_WORD *)(*(_QWORD *)(a1 + 768) + 4LL) )
    {
      if ( !(unsigned int)IsValidParallelValue(a1, &a6[i], a9, 1LL) )
        goto LABEL_36;
      v20 = a6;
    }
    v22 = 28LL * v17;
    *(_WORD *)(v22 + v9 + 24) = v21->UsagePage;
    *(_WORD *)(v22 + v9 + 26) = v21->Range.UsageMin;
    *(_DWORD *)(v22 + v9) = v21->LogicalMin;
    *(_DWORD *)(v22 + v9 + 4) = v21->LogicalMax;
    if ( v21->UsagePage != 1 )
      goto LABEL_34;
    UsageMin = v21->Range.UsageMin;
    if ( UsageMin == 48 )
    {
      if ( *(_DWORD *)(a8 + 1328) )
      {
        *(_DWORD *)(v22 + v9 + 8) = 0;
        v25 = *(_DWORD *)(a1 + 224);
        if ( v25 == 1 || v25 == 3 )
          v26 = *(_DWORD *)(a1 + 184);
        else
          v26 = *(_DWORD *)(a1 + 188);
        *(_DWORD *)(v22 + v9 + 12) = v26;
        *(_DWORD *)(v22 + v9 + 16) = 17;
LABEL_42:
        UnitsExp = 13;
        goto LABEL_35;
      }
    }
    else if ( UsageMin == 49 && *(_DWORD *)(a8 + 1328) )
    {
      *(_DWORD *)(v22 + v9 + 8) = 0;
      v28 = *(_DWORD *)(a1 + 224);
      if ( v28 == 1 || v28 == 3 )
        v29 = *(_DWORD *)(a1 + 188);
      else
        v29 = *(_DWORD *)(a1 + 184);
      *(_DWORD *)(v22 + v9 + 12) = v29;
      *(_DWORD *)(28LL * v17 + v9 + 16) = 17;
      goto LABEL_42;
    }
LABEL_34:
    *(_DWORD *)(v22 + v9 + 8) = v20[i].PhysicalMin;
    *(_DWORD *)(v22 + v9 + 12) = v20[i].PhysicalMax;
    *(_DWORD *)(v22 + v9 + 16) = v20[i].Units;
    UnitsExp = v20[i].UnitsExp;
LABEL_35:
    *(_DWORD *)(v22 + v9 + 20) = UnitsExp;
    ++v17;
    goto LABEL_36;
  }
  return v11;
}
