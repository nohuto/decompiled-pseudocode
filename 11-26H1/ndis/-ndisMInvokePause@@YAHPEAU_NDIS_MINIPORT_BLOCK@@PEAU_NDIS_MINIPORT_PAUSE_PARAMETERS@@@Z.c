/*
 * XREFs of ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x140167D70
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140182D00 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokePause(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_PAUSE_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *v3; // rdi
  __int64 result; // rax
  unsigned int v6; // edi
  char v7[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      232,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
  result = ((__int64 (__fastcall *)(void *, struct _NDIS_MINIPORT_PAUSE_PARAMETERS *))DriverHandle->MiniportDriverCharacteristics.PauseHandler)(
             a1->MiniportAdapterContext,
             v3);
  v6 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = result;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xE9u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
    return v6;
  }
  return result;
}
