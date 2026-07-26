/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x14015CF80
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x14015CF10 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x14004A9D0 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     NdisGroupActiveProcessorCount @ 0x1400703F0 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x14015D300 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 *     ?ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015D3C0 (-ndisPcwQueryPcfMatchCount@@YA_KPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  NTSTATUS v2; // edi
  ULONG active; // ebp
  PVOID i; // rsi
  int v5; // ebx
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // r8
  int v7; // r9d
  signed __int64 v8; // rdx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm1
  unsigned __int64 *v15; // rcx
  __int64 v16; // r9
  const UNICODE_STRING *v17; // rdx
  ULONG v18; // r8d
  struct _NDIS_MINIPORT_BLOCK *v19; // rcx
  ULONG v20; // r8d
  struct _NDIS_MINIPORT_BLOCK *v22; // rbx
  struct _PCW_DATA v24; // [rsp+30h] [rbp-2B8h] BYREF
  struct _PCW_DATA Data; // [rsp+48h] [rbp-2A0h] BYREF
  unsigned __int64 v26[38]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int64 v27[38]; // [rsp+190h] [rbp-158h] BYREF

  v2 = 0;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v27, 0, sizeof(v27));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      if ( v2 >= 0 )
      {
        v24.Size = 304;
        v24.Data = v27;
        v2 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v24);
      }
      goto LABEL_19;
    }
    if ( v2 < 0 )
      goto LABEL_19;
    memset(v26, 0, sizeof(v26));
    v5 = 0;
    if ( active )
      break;
LABEL_14:
    v19 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
    if ( v19 )
    {
      if ( (v19->PcwDatapathEventMask & 0x2000000) != 0 )
      {
        if ( (unsigned __int8)ndisReferenceMiniport(v19, 0x5Eu) )
        {
          ++*((_DWORD *)i + 42);
          v22 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)i + 22);
          ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
          KeLeaveCriticalRegion();
          v26[37] = ndisPcwQueryPcfMatchCount(v22);
          ndisDereferenceMiniport(v22, 0x5Eu);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
          if ( (*((_DWORD *)i + 42))-- == 1 )
          {
            ExFreePoolWithTag(i, 0);
            goto LABEL_2;
          }
        }
      }
    }
    v20 = *((_DWORD *)i + 46);
    v24.Data = v26;
    v24.Size = 304;
    v2 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 12, v20, 1u, &v24);
    if ( v2 < 0 )
      goto LABEL_19;
    ndisSumDataBlock(v27, v26);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v5);
    v7 = 0;
    if ( v26 > (unsigned __int64 *)PerCpuDataForProcessor + 37 || &v26[37] < (unsigned __int64 *)PerCpuDataForProcessor )
    {
      v8 = PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)&v26[2];
      v9 = &v26[2];
      v10 = 4LL;
      v7 = 32;
      do
      {
        v11 = _mm_loadu_si128((const __m128i *)v9 - 1);
        v12 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8));
        v13 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8 + 16));
        v9 += 8;
        *((__m128i *)v9 - 5) = _mm_add_epi64(v12, v11);
        v14 = _mm_loadu_si128((const __m128i *)((char *)v9 + v8 - 32));
        *((__m128i *)v9 - 4) = _mm_add_epi64(v13, _mm_loadu_si128((const __m128i *)v9 - 4));
        *((__m128i *)v9 - 3) = _mm_add_epi64(v14, _mm_loadu_si128((const __m128i *)v9 - 3));
        *((__m128i *)v9 - 2) = _mm_add_epi64(
                                 _mm_loadu_si128((const __m128i *)((char *)v9 + v8 - 16)),
                                 _mm_loadu_si128((const __m128i *)v9 - 2));
        --v10;
      }
      while ( v10 );
    }
    v15 = &v26[v7];
    v16 = (unsigned int)(38 - v7);
    do
    {
      *v15 += *(unsigned __int64 *)((char *)v15 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v26);
      ++v15;
      --v16;
    }
    while ( v16 );
    Data.Data = PerCpuDataForProcessor;
    v17 = (const UNICODE_STRING *)((char *)PerCpuDataForProcessor + 416);
    v18 = *((_DWORD *)PerCpuDataForProcessor + 102);
    Data.Size = 304;
    v2 = PcwAddInstance(Buffer, v17, v18, 1u, &Data);
    if ( v2 < 0 )
      break;
    if ( ++v5 >= active )
      goto LABEL_14;
  }
LABEL_19:
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
