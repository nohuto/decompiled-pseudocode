/*
 * XREFs of RtlCompareExchangePointerMapping @ 0x14061A280
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlpAcquirePropStoreLockExclusive @ 0x14061A930 (RtlpAcquirePropStoreLockExclusive.c)
 *     RtlpReleasePropStoreLockExclusive @ 0x14061A9EC (RtlpReleasePropStoreLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCompareExchangePointerMapping(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *Pool2; // rbx
  char v9; // al
  _BOOL8 v10; // r8
  unsigned __int64 v11; // rdx
  char v12; // r15
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax

  if ( KeGetCurrentIrql() <= 2u )
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  else
    Pool2 = 0LL;
  v9 = RtlpAcquirePropStoreLockExclusive((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.Header.WaitListHead);
  v11 = (unsigned __int64)RtlpPtrTree;
  v12 = v9;
  if ( (qword_140E0C638 & 1) != 0 )
  {
    if ( !RtlpPtrTree )
    {
      LOBYTE(v10) = 0;
      goto LABEL_11;
    }
    v11 = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree;
  }
  LOBYTE(v10) = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( a1 - *(_QWORD *)(v11 + 24) >= 0 )
      {
        if ( a1 - *(_QWORD *)(v11 + 24) <= 0 )
        {
          v16 = *(_QWORD *)(v11 + 32);
          if ( !a3 || v16 == *a3 )
            *(_QWORD *)(v11 + 32) = a2;
          v14 = 0x40000000;
LABEL_27:
          if ( a4 )
            *a4 = v16;
          goto LABEL_29;
        }
        v15 = *(_QWORD *)(v11 + 8);
        if ( !v15 || (v13 = v11 ^ v15) == 0 )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
      else
      {
        if ( !*(_QWORD *)v11 )
          break;
        v13 = v11 ^ *(_QWORD *)v11;
        if ( !v13 )
          break;
      }
      v11 = v13;
    }
  }
LABEL_11:
  if ( Pool2 )
  {
    Pool2[3] = a1;
    Pool2[4] = a2;
    RtlRbInsertNodeEx((unsigned __int64)&RtlpPtrTree, v11, v10, (unsigned __int64)Pool2);
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
  LOBYTE(v11) = v12;
  RtlpReleasePropStoreLockExclusive(&RtlpBootStatHandleLock.Header.WaitListHead, v11, v10);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v14;
}
