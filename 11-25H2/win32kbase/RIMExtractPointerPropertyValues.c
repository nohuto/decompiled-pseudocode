/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1401E37E0
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140203DC0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     SignExtendLong @ 0x1401222F8 (SignExtendLong.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPreparsedData @ 0x1401E1AF8 (GetPreparsedData.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
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
  char *v10; // rsi
  unsigned int v12; // r14d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rcx
  USHORT v14; // r13
  NTSTATUS SpecificValueCaps; // eax
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // r13
  ULONG v25; // ecx
  USHORT ValueCapsLength; // [rsp+44h] [rbp-134h] BYREF
  NTSTATUS UsageValue; // [rsp+48h] [rbp-130h]
  int v29; // [rsp+4Ch] [rbp-12Ch]
  USHORT v30; // [rsp+50h] [rbp-128h]
  int v31; // [rsp+54h] [rbp-124h]
  ULONG ReportLength; // [rsp+58h] [rbp-120h]
  int v33; // [rsp+5Ch] [rbp-11Ch]
  ULONG UsageLength; // [rsp+60h] [rbp-118h] BYREF
  int v35; // [rsp+64h] [rbp-114h]
  PHIDP_PREPARSED_DATA v36; // [rsp+68h] [rbp-110h]
  int v37; // [rsp+70h] [rbp-108h]
  ULONG v38; // [rsp+74h] [rbp-104h]
  unsigned int v39; // [rsp+80h] [rbp-F8h]
  PHIDP_PREPARSED_DATA v40; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+90h] [rbp-E8h]
  PCHAR Report; // [rsp+98h] [rbp-E0h]
  __int64 v43; // [rsp+A0h] [rbp-D8h]
  __int64 v44; // [rsp+A8h] [rbp-D0h]
  __int64 v45; // [rsp+B8h] [rbp-C0h]
  char *v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+E0h] [rbp-98h] BYREF

  Report = a4;
  ReportLength = a3;
  v39 = a5;
  v43 = a6;
  v41 = a7;
  v8 = 0;
  v40 = 0LL;
  v9 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( !a5 )
  {
    UsageValue = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3979);
  }
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 392) )
    {
      v10 = (char *)Win32AllocPoolZInitImpl(256LL, 4LL * *(unsigned int *)(a1 + 1048), 0x78707355u);
      v46 = v10;
      if ( v10 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v40) )
        {
          GreDeleteFastMutex(v10);
          return 0LL;
        }
        UsageLength = *(_DWORD *)(a1 + 1048);
        v12 = 0;
        v35 = 0;
        PreparsedData = v40;
        v36 = v40;
        while ( v12 < a5 )
        {
          v14 = a2;
          v30 = a2;
          if ( *(_DWORD *)(a1 + 412) == (unsigned __int8)*Report )
          {
            ValueCapsLength = 1;
            v45 = v12;
            v44 = 28LL * v12;
            SpecificValueCaps = HidP_GetSpecificValueCaps(
                                  HidP_Input,
                                  *(_WORD *)(v44 + v43 + 24),
                                  a2,
                                  *(_WORD *)(v44 + v43 + 26),
                                  &ValueCaps,
                                  &ValueCapsLength,
                                  PreparsedData);
            UsageValue = SpecificValueCaps;
            v16 = v44;
            v17 = v43;
            if ( *(int *)(v44 + v43 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v18 = 1;
              v37 = 1;
            }
            else
            {
              v18 = 0;
              v37 = 0;
            }
            if ( v18 )
            {
              v19 = *(_QWORD *)(a1 + 768);
              v47 = v19;
              if ( v19 && *(_WORD *)(v19 + 8) && (unsigned __int16)(*(_WORD *)(v44 + v43 + 26) - 48) <= 1u )
              {
                v14 = *(_WORD *)(*(_QWORD *)(v19 + 24) + 8LL * a2 + 2);
                v30 = v14;
              }
              UsageValue = HidP_GetUsageValue(
                             HidP_Input,
                             *(_WORD *)(v44 + v43 + 24),
                             v14,
                             *(_WORD *)(v44 + v43 + 26),
                             (PULONG)(v41 + 4LL * v12),
                             v36,
                             Report,
                             ReportLength);
              if ( UsageValue < 0 )
                break;
              if ( ValueCaps.LogicalMin >= 0 )
              {
                PreparsedData = v36;
              }
              else
              {
                v20 = SignExtendLong(*(_DWORD *)(v41 + 4 * v45), ValueCaps.BitSize);
                *(_DWORD *)(v22 + 4 * v21) = v20;
                v12 = v35;
                PreparsedData = v40;
                v36 = v40;
                v9 = v29;
                v31 = v33;
              }
              v29 = ++v9;
            }
            else
            {
              v23 = v12;
              v24 = v41;
              *(_DWORD *)(v41 + 4LL * v12) = 0;
              if ( !v31 )
              {
                UsageValue = HidP_GetUsagesEx(
                               HidP_Input,
                               a2,
                               (PUSAGE_AND_PAGE)v10,
                               &UsageLength,
                               v36,
                               Report,
                               ReportLength);
                v31 = 1;
                v33 = 1;
                if ( UsageValue < 0 )
                  break;
                v16 = v44;
                v23 = v12;
                v17 = v43;
              }
              v25 = 0;
              v38 = 0;
              while ( v25 < UsageLength )
              {
                if ( *(_WORD *)&v10[4 * v25 + 2] == *(_WORD *)(v16 + v17 + 24)
                  && *(_WORD *)&v10[4 * v25] == *(_WORD *)(v16 + v17 + 26) )
                {
                  *(_DWORD *)(v24 + 4 * v23) = 1;
                }
                v38 = ++v25;
              }
              v29 = ++v9;
              PreparsedData = v36;
            }
          }
          v35 = ++v12;
        }
        GreDeleteFastMutex(v10);
      }
    }
  }
  LOBYTE(v8) = v9 == a5;
  return v8;
}
