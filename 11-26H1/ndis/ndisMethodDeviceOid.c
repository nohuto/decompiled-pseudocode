/*
 * XREFs of ndisMethodDeviceOid @ 0x1400C8D94
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1400568A0 (ndisIsOidAllowedFromUsermode.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisMethodDeviceOid(__int64 a1, _DWORD *a2, int *a3, unsigned int a4, unsigned int a5)
{
  int v9; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  struct _NDIS_MINIPORT_BLOCK *v17; // rsi
  int v18; // r8d
  int v19; // ecx

  if ( !ndisIsOidAllowedFromUsermode(*a3) )
    return 3221225506LL;
  v11 = v9 - 66086;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 14;
        if ( v14 )
        {
          v15 = v14 - 10;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( (unsigned int)(v16 - 4) >= 2 )
                return 3221225659LL;
            }
          }
        }
      }
    }
  }
  if ( a4 < 8 || a5 < 8 )
    return 3221291029LL;
  v17 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 8);
  memset(a2, 0, 0xF8uLL);
  a2[22] |= 8u;
  *((_QWORD *)a2 + 13) = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)(a2 + 42));
  *a2 = 15466902;
  *(_QWORD *)(a2 + 1) = 12LL;
  v19 = *a3;
  a2[8] = *a3;
  a2[14] = a3[1];
  *((_QWORD *)a2 + 5) = a3 + 2;
  a2[12] = a4 - 8;
  a2[13] = a5 - 8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v18,
      0xCu,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      (char)a2,
      v19,
      v17);
  return ndisQuerySetMiniport(v17, 0LL, (struct _NDIS_OID_REQUEST *)a2, 0, 0LL);
}
