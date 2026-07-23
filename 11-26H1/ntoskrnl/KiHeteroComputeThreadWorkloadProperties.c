/*
 * XREFs of KiHeteroComputeThreadWorkloadProperties @ 0x14041D220
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiHeteroComputeThreadWorkloadProperties(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  unsigned int v4; // r8d
  BOOL v5; // r9d
  int v6; // r8d
  __int16 v7; // cx
  unsigned __int8 v8; // al
  __int64 result; // rax
  int v10; // [rsp+8h] [rbp+8h]
  __int16 v11; // [rsp+Ch] [rbp+Ch]
  char v12; // [rsp+Eh] [rbp+Eh]

  v10 = 33752069;
  v11 = 6;
  v12 = 1;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  v3 = *(unsigned __int8 *)(a1 + 516);
  v4 = *(_DWORD *)(a1 + 80);
  if ( v4 <= *(_DWORD *)(a1 + 84) )
    v4 = *(_DWORD *)(a1 + 84);
  v5 = v4 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  v6 = KiDynamicHeteroCpuPolicy[2 * v3 + (v4 >= KiDynamicHeteroCpuPolicyExpectedCycles)];
  v7 = *((unsigned __int8 *)&v10 + v3);
  *(_BYTE *)a2 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 517);
  if ( (KiHeteroSchedulerOptionsMask & 8) != 0 && (KiHeteroSchedulerOptions & 8) != 0 )
    v8 = *(_BYTE *)(a1 + 195);
  else
    v8 = 0;
  *(_WORD *)(a2 + 18) = v8 | (unsigned __int16)(v7 << 8);
  result = (*(_DWORD *)(a1 + 120) >> 1) & 1;
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
