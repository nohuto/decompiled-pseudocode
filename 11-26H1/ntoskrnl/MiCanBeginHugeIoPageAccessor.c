/*
 * XREFs of MiCanBeginHugeIoPageAccessor @ 0x14053141C
 * Callers:
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14043D3B0 (MiUpdatePageMoveInProgressInternal.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140487E90 (MiLockHugeRangeColorHeadAtDpc.c)
 *     MiSimpleUnlinkHugeRange @ 0x140488420 (MiSimpleUnlinkHugeRange.c)
 *     MiSimpleInsertHugeRange @ 0x1406F2830 (MiSimpleInsertHugeRange.c)
 */

unsigned __int64 __fastcall MiCanBeginHugeIoPageAccessor(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  volatile signed __int32 *v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  volatile signed __int32 *v12; // r9
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx

  if ( (*a1 & 0x800000000000000LL) == 0 )
  {
    v3 = MiLockHugeRangeColorHeadAtDpc();
    if ( (*a1 & 0x800000000000000LL) != 0 )
    {
      v2 = 0LL;
LABEL_27:
      _InterlockedAnd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFF7uLL);
      return v2;
    }
    v4 = *a1 | 0x800000000000000LL;
    v2 = (((__int64)a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
    *a1 = v4;
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v5 = v2 & 0x1F;
      LOBYTE(v6) = 1;
      v7 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink
         + ((unsigned __int64)(unsigned int)v2 >> 5);
      if ( v5 + 1 > 0x20 )
      {
        if ( (v2 & 0x1F) != 0 )
        {
          _InterlockedOr(v7, ((1 << (32 - (v2 & 0x1F))) - 1) << v5);
          v6 = 1LL - (32 - (unsigned int)(v2 & 0x1F));
          ++v7;
          if ( v6 >= 0x20 )
          {
            v9 = v6 >> 5;
            v6 += -32LL * (v6 >> 5);
            do
            {
              *v7++ = -1;
              --v9;
            }
            while ( v9 );
          }
          if ( !v6 )
            goto LABEL_25;
        }
        v8 = (1 << v6) - 1;
      }
      else
      {
        v8 = 1 << v5;
      }
      _InterlockedOr(v7, v8);
    }
    else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
    {
      v10 = v2 & 0x1F;
      LOBYTE(v11) = 1;
      v12 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink + (v2 >> 5);
      if ( v10 + 1 > 0x20 )
      {
        if ( (v2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v12, ~(((1 << (32 - (v2 & 0x1F))) - 1) << v10));
          v11 = 1LL - (32 - (unsigned int)(v2 & 0x1F));
          ++v12;
          if ( v11 >= 0x20 )
          {
            v14 = v11 >> 5;
            v11 += -32LL * (v11 >> 5);
            do
            {
              *v12++ = 0;
              --v14;
            }
            while ( v14 );
          }
          if ( !v11 )
            goto LABEL_25;
        }
        v13 = -1 << v11;
      }
      else
      {
        v13 = ~(1 << v10);
      }
      _InterlockedAnd(v12, v13);
    }
LABEL_25:
    if ( (v4 & 0x1FFFFF8000LL) != 0 )
    {
      v15 = MiHugePfnPartition(a1);
      v16 = 56320LL * (unsigned int)MiPageToNode(v2 << 18) + *(_QWORD *)(v15 + 16);
      MiUpdatePageMoveInProgressInternal(v16, 0, 1, 1);
      MiSimpleUnlinkHugeRange((unsigned __int64 *)v3, 1LL, v2);
      MiSimpleInsertHugeRange(v3, 1LL, v2, 0LL);
      MiUpdatePageMoveInProgressInternal(v16, 0, 0, 1);
    }
    goto LABEL_27;
  }
  return 0LL;
}
