/*
 * XREFs of MiComputeSoloZeroingTime @ 0x1404FAAFC
 * Callers:
 *     MiInitializeThreadGroup @ 0x1404FA804 (MiInitializeThreadGroup.c)
 * Callees:
 *     MiTimeToWriteMemory @ 0x140486350 (MiTimeToWriteMemory.c)
 */

__int64 __fastcall MiComputeSoloZeroingTime(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax

  v2 = *(_QWORD *)(56320LL * *(unsigned int *)(a1 + 80) + qword_140E37E50 + 14192);
  if ( !v2 )
    return 0LL;
  v3 = 0;
  if ( !*(_DWORD *)(a1 + 400) )
  {
    LOBYTE(v3) = KeGetCurrentPrcb()->PowerState.ArchitecturalEfficiencyClass != 1;
    ++v3;
  }
  if ( !*(_DWORD *)(504LL * v3 + v2 + 236) )
    return 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)(a1 + 8 * v6 + 48);
    if ( v7 )
    {
      if ( v5 == 3 )
      {
        v5 = 1;
        v6 = 1LL;
      }
      v4 += MiTimeToWriteMemory(*(_DWORD *)(a1 + 80), v3, v5, 1, v7 << 12);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  return v4;
}
