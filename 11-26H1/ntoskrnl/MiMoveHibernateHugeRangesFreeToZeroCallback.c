/*
 * XREFs of MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiIsPageInHugePfn @ 0x1403138E0 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x1404448A0 (MiUpdatePageMoveInProgressInternal.c)
 *     MiHugePfnPartition @ 0x14048E180 (MiHugePfnPartition.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x14048E350 (MiLockHugeRangeColorHeadAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x14048E398 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMoveHibernateHugeRangesFreeToZeroCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  volatile signed __int32 *v14; // rdi
  __int64 v16; // [rsp+60h] [rbp+18h]

  v16 = a3;
  v3 = a2 & 0x3FFFFF;
  v4 = 0LL;
  v5 = a2 << 18;
  v6 = 0LL;
  v7 = a3;
  CurrentIrql = 17;
  v9 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * v3);
  if ( a3 )
  {
    do
    {
      if ( MiIsPageInHugePfn(v5) )
      {
        if ( CurrentIrql == 17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v10 )
            __writecr8(v10);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
        }
        MiLockHugePfnAtDpc((__int64)v9);
        if ( MiIsPageInHugePfn(v5) )
        {
          v11 = MiHugePfnPartition(v9);
          if ( v11 )
          {
            if ( (*v9 & 7) == 2 )
            {
              v12 = v3 & 0x3FFFFF;
              if ( LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) == 3
                && (struct _LIST_ENTRY *)v12 < stru_140E2EB88.WaitBlock[2].WaitListEntry.Flink
                && _bittest64(
                     (const signed __int64 *)stru_140E2EB88.WaitBlock[2].WaitListEntry.Blink + ((v3 & 0x3FFFFF) >> 6),
                     v3 & 0x3F) )
              {
                v13 = *(_QWORD *)(v11 + 16) + 56320LL * (unsigned int)MiPageToNode(v12 << 18);
                if ( v6 != v13 )
                {
                  if ( v6 )
                    MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
                  v6 = v13;
                  MiUpdatePageMoveInProgressInternal(v13, 0, 1, 1);
                }
                v14 = MiLockHugeRangeColorHeadAtDpc();
                MiUnlinkHugeRangeEx(v11, v3, 0);
                _InterlockedAnd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFF7uLL);
                MiInsertHugeRangeInList(0LL, v3, 1);
                v7 = v16;
              }
            }
          }
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                    + 4
                                    * (((((__int64)v9 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3)));
        if ( (++v4 & 0x3F) == 0 && KeShouldYieldProcessor() )
        {
          if ( v6 )
          {
            MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
            v6 = 0LL;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          CurrentIrql = 17;
          v4 = 0LL;
        }
      }
      ++v9;
      v5 += 0x40000LL;
      v3 = (v3 + 1) ^ ((v3 + 1) ^ v3) & 0xFFFFFFFFFFC00000uLL;
      v16 = --v7;
    }
    while ( v7 );
    if ( CurrentIrql != 17 )
    {
      if ( v6 )
        MiUpdatePageMoveInProgressInternal(v6, 0, 0, 1);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return 0LL;
}
