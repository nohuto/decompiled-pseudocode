/*
 * XREFs of HalpScanForProfilingCorruptionInternal @ 0x140461978
 * Callers:
 *     HalpScanForProfilingCorruption @ 0x140461914 (HalpScanForProfilingCorruption.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpScanForProfilingCorruptionInternal(int a1, int a2, __int64 a3)
{
  unsigned int *v4; // rdi
  int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 i; // r14
  __int64 j; // r9
  __int64 v10; // rsi
  int v11; // edx
  int v12; // ecx

  v4 = *(unsigned int **)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v12 = v5 - 99;
      if ( v12 )
      {
        if ( v12 == 1 )
          v4 += 18;
        else
          v4 = 0LL;
      }
      else
      {
        v4 += 12;
      }
    }
    else
    {
      v4 += 6;
    }
  }
  result = v4[1];
  v7 = 0;
  for ( i = *((_QWORD *)v4 + 2); v7 < (unsigned int)result; ++v7 )
  {
    v11 = 0;
    for ( j = 0LL; (unsigned int)j <= v4[2]; j = (unsigned int)(j + 1) )
    {
      if ( *(_DWORD *)(*((_QWORD *)v4 + 2) + 48 * j + 28) != 3 && ++v11 > v7 )
        goto LABEL_7;
    }
    j = 0xFFFFFFFFLL;
LABEL_7:
    v10 = 6 * j;
    if ( !*(_BYTE *)(i + 48 * j + 40)
      && *(_DWORD *)(i + 48 * j + 24) <= 1u
      && (int)guard_dispatch_icall_no_overrides((unsigned int)j, *v4) >= 0 )
    {
      *(_QWORD *)(i + 8 * v10 + 8) = a3;
    }
    result = v4[1];
  }
  return result;
}
