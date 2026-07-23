/*
 * XREFs of VmpFlushTbVaRange @ 0x140253DEC
 * Callers:
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInsertInvalidateListRange @ 0x140253938 (VmpInsertInvalidateListRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405249A8 (VmpInvalidateOutstandingFaults.c)
 */

struct _KPRCB *__fastcall VmpFlushTbVaRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 *v7; // r12
  __int64 v8; // r8
  __int64 v10; // rbx
  struct _KPRCB *result; // rax
  __int64 *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // r15
  struct _KPRCB *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h]
  unsigned int v22; // [rsp+98h] [rbp+10h] BYREF

  v7 = a7;
  v8 = a3 - a2;
  v20 = a2;
  v19 = 0LL;
  v22 = 0;
  v10 = *a7;
  result = (struct _KPRCB *)(v8 + 1);
  v21 = v8 + 1;
  if ( v8 != -1 )
  {
    v13 = a6;
    v14 = a5;
    do
    {
      result = (struct _KPRCB *)VmpConvertPortionVpnRangeToGpnRange(SpinLock, &v20, 0x40000LL - *v14, a4, &v19, &v22, 1);
      v15 = *((_QWORD *)&v19 + 1);
      v16 = result;
      if ( !*((_QWORD *)&v19 + 1) )
        break;
      VmpInsertInvalidateListRange(
        (__int64)SpinLock,
        (unsigned int *)v10,
        v19,
        (int)result,
        *((unsigned __int64 *)&v19 + 1),
        v22);
      result = (struct _KPRCB *)VmpInvalidateOutstandingFaults(SpinLock, v16, v15);
      *v14 += v15;
      if ( *v14 >= 0x40000uLL )
      {
        if ( *(_QWORD *)(v10 + 8) )
          VmpProcessInvalidateList(SpinLock, v10);
        v17 = *v13;
        *(_DWORD *)(v10 + 4) = 0;
        v18 = *((_QWORD *)SpinLock + 11);
        if ( v17 == -2 )
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        else
          ExReleaseSpinLockExclusive(SpinLock, v17);
        *v14 = 0LL;
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        *v13 = -2LL;
        if ( v18 != *((_QWORD *)SpinLock + 11) )
        {
          *(_OWORD *)a4 = 0LL;
          a4[2] = 0LL;
        }
        result = KeGetCurrentPrcb();
        v10 = (__int64)result->VmInternal + 4608;
        *((_DWORD *)result->VmInternal + 1153) |= 0x100u;
      }
    }
    while ( v21 );
  }
  *v7 = v10;
  return result;
}
