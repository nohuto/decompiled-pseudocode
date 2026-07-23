/*
 * XREFs of MiDrainZeroLookasides @ 0x140457D20
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r12
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int64 j; // r10
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // rcx
  unsigned int v18; // ebp
  unsigned int v19; // ebx
  __int64 v20; // r13
  _SLIST_HEADER *v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // [rsp+20h] [rbp-88h]
  unsigned __int64 v35; // [rsp+28h] [rbp-80h]
  unsigned __int8 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 i; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h]
  unsigned __int64 v41; // [rsp+58h] [rbp-50h]
  unsigned int v42; // [rsp+B0h] [rbp+8h]
  __int64 v44; // [rsp+C0h] [rbp+18h]
  int v45; // [rsp+C8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v35 = v4;
  v6 = a4;
  v7 = a3;
  if ( a2 )
  {
    v8 = 1;
    v42 = 1;
    v9 = 56320LL * (unsigned int)MiPageToNode((__int64)(a2 + 0x220000000000LL) / 48);
    v10 = 1LL;
    v4 += v9;
    v35 = v4;
  }
  else
  {
    v8 = dword_140E2D90C;
    v6 = 458752;
    v10 = (unsigned __int16)KeNumberNodes;
    v45 = 458752;
    v42 = dword_140E2D90C;
  }
  v11 = 512;
  v12 = v4 + 56320 * v10 - 56320;
  result = v5 + 48 * v7;
  v41 = v12;
  for ( i = result; v4 <= v41; v35 = v4 )
  {
    for ( j = 0LL; ; j = v16 + 1 )
    {
      v38 = j;
      if ( j > 1 )
        break;
      v15 = v11 & 0xFFFFFFFC | 1;
      v11 = v11 & 0xFFFFFFFC | 2;
      if ( !j )
        v11 = v15;
      result = MiColorGetCache(v6);
      v17 = *(_QWORD *)(v4 + 8 * v16 + 13856);
      v18 = result;
      v40 = v17;
      v34 = result;
      if ( v8 )
      {
        v19 = v42;
        v20 = v42;
        v37 = v42;
        do
        {
          if ( v19 != 1 )
          {
            v18 %= v19;
            v34 = v18;
          }
          v21 = (_SLIST_HEADER *)(v17 + 16LL * v18);
          result = (__int64)FirstEntrySList(v21);
          if ( result )
          {
            result = (__int64)RtlpInterlockedFlushSList(v21);
            v23 = result;
            if ( result )
            {
              CurrentIrql = KeGetCurrentIrql();
              v36 = CurrentIrql;
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v22) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
              }
              v25 = v44;
              do
              {
                v26 = *(_QWORD *)v23;
                if ( a2 )
                {
                  if ( v23 < a2 || v23 >= i )
                  {
                    v27 = 0;
                  }
                  else
                  {
                    v27 = 1;
                    --v25;
                  }
                }
                else
                {
                  v27 = 1;
                }
                v28 = v11;
                v11 |= 0x40u;
                v29 = v28 & 0xFFFFFFBF;
                if ( !v27 )
                  v11 = v29;
                v30 = *(_QWORD *)(v23 + 16);
                if ( v30 )
                {
                  if ( qword_140E2D8C0 )
                  {
                    v31 = qword_140E2D8C8 & v30;
                    LODWORD(v30) = v30 & 0xFFFFFFEF;
                    if ( (*(_QWORD *)(v23 + 16) & 0x10) == 0 )
                      LODWORD(v30) = v31;
                  }
                }
                v32 = (unsigned int)v30;
                if ( qword_140E2D8C0 )
                {
                  if ( ((unsigned int)v30 & (unsigned int)qword_140E2D8C0) != 0 )
                    v32 = (unsigned int)v30 | 0x10LL;
                  else
                    v32 = qword_140E2D8C0 | (unsigned int)v30;
                }
                *(_QWORD *)(v23 + 16) = v32;
                v33 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v33 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v33);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v23 + 24) < 0 );
                }
                MiInsertPageInFreeOrZeroedList((__int64)(v23 + 0x220000000000LL) / 48);
                _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v23 = v26;
              }
              while ( v26 );
              v20 = v37;
              v19 = v42;
              v44 = v25;
              v18 = v34;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
              result = v36;
              __writecr8(v36);
            }
          }
          v17 = v40;
          ++v18;
          --v20;
          v34 = v18;
          v37 = v20;
        }
        while ( v20 );
        v6 = v45;
        v8 = v42;
        v5 = a2;
        v4 = v35;
        v16 = v38;
        v7 = v44;
      }
      if ( v5 && !v7 )
        return result;
    }
    v4 += 56320LL;
  }
  return result;
}
