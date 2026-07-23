/*
 * XREFs of DbgEnumerateCallback @ 0x14061AF50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall DbgEnumerateCallback(_SINGLE_LIST_ENTRY **a1)
{
  _SINGLE_LIST_ENTRY *v2; // rdi
  _SINGLE_LIST_ENTRY *p_SystemAffinityTokenListHead; // rax
  unsigned __int64 v4; // rsi
  struct _KTHREAD *i; // rbx

  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  v2 = *a1;
  p_SystemAffinityTokenListHead = &SshpBlockerCollections.SystemAffinityTokenListHead;
  if ( *a1 )
    p_SystemAffinityTokenListHead = *a1;
  v4 = 0LL;
  for ( i = (struct _KTHREAD *)p_SystemAffinityTokenListHead->Next;
        i != (struct _KTHREAD *)&SshpBlockerCollections.SystemAffinityTokenListHead;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&i[-1].Padding[3]) )
    {
      v4 = i[-1].Padding[4];
      *a1 = (_SINGLE_LIST_ENTRY *)i;
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  if ( v2 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v2[-2]);
  return v4;
}
