/*
 * XREFs of ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140138920
 * Callers:
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400D1ADC (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D1D10 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfUpdatePersistedInterfaceInfo(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  _QWORD v5[9]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+68h] [rbp-10h]
  int v7; // [rsp+6Ch] [rbp-Ch]

  v5[5] = a1;
  v5[1] = 0LL;
  v5[7] = 0LL;
  v5[0] = 0LL;
  v5[2] = &NPI_MS_NDIS_MODULEID;
  v5[4] = 0LL;
  v5[3] = 10LL;
  v5[6] = 8LL;
  v6 = a2;
  v7 = a3;
  v5[8] = a4;
  return ((int)NsiSetParameterEx(v5) >> 31) & 0xC0000001;
}
