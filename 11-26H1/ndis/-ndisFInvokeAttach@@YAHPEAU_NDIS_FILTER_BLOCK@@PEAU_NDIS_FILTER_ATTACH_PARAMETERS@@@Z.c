/*
 * XREFs of ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1401675D0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeAttach(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_ATTACH_PARAMETERS *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rdi
  struct _NDIS_FILTER_ATTACH_PARAMETERS *v3; // rsi
  __int64 result; // rax
  unsigned int v6; // edi
  char v7[4]; // [rsp+30h] [rbp-18h]

  FilterDriver = a1->FilterDriver;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      109,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  }
  result = ((__int64 (__fastcall *)(struct _NDIS_FILTER_BLOCK *, void *, struct _NDIS_FILTER_ATTACH_PARAMETERS *))FilterDriver->DefaultFilterCharacteristics.AttachHandler)(
             a1,
             FilterDriver->FilterDriverContext,
             v3);
  v6 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = result;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x6Eu,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
    return v6;
  }
  return result;
}
