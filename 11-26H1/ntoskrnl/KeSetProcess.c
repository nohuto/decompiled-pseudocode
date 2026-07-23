/*
 * XREFs of KeSetProcess @ 0x1404CA8CC
 * Callers:
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v6; // r8
  unsigned int v7; // r15d
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // r8

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3, a2, a3);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = (_QWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 4) = 1;
  v9 = *(_QWORD **)(v3 + 8);
  while ( v9 != v8 )
  {
    v10 = (__int64)v9;
    v9 = (_QWORD *)*v9;
    v11 = *(_BYTE *)(v10 + 16);
    switch ( v11 )
    {
      case 1:
        v12 = *(unsigned __int16 *)(v10 + 18);
        goto LABEL_9;
      case 2:
        *(_BYTE *)(v10 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v10 + 24), (_QWORD *)v10, v6);
        break;
      case 4:
        *(_BYTE *)(v10 + 17) = 5;
        *(_DWORD *)(v3 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v10 + 24), v3, v10, 0LL, 0);
        break;
      default:
        v12 = 256LL;
LABEL_9:
        KiTryUnwaitThread((__int64)CurrentPrcb, v10, v12, 0LL);
        break;
    }
  }
  *(_QWORD *)(v3 + 16) = v3 + 8;
  *v8 = v8;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v7;
}
