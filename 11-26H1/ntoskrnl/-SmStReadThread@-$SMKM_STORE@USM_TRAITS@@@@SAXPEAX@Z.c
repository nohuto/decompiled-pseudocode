/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14020D4D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402107C8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030FF4C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  PSLIST_ENTRY Context; // r12
  NTSTATUS v8; // eax
  _SLIST_ENTRY **v9; // rbx
  KIRQL v10; // al
  __int64 *v11; // rdx
  _SLIST_ENTRY *v12; // r14
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD **)a1;
  v5 = *(_QWORD *)a1 + 2952LL;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 3200LL) + 2552LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)v3);
  *(_DWORD *)(a1 + 32) = Context == 0LL ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v3 + 373;
    Object[1] = v3 + 370;
    do
    {
      while ( 1 )
      {
        v8 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v8 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v9 = (_SLIST_ENTRY **)(v3 + 376);
        while ( 1 )
        {
          v10 = KeAcquireSpinLockRaiseToDpc(v3 + 378);
          v11 = (__int64 *)v3[377];
          if ( v11 == (__int64 *)v9 )
          {
            v12 = 0LL;
          }
          else
          {
            v12 = *v9;
            *v9 = (_SLIST_ENTRY *)((unsigned __int64)(*v9)->Next & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v12 == (_SLIST_ENTRY *)v11 )
            {
              *(_QWORD *)(v5 + 64) = v5 + 56;
              *v9 = 0LL;
            }
            else
            {
              *v11 = *v11 & 7 | (8 * ((unsigned __int64)*v11 >> 3) - 8);
            }
          }
          KeReleaseSpinLock(v3 + 378, v10);
          if ( !v12 )
            break;
          if ( !(unsigned int)SmAcquireReleaseCharges(
                                *(_QWORD *)(v6 + 32),
                                (unsigned __int64)*(unsigned __int16 *)(v6 + 102) << 12,
                                1,
                                0) )
            SmpFpWaitForResource((PEX_SPIN_LOCK)v6);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue((__int64)v3, (__int64)v12, (__int64)Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete((__int64)v3, v12, Issue);
          if ( *(_QWORD *)(v6 + 112) == v5 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)v6) )
          {
            if ( !*(_BYTE *)(v6 + 94) )
            {
              _InterlockedExchange64((volatile __int64 *)(v6 + 112), 0LL);
              KeSetEvent((PRKEVENT)(v6 + 8), 0, 0);
            }
          }
          else
          {
            SmAcquireReleaseCharges(*(_QWORD *)(v6 + 32), (unsigned __int64)*(unsigned __int16 *)(v6 + 102) << 12, 1, 1);
          }
        }
      }
    }
    while ( v8 != 1 );
    ST_STORE<SM_TRAITS>::StReleaseReadContext((__int64)v3, (__int64)Context);
  }
}
