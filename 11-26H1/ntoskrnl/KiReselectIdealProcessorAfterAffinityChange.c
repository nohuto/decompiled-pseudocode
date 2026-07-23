/*
 * XREFs of KiReselectIdealProcessorAfterAffinityChange @ 0x14022B2E0
 * Callers:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReselectIdealProcessorAfterAffinityChange(__int64 a1, __int64 *a2, __int64 a3, _WORD *a4)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  unsigned __int16 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned int i; // ecx
  __int64 v14; // rsi
  __int16 v15; // cx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 j; // rcx
  __int64 k; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  _QWORD v30[7]; // [rsp+0h] [rbp-38h]

  v5 = *((unsigned __int16 *)a2 + 4);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 184LL);
  v30[0] = *(_QWORD *)(a3 + 36528);
  v8 = *(_QWORD *)(a3 + 192);
  v9 = 0;
  v30[1] = *(_QWORD *)(v8 + 128);
  if ( (unsigned __int16)v5 >= *(_WORD *)(v7 + 208) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(v7 + 8 * v5 + 216);
  v11 = *a2;
  v30[2] = v10;
  v12 = 4 * v5;
  if ( (v11 & ~KiGroupBlock[v12 + 3]) != 0 )
    v11 &= ~KiGroupBlock[v12 + 3];
  if ( (KiCacheAwareScheduling & 4) != 0 )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( (v30[i] & v11) != 0 )
      {
        v11 &= v30[i];
        break;
      }
    }
  }
  v14 = KiGroupBlock[v12 + 2];
  v15 = *a4 & 0x3F;
  v16 = KiGroupBlock[v12];
  v17 = 1LL << (*a4 & 0x3F);
  if ( (v17 & v16) == 0 )
  {
    _BitScanForward64(&v29, __ROR8__(v16, v15));
    v17 = 1LL << ((unsigned __int8)v29 + (unsigned __int8)v15);
  }
  v18 = KiGroupBlock[v12 + 2];
  v19 = ~v16;
  for ( j = v14 & v16; (j & v17) == 0; j = v18 & ~v19 )
  {
    v19 |= v18;
    v18 *= 2LL;
  }
  for ( k = ~(v17 | (v17 - 1)) & j; (k & v11) == 0; k = v18 & ~v19 )
  {
    v26 = v18 | v19;
    v27 = ~(v18 | v19);
    v19 = ~v16;
    if ( (v27 & v16) != 0 )
      v19 = v26;
    v28 = 2 * v18;
    v18 = v14;
    if ( (v27 & v16) != 0 )
      v18 = v28;
  }
  _BitScanForward64((unsigned __int64 *)&v22, v11 & k);
  *a4 = (unsigned __int8)v22;
  v23 = *((unsigned __int16 *)a2 + 4);
  if ( (_WORD)v23 || (_BYTE)v22 )
  {
    if ( (unsigned __int16)v23 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v22 >= 0x40u )
    {
      return (unsigned __int16)-1;
    }
    else
    {
      v24 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v23].Flink
            + (unsigned __int8)v22);
      if ( !v24 )
        LOWORD(v24) = -1;
      return (unsigned __int16)v24;
    }
  }
  return v9;
}
