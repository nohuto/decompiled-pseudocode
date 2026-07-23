/*
 * XREFs of MiDeleteVadLargePageEvent @ 0x140B40A90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiDeleteVadLargePageEvent(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 )
  {
    if ( !v5 )
      return;
LABEL_7:
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x746C6644u);
    *(_QWORD *)(a1 + 56) = 0LL;
    return;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 48);
  _InterlockedAdd64((volatile signed __int64 *)(v8 + 1392), -v6);
  if ( v5 )
    goto LABEL_7;
  if ( ((__int64)CurrentThread[1].Queue & 3) != 0 )
  {
    MiReturnFullProcessCommitment(v8, v6);
  }
  else
  {
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v8, a3, a4);
    MiReturnFullProcessCommitment(v8, v6);
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v8);
  }
}
