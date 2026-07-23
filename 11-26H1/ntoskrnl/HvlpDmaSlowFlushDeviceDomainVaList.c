/*
 * XREFs of HvlpDmaSlowFlushDeviceDomainVaList @ 0x1405C10B4
 * Callers:
 *     HvlDmaFlushDeviceDomainVaList @ 0x1405BED20 (HvlDmaFlushDeviceDomainVaList.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14032DF20 (HvlpCopyFlushVaList.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405BEC90 (HvlDmaFlushDeviceDomain.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlpDmaSlowFlushDeviceDomainVaList(int *a1, unsigned int a2, void *a3, char a4)
{
  __int64 v4; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned __int16 v11; // bx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  unsigned __int64 v18; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v8 = HvlpAcquireHypercallPage((__int64)&v16, 5, 0LL, 0LL);
  v9 = v8;
  if ( !v8 )
    return HvlDmaFlushDeviceDomain(a1);
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[3] = 0LL;
  *v8 = -1LL;
  *((_DWORD *)v8 + 4) = v8[2] & 0xFFFFFFF0 | 1;
  *((_DWORD *)v8 + 5) = *a1;
  if ( a4 )
  {
    memmove(v8 + 4, a3, 8 * v4);
    *((_DWORD *)v9 + 6) |= 1u;
  }
  else
  {
    HvlpCopyFlushVaList(v4, (__int64 *)a3, 0, (__int64)(v8 + 4));
  }
  LODWORD(v15) = 209;
  HIDWORD(v15) = v4 & 0xFFF;
  v11 = HvcallInitiateHypercall(v15, v18);
  HvlpReleaseHypercallPage((unsigned int *)&v16, v12, v13, v14);
  return HvlpHvToNtStatus(v11);
}
