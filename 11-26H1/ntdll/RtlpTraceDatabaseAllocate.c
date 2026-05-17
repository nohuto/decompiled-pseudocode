/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x18014A1EC
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x180149E20 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A274 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  v1 = 0LL;
  v3 = 0LL;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v3, 0LL, &v4, 12288, 4) >= 0 )
    return v3;
  return v1;
}
