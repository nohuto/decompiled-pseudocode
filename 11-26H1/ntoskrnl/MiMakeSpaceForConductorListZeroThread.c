/*
 * XREFs of MiMakeSpaceForConductorListZeroThread @ 0x14077C6D8
 * Callers:
 *     MiInsertNewZeroThread @ 0x14050FC38 (MiInsertNewZeroThread.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeSpaceForConductorListZeroThread(__int64 a1, char **a2)
{
  __int64 v3; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdx
  unsigned int v9; // ebp
  int CurrentProcessorColor; // eax
  char *PoolMm; // rax
  char *v12; // rsi
  const void *v13; // rdx
  unsigned int v14; // edi

  *a2 = 0LL;
  v3 = *(unsigned int *)(a1 + 60);
  if ( (unsigned int)v3 >= 0x3A )
    return 3221225769LL;
  v6 = *(_QWORD *)(a1 + 72);
  if ( !v6
    || (unsigned int)(v3 + 6) >= *(_DWORD *)(a1 + 64)
    || (v7 = v6 + 8 * v3, v8 = (char *)(v7 + 48), *(_QWORD *)(v7 + 48) = 0LL, v7 == -48) )
  {
    v9 = *(_DWORD *)(a1 + 60) + 7;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (char *)ExAllocatePoolMm(64LL, 56LL * v9, 1650092365, CurrentProcessorColor | 0x80000000);
    v12 = PoolMm;
    if ( !PoolMm )
      return 3221225773LL;
    v13 = *(const void **)(a1 + 72);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a1 + 64);
      memmove(PoolMm, v13, 8LL * v14);
      ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
    }
    else
    {
      v14 = 6;
    }
    *(_QWORD *)(a1 + 72) = v12;
    *(_DWORD *)(a1 + 64) = v9;
    v8 = &v12[8 * v14];
  }
  *a2 = v8;
  return 0LL;
}
