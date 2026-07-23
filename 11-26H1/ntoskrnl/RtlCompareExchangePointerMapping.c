/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x14061D2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061D980 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061DA3C (RtlpReleasePropStoreLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(
        _RTL_BALANCED_NODE *a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE **a3,
        _RTL_BALANCED_NODE **a4)
{
  _RTL_BALANCED_NODE *Pool2; // rbx
  char v9; // al
  __int64 v10; // r8
  unsigned __int64 Root; // rdx
  char v12; // r15
  _RTL_BALANCED_NODE *v13; // rax
  unsigned int v14; // edi
  unsigned __int64 v15; // rax
  _RTL_BALANCED_NODE *v16; // rax

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(0x40uLL);
  else
    Pool2 = 0LL;
  v9 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  v12 = v9;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 )
  {
    if ( !RtlpPtrTree.Root )
    {
      LOBYTE(v10) = 0;
      goto LABEL_11;
    }
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  }
  LOBYTE(v10) = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (__int64)a1 - *(_QWORD *)(Root + 24) >= 0 )
      {
        if ( (__int64)a1 - *(_QWORD *)(Root + 24) <= 0 )
        {
          v16 = *(_RTL_BALANCED_NODE **)(Root + 32);
          if ( !a3 || v16 == *a3 )
            *(_QWORD *)(Root + 32) = a2;
          v14 = 0x40000000;
LABEL_27:
          if ( a4 )
            *a4 = v16;
          goto LABEL_29;
        }
        v15 = *(_QWORD *)(Root + 8);
        if ( !v15 || (v13 = (_RTL_BALANCED_NODE *)(Root ^ v15)) == 0LL )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)Root )
          break;
        v13 = (_RTL_BALANCED_NODE *)(Root ^ *(_QWORD *)Root);
        if ( !v13 )
          break;
      }
      Root = (unsigned __int64)v13;
    }
  }
LABEL_11:
  if ( Pool2 )
  {
    Pool2[1].Children[0] = a1;
    Pool2[1].Children[1] = a2;
    RtlRbInsertNodeEx(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root, v10, Pool2);
    if ( a3 )
      v16 = *a3;
    else
      v16 = 0LL;
    Pool2 = 0LL;
    v14 = 0;
    goto LABEL_27;
  }
  v14 = -1073741670;
LABEL_29:
  LOBYTE(Root) = v12;
  RtlpReleasePropStoreLockExclusive(&RtlpBootStatHandleLock.Header.WaitListHead, Root, v10);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v14;
}
