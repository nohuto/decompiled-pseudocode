/*
 * XREFs of MiCommitVadMetadataBits @ 0x140997DF4
 * Callers:
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemoryFinishVad @ 0x140A01EA0 (MiReserveUserMemoryFinishVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 * Callees:
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetControlAreaImageStartBit @ 0x1404C7CD0 (MiGetControlAreaImageStartBit.c)
 *     MiCommitVadCfgBits @ 0x140998F08 (MiCommitVadCfgBits.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall MiCommitVadMetadataBits(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // r8
  unsigned int v6; // ebp
  _KPROCESS *Process; // r10
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int16 v12; // r13
  bool v13; // zf
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+90h] [rbp+8h]
  __int64 v18; // [rsp+A8h] [rbp+20h]

  v5 = 0LL;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  LODWORD(v8) = *(_DWORD *)(a1 + 24) << 12;
  LODWORD(v9) = (*(_DWORD *)(a1 + 28) << 12) | 0xFFF;
  v17 = (int)Process;
  if ( a2 )
  {
    v14 = 3;
    v8 = *a2;
    v9 = a2[1] | 0xFFF;
    goto LABEL_12;
  }
  if ( (MiReadVadFlags(a1) & 0x80000) != 0 || (v10 = **(_QWORD **)(a1 + 80), (*(_DWORD *)(v10 + 56) & 0x20) == 0) )
  {
    v14 = 3;
    goto LABEL_12;
  }
  v16 = *(_QWORD *)v10;
  v11 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(v10 + 136)) >> 3;
  v18 = *(_QWORD *)(*(_QWORD *)v10 + 56LL);
  v12 = *(_WORD *)(v18 + 48);
  if ( v12 == (unsigned __int16)PsWow64GetProcessMachine(Process) || v12 == -31132 )
  {
    if ( (*(_BYTE *)(v18 + 51) & 4) != 0 )
    {
      if ( (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) - v11 != *(_QWORD *)(v16 + 32) >> 12
        || (*(_DWORD *)(v10 + 56) & 0x8000) != 0 && (*(_DWORD *)(v10 + 56) & 0x20) != 0
        || (v13 = MiGetControlAreaImageStartBit(v10) == 0xFFFFFFFFLL, v14 = 1, v13) )
      {
        v14 = 2;
      }
      v5 = v10;
      goto LABEL_11;
    }
  }
  else
  {
    a3 |= 2u;
  }
  v14 = 3;
  v5 = 0LL;
LABEL_11:
  LODWORD(Process) = v17;
LABEL_12:
  if ( (a3 & 1) == 0 )
    return v6;
  result = MiCommitVadCfgBits((_DWORD)Process, a1, v8, (int)v9 + 1, v5, v14, a3);
  v6 = result;
  if ( (int)result >= 0 )
    return v6;
  return result;
}
