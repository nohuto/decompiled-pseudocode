/*
 * XREFs of MiCreateKernelStackInitialize @ 0x1403D3F4C
 * Callers:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCreateKernelStackInitialize(ULONG **a1, int *a2)
{
  int v4; // r10d
  int v5; // r9d
  int v6; // eax
  __int64 v7; // r8
  ULONG *v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 result; // rax
  unsigned __int64 v12; // rdx

  memset_0(a1, 0, 0x58uLL);
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = *((_QWORD *)a2 + 2);
  if ( v4 != 5 && (v5 & 0x50) == 0x40 )
    return 3221225485LL;
  if ( v7 )
    v8 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v7 + 544) + 1198LL));
  else
    v8 = &MiSystemPartition;
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 0x40) == 0 )
    {
      if ( !v7 && v4 == 5 )
        v7 = -16LL;
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  if ( v4 == 5 )
    v7 = -32LL;
LABEL_7:
  *((_DWORD *)a1 + 16) = 1;
  if ( (v5 & 1) != 0 )
  {
    v12 = (unsigned int)KeKernelLargeStackSize;
    *((_DWORD *)a1 + 15) = 8;
    if ( (v5 & 4) == 0 )
      v12 = (unsigned int)KeKernelLargeStackCommit;
    v9 = v12 >> 12;
    v10 = (unsigned int)KeKernelLargeStackSize >> 12;
  }
  else
  {
    if ( (v5 & 0x20) != 0 )
    {
      v9 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
      *((_DWORD *)a1 + 15) = 2;
    }
    else if ( v4 == 5 )
    {
      v9 = (unsigned __int8)byte_140E34CE4;
      if ( (v5 & 0x10) != 0 )
        *((_DWORD *)a1 + 15) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 16) = 2;
      *((_DWORD *)a1 + 15) = v4 + 3;
      v9 = 1LL;
    }
    v10 = v9;
  }
  *((_DWORD *)a1 + 12) = v6;
  a1[2] = (ULONG *)v10;
  result = 0LL;
  *((_DWORD *)a1 + 13) = -1;
  *a1 = v8;
  *((_DWORD *)a1 + 8) = v5;
  a1[5] = (ULONG *)v7;
  *((_DWORD *)a1 + 14) = v4;
  a1[3] = (ULONG *)v9;
  return result;
}
