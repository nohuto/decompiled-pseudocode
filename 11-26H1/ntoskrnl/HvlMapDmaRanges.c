/*
 * XREFs of HvlMapDmaRanges @ 0x1405C1560
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlMapDmaRanges(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp+10h]
  __int64 v16; // [rsp+68h] [rbp+10h]

  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  *a3 = 0;
  v6 = a1;
  do
  {
    v7 = HvlpAcquireHypercallPage((__int64)&v12, 1, 0LL, 0LL);
    LODWORD(v15) = 264;
    if ( v6 >= 0x100 )
      v6 = 256;
    memmove(v7, (const void *)(a2 + 16LL * (unsigned int)*a3), 16LL * v6);
    HIDWORD(v15) = v6 & 0xFFF;
    v16 = HvcallInitiateHypercall(v15, v14);
    HvlpReleaseHypercallPage((unsigned int *)&v12, v8, v9, v10);
    if ( HvlpHvStatusIsInsufficientMemory(v16) )
      LODWORD(result) = HvlpHandleInsufficientMemory(v16);
    else
      LODWORD(result) = HvlpHvToNtStatus(v16);
    *a3 += WORD2(v16) & 0xFFF;
    v6 = a1 - *a3;
  }
  while ( (int)result >= 0 && v6 );
  return (unsigned int)result;
}
