/*
 * XREFs of IopSetLockOperationProcess @ 0x140457F80
 * Callers:
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r14
  char v4; // r12
  __int64 v6; // rsi
  __int64 *v8; // rbp
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbp
  unsigned __int8 CurrentIrql; // r13
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rbx
  _QWORD *i; // rax
  unsigned int v18; // ebx
  __int64 *Pool2; // rax
  __int64 *v21; // r13
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = 0;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
  {
    v8 = *(__int64 **)(a1 + 208);
    if ( v8 )
    {
      if ( v8 == qword_140019060 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
      v18 = -1073741670;
      v21 = Pool2;
      v8 = Pool2;
      if ( Pool2 )
        v18 = 0;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
      {
        if ( Pool2 && Pool2 != qword_140019060 )
          ExFreePoolWithTag(Pool2, 0);
        v8 = *(__int64 **)(a1 + 208);
      }
      if ( !v21 )
        return v18;
    }
    v9 = (_QWORD *)v8[2];
    if ( v9 )
    {
LABEL_10:
      v3 = (_QWORD *)ExAllocatePool2(0x40uLL);
      goto LABEL_11;
    }
    v10 = (_QWORD *)ExAllocatePool2(0x40uLL);
    v9 = v10;
    if ( v10 )
    {
      if ( _InterlockedCompareExchange64(v8 + 2, (signed __int64)v10, 0LL) )
      {
        ExFreePoolWithTag(v10, 0);
        v11 = *(_QWORD *)(a1 + 208);
        if ( v11 )
          v9 = *(_QWORD **)(v11 + 16);
        else
          v9 = 0LL;
      }
      goto LABEL_10;
    }
    return (unsigned int)-1073741670;
  }
  v16 = *(_QWORD *)(a1 + 208);
  if ( !v16 )
    return 3221225473LL;
  v9 = *(_QWORD **)(v16 + 16);
  if ( !v9 )
    return 3221225473LL;
LABEL_11:
  v12 = (volatile signed __int32 *)(a1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(v12, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 184));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 184));
  }
  v14 = v9[2];
  v15 = *(_BYTE *)(a1 + 72);
  if ( v14 )
  {
    for ( i = (_QWORD *)v9[2]; i; i = (_QWORD *)*i )
    {
      if ( i[1] == v6 )
      {
        v4 = 1;
        goto LABEL_31;
      }
    }
  }
  if ( !a3 )
  {
    if ( !v3 )
    {
      v18 = -1073741670;
      goto LABEL_32;
    }
    *v3 = v14;
    v9[2] = v3;
    v3[1] = v6;
  }
LABEL_31:
  v18 = 0;
LABEL_32:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v12, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 && v3 )
    ExFreePoolWithTag(v3, 0);
  if ( !a3 )
    return v18;
  if ( !v15 || !v4 )
    return 3221225473LL;
  return 0LL;
}
