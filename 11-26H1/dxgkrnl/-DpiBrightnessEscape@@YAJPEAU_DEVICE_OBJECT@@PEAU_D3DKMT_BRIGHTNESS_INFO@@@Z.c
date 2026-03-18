/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024DB60
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline @ 0x140091638 (Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024EC3C (-ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiCallDrvSetBrightness @ 0x14030AA4C (DpiCallDrvSetBrightness.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x14040AFD0 (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // r15
  char *v3; // r10
  char *v6; // r14
  __int16 v7; // ax
  char *v8; // rdi
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int64 v10; // rdx
  UCHAR v12; // al
  int v13; // ebx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  int v17; // ecx
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v19; // rdx
  unsigned int (__fastcall *v20)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *); // rax
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v21; // rdi
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  UCHAR *BrightnessLevels; // r9
  __int64 Value; // r8
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // ecx
  int v28; // ecx
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, int *); // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-49h] BYREF
  int v33; // [rsp+38h] [rbp-41h]
  const wchar_t *v34; // [rsp+40h] [rbp-39h]
  int *v35; // [rsp+48h] [rbp-31h]
  int v36; // [rsp+50h] [rbp-29h]
  int *v37; // [rsp+58h] [rbp-21h]
  int v38; // [rsp+60h] [rbp-19h]
  __int64 v39; // [rsp+68h] [rbp-11h]
  int v40; // [rsp+70h] [rbp-9h]
  __int64 v41; // [rsp+78h] [rbp-1h]
  __int128 v42; // [rsp+80h] [rbp+7h]
  __int128 v43; // [rsp+90h] [rbp+17h]
  int v44; // [rsp+E0h] [rbp+67h] BYREF
  int v45; // [rsp+E8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0LL;
  v6 = (char *)(DeviceExtension + 2404);
  v7 = DeviceExtension[2405];
  if ( v7 == 1 )
    v3 = (char *)(DeviceExtension + 2404);
  if ( v7 == 2 )
  {
    v8 = (char *)(DeviceExtension + 2404);
  }
  else
  {
    v8 = 0LL;
    if ( v7 == 3 )
      goto LABEL_7;
  }
  v6 = 0LL;
LABEL_7:
  Type = a2->Type;
  if ( a2->Type > D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
  {
    if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
      {
        if ( v6 )
          goto LABEL_33;
        return 3221225659LL;
      }
      if ( Type != (D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE|D3DKMT_BRIGHTNESS_INFO_GET_CAPS) )
        goto LABEL_29;
    }
    goto LABEL_35;
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
    goto LABEL_29;
  v10 = (unsigned int)(Type - 1);
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( v3 || v8 )
      goto LABEL_19;
    return 3221225659LL;
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET || Type == D3DKMT_BRIGHTNESS_INFO_SET )
  {
LABEL_35:
    if ( !v3 && !v8 && !v6 )
      return 3221225659LL;
LABEL_30:
    if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      v12 = *((_BYTE *)DeviceExtension + 4533) == 0;
      *((_BYTE *)DeviceExtension + 4533) = v12;
      a2->PossibleLevels.LevelCount = v12;
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_CAPS && Type != D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
LABEL_29:
    if ( v8 )
      goto LABEL_30;
    return 3221225659LL;
  }
  if ( !v8 && !v6 )
    return 3221225659LL;
LABEL_16:
  v10 = (unsigned int)(Type - 4);
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS )
    goto LABEL_39;
  v10 = (unsigned int)(Type - 11);
  if ( (unsigned int)v10 < 2 )
    goto LABEL_39;
  if ( Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
  {
LABEL_89:
    v36 = 4;
    v38 = 4;
    v34 = L"EnableManualBrightnessMode";
    v44 = 0;
    v35 = &v44;
    v32 = 0LL;
    v37 = &v44;
    v33 = 32;
    v39 = 0LL;
    v40 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v32, 0LL, 0LL);
    *((_BYTE *)DeviceExtension + 4532) = v44 != 0;
    if ( v8 )
      DpiCallDrvSetBacklightOptimizationLevel(a1, v8, 0LL);
    return 0;
  }
LABEL_19:
  if ( !*((_BYTE *)DeviceExtension + 4532) )
    return 3221226538LL;
LABEL_39:
  if ( Type <= D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    {
      if ( (unsigned int)Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline()
        && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x700Au
        && (int)a2->BrightnessCaps.Value > 4 )
      {
        return 3221225485LL;
      }
      Value = a2->BrightnessCaps.Value;
      if ( (int)Value > 3 )
        return 3221225485LL;
      if ( v6 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v6 + 8))(*((_QWORD *)v6 + 1), a2->ChildUid);
      else
        return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, v8, Value);
    }
    v14 = Type - 1;
    if ( !v14 )
    {
      p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
      if ( v8 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v8
                              + 4))(
                               *((_QWORD *)v8 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v3
                              + 4))(
                               *((_QWORD *)v3 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v21 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
        if ( !v6 )
        {
          LOBYTE(v10) = v21->PossibleLevels.LevelCount;
          v13 = DpiCallDrvSetBrightness(a1, v10);
          if ( v13 >= 0 )
            *((_DWORD *)DeviceExtension + 1132) = v21->PossibleLevels.LevelCount;
          return (unsigned int)v13;
        }
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 4))(
                               *((_QWORD *)v6 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v8 + 8))(
                                 *((_QWORD *)v8 + 1),
                                 &a2->PossibleLevels,
                                 4LL);
        return (unsigned int)-1073741811;
      }
      v19 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( !v6 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v8
                              + 7))(
                               *((_QWORD *)v8 + 1),
                               v19,
                               4LL);
      v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))*((_QWORD *)v6 + 6);
    }
    else
    {
      v19 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( !v6 )
      {
        if ( v8 )
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v8
                                + 6))(
                                 *((_QWORD *)v8 + 1),
                                 v19,
                                 4LL);
        else
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v3
                                + 6))(
                                 *((_QWORD *)v3 + 1),
                                 v19,
                                 4LL);
      }
      v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))*((_QWORD *)v6 + 5);
    }
    return v20(*((_QWORD *)v6 + 1), a2->ChildUid, v19);
  }
  v25 = Type - 7;
  if ( !v25 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v8 + 10))(
                           *((_QWORD *)v8 + 1),
                           &a2->PossibleLevels,
                           4LL);
  v26 = v25 - 1;
  if ( !v26 )
    goto LABEL_89;
  v27 = v26 - 1;
  if ( !v27 )
  {
    *((_BYTE *)DeviceExtension + 4532) = 0;
    v44 = 0;
    if ( v8 )
    {
      if ( (*((int (__fastcall **)(_QWORD, int *, __int64))v8 + 7))(*((_QWORD *)v8 + 1), &v44, 4LL) >= 0
        && (v44 & 1) != 0 )
      {
        v30 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v8 + 8);
        v31 = *((_QWORD *)v8 + 1);
        v45 = 1;
        v30(v31, &v45);
      }
      LOBYTE(v29) = *((_BYTE *)DeviceExtension + 4534);
      DpiCallDrvSetBrightness(a1, v29);
    }
    return 0;
  }
  v28 = v27 - 2;
  if ( !v28 )
  {
LABEL_33:
    v13 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 7))(
            *((_QWORD *)v6 + 1),
            a2->ChildUid,
            &a2->PossibleLevels);
    if ( v13 >= 0 )
      ZeroUnusedNitsRanges(&a2->NitRanges);
    return (unsigned int)v13;
  }
  if ( v28 == 1 )
  {
    v13 = 0;
    if ( v6 )
    {
      a2->BrightnessCaps.Value = 3;
    }
    else if ( v8 )
    {
      a2->BrightnessCaps.Value = 2;
    }
    else if ( v3 )
    {
      a2->BrightnessCaps.Value = 1;
    }
    else
    {
      a2->BrightnessCaps.Value = 0;
      return (unsigned int)-1073741275;
    }
    return (unsigned int)v13;
  }
  return (unsigned int)-1073741811;
}
