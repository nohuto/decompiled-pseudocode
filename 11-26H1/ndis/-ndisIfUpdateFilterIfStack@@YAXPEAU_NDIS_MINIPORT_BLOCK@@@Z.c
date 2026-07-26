/*
 * XREFs of ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001CBA0
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14001D000 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14001CD80 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14001D4D0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // si
  unsigned int IfIndex; // edi
  int v3; // edx
  struct _NDIS_IF_BLOCK *Interface; // rax
  unsigned int HigherLayerIfCount; // edx
  PVOID *v6; // rax
  unsigned int v7; // r8d
  PVOID *v8; // rbx
  struct _NDIS_IF_BLOCK *v9; // rbx
  int v10; // edx
  unsigned int v11[4]; // [rsp+30h] [rbp-498h] BYREF
  _OWORD v12[69]; // [rsp+40h] [rbp-488h] BYREF

  v1 = (char)a1;
  IfIndex = a1->IfIndex;
  memset(v12, 0, 0x444uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      22,
      14,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      v1);
  }
  KeAcquireSpinLockAtDpcLevel(&qword_14011E960);
  Interface = ndisIfFindInterface(IfIndex);
  v12[0] = Interface->NetworkGuid;
  HigherLayerIfCount = Interface->HigherLayerIfCount;
  if ( HigherLayerIfCount )
  {
LABEL_4:
    v6 = (PVOID *)P;
    v7 = 0;
    while ( v6 != &P && v7 < HigherLayerIfCount )
    {
      v8 = v6;
      v6 = (PVOID *)*v6;
      if ( *((_DWORD *)v8 + 5) == IfIndex )
      {
        v9 = (struct _NDIS_IF_BLOCK *)v8[3];
        ++v7;
        if ( v9 )
        {
          if ( (v9->Flags & 2) != 0 )
          {
            v11[0] = 0;
            ndisNsiChangeInterfaceInfo(v9, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v12, 0x10u, 0, v11);
            HigherLayerIfCount = v9->HigherLayerIfCount;
            IfIndex = v9->ifIndex;
            if ( HigherLayerIfCount )
              goto LABEL_4;
            break;
          }
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_14011E960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      22,
      15,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      v1);
  }
}
