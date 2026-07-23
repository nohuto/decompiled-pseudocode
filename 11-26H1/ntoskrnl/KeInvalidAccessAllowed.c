/*
 * XREFs of KeInvalidAccessAllowed @ 0x1403A8A70
 * Callers:
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiCheckSystemPageTables @ 0x1403A8568 (MiCheckSystemPageTables.c)
 *     MiAllowGuardFault @ 0x1403A8A00 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 * Callees:
 *     KiRspInIstStack @ 0x1403A8BB8 (KiRspInIstStack.c)
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  __int16 v4; // cx
  char result; // al
  void *v6; // rdx
  void **v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  result = 0;
  if ( v4 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0 )
      goto LABEL_16;
    v8 = *(_QWORD *)(a1 + 384);
    v9 = (unsigned int)KeIstStackSize;
    v10 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( KiKvaShadow )
      v9 = 464LL;
    if ( v8 > v10 || v8 < v10 - v9 )
    {
      if ( !KiKvaShadow || (v12 = *(_QWORD *)(v10 + 8), v8 > v12) || v8 < v12 - (unsigned int)(KeIstStackSize - 32) )
      {
        if ( !(unsigned int)KiRspInIstStack(2LL, v8) )
        {
LABEL_16:
          v6 = &ExpInterlockedPopEntrySListFault;
          if ( KiDynamicTraceEnabled
            && (v11 = *(_QWORD *)(a1 + 360), v11 < stru_140FC11F0.WriteTransferCount)
            && v11 >= stru_140FC11F0.ReadTransferCount
            && KeGetCurrentIrql() == 15 )
          {
            result = 1;
            v7 = (void **)(a1 + 360);
          }
          else
          {
            result = 0;
            v7 = (void **)(a1 + 360);
          }
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  if ( v4 != 51 )
    return 0;
  v6 = *(void **)&stru_140FC11F0.SchedulerAssistPriorityFloor;
  v7 = (void **)(a1 + 360);
LABEL_5:
  if ( (a2 & 1) == 0 && *v7 == v6 )
    return 1;
  return result;
}
