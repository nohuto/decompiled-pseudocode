/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x140057FB8
 * Callers:
 *     RaidStartUnit @ 0x140057F60 (RaidStartUnit.c)
 * Callees:
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1400B64F4 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1400C4448 (StorpUninitializePerUnitPerfTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x14018FFC0 (StorpInitializePerUnitPerfTelemetry.c)
 */

__int64 __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  bool v3; // zf
  __int64 result; // rax

  v1 = 0;
  v2 = a1;
  v3 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2192) = 1LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_DWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  if ( v3 )
  {
    result = a1;
    v2 = 2372LL;
  }
  else
  {
    if ( (unsigned int)StorpInitializePerUnitPerfTelemetry() )
    {
      if ( (byte_140173446 & 2) != 0 )
        McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
          v2 + 242,
          v2 + 177,
          v2 + 168,
          *(_DWORD *)(*(_QWORD *)(v2 + 24) + 56LL),
          *(_BYTE *)(v2 + 104),
          *(_BYTE *)(v2 + 105),
          *(_BYTE *)(v2 + 106),
          v2 + 2104,
          *(_QWORD *)(v2 + 24) + 5128LL,
          *(_QWORD *)(*(_QWORD *)(v2 + 24) + 4784LL),
          v2 + 168,
          v2 + 177,
          v2 + 242,
          *(_BYTE *)(v2 + 506) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      StorpUninitializePerUnitPerfTelemetry(v2);
    }
    else
    {
      v1 = 1;
    }
    result = 2372LL;
  }
  *(_DWORD *)(v2 + result) = v1;
  return result;
}
