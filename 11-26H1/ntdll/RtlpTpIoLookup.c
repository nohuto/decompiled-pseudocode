/*
 * XREFs of RtlpTpIoLookup @ 0x1800B4A00
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x1800B4830 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x180085924 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x1800B5480 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x1800B585C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(_RTL_SPLAY_LINKS **a1, _RTL_SPLAY_LINKS *a2, _PEB_LDR_DATA *a3)
{
  PRTL_SPLAY_LINKS v6; // rbx
  _RTL_SPLAY_LINKS *v7; // rdi
  NTSTATUS v8; // esi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( !RtlpTpIoTree )
  {
    v8 = RtlpTpIoAlloc(&v12, a2, a3);
    v7 = v12;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v7 = v6 - 4;
    v12 = v6 - 4;
    if ( v6[-4].Parent == a2 )
    {
      v8 = TpBindFileToDirect(a3, (__int64)&v7->LeftChild, (__int64)v6[-1].LeftChild);
      if ( v8 >= 0 )
        ++LODWORD(v6[-1].RightChild);
      goto LABEL_16;
    }
    if ( v6[-4].Parent <= a2 )
      break;
    LeftChild = v6->LeftChild;
    if ( !LeftChild )
    {
      v8 = RtlpTpIoAlloc(&v12, a2, a3);
      v7 = v12;
      if ( !v12 )
        goto LABEL_16;
      p_Parent = &v12[4].Parent;
      v6->LeftChild = v12 + 4;
      goto LABEL_10;
    }
LABEL_15:
    v6 = LeftChild;
  }
  LeftChild = v6->RightChild;
  if ( LeftChild )
    goto LABEL_15;
  v8 = RtlpTpIoAlloc(&v12, a2, a3);
  v7 = v12;
  if ( v12 )
  {
    p_Parent = &v12[4].Parent;
    v6->RightChild = v12 + 4;
LABEL_10:
    *p_Parent = v6;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != &v7[4] )
    RtlpTpIoTree = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v8;
}
