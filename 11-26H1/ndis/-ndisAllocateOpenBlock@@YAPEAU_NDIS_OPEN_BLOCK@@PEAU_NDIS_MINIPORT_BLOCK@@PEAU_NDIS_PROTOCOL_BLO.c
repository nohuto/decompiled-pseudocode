/*
 * XREFs of ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007E9C0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x14001C0C0 (NdisAllocateRefCount.c)
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054530 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054E30 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 */

struct PNDIS_PER_PROCESSOR_SLOT__ *__fastcall ndisAllocateOpenBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        char a3)
{
  struct PNDIS_PER_PROCESSOR_SLOT__ *result; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rdi
  unsigned int v8; // esi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  result = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  v7 = (struct _NDIS_OPEN_BLOCK *)result;
  if ( result )
  {
    v8 = 1176;
    if ( (a1->Flags & 0x20000) == 0 )
      v8 = 1032;
    Pool2 = ExAllocatePool2(64LL, v8, 1869431886LL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 720) = v7;
      if ( a3 )
      {
        *(_WORD *)Pool2 = 274;
        *(_WORD *)(Pool2 + 2) = v8;
      }
      v11 = (_QWORD *)(Pool2 + 736);
      v11[1] = v11;
      *v11 = v11;
      v10[96] = v10 + 95;
      v10[95] = v10 + 95;
      v10[102] = v10 + 101;
      v10[101] = v10 + 101;
      v10[105] = v10 + 104;
      v10[104] = v10 + 104;
      KeInitializeSpinLock(v10 + 75);
      v10[73] = NdisNblTrackerRegisterComponent(2, (__int64)v10, (__int64)&a2->Name);
      v10[74] = NdisAllocateRefCount(0x14u, 0);
      v10[111] = v10;
      v10[110] = ndisCompleteUnsolicitedUnbind;
      v10[108] = 0LL;
      if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
        v10[128] = 0LL;
      return (struct PNDIS_PER_PROCESSOR_SLOT__ *)v10;
    }
    else
    {
      ndisFreePerProcessorSlot((ULONG_PTR)v7, 0x6F6D444EuLL);
      return 0LL;
    }
  }
  return result;
}
