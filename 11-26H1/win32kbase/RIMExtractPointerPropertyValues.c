/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x140051E10
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140051CC4 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SignExtendLong @ 0x140052208 (SignExtendLong.c)
 *     GetPreparsedData @ 0x14005262C (GetPreparsedData.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        USHORT a2,
        ULONG a3,
        CHAR *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // ebx
  int v9; // edi
  struct _USAGE_AND_PAGE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r15d
  __int64 v15; // r9
  USHORT v16; // r13
  NTSTATUS SpecificValueCaps; // eax
  NTSTATUS v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // r13
  NTSTATUS Usages; // eax
  ULONG v28; // ecx
  USHORT ValueCapsLength; // [rsp+44h] [rbp-104h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-100h] BYREF
  USHORT v33; // [rsp+4Ch] [rbp-FCh]
  int v34; // [rsp+50h] [rbp-F8h]
  ULONG ReportLength; // [rsp+54h] [rbp-F4h]
  int v36; // [rsp+58h] [rbp-F0h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-E8h] BYREF
  ULONG v38; // [rsp+68h] [rbp-E0h]
  int v39; // [rsp+6Ch] [rbp-DCh]
  unsigned int v40; // [rsp+7Ch] [rbp-CCh]
  __int64 v41; // [rsp+80h] [rbp-C8h]
  PCHAR Report; // [rsp+88h] [rbp-C0h]
  __int64 v43; // [rsp+90h] [rbp-B8h]
  __int64 v44; // [rsp+98h] [rbp-B0h]
  int v45; // [rsp+A0h] [rbp-A8h]
  struct _USAGE_AND_PAGE *v46; // [rsp+A8h] [rbp-A0h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+B0h] [rbp-98h] BYREF

  Report = a4;
  ReportLength = a3;
  v40 = a5;
  v43 = a6;
  v41 = a7;
  v8 = 0;
  PreparsedData = 0LL;
  v9 = 0;
  v34 = 0;
  v36 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( !a5 )
  {
    UsageLength = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3949LL);
  }
  if ( !a1
    || a5 > *(_DWORD *)(a1 + 392)
    || (v10 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInitImpl(256LL, 4LL * *(unsigned int *)(a1 + 1048), 0x78707355u),
        (v46 = v10) == 0LL) )
  {
LABEL_36:
    LOBYTE(v8) = v9 == a5;
    return v8;
  }
  if ( (unsigned int)GetPreparsedData(a1, &PreparsedData) )
  {
    UsageLength = *(_DWORD *)(a1 + 1048);
    v14 = 0;
    v39 = 0;
    v15 = 1LL;
    while ( v14 < a5 )
    {
      v16 = a2;
      v33 = a2;
      if ( *(_DWORD *)(a1 + 412) == (unsigned __int8)*Report )
      {
        ValueCapsLength = 1;
        v44 = 28LL * v14;
        SpecificValueCaps = HidP_GetSpecificValueCaps(
                              HidP_Input,
                              *(_WORD *)(v44 + v43 + 24),
                              a2,
                              *(_WORD *)(v44 + v43 + 26),
                              &ValueCaps,
                              &ValueCapsLength,
                              PreparsedData);
        v18 = SpecificValueCaps;
        v19 = v44;
        v20 = v43;
        v15 = 1LL;
        if ( *(int *)(v44 + v43 + 4) > 1
          || (v11 = 0x80000000LL, (int)(SpecificValueCaps + 0x80000000) < 0)
          || (v21 = 0, v18 == -1072627705) )
        {
          v21 = 1;
        }
        if ( v21 )
        {
          v22 = *(_QWORD *)(a1 + 768);
          if ( v22 && *(_WORD *)(v22 + 8) && (unsigned __int16)(*(_WORD *)(v44 + v43 + 26) - 48) <= 1u )
          {
            v16 = *(_WORD *)(*(_QWORD *)(v22 + 24) + 8LL * a2 + 2);
            v33 = v16;
          }
          if ( HidP_GetUsageValue(
                 HidP_Input,
                 *(_WORD *)(v44 + v43 + 24),
                 v16,
                 *(_WORD *)(v44 + v43 + 26),
                 (PULONG)(v41 + 4LL * v14),
                 PreparsedData,
                 Report,
                 ReportLength) < 0 )
            break;
          if ( ValueCaps.LogicalMin < 0 )
          {
            v23 = SignExtendLong(*(unsigned int *)(v41 + 4LL * v14), ValueCaps.BitSize);
            *(_DWORD *)(v25 + 4 * v24) = v23;
          }
          v15 = 1LL;
        }
        else
        {
          v12 = v14;
          v26 = v41;
          *(_DWORD *)(v41 + 4LL * v14) = 0;
          if ( !v36 )
          {
            Usages = HidP_GetUsagesEx(HidP_Input, a2, v10, &UsageLength, PreparsedData, Report, ReportLength);
            v15 = 1LL;
            v36 = 1;
            v45 = 1;
            if ( Usages < 0 )
              break;
            v19 = v44;
            v12 = v14;
            v20 = v43;
          }
          v28 = 0;
          v38 = 0;
          while ( v28 < UsageLength )
          {
            v11 = v28;
            if ( v10[v28].UsagePage == *(_WORD *)(v19 + v20 + 24) && v10[v28].Usage == *(_WORD *)(v19 + v20 + 26) )
              *(_DWORD *)(v26 + 4 * v12) = 1;
            v38 = ++v28;
          }
        }
        v34 = ++v9;
      }
      v39 = ++v14;
    }
    GreDeleteFastMutex((char *)v10, v11, v12, v15);
    goto LABEL_36;
  }
  GreDeleteFastMutex((char *)v10, v11, v12, v13);
  return 0LL;
}
