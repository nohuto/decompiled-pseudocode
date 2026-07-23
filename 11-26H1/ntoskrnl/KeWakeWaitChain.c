/*
 * XREFs of KeWakeWaitChain @ 0x140272C70
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x14041EB0C (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4 (ExpConvertFastResourceExclusiveToShared.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14093BD10 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
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

__int64 __fastcall KeWakeWaitChain(__int64 **a1, signed int a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // ebx
  char v5; // bp
  unsigned int v8; // r15d
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // r13
  __int64 *v14; // rdx
  unsigned int v15; // r12d
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned int v22; // r12d
  char v23; // dl
  bool v24; // zf
  int v25; // eax
  signed int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 *v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-68h]
  __int64 *v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  volatile signed __int32 *v35; // [rsp+60h] [rbp-48h]
  unsigned __int8 v36; // [rsp+68h] [rbp-40h]

  v3 = (volatile signed __int32 *)*a1;
  v4 = 0;
  v5 = a3;
  v8 = 1;
  if ( !*a1 )
    return v4;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v11 = v5 & 4;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = v3;
  while ( 1 )
  {
    v13 = v12;
    v35 = *(volatile signed __int32 **)v12;
    if ( (_DWORD)v11 )
    {
      v27 = *((_QWORD *)v12 + 6);
      if ( v27 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpConvertWaiterToOwner(
            *(AutoBoost **)(v27 - 48LL * (*(_BYTE *)(v27 + 36) & 0x7F) - 16),
            *((struct _KTHREAD **)v12 + 6),
            (struct AutoBoost::_AB_THREAD_ENTRY *)1,
            v27);
        else
          LegacyAutoBoost::KiAbConvertWaiterToOwnerEntry(
            *(LegacyAutoBoost **)(v27 - 88LL * (*(_BYTE *)(v27 + 8) & 0x3F) - 16),
            *((_QWORD *)v12 + 6),
            (struct _KLOCK_ENTRY *)1);
      }
    }
    v14 = (__int64 *)(v13 + 6);
    v15 = 0;
    v29 = (__int64 *)(v13 + 6);
    if ( _interlockedbittestandset(v13 + 6, 7u) )
    {
      while ( 1 )
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          goto LABEL_54;
        if ( !(unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v14, a3) )
          break;
        HvlNotifyLongSpinWait(v15);
        v14 = (__int64 *)(v13 + 6);
LABEL_55:
        if ( (*(_DWORD *)v14 & 0x80u) == 0 && !_interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
          goto LABEL_10;
      }
      v14 = (__int64 *)(v13 + 6);
LABEL_54:
      _mm_pause();
      goto LABEL_55;
    }
LABEL_10:
    v16 = v14 + 1;
    *((_DWORD *)v13 + 7) = 1;
    a3 = v14[1];
    v32 = v14 + 1;
    while ( (__int64 *)a3 != v16 )
    {
      v17 = *(_QWORD *)a3;
      v18 = *(__int64 **)(a3 + 8);
      v33 = a3;
      v30 = *(_QWORD *)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 8LL) != a3 || *v18 != a3 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *(_BYTE *)(a3 + 16);
      if ( v19 == 1 )
      {
        v20 = *(unsigned __int16 *)(a3 + 18);
        LOBYTE(v14) = 0;
        v21 = *(_QWORD *)(a3 + 24);
        v22 = 0;
        v34 = v20;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20, v14, a3) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v21 + 64) );
        }
        if ( *(_BYTE *)(v21 + 388) == 5 )
          v23 = KiSignalThread(CurrentPrcb, v21, v34, v33);
        else
          v23 = 0;
        a3 = v30;
        *(_QWORD *)(v21 + 64) = 0LL;
        v24 = v23 == 0;
        ++*(_BYTE *)(v33 + 17);
        v14 = v29;
        v16 = v29 + 1;
        if ( !v24 )
        {
          v25 = *((_DWORD *)v29 + 1) - 1;
          *((_DWORD *)v29 + 1) = v25;
          if ( !v25 )
            break;
          v16 = v29 + 1;
        }
      }
      else if ( v19 == 2 )
      {
        *(_BYTE *)(a3 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(a3 + 24), a3);
        v14 = v29;
        v28 = *((_DWORD *)v29 + 1) - 1;
        *((_DWORD *)v29 + 1) = v28;
        if ( !v28 )
          break;
        a3 = v30;
        v16 = v29 + 1;
      }
      else
      {
        if ( v19 == 4 )
        {
          *(_BYTE *)(a3 + 17) = 5;
          *((_DWORD *)v14 + 1) = 0;
          KiInsertQueueDpc(*(_QWORD *)(a3 + 24), 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, a3, 256LL, 0LL);
        }
        v14 = v29;
        a3 = v30;
        v16 = v32;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    v12 = v35;
    ++v4;
    if ( v35 == v3 )
      break;
    v11 = v5 & 4;
  }
  if ( (v5 & 1) != 0 )
  {
    v26 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    if ( a2 )
    {
      v8 = 2;
      if ( v26 > a2 )
        a2 = v26;
    }
  }
  if ( (v5 & 2) != 0 && v8 == 1 )
    a2 = 1;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, v8, a2, v36);
  *a1 = 0LL;
  return v4;
}
