/*
 * XREFs of KeAlertThreadByThreadIdEx @ 0x140383010
 * Callers:
 *     KeAlertThreadByThreadId @ 0x1404F297C (KeAlertThreadByThreadId.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x140382CD0 (KiRemovePrcbWaitEntry.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAlertThreadByThreadIdEx(__int64 a1, struct _KTHREAD *a2, void *a3, unsigned int a4)
{
  struct _KTHREAD *v4; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // edi
  unsigned __int8 v9; // di
  char v10; // cl
  int v11; // ecx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rax
  AutoBoost *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
  {
    v9 = 0;
    goto LABEL_25;
  }
  v9 = 1;
  if ( *(_BYTE *)(a1 + 388) != 5 )
    goto LABEL_37;
  v10 = *(_BYTE *)(a1 + 112);
  if ( (v10 & 7) == 4 || (v10 & 7) == 3 || *(_BYTE *)(a1 + 643) != 37 )
    goto LABEL_37;
  v11 = v10 & 7;
  if ( v11 != 1 && v11 != 4 )
  {
    *(_BYTE *)(a1 + 112) |= 0x80u;
LABEL_37:
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 4u);
    goto LABEL_25;
  }
  v12 = *(_QWORD *)(a1 + 232);
  if ( v12 )
  {
    if ( (*(_BYTE *)v12 & 0x7F) == 0x15 )
    {
      *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540);
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 4LL * *(unsigned int *)(a1 + 540) + 536));
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
    }
  }
  KiRemovePrcbWaitEntry((_QWORD *)a1);
  v13 = *(_BYTE *)(a1 + 388);
  if ( v13 == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  else if ( v13 == 5 )
  {
    v14 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
      *(_QWORD *)(a1 + 1000) += v14;
    else
      *(_QWORD *)(a1 + 992) += v14;
  }
  *(_BYTE *)(a1 + 388) = 7;
  *(_QWORD *)(a1 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
  CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(a1 + 216);
  *(_QWORD *)(a1 + 200) = 257LL;
  *(_QWORD *)(a1 + 976) = 0LL;
  *(_BYTE *)(a1 + 112) |= 0x80u;
LABEL_25:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v4 )
  {
    Next = CurrentPrcb->DeferredReadyListHead.Next;
    if ( Next )
    {
      v17 = (AutoBoost *)&Next[-27];
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPreWakeupByThread(v17, v4, (void *)1, a4);
      else
        LegacyAutoBoost::KiAbPreWakeupThread(v17, v4, a3, 1, v18);
    }
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v9;
}
