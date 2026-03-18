/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x140004AFC
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x140012AE0 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x140006820 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDD @ 0x140007224 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x140035484 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rax
  int v4; // edx
  __int16 v5; // bx
  _QWORD *v6; // r14
  unsigned __int16 v7; // di
  unsigned __int16 v8; // si
  __int16 v9; // r12
  __int16 v10; // r13
  unsigned int v11; // ebp
  __int16 v13; // [rsp+90h] [rbp+8h]

  v3 = *(_WORD **)(a1 + 1328);
  v4 = 0;
  v5 = *(_WORD *)(a1 + 184);
  v6 = (_QWORD *)a1;
  v7 = *(_WORD *)(a1 + 192);
  v8 = *(_WORD *)(a1 + 186);
  *(_WORD *)(a1 + 192) = v5;
  if ( v3 )
  {
    LODWORD(a1) = (unsigned __int16)v3[1004];
    v9 = v3[1002];
    v10 = v3[1003];
    v13 = v3[1004];
  }
  else
  {
    LOBYTE(v9) = 0;
    LOBYTE(v13) = 0;
    LOBYTE(v10) = 0;
  }
  v11 = 3013;
  if ( (v5 & 1) != (v7 & 1) )
  {
    if ( (v8 & 1) != 0 )
    {
      if ( !*((_BYTE *)v6 + 1457)
        && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015
                                                                                                 + 3504))(
             WdfDriverGlobals,
             *(_QWORD *)(*v6 + 16LL),
             0LL,
             0LL,
             3730,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
      {
        *((_BYTE *)v6 + 1457) = 1;
      }
    }
    else
    {
      v11 = 3017;
    }
    goto LABEL_28;
  }
  if ( (v5 & 8) != 0 )
  {
    LODWORD(a1) = 3;
    if ( ((v7 | v8) & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*v6, 0LL, a3);
      *((_DWORD *)v6 + 356) = 4;
      v11 = 3065;
LABEL_16:
      if ( (*(_DWORD *)(*v6 + 2608LL) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v6 + 34);
      if ( (byte_140070D4A & 1) != 0 )
        McTemplateK0qhhhqhhh_EtwWriteTransfer(
          a1,
          v4,
          *(_DWORD *)v6 + 2428,
          *((unsigned __int16 *)v6 + 100),
          v7,
          v5,
          v8,
          v11,
          v9,
          v10,
          v13);
      goto LABEL_28;
    }
  }
  else if ( (v7 & 8) != 0 && (v8 & 8) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v6, 0LL, a3);
    v4 = 0;
    v11 = 3069;
    *((_DWORD *)v6 + 356) = 0;
    goto LABEL_16;
  }
  if ( (v5 & 2) != 0 || (v7 & 2) == 0 || (v8 & 2) != 0 )
  {
    if ( (v5 & 4) == 0 && (v7 & 4) != 0 && (v8 & 4) == 0 )
      v11 = 3085;
  }
  else
  {
    v11 = 3029;
  }
LABEL_28:
  *((_DWORD *)v6 + 2) = v11;
  if ( v11 == 3017 && (v5 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dDDD(
        v6[179],
        v4,
        4,
        85,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        *((_WORD *)v6 + 100),
        v7,
        v5,
        v8);
    if ( (*(_DWORD *)(*v6 + 2608LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v6 + 34);
    if ( (byte_140070D4A & 1) != 0 )
      McTemplateK0qhhhqhhh_EtwWriteTransfer(
        a1,
        v4,
        *(_DWORD *)v6 + 2428,
        *((unsigned __int16 *)v6 + 100),
        v7,
        v5,
        v8,
        201,
        v9,
        v10,
        v13);
  }
  return v11;
}
