/*
 * XREFs of ?ndisPnPQueryStopDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14017318C
 * Callers:
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA15C (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140094654 (-ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPQueryStopDevice(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v3; // edi
  unsigned __int64 *p_Lock; // rcx
  struct _IRP *v5; // rdx
  struct _IRP *NewIrql; // [rsp+48h] [rbp+10h] BYREF

  NewIrql = a2;
  LOBYTE(NewIrql) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      83,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  }
  if ( (a1->PnPCapabilities & 1) != 0 )
  {
    v3 = -1073741823;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
    if ( a1->UserModeOpenReferences )
    {
      v3 = -1073741823;
      KeReleaseSpinLock(p_Lock, (KIRQL)NewIrql);
    }
    else
    {
      KeReleaseSpinLock(p_Lock, (KIRQL)NewIrql);
      v3 = ndisPnPQueryRemoveDevice(a1, v5);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      84,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  }
  return v3;
}
