/*
 * XREFs of MiAllocateAccessLog @ 0x14048F0B8
 * Callers:
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  ULONG *v2; // rsi
  __int64 v3; // rdx
  ULONG_PTR v4; // rdi
  __int64 *v5; // rbp
  _QWORD **v6; // r12
  _QWORD **v7; // r15
  _QWORD **v8; // r14
  __int64 PoolMm; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *result; // rax
  _QWORD *v14; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v2 = &MiSystemPartition;
  else
    v2 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( !(unsigned int)MiSufficientAvailablePages((__int64)v2, 0x420uLL)
    || *((_QWORD *)v2 + 2816) < v3
    || (v4 = 4096LL, (unsigned __int64)(*(_QWORD *)&MiState - qword_140E2C708) < 0x800) )
  {
    v4 = 512LL;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v5 = (__int64 *)&unk_140E379A8;
    v6 = (_QWORD **)&unk_140E379A8;
    v7 = (_QWORD **)&unk_140E379A8;
  }
  else
  {
    v5 = (__int64 *)(a1 + 232);
    v6 = (_QWORD **)(a1 + 232);
    v7 = (_QWORD **)(a1 + 232);
  }
  v8 = (_QWORD **)*v7;
  if ( *v7 )
  {
    v14 = *v8;
    if ( v4 == 512 || v14 && *v14 )
    {
      MiEmptyPageAccessLog((__int64)v2, *v7);
      v8 = 0LL;
      *v7 = 0LL;
    }
  }
  while ( 1 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               v4,
               1665232205,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v10 = (_QWORD *)PoolMm;
    if ( PoolMm )
      break;
    if ( *v6 )
    {
      MiEmptyPageAccessLog((__int64)v2, *v6);
      v8 = 0LL;
      *v6 = 0LL;
    }
    v4 >>= 1;
    if ( v4 < 0x200 )
      return 0LL;
  }
  *v5 = PoolMm;
  *(_DWORD *)(PoolMm + 8) = 0;
  *(_QWORD *)(PoolMm + 32) = PoolMm + 64;
  v11 = (_QWORD *)(PoolMm + v4 - 8);
  *v11 = 0LL;
  v10[6] = v11;
  v10[5] = v11 - 1;
  *v10 = 0LL;
  v12 = a1 - 1024;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    v12 = 0LL;
  v10[7] = v12;
  v10[2] = MEMORY[0xFFFFF78000000320];
  result = v10;
  *v10 = v8;
  return result;
}
