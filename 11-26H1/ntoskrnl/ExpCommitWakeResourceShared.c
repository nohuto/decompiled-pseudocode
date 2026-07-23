/*
 * XREFs of ExpCommitWakeResourceShared @ 0x140273420
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpCommitWakeResourceShared(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  volatile signed __int32 *v5; // rdi
  int v6; // ecx
  signed int v7; // ebp
  unsigned int v9; // r14d
  __int64 result; // rax
  char v11; // bl
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rax
  volatile signed __int32 *v16; // r15
  _QWORD *v17; // rdx
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 *v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned int v26; // r12d
  char v27; // dl
  bool v28; // zf
  int v29; // eax
  signed int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-68h]
  _QWORD *v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v36; // [rsp+48h] [rbp-50h]
  unsigned __int8 v37; // [rsp+50h] [rbp-48h]
  __int64 v38; // [rsp+A0h] [rbp+8h]
  _QWORD *v39; // [rsp+A8h] [rbp+10h]

  v5 = *a2;
  v6 = a5 & 1;
  v7 = a4;
  v9 = 1;
  result = (unsigned int)(2 * v6 + 1);
  v11 = (2 * v6 + 1) | 4;
  if ( (a5 & 2) == 0 )
    v11 = 2 * v6 + 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v37 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = v11 & 4;
    v38 = (__int64)CurrentPrcb;
    v15 = v5;
    while ( 1 )
    {
      v16 = v15;
      v36 = *(volatile signed __int32 **)v15;
      if ( (_DWORD)v14 )
      {
        v31 = *((_QWORD *)v15 + 6);
        if ( v31 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpConvertWaiterToOwner(
              *(AutoBoost **)(v31 - 48LL * (*(_BYTE *)(v31 + 36) & 0x7F) - 16),
              (struct _KTHREAD *)v31,
              (struct AutoBoost::_AB_THREAD_ENTRY *)1,
              a4);
          else
            LegacyAutoBoost::KiAbConvertWaiterToOwnerEntry(
              *(LegacyAutoBoost **)(v31 - 88LL * (*(_BYTE *)(v31 + 8) & 0x3F) - 16),
              v31,
              (struct _KLOCK_ENTRY *)1);
        }
      }
      v17 = v16 + 6;
      v18 = 0;
      v39 = v16 + 6;
      if ( _interlockedbittestandset(v16 + 6, 7u) )
        break;
LABEL_11:
      v19 = v17 + 1;
      *((_DWORD *)v16 + 7) = 1;
      a3 = v17[1];
      v34 = v17 + 1;
      while ( (_QWORD *)a3 != v19 )
      {
        v20 = *(_QWORD *)a3;
        v21 = a3;
        v22 = *(__int64 **)(a3 + 8);
        v33 = *(_QWORD *)a3;
        if ( *(_QWORD *)(*(_QWORD *)a3 + 8LL) != a3 || *v22 != a3 )
          __fastfail(3u);
        *v22 = v20;
        *(_QWORD *)(v20 + 8) = v22;
        v23 = *(_BYTE *)(a3 + 16);
        switch ( v23 )
        {
          case 1:
            v24 = *(unsigned __int16 *)(a3 + 18);
            LOBYTE(v17) = 0;
            v25 = *(_QWORD *)(a3 + 24);
            v26 = 0;
            v35 = v24;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
            {
              do
              {
                if ( (++v26 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24, v17, a3) )
                {
                  HvlNotifyLongSpinWait(v26);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v25 + 64) );
            }
            if ( *(_BYTE *)(v25 + 388) == 5 )
              v27 = KiSignalThread(v38, v25, v35, v21);
            else
              v27 = 0;
            a3 = v33;
            *(_QWORD *)(v25 + 64) = 0LL;
            v28 = v27 == 0;
            ++*(_BYTE *)(v21 + 17);
            v17 = v39;
            CurrentPrcb = (struct _KPRCB *)v38;
            v19 = v39 + 1;
            if ( !v28 )
            {
              v29 = *((_DWORD *)v39 + 1) - 1;
              *((_DWORD *)v39 + 1) = v29;
              if ( !v29 )
                goto LABEL_22;
              v19 = v39 + 1;
            }
            break;
          case 2:
            *(_BYTE *)(a3 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(a3 + 24), a3);
            v17 = v39;
            CurrentPrcb = (struct _KPRCB *)v38;
            v32 = *((_DWORD *)v39 + 1) - 1;
            *((_DWORD *)v39 + 1) = v32;
            if ( !v32 )
              goto LABEL_22;
            a3 = v33;
            v19 = v39 + 1;
            break;
          case 4:
            *(_BYTE *)(a3 + 17) = 5;
            *((_DWORD *)v17 + 1) = 0;
            KiInsertQueueDpc(*(_QWORD *)(a3 + 24), 0);
            v17 = v39;
            a3 = v33;
            v19 = v34;
            CurrentPrcb = (struct _KPRCB *)v38;
            break;
          default:
            CurrentPrcb = (struct _KPRCB *)v38;
            KiTryUnwaitThread(v38, a3, 256LL, 0LL);
            v17 = v39;
            a3 = v33;
            v19 = v34;
            break;
        }
      }
LABEL_22:
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      v15 = v36;
      if ( v36 == v5 )
      {
        v30 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
        if ( v7 )
        {
          v9 = 2;
          if ( v30 > v7 )
            v7 = v30;
        }
        if ( (v11 & 2) != 0 && v9 == 1 )
          v7 = 1;
        KiExitDispatcher((__int64)CurrentPrcb, 0LL, v9, v7, v37);
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v14 = v11 & 4;
    }
    while ( 1 )
    {
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        goto LABEL_53;
      if ( !(unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v17, a3) )
        break;
      HvlNotifyLongSpinWait(v18);
      v17 = v16 + 6;
LABEL_54:
      if ( (*(_DWORD *)v17 & 0x80u) == 0 && !_interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
        goto LABEL_11;
    }
    v17 = v16 + 6;
LABEL_53:
    _mm_pause();
    goto LABEL_54;
  }
  return result;
}
