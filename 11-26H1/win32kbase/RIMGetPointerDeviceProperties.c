/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x140052230
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GetPreparsedData @ 0x14005262C (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x140052714 (_PopulatePropertyUsageValues.c)
 *     _IsValidParallelButton @ 0x140052CB4 (_IsValidParallelButton.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  struct _HIDP_BUTTON_CAPS *v6; // r12
  USHORT v7; // r15
  int v10; // ecx
  struct _HIDP_PREPARSED_DATA *v11; // r14
  struct _HIDP_VALUE_CAPS *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int16 v27; // [rsp+50h] [rbp-20h]
  int v28; // [rsp+54h] [rbp-1Ch] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+58h] [rbp-18h] BYREF
  int v30; // [rsp+5Ch] [rbp-14h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-10h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-8h]
  USHORT ValueCapsLength; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+50h]

  v34 = a3;
  *(_DWORD *)ButtonCapsLength = 0;
  v5 = 0;
  v28 = 0;
  v6 = 0LL;
  ValueCapsLength = 0;
  v7 = 0;
  v27 = 0;
  PreparsedData = 0LL;
  if ( (unsigned int)GetPreparsedData(a1, &PreparsedData) )
  {
    v10 = *(_DWORD *)(a1 + 368);
    if ( (v10 & 2) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 768) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3809LL);
        v10 = *(_DWORD *)(a1 + 368);
      }
      v25 = *(_QWORD *)(a1 + 768);
      v7 = *(_WORD *)(v25 + 4);
      v27 = *(_WORD *)(v25 + 10);
    }
    if ( (v10 & 0x20) != 0 )
      v7 = *(_WORD *)(a1 + 784);
    if ( !a4 )
    {
      v30 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3820LL);
    }
    v11 = PreparsedData;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, &ValueCapsLength, PreparsedData) == -1072627705 )
    {
      v12 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(
                                         256LL,
                                         72LL * (ValueCapsLength + (unsigned int)v27),
                                         0x63767355u);
      Buffer = v12;
      if ( !v12 )
        return v5;
      if ( (unsigned int)PopulatePropertyUsageValues(a1, (int)&v28, a4, v7, ValueCapsLength, v12, a2, v34, v11) )
      {
        v16 = *(_QWORD *)(a1 + 768);
        if ( !v16 || !*(_WORD *)(v16 + 8) )
          goto LABEL_11;
        if ( v28 >= a4 )
        {
          v30 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3844LL);
        }
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 768) + 10LL) )
        {
          v30 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3845LL);
        }
        if ( (unsigned int)PopulatePropertyUsageValues(
                             a1,
                             (int)&v28,
                             a4,
                             *(unsigned __int16 *)(*(_QWORD *)(a1 + 768) + 8LL),
                             v27,
                             (PHIDP_VALUE_CAPS)Buffer + (unsigned int)v28,
                             a2,
                             v34,
                             v11) )
        {
LABEL_11:
          v17 = (unsigned int)v28;
          v18 = a2 - v28;
          if ( a2 == v28 )
          {
            v26 = 3873LL;
          }
          else
          {
            *(_DWORD *)ButtonCapsLength = *(_DWORD *)(a1 + 1048);
            v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(
                                               256LL,
                                               72LL * *(unsigned int *)ButtonCapsLength,
                                               0x63767355u);
            if ( !v6 )
              goto LABEL_23;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v7, 0, v6, ButtonCapsLength, PreparsedData) < 0 )
              goto LABEL_23;
            if ( v18 > *(_DWORD *)ButtonCapsLength )
            {
              v30 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3890LL);
              if ( v18 > *(_DWORD *)ButtonCapsLength )
                goto LABEL_23;
            }
            memset((void *)(v34 + 28 * v17), 0, 28LL * v18);
            v19 = 0;
            v5 = 1;
            while ( (unsigned int)v17 < a2 && v19 < *(_DWORD *)ButtonCapsLength )
            {
              if ( (*(_DWORD *)(a1 + 368) & 2) == 0 || (unsigned int)IsValidParallelButton(a1, &v6[v19], PreparsedData) )
              {
                v14 = v34;
                v13 = 9LL * v19;
                v20 = 28LL * (unsigned int)v17;
                LODWORD(v17) = v17 + 1;
                *(_WORD *)(v20 + v34 + 24) = v6[v19].UsagePage;
                *(_WORD *)(v20 + v14 + 26) = v6[v19].Range.UsageMin;
                *(_DWORD *)(v20 + v14 + 4) = 1;
              }
              ++v19;
            }
            if ( (_DWORD)v17 == a2 )
              goto LABEL_23;
            v26 = 3902LL;
          }
          v30 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v26);
        }
      }
LABEL_23:
      GreDeleteFastMutex((char *)Buffer, v13, v14, v15);
      if ( v6 )
        GreDeleteFastMutex((char *)v6, v21, v22, v23);
      return v5;
    }
  }
  return 0LL;
}
