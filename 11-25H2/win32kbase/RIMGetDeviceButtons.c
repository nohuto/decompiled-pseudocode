/*
 * XREFs of RIMGetDeviceButtons @ 0x1401E3DF8
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _IsValidParallelButton @ 0x140111AE8 (_IsValidParallelButton.c)
 *     RIMPbuttonToCursor @ 0x14014CB4C (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x14015B65C (RIMValidatePTPButtons.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 RIMGetDeviceButtons(__int64 a1, __int64 a2, struct _HIDP_PREPARSED_DATA *a3, ...)
{
  __int64 v3; // rax
  USHORT v5; // di
  unsigned int v8; // r13d
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r14
  NTSTATUS SpecificButtonCaps; // eax
  char *i; // rsi
  int v12; // edi
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  struct _HIDP_PREPARSED_DATA *v19; // r12
  unsigned int v20; // r14d
  int v21; // r15d
  int valid; // eax
  int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // edx
  USAGE UsageMin; // ax
  int v27; // ecx
  __int64 v28; // rax
  __int16 v29; // r10
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  int v35; // [rsp+40h] [rbp-10h]
  int v36; // [rsp+44h] [rbp-Ch]
  unsigned int ButtonCapsLength; // [rsp+98h] [rbp+48h] BYREF
  PHIDP_PREPARSED_DATA v38; // [rsp+A0h] [rbp+50h]
  __int64 v39; // [rsp+A8h] [rbp+58h]
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v41; // [rsp+B0h] [rbp+60h] BYREF
  va_list va1; // [rsp+B0h] [rbp+60h]
  va_list va2; // [rsp+B8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v39 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v41 = va_arg(va2, _QWORD);
  v38 = a3;
  v3 = *(unsigned __int16 *)(v39 + 46);
  v5 = *(_WORD *)(a2 + 784);
  v8 = 0;
  ButtonCapsLength = *(unsigned __int16 *)(v39 + 46);
  v35 = 0;
  v36 = 0;
  if ( *(_DWORD *)(a2 + 1048) )
  {
    LODWORD(v41) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3036);
    v3 = ButtonCapsLength;
  }
  if ( (_DWORD)v3 )
  {
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(256LL, 72 * v3, 0x65687352u);
    if ( ButtonCaps )
    {
      SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, v5, 0, ButtonCaps, (PUSHORT)&ButtonCapsLength, a3);
      i = (char *)ButtonCaps;
      v12 = SpecificButtonCaps;
      if ( SpecificButtonCaps < 0 )
      {
LABEL_44:
        GreDeleteFastMutex(i);
        goto LABEL_46;
      }
      v13 = ButtonCapsLength;
      if ( !ButtonCapsLength )
      {
        LODWORD(v41) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3055);
        v13 = ButtonCapsLength;
      }
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
      {
        v14 = Win32AllocPoolZInitImpl(256LL, 12LL * *(unsigned int *)(a2 + 776), 0x78647352u);
        *(_QWORD *)(a2 + 1032) = v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)(a2 + 776);
          v16 = 0;
          *(_DWORD *)(a2 + 1044) = v15;
          for ( i = (char *)ButtonCaps; v16 < *(_DWORD *)(a2 + 1044); *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4 * v18) = 1 )
          {
            ++*(_DWORD *)(a1 + 716);
            v17 = v16++;
            v18 = 3 * v17;
            *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4 * v18 + 4) = *(_DWORD *)(a1 + 716);
          }
          v19 = v38;
          if ( (*(_DWORD *)(a2 + 368) & 2) != 0 )
          {
            v20 = 0;
            if ( ButtonCapsLength )
            {
              v21 = 0;
              do
              {
                valid = IsValidParallelButton(a2, (USAGE *)&i[72 * v20], v19);
                v23 = v21 + 1;
                if ( valid )
                  v23 = v21;
                ++v20;
                v21 = v23;
              }
              while ( v20 < ButtonCapsLength );
              v35 = v23;
            }
          }
        }
        else
        {
          v19 = v38;
          v12 = -1073741668;
          i = (char *)ButtonCaps;
        }
        if ( *(_DWORD *)(a2 + 24) == 7 )
        {
          LOWORD(v41) = *(_WORD *)(v39 + 46);
          v12 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, (PHIDP_BUTTON_CAPS)i, (PUSHORT)va1, v19);
          if ( v12 >= 0 )
            v12 = RIMValidatePTPButtons((__int64)i, (unsigned __int16)v41);
        }
        goto LABEL_43;
      }
      *(_DWORD *)(a2 + 1044) = 0;
      v24 = Win32AllocPoolZInitImpl(256LL, 12LL * v13, 0x78647352u);
      *(_QWORD *)(a2 + 1032) = v24;
      if ( v24 )
      {
        v25 = 0;
        for ( i = (char *)ButtonCaps; v25 < ButtonCapsLength; ++v25 )
        {
          if ( v8 >= 2 )
            break;
          if ( ButtonCaps[v25].UsagePage == 13 )
          {
            UsageMin = ButtonCaps[v25].Range.UsageMin;
            if ( UsageMin == 66 )
            {
              v36 = 1;
            }
            else if ( UsageMin != 69 && UsageMin != 60 || v8 && ButtonCaps[v8 - 1].Range.UsageMin != 66 )
            {
              continue;
            }
            v27 = ++*(_DWORD *)(a1 + 716);
            v28 = v8++;
            ++*(_DWORD *)(a2 + 1044);
            *((_DWORD *)va + v28) = v27;
          }
        }
        if ( *(_DWORD *)(a2 + 1044) > ButtonCapsLength )
        {
          LODWORD(v41) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3095);
        }
        if ( v36 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4LL) = v39;
          **(_DWORD **)(a2 + 1032) = RIMPbuttonToCursor(66);
          if ( v8 > 1 )
          {
            *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 16LL) = HIDWORD(v39);
            *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 12LL) = RIMPbuttonToCursor(v29);
          }
          goto LABEL_43;
        }
      }
      else
      {
        i = (char *)ButtonCaps;
      }
      v12 = -1073741668;
LABEL_43:
      v30 = ButtonCapsLength;
      *(_DWORD *)(a2 + 1048) = ButtonCapsLength;
      v31 = v30 - v35;
      *(_DWORD *)(a2 + 392) += v31;
      *(_DWORD *)(a2 + 1052) = v31;
      goto LABEL_44;
    }
  }
  v12 = -1073741668;
LABEL_46:
  v32 = *(unsigned int *)(a2 + 1048);
  if ( (_DWORD)v32 )
  {
    if ( v12 != -1073741668 )
    {
      v33 = Win32AllocPoolZInitImpl(256LL, 2 * v32, 0x65687352u);
      *(_QWORD *)(a2 + 824) = v33;
      if ( !v33 )
        return (unsigned int)-1073741668;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)v12;
}
