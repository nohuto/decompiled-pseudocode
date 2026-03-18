/*
 * XREFs of Register_PrepareHardware @ 0x14007D3E0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Register_BiosHandoff @ 0x1400060A4 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     Register_ControllerReset @ 0x1400316A8 (Register_ControllerReset.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Register_MapSecureMmio @ 0x140049F1C (Register_MapSecureMmio.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  char *v5; // rdx
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int128 v20; // [rsp+60h] [rbp-38h] BYREF

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2432))(
              WdfDriverGlobals,
              a2);
        ++i )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2440))(
           WdfDriverGlobals,
           a2,
           i);
    if ( *(_BYTE *)v7 == 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          6,
          12,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = *(_DWORD *)(v7 + 12);
          LODWORD(v18) = *(_DWORD *)(v7 + 4);
          LODWORD(v17) = *(_DWORD *)(v7 + 8);
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0xDu,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            v17,
            v18,
            v19);
        }
      }
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v8 = MmMapIoSpaceEx(*(_QWORD *)(v7 + 4), *(unsigned int *)(v7 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v8;
        if ( !v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              (_DWORD)v5,
              6,
              14,
              (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
          }
          v10 = -1073741670;
          goto LABEL_34;
        }
        v9 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(a1 + 20) = v9;
        *(_BYTE *)(a1 + 16) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = v9;
          WPP_RECORDER_SF_qd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0xFu,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            v8,
            v18);
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v10 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v5,
        6,
        16,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    }
    goto LABEL_34;
  }
  if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
  {
    v10 = Register_MapSecureMmio(a1);
    if ( v10 < 0 )
      goto LABEL_34;
  }
  v11 = Register_ParseCapabilityRegister(a1);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v12 = 17;
    goto LABEL_23;
  }
  v11 = Register_BiosHandoff((_QWORD *)a1);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v12 = 18;
    goto LABEL_23;
  }
  v11 = Register_ControllerReset(a1, 0);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v12 = 19;
LABEL_23:
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      v12,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v11);
    goto LABEL_34;
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x80000LL) != 0
    || (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v5 = (char *)&v20 - v13;
    v14 = 2LL;
    v15 = (_QWORD *)(v13 + 736);
    v20 = 1uLL;
    do
    {
      *v15 |= *(_QWORD *)&v5[(_QWORD)v15 - 736];
      ++v15;
      --v14;
    }
    while ( v14 );
  }
LABEL_34:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v5,
        6,
        20,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
