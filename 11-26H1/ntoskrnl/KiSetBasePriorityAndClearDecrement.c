/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x140309580
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, char *a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // cl
  char v6; // dl
  struct _SINGLE_LIST_ENTRY *v7; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rcx
  __int64 result; // rax
  struct _KPRCB *v10; // rdx
  _QWORD *p_Next; // rcx

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *a2;
    v6 = *(_BYTE *)(a1 + 563);
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      if ( v5 < v6 )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v7 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
          if ( *(_QWORD *)(a1 + 816) == 1LL )
          {
            p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-37296LL )
            {
              v7->Next = p_AbSelfIoBoostsList->Next;
              p_AbSelfIoBoostsList->Next = v7;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
              if ( !CurrentPrcb->AbDpc.DeferredContext )
              {
                KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->AbDpc, (__int64)CurrentPrcb, 0LL, 0LL, 0);
                CurrentPrcb->AbDpc.DeferredContext = (PVOID)1;
              }
            }
          }
        }
      }
    }
    else if ( v5 < v6 )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v10 = (struct _KPRCB *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_Next = &CurrentPrcb->AbSelfIoBoostsList.Next;
          if ( CurrentPrcb != (struct _KPRCB *)-37296LL )
          {
            *(_QWORD *)&v10->MxCsr = *p_Next;
            *p_Next = v10;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
            AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v10);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = *a2;
  }
  result = 61455LL;
  *(_BYTE *)(a1 + 870) = 0;
  *(_WORD *)(a1 + 518) &= 0xF00Fu;
  return result;
}
