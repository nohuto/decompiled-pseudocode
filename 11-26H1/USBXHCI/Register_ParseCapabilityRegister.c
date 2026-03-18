/*
 * XREFs of Register_ParseCapabilityRegister @ 0x14007CAB0
 * Callers:
 *     Register_PrepareHardware @ 0x14007D3E0 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x14002FBAC (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140033CC8 (WPP_RECORDER_SF_ddddd.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Register_FindFirstExtendedCapability @ 0x1400380F4 (Register_FindFirstExtendedCapability.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_dddd @ 0x140045840 (WPP_RECORDER_SF_dddd.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x14004F508 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int16 v9; // r9
  unsigned int v10; // eax
  int v11; // edx
  unsigned __int8 v12; // bl
  unsigned int v13; // ebp
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // edx
  unsigned int v24; // eax
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // r9d
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // r10d
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // eax
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  int v41; // ecx
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r8
  unsigned int *FirstExtendedCapability; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned int v48; // edx
  int v49; // r9d
  __int64 v50; // r8
  unsigned int v51; // eax
  __int64 v52; // r8
  int v53; // eax
  __int64 v55; // [rsp+28h] [rbp-70h]
  char v56; // [rsp+28h] [rbp-70h]
  char v57; // [rsp+28h] [rbp-70h]
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  __int64 v60; // [rsp+40h] [rbp-58h]
  __int128 v61; // [rsp+60h] [rbp-38h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 728) == -1LL )
  {
    v4 = *(_WORD *)(v3 + 648);
    if ( v4 == 7023 )
    {
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v7) = (unsigned __int16)Ulong;
        v8 = WORD1(Ulong);
        v9 = 21;
LABEL_11:
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          v9,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v7,
          v8);
        goto LABEL_12;
      }
      goto LABEL_12;
    }
    if ( v4 != 4172 )
    {
      if ( _stricmp((const char *)(v3 + 704), "QCOM") )
        goto LABEL_13;
      v3 = *(_QWORD *)(a1 + 8);
    }
    if ( !Controller_IsSecureDevice(v3) )
    {
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = Ulong & 0xFFF;
        v9 = 22;
        v7 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_11;
      }
LABEL_12:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) = Ulong;
      Etw_ControllerFirmareVersionUpdate(v5, *(_QWORD *)(a1 + 8));
    }
  }
LABEL_13:
  v10 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v12 = v10;
  v13 = HIBYTE(v10);
  v14 = HIWORD(v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = BYTE2(v10);
    LODWORD(v55) = HIBYTE(v10);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x17u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58,
      (unsigned __int8)v10);
  }
  v15 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v15 + 720) = v13;
  *(_BYTE *)(v15 + 721) = v14;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_BYTE *)(v16 + 720);
  if ( v17 )
  {
    if ( *(_BYTE *)(v16 + 721) >= 0x10u || v17 > 1u )
      *(_BYTE *)(v16 + 719) = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v16 + 72), v11, 6, 24, (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    }
    v18 = *(_QWORD *)(a1 + 8);
    v61 = 0x1000uLL;
    v19 = 2LL;
    v20 = (_QWORD *)(v18 + 736);
    do
    {
      *v20 |= *(_QWORD *)((char *)v20 + (_QWORD)&v61 - v18 - 736);
      ++v20;
      --v19;
    }
    while ( v19 );
  }
  v21 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v21 + v12;
  v22 = XilRegister_ReadUlong(a1, (unsigned int *)(v21 + 4));
  *(_DWORD *)(a1 + 84) = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v59) = *(unsigned __int8 *)(a1 + 87);
    LODWORD(v58) = (v22 >> 8) & 0x7FF;
    LODWORD(v55) = (unsigned __int8)v22;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x19u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58,
      v59);
  }
  v24 = *(_DWORD *)(a1 + 84);
  if ( !(_BYTE)v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 26;
LABEL_29:
      v56 = 0;
LABEL_96:
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v23,
        6,
        v25,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v56);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  v26 = (v24 >> 8) & 0x7FF;
  if ( !v26 || v26 > 0x400 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 27;
      v56 = v26;
      goto LABEL_96;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_BYTE *)(a1 + 87) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 28;
      goto LABEL_29;
    }
    return (unsigned int)-1073741811;
  }
  v27 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 88) = v27;
  *(_DWORD *)(a1 + 92) = 1 << ((unsigned __int8)v27 >> 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = 1 << ((unsigned __int8)v27 >> 4);
    LODWORD(v55) = v27 & 0xF;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Du,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58);
  }
  v28 = *(_DWORD *)(a1 + 88);
  v29 = (v28 >> 27) | *(_WORD *)(a1 + 90) & 0x3E0;
  *(_DWORD *)(a1 + 96) = v29;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = v29;
    LODWORD(v55) = (v28 >> 26) & 1;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58);
  }
  v30 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 100) = v30;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = *(unsigned __int16 *)(a1 + 102);
    LODWORD(v55) = (unsigned __int8)v30;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Fu,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58);
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 100) > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v32 = 32;
LABEL_44:
    LOBYTE(v31) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v31,
      6,
      v32,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 102) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v32 = 33;
    goto LABEL_44;
  }
  v33 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 104) = v33;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v59) = (v33 >> 2) & 1;
    LODWORD(v58) = (v33 >> 1) & 1;
    LODWORD(v55) = v33 & 1;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x22u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v55,
      v58,
      v59,
      (v33 >> 3) & 1);
    v35 = *(_DWORD *)(a1 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v60) = (v35 >> 7) & 1;
      LODWORD(v59) = (v35 >> 6) & 1;
      LODWORD(v58) = (v35 >> 5) & 1;
      LODWORD(v55) = (v35 >> 4) & 1;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x23u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v55,
        v58,
        v59,
        v60);
      v34 = *(_DWORD *)(a1 + 104);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v58) = *(unsigned __int16 *)(a1 + 106);
        LODWORD(v55) = (unsigned __int16)v34 >> 12;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x24u,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v55,
          v58);
      }
    }
  }
  *(_DWORD *)(a1 + 108) = 0;
  if ( v12 >= 0x20u )
  {
    v36 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 108) = v36;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v59) = (v36 >> 2) & 1;
      LODWORD(v58) = (v36 >> 1) & 1;
      LODWORD(v55) = v36 & 1;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x25u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v55,
        v58,
        v59);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = *(_DWORD *)(a1 + 108);
        LODWORD(v59) = (v37 >> 5) & 1;
        LODWORD(v58) = (v37 >> 4) & 1;
        LODWORD(v55) = (v37 >> 3) & 1;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x26u,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v55,
          v58,
          v59);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = *(_DWORD *)(a1 + 108);
          LODWORD(v58) = (v38 >> 8) & 1;
          LODWORD(v55) = (v38 >> 6) & 1;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x27u,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            v55,
            v58);
        }
      }
    }
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = *(_DWORD *)(a1 + 108);
      LODWORD(v60) = (v39 >> 12) & 1;
      LODWORD(v59) = (v39 >> 11) & 1;
      LODWORD(v58) = (v39 >> 10) & 1;
      LODWORD(v55) = (v39 >> 9) & 1;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (unsigned int)v59,
        6u,
        0x28u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v55,
        v58,
        v59,
        v60,
        v39 >> 13);
    }
  }
  v40 = *(_DWORD *)(a1 + 104);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4) > 7u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v34,
        6,
        41,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4);
    }
    v40 = *(_DWORD *)(a1 + 104) & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 104) = v40;
  }
  v41 = (unsigned __int16)v40 >> 12;
  if ( !v41 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x40000LL) != 0 )
    v42 = 0;
  else
    v42 = (2 << v41) - 1;
  *(_DWORD *)(a1 + 116) = v42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v34,
      6,
      42,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v42);
  }
  v23 = *(unsigned __int16 *)(a1 + 106);
  if ( !(_WORD)v23 || (v43 = 4LL * *(unsigned __int16 *)(a1 + 106), v43 >= *(unsigned int *)(a1 + 20)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = 43;
      v56 = *(_WORD *)(a1 + 106);
      goto LABEL_96;
    }
    return (unsigned int)-1073741811;
  }
  v44 = v43 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v44;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v23,
      6,
      44,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v44);
  }
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v46 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v46) || *(_BYTE *)(a1 + 136) )
  {
    v47 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    v48 = v47;
    if ( !v47 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v49 = 45;
      goto LABEL_80;
    }
    v50 = v47 + *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 48) = v50;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v58) = v47;
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v47,
        6u,
        0x2Eu,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v50,
        v58);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v51 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  v48 = v51;
  if ( !v51 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v49 = 47;
LABEL_80:
    v57 = 0;
LABEL_81:
    LOBYTE(v48) = 2;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v48,
      6,
      v49,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v57);
    return (unsigned int)-1073741811;
  }
  v52 = v51 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v52;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v58) = v51;
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v51,
      6u,
      0x30u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v52,
      v58);
  }
  v53 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v53 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v49 = 49;
    v57 = v53;
    goto LABEL_81;
  }
  return v1;
}
