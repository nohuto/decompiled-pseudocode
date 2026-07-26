/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401560A0
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A9A3C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401557E0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140155960 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140162FF0 (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140057400 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ndisReduceTimeoutFor9FBugcheck @ 0x1401561F0 (ndisReduceTimeoutFor9FBugcheck.c)
 */

void __fastcall ndisArmWatchdog(
        struct NDISWATCHDOG__ *a1,
        void *a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v9; // rdx
  struct NDISWATCHDOG__ *v10; // rdi
  int v11; // ecx
  void *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rbx
  int v15; // ecx

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v10 = WatchdogFromHandle(a1);
    *((_DWORD *)v10 + 50) = 846677070;
    if ( v9 )
    {
      v11 = *v9;
      if ( v11 == 5 )
      {
        v12 = (void *)*((_QWORD *)v9 + 4);
      }
      else
      {
        v15 = v11 - 17;
        if ( !v15 )
        {
          v12 = a2;
          goto LABEL_6;
        }
        if ( v15 != 1 )
          goto LABEL_7;
        v12 = (void *)*((_QWORD *)v9 + 2);
      }
      if ( v12 )
LABEL_6:
        *((_BYTE *)v10 + 248) = ndisReduceTimeoutFor9FBugcheck(v12, &a5);
    }
LABEL_7:
    *((_QWORD *)v10 + 27) = a2;
    *((_QWORD *)v10 + 26) = &ndisGlobalTriageBlock;
    *((_DWORD *)v10 + 51) = a5;
    *((_QWORD *)v10 + 28) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v10 + 29) = KeGetCurrentThread();
    *((_QWORD *)v10 + 30) = a6;
    v13 = g_ndisWatchdogSequenceNumber;
    *((_QWORD *)v10 + 32) = a4;
    g_ndisWatchdogSequenceNumber = v13 + 1;
    *((_DWORD *)v10 + 41) = v13 + 1;
    v14 = -10000LL * *((unsigned int *)v10 + 51);
    *((_DWORD *)v10 + 48) = a3;
    *((_DWORD *)v10 + 40) = 1;
    KeClearEvent((PRKEVENT)v10 + 7);
    KeSetTimerEx((PKTIMER)v10 + 1, (LARGE_INTEGER)v14, 0, (PKDPC)v10);
  }
}
