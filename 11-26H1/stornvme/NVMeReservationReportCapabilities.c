/*
 * XREFs of NVMeReservationReportCapabilities @ 0x14001F3C0
 * Callers:
 *     ScsiPersistentReserveIn @ 0x140022748 (ScsiPersistentReserveIn.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 */

__int64 __fastcall NVMeReservationReportCapabilities(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  unsigned __int8 v5; // cl
  int v6; // esi
  __int64 SrbExtension; // rbx
  __int64 v8; // r9
  __int64 v9; // r10

  v3 = 0;
  if ( a3 >= 8u )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v5 = *(_BYTE *)(a2 + 7);
    if ( (unsigned int)v5 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v5 + 1672) )
    {
      _mm_lfence();
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v5 + 1672) + 16LL);
    }
    else
    {
      v6 = 0;
    }
    SrbExtension = GetSrbExtension(a2);
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
    SrbAssignQueueId(v9, v8);
    *(_BYTE *)(SrbExtension + 4096) = 10;
    *(_DWORD *)(SrbExtension + 4100) = v6;
    *(_BYTE *)(SrbExtension + 4136) = -125;
    *(_QWORD *)(SrbExtension + 4192) = NVMeReservationReportCapabilitiesCompletion;
  }
  else
  {
    v3 = -1056964604;
    *(_BYTE *)(a2 + 3) = 6;
  }
  return v3;
}
