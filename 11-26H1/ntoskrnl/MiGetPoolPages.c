/*
 * XREFs of MiGetPoolPages @ 0x1403677D0
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiObtainPoolCharges @ 0x140368124 (MiObtainPoolCharges.c)
 *     MiRetryNonPagedAllocation @ 0x1403681E0 (MiRetryNonPagedAllocation.c)
 *     MiInitializePoolPageChainPacket @ 0x14036836C (MiInitializePoolPageChainPacket.c)
 *     MiReturnExcessPoolCharges @ 0x1403D1EA0 (MiReturnExcessPoolCharges.c)
 *     MiGetCachedPoolPages @ 0x1404AC4E0 (MiGetCachedPoolPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetPoolPages(_QWORD *a1)
{
  __int64 v2; // rdi
  __int16 v3; // dx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  _QWORD v9[3]; // [rsp+28h] [rbp-19h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-1h]
  __int64 v11; // [rsp+78h] [rbp+37h] BYREF
  __int128 v12; // [rsp+80h] [rbp+3Fh]
  __int64 v13; // [rsp+90h] [rbp+4Fh]

  memset_0(v9, 0, 0x70uLL);
  RtlCopyVolatileMemory(&v11, (const void *)(qword_140E2D838 + 96 + 384LL * *((unsigned int *)a1 + 24)), 8uLL);
  if ( v11 && (unsigned int)MiGetCachedPoolPages(a1) )
    return 0LL;
  v2 = a1[1] - a1[4];
  if ( (unsigned int)MiObtainPoolCharges(v2, 0LL) )
  {
    v3 = *((_WORD *)a1 + 50);
    v10 = *((_DWORD *)a1 + 24) + 1;
    CurrentThread = KeGetCurrentThread();
    v5 = ((v3 & 0x200) != 0 ? 688 : 640) | 1;
    if ( *((_BYTE *)a1 + 102) != 2 )
      v5 = (v3 & 0x200) != 0 ? 688 : 640;
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      *((_WORD *)a1 + 50) = v3 | 0x400;
    if ( !v2 )
      return 0LL;
    while ( v2 == 1
         || (*((_WORD *)a1 + 50) & 0x400) == 0
         || (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, v2 + 50) )
    {
      MiRetryNonPagedAllocation((*((unsigned __int16 *)a1 + 50) >> 10) & 1);
      MiInitializePoolPageChainPacket(v10, v5, v2, v9);
      MiGetPageChain(v9);
      v6 = v13;
      if ( v13 )
      {
        if ( a1[2] )
        {
          *(_QWORD *)a1[3] = v12;
          a1[3] = *((_QWORD *)&v12 + 1);
          v6 = v13;
          a1[4] += v13;
        }
        else
        {
          v7 = v13;
          *((_OWORD *)a1 + 1) = v12;
          a1[4] = v7;
        }
        v2 -= v6;
      }
      else if ( !(unsigned int)MiRetryNonPagedAllocation((*((unsigned __int16 *)a1 + 50) >> 10) & 1) )
      {
        break;
      }
      if ( !v2 )
        break;
    }
    if ( !v2 )
      return 0LL;
    MiReturnPhysicalPoolPages(*a1, a1 + 2);
    MiReturnExcessPoolCharges(v2, 0LL);
  }
  else
  {
    MiReturnPhysicalPoolPages(*a1, a1 + 2);
  }
  return 3221225626LL;
}
