/*
 * XREFs of ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x140040860
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14002E710 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     McTemplateK0qqqqqqqq_EtwWriteTransfer @ 0x140040A20 (McTemplateK0qqqqqqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall ndisPeriodicReceivesLearning(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        union _LARGE_INTEGER *a3)
{
  ULONG v4; // edi
  PNDIS_PER_PROCESSOR_SLOT__ *v6; // r14
  unsigned int v7; // r13d
  __int64 v8; // rbx
  int v9; // esi
  ULONG v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int Number; // ecx
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+68h] [rbp-50h] BYREF

  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  v4 = 512;
  v6 = (PNDIS_PER_PROCESSOR_SLOT__ *)((char *)a1->PeriodicReceivesNblCountIndex + (KeGetPcr()->Prcb.Number << 12));
  LOBYTE(v7) = 0;
  v8 = *(_DWORD *)v6;
  v9 = ndisPeriodicReceivesNblCounts[v8];
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0 )
  {
    if ( WatchdogInformation.DpcTimeLimit )
      v4 = v9 * (1024 - (WatchdogInformation.DpcTimeCount << 10) / WatchdogInformation.DpcTimeLimit) / a2;
    if ( WatchdogInformation.DpcWatchdogLimit )
    {
      v10 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
      if ( v10 > 0x200 )
        v10 = 1024;
      v7 = v9 * (1024 - v10) / a2;
    }
  }
  v11 = v8 + 1;
  if ( (unsigned int)(v8 + 1) < 0xB && v4 < 0x200 || (_DWORD)v8 && v4 > 0x300 && (v11 = v8 - 1, (_DWORD)v8 != 12) )
  {
    *(_DWORD *)v6 = v11;
    if ( (byte_14011D045 & 2) != 0 )
    {
      v12 = v11;
      Number = KeGetPcr()->Prcb.Number;
      McTemplateK0qqqqqqqq_EtwWriteTransfer(
        Number,
        (unsigned int)ndisPeriodicReceivesNblCounts,
        (_DWORD)a1 + 4008,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        Number,
        a2,
        a3->LowPart,
        ndisPeriodicReceivesNblCounts[v8],
        ndisPeriodicReceivesNblCounts[v12],
        v4,
        v7);
    }
  }
}
