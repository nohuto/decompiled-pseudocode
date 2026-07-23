/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800B5714
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800B4B50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800B5788 (RtlpTpIoDllProcessUnloads.c)
 */

void __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  PRTL_SPLAY_LINKS i; // rcx
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *v4; // r8
  bool v5; // cf

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    for ( i = RtlpTpIoTree; i; i = *(_RTL_SPLAY_LINKS **)((char *)&i->LeftChild + (v5 ? 8 : 0)) )
    {
      v3 = i - 4;
      v4 = *(_RTL_SPLAY_LINKS **)(a1 + 24);
      v5 = i[-4].Parent < v4;
      if ( i[-4].Parent >= v4 )
      {
        if ( v3->Parent < (_RTL_SPLAY_LINKS *)((char *)v4 + *(unsigned int *)(a1 + 32)) )
        {
          RtlpTpIoDllProcessUnloads(a1);
          break;
        }
        v5 = v3->Parent < v4;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}
