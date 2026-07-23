/*
 * XREFs of MxInsertFreePages @ 0x140CFD680
 * Callers:
 *     MxInsertPagesInFreeList @ 0x140CFDB00 (MxInsertPagesInFreeList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14028DA04 (MiInitializeAllResidentPageBasePfns.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1404645B0 (MiCreateInitialLargeLeafPfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiCreateInitialPfns @ 0x1406EBD50 (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 */

__int64 __fastcall MxInsertFreePages(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3, int a4)
{
  __m128i *v4; // r15
  ULONG_PTR v7; // r14
  __m128i *v8; // rdi
  __int64 CurrentIrql; // r12
  int v10; // r12d
  unsigned int v11; // ebx
  ULONG_PTR v12; // rsi
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 result; // rax
  _BYTE v17[104]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h]
  int v20; // [rsp+C8h] [rbp+20h]

  v20 = a4;
  memset(v17, 0, 48);
  v4 = 0LL;
  v7 = BugCheckParameter2;
  v8 = (__m128i *)(48 * BugCheckParameter2 - 0x220000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( a2 )
  {
    v10 = v20;
    do
    {
      if ( v10 )
        v11 = 3;
      else
        v11 = (KeFeatureBits & 0x2000000000LL) == 0;
      v12 = 1LL;
      while ( v11 < 4 )
      {
        v18 = v11;
        v12 = MiPageSizes[v11];
        if ( ((v12 - 1) & v7) == 0 && a2 >= v12 && MiRestrictRangeToNode(v7, a2) >= v12 )
        {
          v12 = MiPageSizes[v18];
          v13 = MiPageToNode(v7);
          v14 = MiDetermineNewPfnHeatState(0, v11, qword_140E37E50 + 56320LL * v13);
          v15 = a3 & 0xFFFFFBFF;
          a3 |= 0x400u;
          if ( !v14 )
            a3 = v15;
          if ( v12 == 1 )
          {
            if ( !v4 )
            {
              v4 = (__m128i *)v17;
              MiCreatePfnTemplate((__int64)v17, 0, 0);
            }
            if ( (a3 & 1) != 0 )
              v4[2].m128i_i32[0] &= 0xFFF8FFFF;
            MiCreateInitialPfns(v8, 1uLL, v4);
          }
          else
          {
            MiInitializeAllResidentPageBasePfns((unsigned __int16 *)&MiSystemPartition, v7, v12, v11, 1, v14 == 0, 0);
            MiCreateInitialLargeLeafPfns(v7, v12, v11, 1, 0, 0);
          }
          LODWORD(v18) = 0;
          while ( _interlockedbittestandset64(&v8[1].m128i_i32[2], 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( v8[1].m128i_i64[1] < 0 );
          }
          MiInsertPageInFreeOrZeroedList(v7);
          _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          break;
        }
        ++v11;
      }
      v7 += v12;
      v8 += 3 * v12;
      a2 -= v12;
    }
    while ( a2 );
    LOBYTE(CurrentIrql) = v19;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
