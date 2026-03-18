/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x14000A460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x140008FE0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B7F4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int16 v6; // ax
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // r9d
  int v10; // ecx
  unsigned int v11; // ebp
  int v12; // r8d
  __int64 v13; // r15
  unsigned int Ulong; // ebx
  char v15; // dl
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // r13
  __int16 v21; // cx
  unsigned int v22; // edx
  __int16 v23; // cx
  __int16 v24; // ax
  unsigned __int16 v25; // r8
  int v26; // eax
  __int16 v27; // cx
  __int16 v28; // dx
  __int16 v29; // dx
  __int16 v30; // ax
  unsigned __int16 v31; // cx
  __int64 v32; // r8
  __int64 v33; // r13
  __int16 v34; // cx
  __int16 v35; // ax
  __int16 v36; // cx
  __int16 v37; // dx
  __int16 v38; // cx
  __int16 v39; // ax
  unsigned __int16 v40; // r9
  unsigned int v41; // r10d
  __int16 v42; // cx
  __int16 v43; // ax
  __int16 v44; // cx
  __int16 v45; // dx
  __int16 v46; // ax
  unsigned __int16 v47; // cx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  char v51; // dl
  int v52; // r8d
  int v53; // r9d
  int v54; // edx
  int v55; // r9d
  __int16 v56; // dx
  unsigned __int16 v57; // cx
  unsigned __int16 v58; // ax
  _UNKNOWN **v59; // rdx
  int v60; // r9d
  int v61; // edx
  const char *v62; // [rsp+28h] [rbp-C0h]
  __int64 v63; // [rsp+30h] [rbp-B8h]
  __int64 v64; // [rsp+78h] [rbp-70h]
  _OWORD v65[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  v64 = v5;
  if ( *(_BYTE *)(v4 + 1001) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v62 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v51, v52, v53);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v65, 0, sizeof(v65));
  v66 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v65[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_5;
    }
    v6 = -1;
  }
  else
  {
    v6 = 40;
  }
  LOWORD(v65[0]) = v6;
LABEL_5:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v65);
  v7 = *(_QWORD *)(v3 + 8);
  v8 = *((_QWORD *)&v65[0] + 1);
  if ( !*(_BYTE *)(*(_QWORD *)(v7 + 88) + 16LL) || *(_BYTE *)(v7 + 797) )
  {
    v13 = 4LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v62) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 88) + 16LL);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v7 + 72),
        2u,
        4u,
        0xF5u,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v62,
        *(unsigned __int8 *)(v7 + 797));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v61) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v61,
          11,
          108,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      }
    }
    goto LABEL_103;
  }
  v9 = *(unsigned __int16 *)(*((_QWORD *)&v65[0] + 1) + 130LL);
  v10 = 8;
  v11 = *(unsigned __int16 *)(*((_QWORD *)&v65[0] + 1) + 132LL);
  LOWORD(v12) = BYTE1(v11);
  v13 = 4LL;
  if ( v9 != 2 )
    v10 = 4;
  if ( *(_WORD *)(*((_QWORD *)&v65[0] + 1) + 128LL) != 163
    || (v9 & 0xFFFD) != 0
    || !*(_WORD *)(*((_QWORD *)&v65[0] + 1) + 132LL)
    || v11 > *(_DWORD *)(v3 + 16)
    || *(unsigned __int16 *)(*((_QWORD *)&v65[0] + 1) + 134LL) != v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v54 = *(unsigned __int8 *)(*((_QWORD *)&v65[0] + 1) + 134LL);
    v55 = 109;
    v12 = (unsigned __int16)v12;
    goto LABEL_65;
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 40) + 16LL * (v11 - 1));
  v15 = *(_BYTE *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 13);
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
LABEL_16:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_17:
        v16 = -1073741823;
        v17 = -1073741820;
LABEL_18:
        v18 = v8;
        goto LABEL_19;
      }
      v55 = 123;
      v54 = *(unsigned __int8 *)(v8 + 134);
      v12 = *(unsigned __int8 *)(v8 + 133);
LABEL_65:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v54, v12, v55);
      goto LABEL_17;
    }
    if ( Ulong != -1 )
    {
      v33 = *(_QWORD *)(v8 + 40);
      v16 = 0;
      *(_DWORD *)v33 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4,
          11,
          117,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v11,
          Ulong);
      if ( RootHub_HideInvalidDebugPortStatusAndChange(v3, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4,
            11,
            118,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v11);
        v57 = *(_WORD *)v33 & 0xFC04 | 0x2A0;
        v58 = *(_WORD *)(v33 + 2) & 0xFF06;
        *(_WORD *)(v33 + 2) = v58;
        *(_WORD *)v33 = v57;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v63) = v58;
          LODWORD(v62) = v57;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x77u,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v62,
            v63);
        }
      }
      else
      {
        v34 = Ulong & 1 | *(_WORD *)v33 & 0xFFFE;
        v35 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(2 * (Ulong >> 1))) & 2;
        v36 = v35 ^ ((unsigned __int8)v35 ^ Ulong & 0xF8) & 8;
        v37 = v36 ^ ((unsigned __int8)v36 ^ Ulong & 0xF0) & 0x10;
        v38 = v37 ^ (v37 ^ (32 * (Ulong >> 5))) & 0x1E0;
        *(_WORD *)v33 = v38;
        if ( ((Ulong >> 5) & 0xF) == 0xF )
        {
          v38 = v38 & 0xFE1F | 0x100;
          *(_WORD *)v33 = v38;
        }
        if ( (Ulong & 0x1000000) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4,
              11,
              120,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
          v38 = *(_WORD *)v33 & 0xFE1F | 0x140;
        }
        v39 = *(_WORD *)(v33 + 2);
        v40 = v38 ^ (v38 ^ Ulong & 0xFE00) & 0x200;
        *(_WORD *)v33 = v40;
        v41 = Ulong >> 22;
        v42 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(Ulong >> 17)) & 1;
        v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(8 * (Ulong >> 20))) & 8;
        v44 = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(16 * (Ulong >> 21))) & 0x10;
        v45 = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(32 * (Ulong >> 19))) & 0x20;
        v46 = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)((unsigned __int8)(Ulong >> 22) << 6)) & 0x40;
        v47 = v46 ^ (v46 ^ (Ulong >> 23 << 7)) & 0x80;
        *(_WORD *)(v33 + 2) = v47;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v63) = v47;
          LODWORD(v62) = v40;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x79u,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v62,
            v63);
          v41 = Ulong >> 22;
        }
        if ( *(_DWORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 108) && (Ulong & 0x1E0) == 0xC0 && (v41 & 1) != 0 )
          *(_WORD *)(v33 + 2) |= 0x80u;
        if ( *(_WORD *)(v8 + 130) == 2 )
        {
          v48 = XilRegister_ReadUlong(v64, *(_QWORD *)(v3 + 40) + 16LL * (v11 - 1) + 8);
          *(_DWORD *)(v33 + 4) = 0;
          if ( *(_WORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 54) || (Ulong & 0x3C00) != 0x400 )
            v49 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
          else
            v49 = 68;
          v50 = v49 | (v48 >> 8) & 0xFF00;
          *(_DWORD *)(v33 + 4) = v50;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4,
              11,
              122,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v50);
        }
      }
      v17 = 0;
      goto LABEL_18;
    }
    v59 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v60 = 116;
    goto LABEL_84;
  }
  if ( *(_WORD *)(v8 + 130) )
    goto LABEL_16;
  if ( Ulong == -1 )
  {
    v59 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_85:
      LOBYTE(v59) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v59);
LABEL_103:
      v16 = -1073741810;
      v17 = -1073713152;
      goto LABEL_18;
    }
    v60 = 110;
LABEL_84:
    LOBYTE(v59) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      (_DWORD)v59,
      11,
      v60,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    goto LABEL_85;
  }
  v20 = *(_QWORD *)(v8 + 40);
  v16 = 0;
  *(_DWORD *)v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4,
      11,
      111,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v11,
      Ulong);
  v22 = Ulong >> 1;
  v21 = *(_WORD *)v20 ^ ((unsigned __int8)Ulong ^ (unsigned __int8)*(_WORD *)v20) & 1;
  LOWORD(v22) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(2 * (Ulong >> 1))) & 2;
  *(_WORD *)v20 = v22;
  if ( ((Ulong >> 5) & 0xF) == 2 )
  {
    v56 = v22 | 0x20;
    goto LABEL_67;
  }
  if ( ((Ulong >> 5) & 0xF) == 3 )
  {
LABEL_66:
    v56 = v22 | 4;
LABEL_67:
    *(_WORD *)v20 = v56;
    goto LABEL_28;
  }
  if ( ((Ulong >> 5) & 0xF) != 0xB )
  {
    if ( ((Ulong >> 5) & 0xF) != 0xF )
      goto LABEL_28;
    goto LABEL_66;
  }
  LOWORD(v22) = v22 | 0x800;
  *(_WORD *)v20 = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v22,
      11,
      112,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v11);
  }
LABEL_28:
  v23 = *(_WORD *)v20 ^ ((unsigned __int8)*(_WORD *)v20 ^ Ulong & 0xF8) & 8;
  v24 = v23 ^ ((unsigned __int8)v23 ^ Ulong & 0xF0) & 0x10;
  v25 = v24 ^ (v24 ^ ((unsigned __int16)(Ulong >> 9) << 8)) & 0x100;
  v26 = Ulong & 0x3C00;
  *(_WORD *)v20 = v25;
  if ( v26 == 2048 )
  {
    v25 |= 0x200u;
LABEL_56:
    *(_WORD *)v20 = v25;
    goto LABEL_30;
  }
  if ( v26 == 3072 )
  {
    v25 |= 0x400u;
    goto LABEL_56;
  }
LABEL_30:
  if ( (Ulong & 0xC000) != 0 )
  {
    v25 |= 0x1000u;
    *(_WORD *)v20 = v25;
  }
  v27 = *(_WORD *)(v20 + 2) ^ ((unsigned __int8)*(_WORD *)(v20 + 2) ^ (unsigned __int8)(Ulong >> 17)) & 1;
  v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(2 * (Ulong >> 18))) & 2;
  if ( (Ulong & 0x1E0) == 0x1E0 )
    v29 = v28 & 0xFFFB;
  else
    v29 = (v28 ^ (4 * (Ulong >> 22))) & 4 ^ v28;
  v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(8 * (Ulong >> 20))) & 8;
  v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(16 * (Ulong >> 21))) & 0x10;
  *(_WORD *)(v20 + 2) = v31;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v63) = v31;
    LODWORD(v62) = v25;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0x71u,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v62,
      v63);
  }
  v32 = *(_QWORD *)(v3 + 48) + 120LL * (v11 - 1);
  if ( (Ulong & 0x1E0) == 0x1E0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v32 + 64), 1u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 80),
      -100000000LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 72),
      -10000000LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4,
        11,
        114,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v11,
        Ulong);
    v18 = 4LL;
    v17 = 1;
    v13 = v8;
  }
  else
  {
    _m_prefetchw((const void *)(v32 + 64));
    if ( (_InterlockedAnd((volatile signed __int32 *)(v32 + 64), 0xFFFFFFFE) & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4,
          11,
          115,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v11,
          Ulong);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 80),
        0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(120LL * (v11 - 1) + *(_QWORD *)(v3 + 48) + 72),
        0LL);
    }
    v18 = 4LL;
    v17 = 0;
    v13 = v8;
  }
LABEL_19:
  *(_DWORD *)(v13 + v18) = v17;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v16);
}
