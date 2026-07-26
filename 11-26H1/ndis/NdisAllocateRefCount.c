/*
 * XREFs of NdisAllocateRefCount @ 0x14001C0C0
 * Callers:
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007E9C0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007FA50 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140169910 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisAllocateRefCount(unsigned __int8 a1, char a2)
{
  char v2; // bl
  int v4; // eax
  __int64 v5; // rdx
  char v6; // si
  __int64 result; // rax

  v2 = a2;
  if ( !ndisDebugLoggingMode )
    return 2LL;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v6 = 1;
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v4 = (a1 - ((a1 - 1) & 7) + 7) / 8;
    v5 = v4 - (((_BYTE)v4 - 1) & 3u) + 19;
    v6 = 0;
  }
  result = ExAllocatePool2(64LL, v5, 2020754510LL);
  if ( !result )
    return 3LL;
  *(_BYTE *)(result + 1) = v6;
  *(_BYTE *)result = v2;
  *(_BYTE *)(result + 2) = a1;
  return result;
}
