/*
 * XREFs of ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EC30
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B52B0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BB184 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisPktMonComponentNotify @ 0x1401427F0 (ndisPktMonComponentNotify.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1401792A0 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 */

unsigned __int8 __fastcall ndisIsMiniportReady(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int16 v1; // r9
  int PnPFlags; // edx
  unsigned int Flags; // [rsp+30h] [rbp-18h]

  if ( (a1->Flags & 0x80200020) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v1 = 265;
      Flags = a1->Flags;
LABEL_14:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        v1,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1,
        Flags);
    }
    return 0;
  }
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x1084910) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v1 = 266;
LABEL_13:
    Flags = PnPFlags;
    goto LABEL_14;
  }
  PnPFlags = a1->PnPDeviceState;
  if ( PnPFlags != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v1 = 267;
    goto LABEL_13;
  }
  PnPFlags = a1->CurrentDevicePowerState;
  if ( PnPFlags != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v1 = 268;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PnPFlags) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PnPFlags,
      13,
      269,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
  return 1;
}
