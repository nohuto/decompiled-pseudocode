/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x1406CCD84
 * Callers:
 *     EtwDeleteProcessor @ 0x14082A8D4 (EtwDeleteProcessor.c)
 *     EtwInitializeProcessor @ 0x14082AAD4 (EtwInitializeProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
