/*
 * XREFs of ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x14009AF20
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x14009AD2C (-Make@-$ObjectTriageData@X@@SAJPEAXPEBU-$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z.c)
 */

void __fastcall ndisInitializeGlobalTriageData(void *a1)
{
  int v1; // eax
  char v2[4]; // [rsp+28h] [rbp-41h]
  int v3; // [rsp+30h] [rbp-39h] BYREF
  bool (__fastcall *v4)(__int64, TriageDataArray *); // [rsp+38h] [rbp-31h]
  int v5; // [rsp+40h] [rbp-29h]
  bool (__fastcall *v6)(__int64, TriageDataArray *); // [rsp+48h] [rbp-21h]
  int v7; // [rsp+50h] [rbp-19h]
  bool (__fastcall *v8)(__int64, TriageDataArray *); // [rsp+58h] [rbp-11h]
  int v9; // [rsp+60h] [rbp-9h]
  bool (__fastcall *v10)(__int64, TriageDataArray *); // [rsp+68h] [rbp-1h]
  int v11; // [rsp+70h] [rbp+7h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+80h] [rbp+17h]
  bool (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+90h] [rbp+27h]
  bool (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+A0h] [rbp+37h]
  bool (__fastcall *v18)(__int64, TriageDataArray *); // [rsp+A8h] [rbp+3Fh]
  int v19; // [rsp+B0h] [rbp+47h]
  void (*v20)(void *, struct TriageDataArray *, const struct BugcheckParameters *); // [rsp+B8h] [rbp+4Fh]

  v4 = GlobalDataCollector<_NDIS_GLOBAL_TRIAGE_BLOCK,&_NDIS_GLOBAL_TRIAGE_BLOCK ndisGlobalTriageBlock>::AddTriageBlocks;
  v3 = 1;
  v6 = GlobalDataCollector<_NDIS_MINIPORT_BLOCK *,&_NDIS_MINIPORT_BLOCK * ndisMiniportList>::AddTriageBlocks;
  v8 = GlobalDataCollector<_NDIS_M_DRIVER_BLOCK *,&_NDIS_M_DRIVER_BLOCK * ndisMiniDriverList>::AddTriageBlocks;
  v10 = GlobalDataCollector<_NDIS_PROTOCOL_BLOCK *,&_NDIS_PROTOCOL_BLOCK * ndisProtocolList>::AddTriageBlocks;
  v12 = GlobalDataCollector<_NDIS_FILTER_DRIVER_BLOCK *,&_NDIS_FILTER_DRIVER_BLOCK * ndisFilterDriverList>::AddTriageBlocks;
  v14 = GlobalDataCollector<_LIST_ENTRY,&_LIST_ENTRY ndisNblTrackerList>::AddTriageBlocks;
  v16 = GlobalDataCollector<unsigned long,&unsigned long ndisNblTrackerEpoch>::AddTriageBlocks;
  v18 = GlobalDataCollector<unsigned long,&unsigned long ndisMaxNumberOfProcessors>::AddTriageBlocks;
  v20 = SlotCollector::AddTriageBlocks;
  v5 = 1;
  v7 = 1;
  v9 = 1;
  v11 = 1;
  v13 = 1;
  v15 = 1;
  v17 = 1;
  v19 = 1;
  v1 = ObjectTriageData<void>::Make(a1, &v3);
  if ( v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v2 = v1;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_ec9af6f34582345b89e14a2d2ab551ae_Traceguids,
        *(_DWORD *)v2);
    }
  }
}
