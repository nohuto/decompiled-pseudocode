/*
 * XREFs of RtlpTpIoDllLoaded @ 0x1800B4B68
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800B4B50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     TpDereferenceGlobalPool @ 0x180087770 (TpDereferenceGlobalPool.c)
 *     RtlDelete @ 0x1800B4E60 (RtlDelete.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  _RTL_SPLAY_LINKS *Parent; // rdi
  PRTL_SPLAY_LINKS v3; // rcx
  _QWORD *p_Parent; // rsi
  _RTL_SPLAY_LINKS *v5; // r14
  _RTL_SPLAY_LINKS *v6; // rdx
  __int64 v7; // rdx
  _RTL_SPLAY_LINKS *v8; // rbx

  Parent = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    v6 = *(_RTL_SPLAY_LINKS **)(a1 + 24);
    if ( v3[-4].Parent < v6 )
      goto LABEL_4;
    if ( v5->Parent >= (_RTL_SPLAY_LINKS *)((char *)v6 + *(unsigned int *)(a1 + 32)) )
    {
      if ( v5->Parent < v6 )
LABEL_4:
        v3 = v3->RightChild;
      else
        v3 = v3->LeftChild;
    }
    else
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      *p_Parent = Parent;
      Parent = v5;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( Parent )
  {
    v8 = Parent;
    Parent = Parent[4].Parent;
    TpDereferenceGlobalPool((__int64)v8[3].LeftChild, v7);
    RtlFreeAnsiString((PUNICODE_STRING)&v8[5].LeftChild);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
}
