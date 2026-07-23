/*
 * XREFs of MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x1406F2C10 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 *     MiDereferencePageChains @ 0x1403CD5A4 (MiDereferencePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiEstimateTimeToFillPfns @ 0x1406ED4E8 (MiEstimateTimeToFillPfns.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1406F3000 (MiInitializeLargeMdlLeafPfns.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiInitializeFastLargePagesMdlPfns(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 PageChains; // rax
  unsigned __int64 *v9; // r15
  unsigned int v10; // ebp
  unsigned __int64 *v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // [rsp+30h] [rbp-108h]
  __int64 v20; // [rsp+38h] [rbp-100h]
  _BYTE v22[104]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp-80h]
  _QWORD v24[4]; // [rsp+C0h] [rbp-78h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( KeGetCurrentIrql() < 2u
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
    && (MiFlags & 0x30) != 0
    && 32 * MiEstimateTimeToFillPfns(a2, a4) >= 0x1388 )
  {
    PageChains = MiCreatePageChains(*(_QWORD *)v6, a2, 1, 8LL, 3);
    v7 = PageChains;
    if ( PageChains )
      *(_QWORD *)(PageChains + 496) = v6;
  }
  v9 = (unsigned __int64 *)MiPageSizes;
  v20 = *(_QWORD *)(v6 + 48);
  v10 = 0;
  v19 = 0;
  v11 = (unsigned __int64 *)(*(_QWORD *)(v6 + 64)
                           + 8 * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v6 + 64) + 40LL) >> 12) + 6));
  do
  {
    if ( v10 != 3 )
    {
      v12 = *a3;
      v13 = *v9;
      if ( *a3 != 0x3FFFFFFFFFLL )
      {
        do
        {
          MiSimpleUnlinkPageEx((__int64)a3, v12);
          v14 = 0LL;
          if ( v13 )
          {
            do
            {
              v15 = v12 + v14;
              v14 += v20;
              *v11++ = v15;
            }
            while ( v14 < v13 );
            v6 = a1;
          }
          if ( v7 )
          {
            MiInsertMdlPageNeedsZero((_DWORD *)v7, 48 * v12 - 0x220000000000LL, v13);
          }
          else
          {
            memset_0(v22, 0, 0x88uLL);
            v24[2] = 0LL;
            v24[0] = 0x3FFFFFFFFFLL;
            v24[1] = 0x3FFFFFFFFFLL;
            MiSimpleInsertPage((__int64)v24, v12, 6);
            v16 = *(_QWORD *)(v6 + 72);
            v17 = *(unsigned int *)(v6 + 56);
            v18 = (*(_DWORD *)(v6 + 148) >> 5) & 1;
            v23 = v13;
            MiInitializeLargeMdlLeafPfns(v22, v17, v18, v16);
          }
          v12 = *a3;
        }
        while ( *a3 != 0x3FFFFFFFFFLL );
        v10 = v19;
      }
    }
    ++v10;
    a3 += 3;
    ++v9;
    v19 = v10;
  }
  while ( v10 < 4 );
  if ( v7 )
  {
    *(_QWORD *)(v7 + 504) = MiInitializeLargeMdlLeafPfnsWorker;
    MiUseThreads(v7);
    MiDereferencePageChains((volatile signed __int32 *)v7);
  }
}
