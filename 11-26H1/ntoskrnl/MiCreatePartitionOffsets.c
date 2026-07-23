/*
 * XREFs of MiCreatePartitionOffsets @ 0x14086F090
 * Callers:
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiComputePartitionHugeIoSpaceSize @ 0x1406F0008 (MiComputePartitionHugeIoSpaceSize.c)
 *     MiFreeCachedKernelShadowStackEntryCount @ 0x140703E58 (MiFreeCachedKernelShadowStackEntryCount.c)
 */

__int64 __fastcall MiCreatePartitionOffsets(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r11
  int v5; // edx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int *v11; // rbx
  unsigned int i; // r11d
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx

  v2 = (unsigned __int16)KeNumberNodes;
  v5 = dword_140E2D90C * (unsigned __int16)KeNumberNodes;
  if ( a1 )
    a1[939] = a2;
  v6 = (8LL * (unsigned int)(3 * v5) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( a1 )
    a1[2094] = v6 + a2;
  v7 = (v6 + 16LL * (unsigned int)(2 * v5) + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  if ( a1 )
    a1[2] = v7 + a2;
  v8 = v2;
  v9 = 56320 * v2 + v7;
  if ( a1 )
    a1[2093] = v9 + a2;
  v10 = dword_140E2EC60;
  if ( !dword_140E2EC60 )
  {
    v11 = dword_140E2D900;
    for ( i = 0; i <= 3; ++i )
    {
      v13 = 6;
      if ( i != 3 )
        v13 = 12;
      v14 = *v11++ * (unsigned __int8)byte_140E2D898 * v13;
      v10 += v14;
    }
    dword_140E2EC60 = v10;
  }
  v15 = 88 * v8 * v10 + v9;
  if ( a1 )
    a1[2130] = v15 + a2;
  v16 = MiComputePartitionHugeIoSpaceSize();
  if ( v18 )
    *(_QWORD *)(v18 + 512) = ((v17 + v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + v19;
  v20 = MiFreeCachedKernelShadowStackEntryCount();
  return v21 + 32 * v20;
}
