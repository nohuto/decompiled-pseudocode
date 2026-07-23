/*
 * XREFs of KiAcquireThreadStateLockForWrite @ 0x1403342E0
 * Callers:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402040B4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiUpdateProcessThreadQos @ 0x140204184 (KiUpdateProcessThreadQos.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140239DC0 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateThreadCpuSets @ 0x14045C180 (KiUpdateThreadCpuSets.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireThreadStateLockForWrite(__int64 a1, __int64 a2, volatile signed __int32 **a3)
{
  __int64 *v4; // r9
  volatile signed __int64 **v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // r13
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // r14
  _BYTE *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned int v15; // edi
  unsigned int j; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  char v19; // al
  __int64 *v20; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r14
  _BYTE *v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rbx
  unsigned int v32; // edi
  __int64 v33; // rcx
  unsigned __int64 v34; // r9
  _BYTE *v35; // rax
  __int64 v36; // rdx
  unsigned int i; // ecx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r9
  _BYTE *v42; // rax
  __int64 v43; // rdx
  volatile signed __int32 *v44; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v45; // [rsp+78h] [rbp+10h]
  __int64 *v46; // [rsp+80h] [rbp+18h]
  volatile signed __int64 **v47; // [rsp+88h] [rbp+20h]

  v45 = (__int64 *)a2;
  v4 = (__int64 *)(a2 + 8);
  v5 = (volatile signed __int64 **)(a2 + 24);
  v46 = (__int64 *)(a2 + 8);
  v47 = (volatile signed __int64 **)(a2 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(unsigned __int8 *)(a1 + 388);
        v7 = 0LL;
        v44 = 0LL;
        v8 = 0LL;
        v9 = v6;
        if ( v6 == 5 )
        {
          v19 = *(_BYTE *)(a1 + 112) & 7;
          if ( v19 == 1 || (unsigned __int8)(v19 - 3) <= 3u )
            goto LABEL_33;
          v9 = 2;
          goto LABEL_51;
        }
        if ( v6 == 1 )
          break;
        if ( v6 == 2 )
        {
LABEL_51:
          v27 = *(unsigned int *)(a1 + 536);
          if ( (int)v27 >= 0 )
          {
            v7 = KiProcessorBlock[v27];
            *v4 = v7 | 1;
            v28 = *(_BYTE **)(v7 + 36504);
            v29 = (__int64 *)(v28 + 8);
            if ( *v28 )
            {
              v30 = (unsigned __int8)*v28;
              do
              {
                v31 = *v29;
                v32 = 0;
LABEL_55:
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 48), 0LL) )
                {
                  while ( 1 )
                  {
                    if ( (++v32 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                    {
                      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                      {
LABEL_78:
                        HvlNotifyLongSpinWait(v32);
                        goto LABEL_58;
                      }
                      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
                      {
                        v38 = KiProcessorBlock[i];
                        if ( (*(_BYTE *)(v38 + 35) & 1) != 0 )
                        {
                          v39 = *(_QWORD *)(v38 + 36600);
                          if ( !v39 || !*(_BYTE *)(v39 + 65) || !*(_BYTE *)(v39 + 64) )
                            goto LABEL_78;
                        }
                      }
                    }
                    _mm_pause();
LABEL_58:
                    if ( !*(_QWORD *)(v31 + 48) )
                      goto LABEL_55;
                  }
                }
                ++v29;
                --v30;
              }
              while ( v30 );
              v8 = v44;
              v4 = v46;
            }
            if ( a1 == *(_QWORD *)(v7 + 8) )
              goto LABEL_33;
            if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
              __fastfail(0x4Au);
            v33 = *v4;
            v34 = *v4 & 0xFFFFFFFFFFFFFFFEuLL;
            v44 = (volatile signed __int32 *)v34;
            if ( (v33 & 1) != 0 )
            {
              v35 = *(_BYTE **)(v34 + 36504);
              LODWORD(v36) = (unsigned __int8)*v35;
              a3 = (volatile signed __int32 **)(v35 + 8);
              if ( !*v35 )
              {
LABEL_67:
                v5 = v47;
                goto LABEL_68;
              }
            }
            else
            {
              a3 = &v44;
              LODWORD(v36) = 1;
            }
            do
            {
              v36 = (unsigned int)(v36 - 1);
              _InterlockedAnd64((volatile signed __int64 *)a3[v36] + 6, 0LL);
            }
            while ( (_DWORD)v36 );
            goto LABEL_67;
          }
        }
        else
        {
          if ( v6 != 3 )
            goto LABEL_33;
          v10 = *(unsigned int *)(a1 + 536);
          if ( (int)v10 >= 0 )
          {
            v7 = KiProcessorBlock[v10];
            *v4 = v7 | 1;
            v11 = *(_BYTE **)(v7 + 36504);
            v12 = (__int64 *)(v11 + 8);
            if ( !*v11 )
              goto LABEL_13;
            v13 = (unsigned __int8)*v11;
            do
            {
              v14 = *v12;
              v15 = 0;
LABEL_10:
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
              {
                while ( 1 )
                {
                  if ( (++v15 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                  {
                    if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                    {
LABEL_30:
                      HvlNotifyLongSpinWait(v15);
                      goto LABEL_19;
                    }
                    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
                    {
                      v17 = KiProcessorBlock[j];
                      if ( (*(_BYTE *)(v17 + 35) & 1) != 0 )
                      {
                        v18 = *(_QWORD *)(v17 + 36600);
                        if ( !v18 || !*(_BYTE *)(v18 + 65) || !*(_BYTE *)(v18 + 64) )
                          goto LABEL_30;
                      }
                    }
                  }
                  _mm_pause();
LABEL_19:
                  if ( !*(_QWORD *)(v14 + 48) )
                    goto LABEL_10;
                }
              }
              ++v12;
              --v13;
            }
            while ( v13 );
            v8 = v44;
            v4 = v46;
LABEL_13:
            if ( a1 == *(_QWORD *)(v7 + 16) )
              goto LABEL_33;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v10 )
              __fastfail(0x1Eu);
            KiReleasePrcbLocksForIsolationUnit(v4);
            v4 = v46;
            v5 = v47;
          }
        }
      }
      v22 = *(unsigned int *)(a1 + 536);
      if ( (int)v22 < 0 )
        break;
      v7 = KiProcessorBlock[v22];
      KiAcquirePrcbLocksForIsolationUnit(v7, 0, (unsigned __int64 *)v4);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v22 )
        goto LABEL_33;
      v40 = *v46;
      v41 = *v46 & 0xFFFFFFFFFFFFFFFEuLL;
      v44 = (volatile signed __int32 *)v41;
      if ( (v40 & 1) != 0 )
      {
        v42 = *(_BYTE **)(v41 + 36504);
        LODWORD(v43) = (unsigned __int8)*v42;
        a3 = (volatile signed __int32 **)(v42 + 8);
        if ( *v42 )
          goto LABEL_86;
LABEL_68:
        v4 = v46;
        *v46 = 0LL;
      }
      else
      {
        a3 = &v44;
        LODWORD(v43) = 1;
        do
        {
LABEL_86:
          v43 = (unsigned int)(v43 - 1);
          _InterlockedAnd64((volatile signed __int64 *)a3[v43] + 6, 0LL);
        }
        while ( (_DWORD)v43 );
        v4 = v46;
        *v46 = 0LL;
      }
    }
    v23 = (unsigned int)v22;
    LODWORD(v23) = v22 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v23] + 36488);
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      LODWORD(v44) = 0;
      while ( _interlockedbittestandset64(v8, 0LL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( *(_QWORD *)v8 );
      }
      goto LABEL_82;
    }
    v5[1] = (volatile signed __int64 *)v8;
    *v5 = 0LL;
    v24 = _InterlockedExchange64((volatile __int64 *)v8, (__int64)v5);
    if ( v24 )
    {
      KxWaitForLockOwnerShip((volatile signed __int64)v5, v24, (__int64)a3);
LABEL_82:
      v4 = v46;
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v22 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(v5);
      v25 = (__int64)*v5;
      if ( *v5 )
      {
LABEL_42:
        v4 = v46;
        *v5 = 0LL;
        v26 = (__int64)v5[1];
        if ( (((unsigned __int8)v26 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v25 + 8), v26)) & 4) != 0 )
        {
          KeWakeAddressAll();
          v4 = v46;
        }
      }
      else if ( v5 != (volatile signed __int64 **)_InterlockedCompareExchange64(v5[1], 0LL, (signed __int64)v5) )
      {
        v25 = KxWaitForLockChainValid((__int64 *)v5, (__int64)KiProcessorBlock, (__int64)a3);
        goto LABEL_42;
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    }
  }
  v7 = 0LL;
LABEL_33:
  v20 = v45;
  *v45 = v7;
  v20[2] = (__int64)v8;
  return v9;
}
