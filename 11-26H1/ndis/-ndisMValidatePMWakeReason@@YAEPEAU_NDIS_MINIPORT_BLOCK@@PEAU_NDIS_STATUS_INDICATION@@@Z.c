/*
 * XREFs of ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400447A0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140044940 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x140044A70 (McTemplateK0xq_EtwWriteTransfer.c)
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140044AE0 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008FBF0 (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1400B3264 (WPP_RECORDER_SF_DqZ.c)
 */

unsigned __int8 __fastcall ndisMValidatePMWakeReason(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_STATUS_INDICATION *a2,
        int a3)
{
  struct _NDIS_STATUS_INDICATION *v3; // rdi
  unsigned __int16 *StatusBuffer; // rbx
  unsigned int v7; // eax
  unsigned int StatusBufferSize; // ecx
  int v9; // r8d
  int v10; // ecx
  bool v11; // zf
  int v12; // r9d
  int v13; // r9d

  v3 = a2;
  LODWORD(a2) = a2->StatusBufferSize;
  if ( (unsigned int)a2 < 0x14 )
  {
    NdisTraceLoggingMiniportWakeBufferTooLarge(a1, (unsigned int)a2);
    a1->LastWakeReason = 0xFFFF;
    return 0;
  }
  StatusBuffer = (unsigned __int16 *)v3->StatusBuffer;
  a1->LastWakeReason = *((_DWORD *)StatusBuffer + 2);
  if ( (byte_14011D043 & 4) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))McTemplateK0xq_EtwWriteTransfer)(
      a1,
      &NicWakeReason,
      &a1->InterfaceGuid,
      (_NET_LUID_LH)a1->NetLuid.Value,
      *((_DWORD *)StatusBuffer + 2));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      138,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      *((_DWORD *)StatusBuffer + 2),
      (char)a1,
      (__int64)a1->pAdapterInstanceName);
  if ( *(_BYTE *)StatusBuffer != 0x80
    || *((_BYTE *)StatusBuffer + 1) != 1
    || (v7 = StatusBuffer[1], v7 < 0x14)
    || (StatusBufferSize = v3->StatusBufferSize, v7 > StatusBufferSize) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 139;
      goto LABEL_44;
    }
    return 0;
  }
  if ( *((_DWORD *)StatusBuffer + 1) )
    return 0;
  a2 = (struct _NDIS_STATUS_INDICATION *)*((unsigned int *)StatusBuffer + 3);
  if ( ((unsigned __int8)a2 & 7) != 0 )
    return 0;
  if ( (unsigned int)a2 > StatusBufferSize
    || (char *)a2 + (unsigned __int64)StatusBuffer < (char *)StatusBuffer
    || (v9 = *((_DWORD *)StatusBuffer + 4), v9 + (int)a2 < (unsigned int)a2)
    || v9 + (int)a2 > StatusBufferSize )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 140;
LABEL_44:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        14,
        v13,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1);
      return 0;
    }
    return 0;
  }
  v10 = *((_DWORD *)StatusBuffer + 2);
  if ( v10 == 1 )
    return ndisMValidatePMWakePacket(a1, v3);
  if ( v10 > 4096 )
  {
    if ( v10 > 0x2000 )
    {
      if ( v10 != 8193 && v10 != 8194 && (unsigned int)(v10 - 8196) > 1 )
        return 0;
      goto LABEL_39;
    }
    if ( v10 == 0x2000 || v10 == 4097 || v10 == 4098 || v10 == 4099 )
      goto LABEL_39;
    v12 = v10 - 4100;
    v11 = v10 == 4100;
  }
  else
  {
    if ( v10 == 4096 )
      goto LABEL_39;
    v11 = v10 == 2;
    v12 = v10 - 2;
  }
  if ( !v11 && v12 != 1 )
    return 0;
LABEL_39:
  if ( (_DWORD)a2 || v9 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      0,
      14,
      141,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v10,
      (char)a1,
      (__int64)a1->pAdapterInstanceName);
  return 1;
}
