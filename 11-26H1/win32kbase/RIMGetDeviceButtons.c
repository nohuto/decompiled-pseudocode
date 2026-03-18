/*
 * XREFs of RIMGetDeviceButtons @ 0x140204BF4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _IsValidParallelButton @ 0x140052CB4 (_IsValidParallelButton.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMPbuttonToCursor @ 0x140189D54 (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x14019BB58 (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 RIMGetDeviceButtons(__int64 a1, __int64 a2, struct _HIDP_PREPARSED_DATA *a3, ...)
{
  __int64 v3; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  USHORT v5; // di
  unsigned int v7; // r13d
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _HIDP_BUTTON_CAPS *i; // rsi
  int v13; // edi
  unsigned int v14; // r8d
  __int64 v15; // rax
  USAGE UsageMin; // ax
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  __int16 v20; // r10
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // r15d
  struct _HIDP_PREPARSED_DATA *v25; // r13
  int v26; // edi
  int valid; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  int v34; // [rsp+40h] [rbp-18h]
  int v35; // [rsp+44h] [rbp-14h]
  NTSTATUS SpecificButtonCaps; // [rsp+48h] [rbp-10h]
  unsigned int ButtonCapsLength; // [rsp+A8h] [rbp+50h] BYREF
  PHIDP_PREPARSED_DATA v39; // [rsp+B0h] [rbp+58h]
  __int64 v40; // [rsp+B8h] [rbp+60h]
  va_list va; // [rsp+B8h] [rbp+60h]
  __int64 v42; // [rsp+C0h] [rbp+68h] BYREF
  va_list va1; // [rsp+C0h] [rbp+68h]
  va_list va2; // [rsp+C8h] [rbp+70h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v39 = a3;
  v3 = *(unsigned __int16 *)(v40 + 46);
  PreparsedData = a3;
  v5 = *(_WORD *)(a2 + 784);
  ButtonCapsLength = *(unsigned __int16 *)(v40 + 46);
  v7 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_DWORD *)(a2 + 1048) )
  {
    LODWORD(v42) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3006);
    v3 = ButtonCapsLength;
  }
  if ( (_DWORD)v3
    && (ButtonCaps = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(256LL, 72 * v3, 0x65687352u)) != 0LL )
  {
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                           HidP_Input,
                           0,
                           v5,
                           0,
                           ButtonCaps,
                           (PUSHORT)&ButtonCapsLength,
                           PreparsedData);
    i = ButtonCaps;
    v13 = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      if ( !ButtonCapsLength )
      {
        LODWORD(v42) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3025);
      }
      if ( (unsigned int)RIMIsPenPointerDevice(a2) )
      {
        *(_DWORD *)(a2 + 1044) = 0;
        v15 = Win32AllocPoolZInitImpl(256LL, 12LL * v14, 0x78647352u);
        *(_QWORD *)(a2 + 1032) = v15;
        if ( v15 )
        {
          v9 = 0LL;
          i = ButtonCaps;
          v11 = 66LL;
          if ( ButtonCapsLength )
          {
            v10 = 2LL;
            do
            {
              if ( v7 >= 2 )
                break;
              if ( ButtonCaps[(unsigned int)v9].UsagePage == 13 )
              {
                UsageMin = ButtonCaps[(unsigned int)v9].Range.UsageMin;
                if ( UsageMin == 66 )
                {
                  v35 = 1;
                }
                else if ( UsageMin != 69 && UsageMin != 60 || v7 && ButtonCaps[v7 - 1].Range.UsageMin != 66 )
                {
                  goto LABEL_22;
                }
                v17 = ++*(_DWORD *)(a1 + 716);
                v18 = v7++;
                ++*(_DWORD *)(a2 + 1044);
                *((_DWORD *)va + v18) = v17;
              }
LABEL_22:
              v9 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned int)v9 < ButtonCapsLength );
          }
          if ( *(_DWORD *)(a2 + 1044) > ButtonCapsLength )
          {
            LODWORD(v42) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3065);
            v11 = 66LL;
          }
          if ( v35 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4LL) = v40;
            v19 = RIMPbuttonToCursor(66);
            v9 = *(_QWORD *)(a2 + 1032);
            *(_DWORD *)v9 = v19;
            if ( v7 > 1 )
            {
              *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 16LL) = HIDWORD(v40);
              *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 12LL) = RIMPbuttonToCursor(v20);
            }
          }
          else
          {
            v13 = -1073741668;
          }
        }
        else
        {
          v13 = -1073741668;
          i = ButtonCaps;
        }
      }
      else
      {
        v21 = Win32AllocPoolZInitImpl(256LL, 12LL * *(unsigned int *)(a2 + 776), 0x78647352u);
        *(_QWORD *)(a2 + 1032) = v21;
        if ( v21 )
        {
          v22 = *(_DWORD *)(a2 + 776);
          v10 = 0LL;
          *(_DWORD *)(a2 + 1044) = v22;
          for ( i = ButtonCaps; (unsigned int)v10 < *(_DWORD *)(a2 + 1044); *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4 * v9) = 1 )
          {
            ++*(_DWORD *)(a1 + 716);
            v23 = (unsigned int)v10;
            v10 = (unsigned int)(v10 + 1);
            v9 = 3 * v23;
            *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4 * v9 + 4) = *(_DWORD *)(a1 + 716);
          }
          if ( (*(_DWORD *)(a2 + 368) & 2) != 0 )
          {
            v24 = 0;
            if ( ButtonCapsLength )
            {
              v25 = v39;
              v26 = 0;
              do
              {
                valid = IsValidParallelButton(a2, &i[v24].UsagePage, v25);
                v28 = v26 + 1;
                if ( valid )
                  v28 = v26;
                ++v24;
                v26 = v28;
              }
              while ( v24 < ButtonCapsLength );
              v13 = SpecificButtonCaps;
              v34 = v28;
            }
          }
          PreparsedData = v39;
        }
        else
        {
          v13 = -1073741668;
          i = ButtonCaps;
        }
        if ( *(_DWORD *)(a2 + 24) == 7 )
        {
          LOWORD(v42) = *(_WORD *)(v40 + 46);
          v13 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, i, (PUSHORT)va1, PreparsedData);
          if ( v13 >= 0 )
            v13 = RIMValidatePTPButtons((__int64)i, (unsigned __int16)v42);
        }
      }
      v29 = ButtonCapsLength;
      *(_DWORD *)(a2 + 1048) = ButtonCapsLength;
      v30 = v29 - v34;
      *(_DWORD *)(a2 + 392) += v30;
      *(_DWORD *)(a2 + 1052) = v30;
    }
    GreDeleteFastMutex((char *)i, v9, v10, v11);
  }
  else
  {
    v13 = -1073741668;
  }
  v31 = *(unsigned int *)(a2 + 1048);
  if ( (_DWORD)v31 )
  {
    if ( v13 != -1073741668 )
    {
      v32 = Win32AllocPoolZInitImpl(256LL, 2 * v31, 0x65687352u);
      *(_QWORD *)(a2 + 824) = v32;
      if ( !v32 )
        return (unsigned int)-1073741668;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)v13;
}
