/*
 * XREFs of KiFreeIdleSearchStructures @ 0x1405EDB04
 * Callers:
 *     KiFreeProcessorSchedulerStructures @ 0x1405EDBC0 (KiFreeProcessorSchedulerStructures.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiFreeIdleSearchStructures(__int64 a1)
{
  __int64 v1; // rdi
  PVOID *v2; // rbx
  __int64 v3; // rsi
  PVOID *v5; // rbx

  v1 = 2LL;
  v2 = (PVOID *)(a1 + 37960);
  v3 = 2LL;
  do
  {
    if ( *v2 )
    {
      ExFreePoolWithTag(*v2, 0);
      *v2 = 0LL;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = (PVOID *)(a1 + 37992);
  do
  {
    if ( *v5 )
    {
      ExFreePoolWithTag(*v5, 0);
      *v5 = 0LL;
    }
    ++v5;
    --v1;
  }
  while ( v1 );
}
