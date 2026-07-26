/*
 * XREFs of NdisWriteErrorLogEntry @ 0x140005D80
 * Callers:
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006BEC0 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400A6CC8 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400CA45C (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 *     NdisMAllocateMapRegisters @ 0x1401738C0 (NdisMAllocateMapRegisters.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     McTemplateK0jqxzqqQR5_EtwWriteTransfer @ 0x140007540 (McTemplateK0jqxzqqQR5_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  ULONG v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  const void *v7; // r14
  __int64 v8; // rcx
  _WORD *ErrorLogEntry; // rax
  _WORD *v10; // rbx
  ULONG v11; // edx
  ULONG *v12; // r8
  ULONG v13; // eax
  __int64 v14; // rcx
  char v15; // [rsp+30h] [rbp-78h]
  ULONG v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = NumberOfErrorValues;
  v3 = ErrorCode;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = ErrorCode;
    LOBYTE(ErrorCode) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ErrorCode,
      1,
      10,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)NdisAdapterHandle,
      v15);
    NumberOfErrorValues = v16;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 482);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = 4LL * NumberOfErrorValues + 48;
    ErrorCode = v6 + v8;
    if ( (unsigned __int64)(v6 + v8) <= 0xFFFFFFFF )
    {
      if ( ErrorCode <= 0xF0
        || (v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 477),
            LODWORD(v6) = *((unsigned __int16 *)NdisAdapterHandle + 1905),
            *(_QWORD *)&ErrorCode = *((unsigned __int16 *)NdisAdapterHandle + 1905) + v8,
            *(_QWORD *)&ErrorCode <= 0xFFFFFFFFuLL)
        && ErrorCode <= 0xF0 )
      {
        ErrorLogEntry = IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 478), ErrorCode);
        v10 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = v3;
          *ErrorLogEntry = 0;
          v11 = 0;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          ErrorLogEntry[1] = 4 * v16;
          if ( v16 )
          {
            v12 = &v16;
            do
            {
              v13 = v12[2];
              v12 += 2;
              v14 = v11++;
              *(_DWORD *)&v10[2 * v14 + 20] = v13;
            }
            while ( v11 < v16 );
          }
          if ( (_DWORD)v6 )
          {
            v10[2] = 1;
            v10[3] = 4 * (v16 + 12);
            memmove(&v10[2 * v16 + 24], v7, (unsigned int)v6);
          }
          else
          {
            v10[2] = 0;
          }
          if ( (byte_14011D044 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5_EtwWriteTransfer(
              *((_QWORD *)NdisAdapterHandle + 482),
              v11,
              (_DWORD)NdisAdapterHandle + 4008,
              (_DWORD)NdisAdapterHandle + 4008,
              *((_DWORD *)NdisAdapterHandle + 1014),
              *((_QWORD *)NdisAdapterHandle + 503),
              *(_QWORD *)(*((_QWORD *)NdisAdapterHandle + 482) + 8LL),
              v3,
              v16,
              (__int64)(v10 + 20));
          IoWriteErrorLogEntry(v10);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ErrorCode) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ErrorCode,
      1,
      11,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)NdisAdapterHandle,
      v3);
  }
}
