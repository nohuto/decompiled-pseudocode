/*
 * XREFs of MiUnlinkHugeRangeEx @ 0x140487ED8
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiHugePurgeZeroList @ 0x140512B18 (MiHugePurgeZeroList.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406F034C (MiGetHugeBadRangeFromNode.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x1406F0910 (MiGetPerfectColorHeadHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x1406F1358 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiPageListCollision @ 0x14048758C (MiPageListCollision.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     MiSimpleUnlinkHugeRange @ 0x140488420 (MiSimpleUnlinkHugeRange.c)
 */

__int64 __fastcall MiUnlinkHugeRangeEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // r12
  __int64 v7; // rdi
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 ColorHeadHugeRangeBase; // r11
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  volatile signed __int32 *v16; // r8
  int v17; // r12d
  unsigned __int64 v18; // rcx
  __int64 v19; // r10
  unsigned __int64 v20; // r9
  volatile signed __int32 *v21; // r8
  int v22; // r12d
  unsigned __int64 v23; // rcx
  __int64 result; // rax
  unsigned __int8 v25; // [rsp+60h] [rbp+8h]
  unsigned int v26; // [rsp+68h] [rbp+10h]
  char v27; // [rsp+70h] [rbp+18h]

  v26 = dword_140E2D900[0];
  v4 = a2 & 0x3FFFFF;
  v25 = MiPageToChannel(v4 << 18);
  v7 = (unsigned int)MiPageToNode(v4 << 18);
  v27 = 0;
  v8 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
  v9 = *v8;
  v10 = *v8 & 7;
  if ( v10 == 2 )
  {
    if ( (v9 & 0x800000000000000LL) != 0 )
      MiPageListCollision(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
    v11 = 1;
  }
  else if ( v10 == 1 )
  {
    if ( (v9 & 0x800000000000000LL) != 0 )
    {
      MiPageListCollision(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
      v27 = 1;
    }
    v11 = 0;
  }
  else
  {
    v11 = 5;
  }
  ColorHeadHugeRangeBase = MiGetColorHeadHugeRangeBase(*(_QWORD *)(a1 + 16) + 56320 * v7, v10, v11);
  if ( v11 != 5 )
    ColorHeadHugeRangeBase += 8 * (v4 % v26);
  MiSimpleUnlinkHugeRange(ColorHeadHugeRangeBase, v11, a2);
  v13 = *v8 & 0x7FFF;
  if ( *(_BYTE *)(a1 + 16485) || v27 || v11 )
    v13 |= 0x10000uLL;
  *v8 = v13 & 0xFFFFFF800001FFF8uLL | 0x20003;
  if ( (a3 & 1) == 0 )
  {
    if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
    {
      v14 = v4 & 0x1F;
      LOBYTE(v15) = 1;
      v16 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink + (v4 >> 5);
      if ( (unsigned __int64)(v14 + 1) > 0x20 )
      {
        if ( (v4 & 0x1F) == 0 )
          goto LABEL_25;
        v17 = v4 & 0x1F;
        _InterlockedOr(v16, ((1 << (32 - v17)) - 1) << v14);
        v15 = 1LL - (unsigned int)(32 - v17);
        ++v16;
        if ( v15 >= 0x20 )
        {
          v18 = v15 >> 5;
          v15 += -32LL * (v15 >> 5);
          do
          {
            *v16++ = -1;
            --v18;
          }
          while ( v18 );
        }
        if ( v15 )
LABEL_25:
          _InterlockedOr(v16, (1 << v15) - 1);
      }
      else
      {
        _InterlockedOr(v16, 1 << v14);
      }
    }
    else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
    {
      v19 = v4 & 0x1F;
      LOBYTE(v20) = 1;
      v21 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink + (v4 >> 5);
      if ( (unsigned __int64)(v19 + 1) > 0x20 )
      {
        if ( (v4 & 0x1F) == 0 )
          goto LABEL_34;
        v22 = v4 & 0x1F;
        _InterlockedAnd(v21, ~(((1 << (32 - v22)) - 1) << v19));
        v20 = 1LL - (unsigned int)(32 - v22);
        ++v21;
        if ( v20 >= 0x20 )
        {
          v23 = v20 >> 5;
          v20 += -32LL * (v20 >> 5);
          do
          {
            *v21++ = 0;
            --v23;
          }
          while ( v23 );
        }
        if ( v20 )
LABEL_34:
          _InterlockedAnd(v21, -1 << v20);
      }
      else
      {
        _InterlockedAnd(v21, ~(1 << v19));
      }
    }
  }
  if ( v11 == 5 )
  {
    result = 17056LL;
  }
  else
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 8 * (v25 + 2 * (v11 + 3520 * v7)) + 13912));
    result = 17048LL;
  }
  _InterlockedDecrement64((volatile signed __int64 *)(result + a1));
  return result;
}
