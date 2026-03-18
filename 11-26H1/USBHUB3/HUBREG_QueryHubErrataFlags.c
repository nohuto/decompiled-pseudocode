/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x140089B94
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x140080408 (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8CC (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C924 (Feature_RH5S__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x140033308 (HUBMISC_QueryKseDeviceFlags.c)
 *     _tlgWriteAgg @ 0x1400465A4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x14008860C (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  const CHAR *v5; // r12
  const CHAR *v6; // r15
  const CHAR *v7; // r14
  bool v9; // zf
  _WORD *v10; // rdx
  __int64 v11; // rbx
  int v12; // esi
  unsigned __int16 v13; // r9
  int v14; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  const CHAR *v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]
  const CHAR *v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  const CHAR *v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]

  v4 = *(_BYTE *)(a1 + 200);
  v5 = (const CHAR *)a4;
  v24 = *(_QWORD *)(a1 + 2536);
  v6 = (const CHAR *)a3;
  v7 = (const CHAR *)a2;
  v26 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, 0LL, &v26, 0, v24);
  v9 = *(_DWORD *)(a1 + 168) == 3;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( v9 && (v10 = *(_WORD **)(a1 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v7,
      (__int64)v6,
      (__int64)v5,
      v10,
      *(_WORD **)(a1 + 184),
      *(_WORD **)(a1 + 192),
      &v32,
      &v31,
      &v30,
      &v29,
      &v28,
      &v27,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2536));
  else
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v7,
      (__int64)v6,
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      &v32,
      &v31,
      &v30,
      &v29,
      &v28,
      &v27,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2536));
  v11 = v32 | v31 | v30 | v29 | v28 | v27;
  v25 = 0;
  if ( !v26 )
    goto LABEL_13;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v26,
          &g_ResetTTOnCancel,
          4LL,
          &v25,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v13 = 38;
      goto LABEL_12;
    }
LABEL_13:
    if ( (v11 & 0x100) == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v25 )
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
LABEL_15:
  v25 = 0;
  if ( v26 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            L".0",
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v12 >= 0 )
    {
      if ( !v25 )
        goto LABEL_24;
      goto LABEL_23;
    }
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v13 = 39;
      goto LABEL_12;
    }
  }
  if ( (v11 & 0x200) != 0 )
  {
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
LABEL_24:
  if ( (v11 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v25 = 0;
  if ( v26 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v26,
            &g_DisableLpm,
            4LL,
            &v25,
            0LL,
            0LL);
    if ( v12 >= 0 )
    {
      if ( !v25 )
        goto LABEL_35;
      goto LABEL_34;
    }
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v13 = 40;
LABEL_12:
      LODWORD(v23) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        v13,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v23);
      goto LABEL_109;
    }
  }
  if ( (v11 & 0x1000) != 0 )
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
LABEL_35:
  if ( (v11 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v11 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v11 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v11 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v11 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v11 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  v14 = 1;
  if ( (v11 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( (v11 & 0x40000000000LL) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 240) && (v11 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2512) |= 1u;
  if ( (v11 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v11 & 0x8000000000LL) != 0 && v4 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v11 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  if ( (v11 & 0x100000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 8u);
  if ( (v11 & 0x20000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 4u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v11 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v11 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( (v11 & 0x10000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
  if ( (v11 & 0x200000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
  if ( (v11 & 0x400000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x40u);
  if ( (v11 & 0x1000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x80u);
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() && (v11 & 0x2000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x400u);
  IsEnabledDeviceUsageNoInline = Feature_RH5S__private_IsEnabledDeviceUsageNoInline();
  v16 = 0;
  if ( IsEnabledDeviceUsageNoInline && (v11 & 0x4000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x800u);
  if ( *(_WORD *)(a1 + 2480) == 8457 && *(_WORD *)(a1 + 2482) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2484) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    if ( (unsigned int)dword_14006D2D0 > 5
      && (qword_14006D2E0 & 0x200000000004LL) != 0
      && (qword_14006D2E8 & 0x200000000004LL) == qword_14006D2E8 )
    {
      v33 = 1LL;
      v36 = &v33;
      v17 = -1LL;
      v37 = 8LL;
      if ( v7 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v7[v18] );
        v19 = v18 + 1;
      }
      else
      {
        v7 = File;
        v19 = 1;
      }
      v38 = v7;
      v39 = v19;
      v40 = 0;
      if ( v6 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v6[v20] );
        v21 = (unsigned int)(v20 + 1);
      }
      else
      {
        v6 = File;
        v21 = 1LL;
      }
      v41 = v6;
      v42 = v21;
      v43 = 0;
      if ( v5 )
      {
        do
          ++v17;
        while ( v5[v17] );
        v14 = v17 + 1;
      }
      else
      {
        v5 = File;
      }
      v46 = 0;
      v47 = &v34;
      v44 = v5;
      v45 = v14;
      v34 = 16779264LL;
      v48 = 8LL;
      tlgWriteAgg(v21, byte_140068F3E, (__int64)File, 7u, &v35);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v16, 3, 41, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids);
    }
  }
  v12 = 0;
LABEL_109:
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v12;
}
