/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x140049F30
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14004A090 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_DDLcD @ 0x14004A0B0 (WPP_RECORDER_SF_DDLcD.c)
 *     WPP_RECORDER_SF_DDLc @ 0x14006D680 (WPP_RECORDER_SF_DDLc.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_NIC_ACTIVE *a2,
        char a3,
        int a4)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v6; // ebp
  _QWORD *v7; // rdi
  KIRQL v8; // dl
  KSPIN_LOCK *v9; // rcx
  int v10; // r9d

  AoAc = a1->AoAc;
  v6 = 0;
  v7 = (_QWORD *)((char *)a2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLc(*((_QWORD *)WPP_GLOBAL_Control + 8), HIWORD(*v7), a3, a4);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( ndisAoAcIsD0Required(AoAc) )
    *((_BYTE *)AoAc + 386) = a3;
  else
    v6 = -1073741823;
  KeReleaseSpinLock(v9, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLcD(*((_QWORD *)WPP_GLOBAL_Control + 8), (*v7 >> 24) & 0xFFFFFF, HIWORD(*v7), v10);
  return v6;
}
