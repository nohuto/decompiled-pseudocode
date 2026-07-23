/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140ABA274
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     PspLockQuotaListShared @ 0x1404C8964 (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListShared @ 0x1404CF97C (PspUnlockQuotaListShared.c)
 *     PspLockQuotaListExclusive @ 0x1404FE6B4 (PspLockQuotaListExclusive.c)
 *     PspUnlockQuotaListExclusive @ 0x140502E10 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140ABA614 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x140ABA778 (PspSafeReferenceQuotaBlock.c)
 */

unsigned __int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 NpxState; // rbx
  unsigned __int64 *v9; // rdi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int64 *i; // rsi
  unsigned __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 **v18; // rdx

  CurrentThread = KeGetCurrentThread();
  NpxState = 0LL;
  v9 = (unsigned __int64 *)PspSiloMonitorLock.WaitListEntry.Blink + 3 * (unsigned int)PspHashKeyValue();
  if ( a4 )
    PspLockQuotaListExclusive((__int64)CurrentThread, v9, v10, v11);
  else
    PspLockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v9, v10, v11);
  if ( a1 )
  {
    for ( i = (unsigned __int64 *)v9[1]; ; i = (unsigned __int64 *)*i )
    {
      if ( i == v9 + 1 )
        goto LABEL_6;
      if ( RtlEqualSid(a1, i + 7) )
        break;
    }
    NpxState = (unsigned __int64)(i - 65);
  }
  else
  {
    if ( !a3 )
      goto LABEL_6;
    NpxState = PspSiloMonitorLock.NpxState;
  }
  if ( NpxState )
  {
    if ( (unsigned int)PspSafeReferenceQuotaBlock(NpxState) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(NpxState + 516));
    }
    else
    {
      if ( a4 && !a3 )
      {
        v15 = (_QWORD *)(NpxState + 520);
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_30;
        v17 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v17 != v15 )
          goto LABEL_30;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
      }
      NpxState = 0LL;
    }
  }
LABEL_6:
  if ( a4 )
  {
    if ( NpxState )
    {
LABEL_29:
      PspUnlockQuotaListExclusive((__int64)CurrentThread, (volatile signed __int64 *)v9);
      return NpxState;
    }
    v14 = (unsigned __int64 *)(a4 + 520);
    if ( a3 )
    {
      PspSiloMonitorLock.NpxState = a4;
      *v14 = 1LL;
      goto LABEL_29;
    }
    v18 = (unsigned __int64 **)v9[2];
    if ( *v18 == v9 + 1 )
    {
      *v14 = (unsigned __int64)(v9 + 1);
      *(_QWORD *)(a4 + 528) = v18;
      *v18 = v14;
      v9[2] = (unsigned __int64)v14;
      goto LABEL_29;
    }
LABEL_30:
    __fastfail(3u);
  }
  PspUnlockQuotaListShared((__int64)CurrentThread, (signed __int64 *)v9);
  return NpxState;
}
