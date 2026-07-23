/*
 * XREFs of ExpCommitWakeFastResource @ 0x140273060
 * Callers:
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpCommitWakeFastResource(volatile signed __int32 **a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  int v10; // eax
  volatile signed __int32 *v11; // r12
  volatile signed __int32 *v12; // rbp
  signed __int8 v13; // cf
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 *v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rbp
  unsigned int v23; // r13d
  char v24; // dl
  bool v25; // zf
  int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-58h]
  unsigned __int8 v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF

  v33 = a3;
  v4 = *a1;
  result = 2 * (a4 & 1u) + 1;
  v7 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v7 = 2 * (a4 & 1) + 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v30 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v7 & 4;
    v32 = (__int64)CurrentPrcb;
    v11 = v4;
    while ( 1 )
    {
      v12 = v11;
      v11 = *(volatile signed __int32 **)v11;
      if ( v10 )
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
      v13 = _interlockedbittestandset(v12 + 6, 7u);
      v14 = v12 + 6;
      v33 = 0;
      if ( v13 )
      {
        do
        {
          do
            KeYieldProcessorEx(&v33);
          while ( (*(_DWORD *)v14 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
      }
      v15 = v12 + 8;
      *((_DWORD *)v12 + 7) = 1;
      v16 = *((_QWORD *)v12 + 4);
      while ( (_QWORD *)v16 != v15 )
      {
        v17 = *(_QWORD *)v16;
        v18 = v16;
        v19 = *(__int64 **)(v16 + 8);
        v29 = *(_QWORD *)v16;
        if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v19 != v16 )
          __fastfail(3u);
        *v19 = v17;
        *(_QWORD *)(v17 + 8) = v19;
        v20 = *(_BYTE *)(v16 + 16);
        switch ( v20 )
        {
          case 1:
            v21 = *(unsigned __int16 *)(v16 + 18);
            v22 = *(_QWORD *)(v16 + 24);
            LOBYTE(v16) = 0;
            LOBYTE(v33) = 0;
            v23 = 0;
            v31 = v21;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
            {
              do
              {
                if ( (++v23 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v16, a3) )
                {
                  HvlNotifyLongSpinWait(v23);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v22 + 64) );
            }
            CurrentIrql = v30;
            if ( *(_BYTE *)(v22 + 388) == 5 )
              v24 = KiSignalThread(v32, v22, v31, v18);
            else
              v24 = v33;
            *(_QWORD *)(v22 + 64) = 0LL;
            v15 = v14 + 1;
            ++*(_BYTE *)(v18 + 17);
            v25 = v24 == 0;
            CurrentPrcb = (struct _KPRCB *)v32;
            v16 = v29;
            if ( !v25 )
            {
              v26 = *((_DWORD *)v14 + 1) - 1;
              *((_DWORD *)v14 + 1) = v26;
              if ( !v26 )
                goto LABEL_22;
              v15 = v14 + 1;
            }
            break;
          case 2:
            *(_BYTE *)(v16 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v16 + 24), v16);
            CurrentPrcb = (struct _KPRCB *)v32;
            v28 = *((_DWORD *)v14 + 1) - 1;
            *((_DWORD *)v14 + 1) = v28;
            if ( !v28 )
              goto LABEL_22;
            v16 = v29;
            v15 = v14 + 1;
            break;
          case 4:
            *(_BYTE *)(v16 + 17) = 5;
            *((_DWORD *)v14 + 1) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v16 + 24), 0);
            v16 = v29;
            v15 = v14 + 1;
            CurrentPrcb = (struct _KPRCB *)v32;
            break;
          default:
            CurrentPrcb = (struct _KPRCB *)v32;
            KiTryUnwaitThread(v32, v16, 256LL, 0LL);
            v16 = v29;
            v15 = v14 + 1;
            break;
        }
      }
LABEL_22:
      _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
      if ( v11 == v4 )
        break;
      v10 = v7 & 4;
    }
    KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, (v7 >> 1) & 1, CurrentIrql);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}
