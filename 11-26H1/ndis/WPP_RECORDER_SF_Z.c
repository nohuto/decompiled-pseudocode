/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x140056EF0
 * Callers:
 *     NdisWdfReadConfiguration @ 0x14001FCC0 (NdisWdfReadConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1400613C0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140078BD0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1400A5D78 (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BB958 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 *     NdisOpenFile @ 0x1400D9B70 (NdisOpenFile.c)
 *     ndisHandleBindNotification @ 0x14013BCE4 (ndisHandleBindNotification.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401455EC (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140145760 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140146E94 (ndisIfUpdateStringIfNeeded.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401489F0 (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x14014E40C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140174EC4 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140175470 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140176540 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisFindRootDevice @ 0x140179510 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Z(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6)
{
  const wchar_t *v7; // r14
  unsigned __int64 v9; // rdi
  unsigned int v10; // r15d
  const wchar_t *v12; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-58h]

  v7 = L"NULL";
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = a6;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) < a2 )
    goto LABEL_2;
  if ( !a6 )
  {
    v16 = 8LL;
    goto LABEL_14;
  }
  v16 = *a6;
  if ( !(_WORD)v16 )
  {
LABEL_14:
    v17 = L"NULL";
    goto LABEL_15;
  }
  v17 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v18 = a6;
  if ( !a6 )
    v18 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v18, 2LL, v17, v16, 0LL);
LABEL_2:
  v14 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v12 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v19, v12, 2LL, v7);
}
