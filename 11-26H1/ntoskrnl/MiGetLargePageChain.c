/*
 * XREFs of MiGetLargePageChain @ 0x1403D1D00
 * Callers:
 *     MiGetLargePoolPages @ 0x1403D1B98 (MiGetLargePoolPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x1403D35CC (MiFreeLargePageChain.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  int v11; // ebx
  unsigned __int64 i; // rsi
  __int64 LargePageDemoteAsNeeded; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 CurrentIrql; // rcx
  _DWORD v18[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v20[128]; // [rsp+50h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a1;
  memset_0(v20, 0, sizeof(v20));
  *(_OWORD *)a5 = 0LL;
  a5[2] = 0LL;
  v9 = *(_QWORD *)(56320 * v7 + qword_140E37E50 + 13888);
  if ( v9 || (MiFlags & 0x30) == 0 )
  {
    v10 = a2 >> 9;
    v19 = 0LL;
    LODWORD(v19) = 129;
    v11 = (v7 & 0x3F | 0x280) << 9;
    for ( i = 0LL; i < v10; ++i )
    {
      LargePageDemoteAsNeeded = MiGetLargePageDemoteAsNeeded(
                                  (unsigned int)&MiSystemPartition,
                                  v11,
                                  (_BYTE)v6 == 2,
                                  1,
                                  0LL,
                                  a4);
      v14 = LargePageDemoteAsNeeded;
      if ( LargePageDemoteAsNeeded )
      {
        v15 = *(_QWORD *)(LargePageDemoteAsNeeded + 16);
        if ( qword_140E2D8C0 && (v15 & 0x10) == 0 )
          HIDWORD(v15) &= HIDWORD(qword_140E2D8C8);
        if ( HIDWORD(v15) == -3 && (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
        {
          MiAddPageToHeatList(&v19, (v14 + 0x220000000000LL) / 48, 1LL);
          if ( (_BYTE)v6 != 2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (_BYTE)CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v16) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
            }
          }
          v18[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v18);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          *(_QWORD *)(v14 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v14 + 16), 0);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v6 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
            __writecr8(v6);
          }
        }
        MiInsertPageChainHead(a5, (__int64 *)v14);
      }
      else
      {
        if ( (v11 & 0x8000) != 0 || BugCheckParameter3 > 0x110000 )
        {
          LOBYTE(v9) = v6;
          MiFreeLargePageChain(a5, v9);
          break;
        }
        v11 |= 0x8000u;
        --i;
      }
    }
    if ( DWORD1(v19) )
      MiIssuePageHeatList(&v19, v9);
  }
}
