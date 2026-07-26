/*
 * XREFs of ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009F920
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

unsigned __int8 __fastcall ndisMIndicateNicSwitchCapsChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  char v5; // bl
  size_t v8; // rsi
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rax
  __int64 v10; // rax

  v5 = 0;
  if ( a4 < 0x20 || *(_BYTE *)a3 != 0x80 || a3[1] < 0x20u || !*((_BYTE *)a3 + 1) )
    return v5;
  v8 = 132LL;
  if ( !a5 )
  {
    v10 = 3568LL;
    if ( a2 != 1073872960 )
      v10 = 3560LL;
    TopNicSwitchCurrentCapabilities = *(_NDIS_NIC_SWITCH_CAPABILITIES **)(&a1->Header.Type + v10);
LABEL_11:
    if ( !TopNicSwitchCurrentCapabilities )
      return v5;
    goto LABEL_12;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( !TopNicSwitchCurrentCapabilities )
  {
    TopNicSwitchCurrentCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePool2(64LL, 132LL, 1718568014LL);
    a1->TopNicSwitchCurrentCapabilities = TopNicSwitchCurrentCapabilities;
    goto LABEL_11;
  }
LABEL_12:
  if ( a3[1] < 0x84u )
    v8 = a3[1];
  memmove(TopNicSwitchCurrentCapabilities, a3, v8);
  return 1;
}
