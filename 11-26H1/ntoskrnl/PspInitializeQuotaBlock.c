/*
 * XREFs of PspInitializeQuotaBlock @ 0x1407F5B50
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     PspExpandLimit @ 0x140617B20 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x140617B9C (PspInsertExpansionEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopQueryProcessorInitValues @ 0x140796B38 (IopQueryProcessorInitValues.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A8F720 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, LIST_ENTRY *p_ApcListEntry, __int64 *a3)
{
  __int64 v6; // rdx
  struct _KLOCK_ENTRIES *v7; // r9
  signed int v8; // esi
  _KDPC **p_Dpc; // r15
  LIST_ENTRY *v10; // r12
  __int64 *v11; // rdi
  __int64 v12; // r14
  unsigned __int8 v13; // cl
  __int64 v14; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v24 = 0LL;
  memset_0(a3, 0, 0x240uLL);
  *((_DWORD *)a3 + 129) = 1;
  *((_DWORD *)a3 + 128) = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    p_ApcListEntry = &PspSiloMonitorLock.SchedulerApc.ApcListEntry;
  }
  v8 = 0;
  p_Dpc = &PsAltSystemCallRegistrationLock.Timer.Dpc;
  v10 = p_ApcListEntry;
  v11 = a3 + 8;
  v12 = 0LL;
  while ( v8 < 4 )
  {
    v13 = stru_140FC11F0.SchedulerApcFill3[v12 * 8 + 40];
    if ( (v13 & 2) == 0 )
    {
      v14 = p_ApcListEntry ? SLODWORD(v10->Flink) : *(_QWORD *)(a1 + PspQuotaLimitOffsets[v12]);
      *v11 = v14;
      if ( (v13 & 1) != 0 )
      {
        if ( v14 == -1 )
        {
          *v11 = 0LL;
          PspInsertExpansionEntry((__int64)p_Dpc, (__int64)(v11 - 8), -1LL, v7);
        }
        else if ( v14 )
        {
          v24 = 0LL;
          if ( !PspExpandLimit(v8, v6, v14, (struct _KLOCK_ENTRIES *)&v24) )
            return 3221225626LL;
          if ( !v8 )
          {
            v22 = 0LL;
            v23 = 0LL;
            if ( IopIrpCreditsEnabled < 1 && !_InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0) )
            {
              IopQueryProcessorInitValues((__int64)&v22);
              KeSynchronizeWithDynamicProcessors(v17, v16, v18, v19);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              v6 = 0LL;
              if ( ActiveProcessorCount )
              {
                v7 = (struct _KLOCK_ENTRIES *)HIDWORD(v23);
                v21 = KiProcessorBlock;
                do
                {
                  if ( *(_DWORD *)(*v21 + 11676) != 0x7FFFFFFF )
                    break;
                  v6 = (unsigned int)(v6 + 1);
                  *(_DWORD *)(*v21++ + 11676) = (_DWORD)v7;
                }
                while ( (unsigned int)v6 < ActiveProcessorCount );
              }
              _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
            }
          }
        }
      }
    }
    ++v8;
    v11 += 16;
    v10 = (LIST_ENTRY *)((char *)v10 + 4);
    ++v12;
    p_Dpc += 7;
  }
  return 0LL;
}
