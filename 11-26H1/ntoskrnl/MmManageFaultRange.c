/*
 * XREFs of MmManageFaultRange @ 0x140704668
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x14063DA58 (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // r14
  unsigned int v4; // edi
  unsigned int v8; // edx
  ULONG *v9; // rsi
  __int64 result; // rax
  int v11; // ebx
  KIRQL v12; // r15
  _QWORD *v13; // rdx
  bool v14; // r8
  _QWORD *v15; // rax
  ULONG *v16; // rbx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h]
  ULONG_PTR v19; // [rsp+50h] [rbp-28h]

  v3 = BugCheckParameter4 + BugCheckParameter3 - 1;
  v17 = 0LL;
  v4 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = &MiState + 8 * v8 + 2 * v8 + 16;
      if ( !*((_QWORD *)v9 + 3)
        && !_InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, BugCheckParameter3, 0LL) )
      {
        break;
      }
      if ( ++v8 >= 2 )
        goto LABEL_8;
    }
    *((_QWORD *)v9 + 4) = v3;
LABEL_8:
    if ( v8 == 2 )
    {
      result = ExAllocatePoolMm(
                 64LL,
                 0x28uLL,
                 1983998285,
                 KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      v9 = (ULONG *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v3;
    }
    v11 = a3 & 1;
  }
  else
  {
    *((_QWORD *)&v18 + 1) = BugCheckParameter3;
    v9 = (ULONG *)&v17;
    v19 = BugCheckParameter4 + BugCheckParameter3 - 1;
    v11 = 0;
  }
  v12 = ExAcquireSpinLockExclusive(&dword_140E2C730);
  if ( !v11 )
  {
    v16 = (ULONG *)qword_140E2C738[0];
    if ( qword_140E2C738[0] )
    {
      do
      {
        if ( *((_QWORD *)v9 + 3) <= *((_QWORD *)v16 + 4) )
        {
          if ( *((_QWORD *)v9 + 4) >= *((_QWORD *)v16 + 3) )
            break;
          v16 = *(ULONG **)v16;
        }
        else
        {
          v16 = (ULONG *)*((_QWORD *)v16 + 1);
        }
      }
      while ( v16 );
    }
    if ( *((_QWORD *)v16 + 3) != BugCheckParameter3 || *((_QWORD *)v16 + 4) != v3 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v16, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(qword_140E2C738, (__int64)v16);
    goto LABEL_32;
  }
  v13 = (_QWORD *)qword_140E2C738[0];
  v14 = 0;
  if ( !qword_140E2C738[0] )
    goto LABEL_22;
  while ( *((_QWORD *)v9 + 3) <= v13[4] && *((_QWORD *)v9 + 4) < v13[3] )
  {
    v15 = (_QWORD *)*v13;
    if ( !*v13 )
      goto LABEL_22;
LABEL_20:
    v13 = v15;
  }
  v15 = (_QWORD *)v13[1];
  if ( v15 )
    goto LABEL_20;
  v14 = 1;
LABEL_22:
  RtlAvlInsertNodeEx(qword_140E2C738, (unsigned __int64)v13, v14, v9);
  v16 = 0LL;
LABEL_32:
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2C730);
  else
    ExReleaseSpinLockExclusive(&dword_140E2C730, v12);
  if ( v16 )
  {
    while ( v16 != &MiState + 8 * v4 + 2 * v4 + 16 )
    {
      if ( ++v4 >= 2 )
      {
        ExFreePoolWithTag(v16, 0);
        return 1LL;
      }
    }
  }
  return 1LL;
}
