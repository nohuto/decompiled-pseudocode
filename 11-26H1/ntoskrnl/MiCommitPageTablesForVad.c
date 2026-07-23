/*
 * XREFs of MiCommitPageTablesForVad @ 0x140996FF8
 * Callers:
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiCommitPageTableRangesForVad @ 0x14052D93C (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 * Callees:
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiVadLeafPagesPrecharged @ 0x140470BA4 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x140471E50 (MiVadPageTableChargeLevel.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesSetBits @ 0x140998A2C (MiCommitPageTablesSetBits.c)
 *     MiMapPageTableCommit @ 0x140998B70 (MiMapPageTableCommit.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  _KPROCESS *Process; // r14
  __int64 result; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // r12
  BOOL v10; // ebx
  unsigned __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  volatile _KAFFINITY_EX *v18; // r11
  __int64 v19; // rbx
  unsigned __int64 i; // r9
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  __int128 v23; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v23 = 0LL;
  v24 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !a4 && MiVadPureReserve(a1) )
  {
    v14 = *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
    if ( v14 )
    {
      result = MiChargeFullProcessCommitment(Process, v14);
      if ( (int)result < 0 )
        return result;
    }
    return 0LL;
  }
  result = MiMapPageTableCommit(a2, a3);
  if ( (int)result >= 0 )
  {
    ActiveProcessors = Process[2].ActiveProcessors;
    DWORD1(v23) = MiVadPageTableChargeLevel(a1);
    v10 = MiVadLeafPagesPrecharged(a1);
    MiCommitPageTablesSetBits(&v23, a2, a3, 0LL);
    v11 = v24;
    v12 = *((_QWORD *)&v23 + 1);
    v13 = v24 + *((_QWORD *)&v23 + 1);
    if ( !v10
      && !MiVadPureReserve(a1)
      && (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) != 0x7FFFFFFFELL )
    {
      v13 += *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
    }
    if ( !v13 || (result = MiChargeFullProcessCommitment(Process, v13), (int)result >= 0) )
    {
      if ( (_DWORD)v23 )
      {
        ActiveProcessors[4].StaticBitmap[9] += v12;
        if ( v11 )
          MiUpdateChargedWsles((__int64)&Process[2].ReadyListHead.Blink, v11);
        v15 = DWORD1(v23);
        v16 = a2 >> 21;
        v17 = a3 >> 21;
        v18 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        if ( SDWORD1(v23) > 0 )
        {
          v22 = DWORD1(v23);
          do
          {
            v16 >>= 9;
            v17 >>= 9;
            --v22;
          }
          while ( v22 );
        }
        while ( v15 < 3 )
        {
          v19 = 0LL;
          for ( i = v16; i <= v17; ++i )
          {
            if ( !_bittest64((const signed __int64 *)v18[5].StaticBitmap[2 * (unsigned int)(2 - v15) + 24], i) )
            {
              ++v19;
              v21 = v18[5].StaticBitmap[2 * (unsigned int)(2 - v15) + 24];
              *(_BYTE *)((i >> 3) + v21) |= 1 << (i & 7);
            }
          }
          v16 >>= 9;
          v17 >>= 9;
          ++v15;
        }
      }
      return 0LL;
    }
  }
  return result;
}
