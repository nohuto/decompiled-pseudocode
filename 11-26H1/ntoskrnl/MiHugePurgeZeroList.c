/*
 * XREFs of MiHugePurgeZeroList @ 0x140512B18
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1406F4AD0 (MiMirrorPurgePartitionPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14043D3B0 (MiUpdatePageMoveInProgressInternal.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiHugePurgeZeroList(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // esi
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  unsigned int v7; // r11d
  volatile signed __int32 *ColorHeadHugeRangeBase; // r14
  __int64 v9; // r13
  __int64 v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // r15
  _DWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+80h] [rbp+8h]
  __int16 v16; // [rsp+88h] [rbp+10h]
  int v17; // [rsp+90h] [rbp+18h]
  unsigned int i; // [rsp+98h] [rbp+20h]

  v15 = (__int64)a1;
  result = *a1;
  CurrentIrql = 17;
  v4 = 0;
  v16 = *a1;
  v13[1] = dword_140E2D900[0];
  for ( i = 0; v4 < (unsigned __int16)KeNumberNodes; i = v4 )
  {
    v17 = 0;
    v5 = *((_QWORD *)a1 + 2) + 56320LL * v4;
    ColorHeadHugeRangeBase = (volatile signed __int32 *)MiGetColorHeadHugeRangeBase(v5, a2, 0);
    if ( v7 )
    {
      v9 = v7;
      v14 = v7;
      do
      {
        v10 = (*(_QWORD *)ColorHeadHugeRangeBase >> 15) & 0x3FFFFFLL;
        if ( ((*(_QWORD *)ColorHeadHugeRangeBase >> 15) & 0x3FFFFF) != 0 )
        {
          do
          {
            if ( _bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v10) )
            {
              v11 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v10);
              if ( CurrentIrql == 17 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(a2) = 2;
                  LOBYTE(v6) = CurrentIrql;
                  KiRaiseIrqlProcessIrqlFlags(v6, a2);
                }
                MiUpdatePageMoveInProgressInternal(v5, 0, 1, 1);
              }
              MiLockHugePfnAtDpc((__int64)v11);
              if ( ((*v11 >> 4) & 0x7FFLL) == v16 && (*v11 & 7) == 1 )
              {
                v13[0] = 0;
                while ( _interlockedbittestandset64(ColorHeadHugeRangeBase, 3uLL) )
                {
                  do
                    KeYieldProcessorEx(v13);
                  while ( (*(_QWORD *)ColorHeadHugeRangeBase & 8) != 0 );
                }
                MiUnlinkHugeRangeEx(v15, v10, 1);
                _InterlockedAnd64((volatile signed __int64 *)ColorHeadHugeRangeBase, 0xFFFFFFFFFFFFFFF7uLL);
                MiInsertHugeRangeInList(0LL, v10, 0);
                v6 = (((__int64)v11 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
                a2 = (unsigned int)~(1 << (((__int64)v11 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3));
                _InterlockedAnd(
                  (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber + 4 * (v6 >> 5)),
                  a2);
                if ( (++v17 & 0x3F) == 0 && KeShouldYieldProcessor() )
                {
                  MiUpdatePageMoveInProgressInternal(v5, 0, 0, 1);
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                  CurrentIrql = 17;
                }
              }
              else
              {
                v12 = (((__int64)v11 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
                v6 = (unsigned int)v12;
                a2 = (unsigned int)~(1 << v12);
                _InterlockedAnd(
                  (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                            + 4 * ((unsigned __int64)(unsigned int)v12 >> 5)),
                  a2);
              }
            }
            v10 = (*(_QWORD *)ColorHeadHugeRangeBase >> 15) & 0x3FFFFFLL;
          }
          while ( ((*(_QWORD *)ColorHeadHugeRangeBase >> 15) & 0x3FFFFF) != 0 );
          v9 = v14;
        }
        ColorHeadHugeRangeBase += 2;
        v14 = --v9;
      }
      while ( v9 );
      v4 = i;
    }
    if ( CurrentIrql != 17 )
    {
      MiUpdatePageMoveInProgressInternal(v5, 0, 0, 1);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      CurrentIrql = 17;
    }
    result = (unsigned __int16)KeNumberNodes;
    ++v4;
    a1 = (unsigned __int16 *)v15;
  }
  return result;
}
