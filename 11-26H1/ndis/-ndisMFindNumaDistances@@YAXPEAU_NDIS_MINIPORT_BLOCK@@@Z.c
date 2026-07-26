/*
 * XREFs of ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C980
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006CB00 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMFindNumaDistances(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int16 *Pool2; // rax
  int v3; // edx
  USHORT HighestNodeNumber; // ax
  ULONG SystemInformationLength; // ebp
  _WORD *v6; // rax
  _WORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdx

  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 2LL * ndisMaxNumberOfProcessors, 538985550LL);
  a1->NumaDistances = Pool2;
  if ( Pool2 )
  {
    a1->NumaNodeId = -1;
    if ( (int)ndisMFindNumaNode(a1) >= 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      SystemInformationLength = 4 * HighestNodeNumber + 4;
      v6 = (_WORD *)ExAllocatePool2(66LL, 4LL * HighestNodeNumber + 4, 538985550LL);
      v7 = v6;
      if ( v6 )
      {
        v8 = 0;
        if ( NtQuerySystemInformationEx(
               SystemNodeDistanceInformation,
               &a1->NumaNodeId,
               2u,
               v6,
               SystemInformationLength,
               0LL) >= 0
          && ndisMaxNumberOfProcessors )
        {
          do
          {
            v9 = v8++;
            a1->NumaDistances[v9] = v7[2 * ndisCpuInfo[v9].NodeId];
          }
          while ( v8 < ndisMaxNumberOfProcessors );
        }
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      120,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  }
}
