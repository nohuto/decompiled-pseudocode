/*
 * XREFs of KeSelectIdealProcessor @ 0x140201160
 * Callers:
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x140201100 (KeSelectInitialIdealProcessorForThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408464F8 (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x140A78BB8 (ExpNodeCreateSystemThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, _WORD *a2, __int64 a3, unsigned int a4)
{
  __int64 *v7; // r9
  __int64 v8; // r11
  unsigned int i; // edx
  __int64 v10; // rbx
  __int16 v11; // cx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 j; // rdi
  __int64 k; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax

  v7 = &KiGroupBlock[4 * *(unsigned __int16 *)(a1 + 8)];
  v8 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & ~v7[3]) != 0 )
    v8 = *(_QWORD *)a1 & ~v7[3];
  if ( a3 && (KiCacheAwareScheduling & 4) != 0 )
  {
    for ( i = 0; i < a4; ++i )
    {
      if ( (*(_QWORD *)(a3 + 8LL * i) & v8) != 0 )
      {
        v8 &= *(_QWORD *)(a3 + 8LL * i);
        break;
      }
    }
  }
  v10 = v7[2];
  v11 = *a2 & 0x3F;
  v12 = *v7;
  v13 = 1LL << (*a2 & 0x3F);
  if ( (v13 & v12) == 0 )
  {
    _BitScanForward64(&v25, __ROR8__(v12, v11));
    v13 = 1LL << ((unsigned __int8)v25 + (unsigned __int8)v11);
  }
  v14 = v10 & v12;
  v15 = ~v12;
  for ( j = v10; (v14 & v13) == 0; v14 = j & ~v15 )
  {
    v15 |= j;
    j *= 2LL;
  }
  for ( k = ~(v13 | (v13 - 1)) & v14; (k & v8) == 0; k = j & ~v15 )
  {
    v22 = j | v15;
    v23 = ~(j | v15);
    v15 = ~v12;
    if ( (v23 & v12) != 0 )
      v15 = v22;
    v24 = 2 * j;
    j = v10;
    if ( (v23 & v12) != 0 )
      j = v24;
  }
  _BitScanForward64((unsigned __int64 *)&v18, v8 & k);
  *a2 = (unsigned __int8)v18;
  v19 = *(unsigned __int16 *)(a1 + 8);
  if ( !(_WORD)v19 && !(_BYTE)v18 )
    return 0LL;
  if ( (unsigned __int16)v19 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v18 >= 0x40u )
    return 0xFFFFFFFFLL;
  v20 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v19].Flink
        + (unsigned __int8)v18);
  if ( !v20 )
    LOWORD(v20) = -1;
  return (unsigned __int16)v20;
}
