/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140049D50
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x14000A230 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140045980 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14004A060 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_DDLqdL @ 0x14004A190 (WPP_RECORDER_SF_DDLqdL.c)
 *     WPP_RECORDER_SF_DDL @ 0x14006C500 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // esi
  char *v7; // rdi
  int *v8; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v10; // r12
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  char *v14; // r15
  int *v15; // rbp
  int v17; // [rsp+20h] [rbp-88h]
  unsigned __int8 IsTempRefNeededAfterDeref; // [rsp+B0h] [rbp+8h]
  char active; // [rsp+B8h] [rbp+10h]

  v3 = 0;
  active = 0;
  v7 = (char *)a3 + 8;
  v8 = (int *)((char *)a3 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), HIWORD(*(_QWORD *)v7), (_DWORD)a3, 26);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v11 = *((_DWORD *)a2 + 7);
  if ( v11 )
  {
    *((_DWORD *)a2 + 7) = v11 - 1;
    active = ndisAoAcActiveRefSubtract((__int64)AoAc, *v8, 1);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (byte_14011D043 & 4) != 0 )
    {
      v17 = *((_DWORD *)a2 + 6);
      McTemplateK0xqqq_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"@(", &a1->InterfaceGuid, *(_QWORD *)v7);
      v14 = (char *)a3 + 8;
      v15 = (int *)((char *)a3 + 16);
    }
    else
    {
      v14 = v7;
      v15 = v8;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
    if ( IsTempRefNeededAfterDeref )
    {
      ndisSetTempRefTimer(a1, *((_DWORD *)AoAc + 71));
      v7 = v14;
      v8 = v15;
    }
  }
  else
  {
    v3 = -1073741675;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLqdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (*(_QWORD *)v7 >> 24) & 0xFFFFFF,
      HIWORD(*(_QWORD *)v7),
      v12,
      v17,
      BYTE6(*(_QWORD *)v7),
      BYTE3(*(_QWORD *)v7),
      *v8,
      (char)a1,
      active,
      v3);
  return v3;
}
