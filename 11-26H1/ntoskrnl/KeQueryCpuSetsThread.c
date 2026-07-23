/*
 * XREFs of KeQueryCpuSetsThread @ 0x1405013E8
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, char *a2, int a3)
{
  bool v3; // zf
  char *v4; // rsi
  unsigned int v7; // ebp
  unsigned int v8; // edi
  signed __int64 v9; // rsi
  __int64 v10; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v3 = (*(_DWORD *)(a1 + 1440) & 0x20000) == 0;
  v4 = (char *)(a1 + 1680);
  LOBYTE(v12) = 0;
  v7 = 32;
  if ( v3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = (unsigned __int16)KiMaximumGroups;
    v4 = *(char **)v4;
    if ( (unsigned __int16)KiMaximumGroups > 0x20u )
      goto LABEL_5;
  }
  v7 = v8;
LABEL_5:
  KiAcquireThreadLockRaiseToDpc(a1, (unsigned __int8 *)&v12);
  if ( v7 )
  {
    v9 = v4 - a2;
    v10 = v7;
    do
    {
      *(_QWORD *)a2 = *(_QWORD *)&a2[v9];
      a2 += 8;
      --v10;
    }
    while ( v10 );
  }
  KiReleaseThreadLockLowerIrql(a1, v12);
  return v8;
}
