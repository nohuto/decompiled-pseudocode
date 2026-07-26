/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1400AFF3C
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AFDA0 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AFE5C (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400AF0F0 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  unsigned int v6; // ebx
  bool v7; // cl
  struct _NDIS_VPORT_BLOCK *v8; // r8
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v9; // r9
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v11; // r14d
  UINT v12; // r14d
  _DWORD *InformationBuffer; // r10
  int v14; // edx
  unsigned __int16 Flags; // r11
  int HashInformation; // eax
  unsigned int HashSecretKeySize; // eax
  KIRQL v18; // dl
  __int64 v20; // [rsp+30h] [rbp-20h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v21; // [rsp+40h] [rbp-10h] BYREF
  struct _NDIS_VPORT_BLOCK *v22; // [rsp+48h] [rbp-8h] BYREF
  KIRQL NewIrql; // [rsp+90h] [rbp+40h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v24; // [rsp+98h] [rbp+48h] BYREF
  struct _NDIS_VPORT_BLOCK *v25; // [rsp+A8h] [rbp+58h] BYREF

  NewIrql = 0;
  v21 = 0LL;
  v25 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->RecvScaleCapabilities.Header.Size )
  {
    v6 = -1073741637;
    goto LABEL_29;
  }
  ndisGetCombinedRSSParameters(a1, a2, &v25, &v21, 0LL, 0LL);
  v24 = 0LL;
  v22 = 0LL;
  ndisGetCombinedRSSParameters(a1, a2, &v22, &v24, 0LL, 0LL);
  v7 = v24 != 0LL;
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
  {
    if ( !v24 )
    {
LABEL_11:
      v6 = 0;
      goto LABEL_29;
    }
    if ( (v24->Flags & 0x10) != 0 || (v7 = 1, !LOBYTE(v24->HashInformation)) )
      v7 = 0;
  }
  if ( !v7 )
    goto LABEL_11;
  v8 = v25;
  if ( v25 )
  {
    v9 = v21;
    HashSecretKeyOffset = v21->HashSecretKeyOffset;
    v11 = HashSecretKeyOffset + v21->HashSecretKeySize;
    if ( v11 < HashSecretKeyOffset )
    {
      v6 = -1073676267;
    }
    else
    {
      v12 = v11 + 28;
      v6 = 0;
      if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v12 )
      {
        InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v14 = 0;
        *InformationBuffer = 1835464;
        Flags = v9->Flags;
        if ( (Flags & 0x10) == 0 && LOBYTE(v9->HashInformation) )
        {
          v14 = ~(_BYTE)Flags & 2 | 5;
          if ( (Flags & 8) != 0 )
            v14 = ~(_BYTE)Flags & 2 | 1;
          if ( (Flags & 4) == 0 )
            v14 |= 0x10u;
        }
        InformationBuffer[1] = v14;
        InformationBuffer[5] = v8->VPortParams.NumQueuePairs;
        InformationBuffer[6] = v9->IndirectionTableSize >> 2;
        HashInformation = v9->HashInformation;
        if ( a3 )
          HashInformation = a3 | (unsigned __int8)HashInformation;
        InformationBuffer[2] = HashInformation;
        HashSecretKeySize = v9->HashSecretKeySize;
        InformationBuffer[3] = HashSecretKeySize;
        InformationBuffer[4] = 28;
        if ( HashSecretKeySize )
          memmove(InformationBuffer + 7, &v9->Header.Type + v9->HashSecretKeyOffset, HashSecretKeySize);
        a2->DATA.QUERY_INFORMATION.BytesWritten = v12;
      }
      else
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v12;
        v6 = -1073676268;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_29:
  v18 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_256b6576a69d332ac22b9d11e7f9e0fb_Traceguids,
      (char)a1,
      v20);
  }
  return v6;
}
