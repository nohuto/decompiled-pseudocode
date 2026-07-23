/*
 * XREFs of KiUpdateThreadQosGroupingSummaries @ 0x140380C70
 * Callers:
 *     KiUpdateProcessThreadQos @ 0x140204184 (KiUpdateProcessThreadQos.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14020433C (KiUpdateThreadSchedulingProperties.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiUpdateThreadQosGroupingSummaries(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  int v4; // ecx
  bool result; // al
  unsigned __int64 v6; // r8
  unsigned __int8 n; // r11
  __int64 v8; // r9
  unsigned __int8 ii; // dl
  unsigned __int64 v10; // r8
  unsigned __int8 jj; // r11
  __int64 v12; // r9
  unsigned __int8 kk; // dl
  unsigned __int64 v14; // r9
  unsigned __int8 i; // r11
  unsigned __int64 v16; // r8
  unsigned __int8 j; // dl
  unsigned __int64 v18; // r9
  unsigned __int8 k; // r11
  unsigned __int64 v20; // r8
  unsigned __int8 m; // al

  v1 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
  {
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) & 7;
    result = v4 == 5 || ((v4 - 2) & 0xFFFFFFFB) == 0 || v4 == 1 && !KiDisableMediumQosGrouping;
  }
  else
  {
    result = 0;
  }
  if ( ((v3 & *(_QWORD *)(v1 + 32)) != 0) != result )
  {
    if ( result )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 32), v3);
      if ( (*(_BYTE *)(v1 + 184) & 2) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 36512);
        for ( i = 0; v14; v14 >>= 8 )
        {
          if ( (_BYTE)v14 )
          {
            v16 = 0LL;
            for ( j = 0; j < 8u; ++j )
            {
              if ( _bittest64((const __int64 *)&v14, j) )
                v16 += 1LL << (8 * j);
            }
            result = i;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * i + 640), v16);
          }
          ++i;
        }
      }
      if ( (*(_BYTE *)(v1 + 184) & 4) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 36536);
        for ( k = 0; v18; v18 >>= 8 )
        {
          if ( (_BYTE)v18 )
          {
            v20 = 0LL;
            for ( m = 0; m < 8u; ++m )
            {
              if ( _bittest64((const __int64 *)&v18, m) )
                v20 += 1LL << (8 * m);
            }
            result = k;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * k + 704), v20);
          }
          ++k;
        }
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 32), ~v3);
      if ( (*(_BYTE *)(v1 + 184) & 2) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 36512);
        for ( n = 0; v6; v6 >>= 8 )
        {
          if ( (_BYTE)v6 )
          {
            v8 = 0LL;
            for ( ii = 0; ii < 8u; ++ii )
            {
              if ( _bittest64((const __int64 *)&v6, ii) )
                v8 += 1LL << (8 * ii);
            }
            result = n;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * n + 640), -v8);
          }
          ++n;
        }
      }
      if ( (*(_BYTE *)(v1 + 184) & 4) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 36536);
        for ( jj = 0; v10; v10 >>= 8 )
        {
          if ( (_BYTE)v10 )
          {
            v12 = 0LL;
            for ( kk = 0; kk < 8u; ++kk )
            {
              if ( _bittest64((const __int64 *)&v10, kk) )
                v12 += 1LL << (8 * kk);
            }
            result = jj;
            _InterlockedAdd64((volatile signed __int64 *)(v1 + 8LL * jj + 704), -v12);
          }
          ++jj;
        }
      }
    }
  }
  return result;
}
