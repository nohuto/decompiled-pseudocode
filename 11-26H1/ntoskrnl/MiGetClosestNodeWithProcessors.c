/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x140200B4C
 * Callers:
 *     MiCreateZeroThreadContext @ 0x140776624 (MiCreateZeroThreadContext.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(int a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx

  v1 = (unsigned int *)(qword_140E2D810 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a1);
  v2 = &v1[(unsigned __int16)KeNumberNodes];
  while ( v1 < v2 )
  {
    v3 = *v1;
    if ( (unsigned __int16)*v1 < (unsigned __int16)KeNumberNodes )
    {
      _mm_lfence();
      v4 = KeNodeBlock[(unsigned __int16)v3];
      if ( v4 )
      {
        if ( (unsigned __int16)__popcnt(KeQueryNodeGroupAffinity(v4, *(unsigned __int8 *)(v4 + 12))) )
          return v3;
      }
    }
    ++v1;
  }
  return 0xFFFFFFFFLL;
}
