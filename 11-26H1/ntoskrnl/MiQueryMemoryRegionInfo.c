/*
 * XREFs of MiQueryMemoryRegionInfo @ 0x140923AB0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetAweVadPartition @ 0x1403C5FF4 (MiGetAweVadPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetVadPageSize @ 0x1404479B0 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MiGetAweVadPageSize @ 0x140B4CA44 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiQueryMemoryRegionInfo(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int VadFlags; // eax
  int v4; // r9d
  unsigned __int64 v5; // rbp
  int v6; // r13d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 VadPageSize; // r15
  __int64 ProcessPartition; // rax
  int v12; // r8d
  __int64 **v13; // r10
  unsigned __int16 **v14; // r11
  unsigned __int16 *AweVadPartition; // r14
  __int64 *v16; // rax
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // edx
  unsigned __int64 LockedVadEvent; // rax
  int v26; // edx
  unsigned __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v30; // [rsp+30h] [rbp-48h]
  __int128 v31; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+48h] [rbp-30h]
  int v33; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 136);
  VadFlags = MiReadVadFlags(v1);
  v4 = *(_DWORD *)a1;
  v5 = (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32)) << 12;
  v33 = MmProtectToValue[(VadFlags >> 5) & 0x1F];
  if ( (VadFlags & 0x80000) != 0 )
  {
    v6 = 0x20000;
    goto LABEL_3;
  }
  if ( (VadFlags & 0x1C) == 8 )
  {
    v6 = 0x1000000;
    goto LABEL_3;
  }
  v6 = 0x40000;
  if ( v4 == 3 )
  {
    if ( *(_QWORD *)(a1 + 16) < 0x30uLL )
      goto LABEL_3;
  }
  else if ( v4 != 7 )
  {
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(**(_QWORD **)(v1 + 80) + 64LL) )
    v6 = 0x8000000;
LABEL_3:
  v7 = ((*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32))
      - (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32))
      + 1) << 12;
  if ( (*(unsigned int *)(v1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 34) << 32)) >= 0x7FFFFFFFDLL )
    v8 = 0LL;
  else
    v8 = *(unsigned int *)(v1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 34) << 32);
  v9 = MiReadVadFlags(v1);
  VadPageSize = MiGetVadPageSize(v9);
  ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 80));
  v14 = 0LL;
  AweVadPartition = (unsigned __int16 *)ProcessPartition;
  if ( (v12 & 0x80000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      AweVadPartition = (unsigned __int16 *)MiGetAweVadPartition(v1);
      VadPageSize = MiGetAweVadPageSize(v1);
    }
    else if ( (v12 & 0x200000) != 0 || (v12 & 0x60000u) >= 0x40000 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(v1, 0x10u);
      if ( LockedVadEvent )
      {
        v14 = *(unsigned __int16 ***)(LockedVadEvent + 56);
        if ( v14 )
        {
          AweVadPartition = *v14;
          if ( !PsReferencePartitionSafe(*(_QWORD *)(LockedVadEvent + 56)) )
          {
            MiReadVadFlags(v1);
            *(_QWORD *)(a1 + 24) = 0LL;
            *(_QWORD *)(a1 + 64) = 0LL;
            *(_QWORD *)(a1 + 56) = 0LL;
            MiQueryReturnResults(a1);
            return 3221226656LL;
          }
        }
      }
    }
  }
  else
  {
    v16 = *v13;
    if ( *v13 && *v16 )
      AweVadPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v16);
  }
  v17 = *AweVadPartition;
  if ( v14 )
    PsDereferencePartition((__int64)v14);
  v18 = ((unsigned int)MiReadVadFlags(v1) >> 10) & 0x7F;
  v19 = v8 << 12;
  v20 = *(_DWORD *)a1 == 7;
  v31 = 0LL;
  v32 = 0LL;
  v27 = v5;
  v28 = v33;
  v30 = v7;
  if ( v20 )
  {
    if ( v6 == 0x20000 )
    {
      v24 = *(_DWORD *)(a1 + 72) & 0x40 | (2 * (*(_DWORD *)(a1 + 72) & 0x88 | (16 * (*(_DWORD *)(a1 + 72) & 0x30)))) | 1;
    }
    else
    {
      v26 = 8 * (*(_DWORD *)(a1 + 72) & 4);
      v29 = v26;
      if ( v6 == 0x40000 )
      {
        v24 = v26 | 2;
      }
      else if ( v6 == 0x1000000 )
      {
        v24 = v26 | 4;
      }
      else
      {
        v24 = v26 | 8;
      }
    }
    v29 = v24;
    switch ( VadPageSize )
    {
      case 0x10LL:
        v29 = v24 | 0x80;
        break;
      case 0x200LL:
        v29 = v24 | 0x800;
        break;
      case 0x40000LL:
        v29 = v24 | 0x1000;
        break;
    }
  }
  else
  {
    v29 = v6;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v22 = 24LL;
  if ( v21 >= 0x20 )
  {
    *(_QWORD *)&v31 = v19;
    v22 = 32LL;
  }
  if ( v21 >= 0x28 )
  {
    *((_QWORD *)&v31 + 1) = v17;
    v22 = 40LL;
  }
  if ( v21 >= 0x30 )
  {
    if ( v18 )
      v32 = v18 - 1;
    else
      v32 = 0xFFFFFFFFLL;
    v22 = 48LL;
  }
  *(_QWORD *)(a1 + 64) = &v27;
  *(_QWORD *)(a1 + 56) = v22;
  return MiQueryReturnResults(a1);
}
