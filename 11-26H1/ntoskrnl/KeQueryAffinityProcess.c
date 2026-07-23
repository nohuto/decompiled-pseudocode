/*
 * XREFs of KeQueryAffinityProcess @ 0x1404626E0
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, __int64 a2, _OWORD *a3, _OWORD *a4, _WORD *a5)
{
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned __int16 *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  _QWORD *v16; // r9
  __int64 v17; // r10
  char *v18; // r8
  __int64 v19; // rcx
  __int64 result; // rax
  _OWORD *v21; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(a1 + 64));
    v10 = *(_DWORD *)(a1 + 64) & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v10 + 1, v10);
      if ( v11 == v10 )
        break;
      if ( v10 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(a1 + 64), a2, (__int64)a3);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(a1 + 64), 0xFFu);
  }
  v12 = *(unsigned __int16 **)(a1 + 80);
  v13 = *(_WORD *)(v7 + 2);
  v14 = *v12;
  *(_WORD *)(v7 + 2) = v13;
  if ( v14 <= v13 )
    v13 = v14;
  *(_WORD *)v7 = v13;
  v15 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  if ( v13 )
  {
    v16 = (_QWORD *)(v7 + 8);
    v17 = v13;
    v18 = (char *)v12 - v7;
    v15 = v13;
    do
    {
      *v16 = *(_QWORD *)((char *)v16 + (_QWORD)v18);
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  for ( ; v15 < *(_WORD *)(v7 + 2); *(_QWORD *)(v7 + 8 * v19 + 8) = 0LL )
    v19 = v15++;
  if ( a3 )
    *a3 = *(_OWORD *)(a1 + 152);
  if ( a4 )
  {
    v21 = *(_OWORD **)(a1 + 184);
    *a4 = v21[9];
    a4[1] = v21[10];
    a4[2] = v21[11];
    a4[3] = v21[12];
  }
  if ( a5 )
    *a5 = *(_WORD *)(a1 + 416);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 64), retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
