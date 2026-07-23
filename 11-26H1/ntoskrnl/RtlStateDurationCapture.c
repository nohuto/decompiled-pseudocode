/*
 * XREFs of RtlStateDurationCapture @ 0x14042E9B0
 * Callers:
 *     PoEnergyContextCleanup @ 0x1409CBD6C (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationCapture(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // r10d
  int v10; // edx

  v3 = *a2;
  *(_QWORD *)a1 = *a2;
  v5 = HIDWORD(v3);
  if ( (v5 & 0x80000000) == 0LL )
    return 0LL;
  v7 = v5 & 0x7FFFFFFF;
  *(_DWORD *)(a1 + 4) = v7;
  v8 = *(_DWORD *)a2;
  if ( a3 <= *(_DWORD *)a2 )
    return 0LL;
  *(_DWORD *)a1 = a3;
  v9 = a3 - v8;
  v10 = -1;
  if ( a3 - v8 != -1 && ~v9 >= v7 )
    v10 = v9 + v7;
  result = v9;
  *(_DWORD *)(a1 + 4) = v10 & 0x7FFFFFFF;
  return result;
}
