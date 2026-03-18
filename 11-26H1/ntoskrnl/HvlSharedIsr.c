/*
 * XREFs of HvlSharedIsr @ 0x1403E61A0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     KiHvInterruptSubDispatch @ 0x14072E690 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403E6258 (HvlpGetLpcbByLpIndex.c)
 *     HvlpHandleIommuFaultMessage @ 0x1405C0F34 (HvlpHandleIommuFaultMessage.c)
 */

char __fastcall HvlSharedIsr(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int *v3; // rax
  unsigned int i; // edx
  unsigned int *v5; // rcx
  __int64 v6; // rcx
  __int64 ReadTransferCount; // rax

  LOBYTE(v1) = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    if ( !byte_140E0A91C )
    {
      v3 = (unsigned int *)HvlpLogicalProcessorRegions;
      for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
      {
        if ( v3[5] == (_DWORD)a1 )
        {
          a1 = v3[1];
          goto LABEL_3;
        }
        v3 += 26;
      }
      a1 = 0xFFFFFFFFLL;
    }
LABEL_3:
    v2 = *(_QWORD *)(HvlpGetLpcbByLpIndex(a1) + 32);
    _m_prefetchw((const void *)(v2 + 1024));
    LODWORD(v1) = *(_DWORD *)(v2 + 1024);
    if ( (_DWORD)v1 )
    {
      v5 = (unsigned int *)(v2 + 1040);
      if ( *(_DWORD *)(v2 + 1024) == -2147483612 )
      {
        HvlpHandleIommuFaultMessage(v5);
      }
      else
      {
        v6 = 104LL * *v5;
        ReadTransferCount = stru_140E3E928.ReadTransferCount;
        *(_DWORD *)(v6 + stru_140E3E928.ReadTransferCount + 4) = 2;
        KiInsertQueueDpc(ReadTransferCount + 8 + v6, 0LL, 0LL, 0LL, 0);
      }
      *(_DWORD *)(v2 + 1024) = 0;
      LOBYTE(v1) = *(_BYTE *)(v2 + 1029);
      if ( (v1 & 1) != 0 )
      {
        LOBYTE(v1) = 0;
        __writemsr(0x40000084u, 0LL);
      }
    }
  }
  else if ( KiEpfCompletionQueue )
  {
    v1 = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != v1 )
    {
      _InterlockedIncrement(&dword_140F14B88);
      LOBYTE(v1) = KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return v1;
}
