/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x1406C8DA4
 * Callers:
 *     EtwDeleteProcessor @ 0x140824694 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x140824894 (EtwInitializeProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 408);
  v2 = 5LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
