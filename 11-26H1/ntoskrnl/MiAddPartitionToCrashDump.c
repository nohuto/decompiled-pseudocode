/*
 * XREFs of MiAddPartitionToCrashDump @ 0x1406FABBC
 * Callers:
 *     MiAddPartitionDataToCrashDump @ 0x1406FA9A4 (MiAddPartitionDataToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1406FAF64 (MiAddUnicodeStringToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionToCrashDump(__int64 a1, ULONG *a2)
{
  char *KernelStack; // rdi
  ULONG *v3; // rbx
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  KernelStack = (char *)stru_140E2ED08.KernelStack;
  v3 = a2;
  if ( a2 == &MiSystemPartition )
  {
    result = MiAddRangeToCrashDump(a1, a2, 27712LL, 0LL);
    if ( (int)result < 0 )
      return result;
    a2 = *(ULONG **)&stru_140E2ED08.CurrentRunTime;
  }
  else
  {
    KernelStack = (char *)stru_140E2ED08.KernelStack + 27712;
  }
  result = MiAddRangeToCrashDump(a1, a2, KernelStack, 0LL);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = v3[5574];
    v8 = 16;
    if ( v7 > 0x10 || (v8 = v3[5574], v7) )
    {
      v9 = (__int64 *)(v3 + 5576);
      v10 = v8;
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( MmIsAddressValidEx(*v9) )
          {
            MiAddRangeToCrashDump(a1, v11, 256LL, 0LL);
            MiAddRangeToCrashDump(a1, *(_QWORD *)(v11 + 24), 216LL, 0LL);
            v12 = *(_OWORD *)(v11 + 64);
            MiAddUnicodeStringToCrashDump(a1, &v12);
          }
        }
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    return v6;
  }
  return result;
}
