/*
 * XREFs of MiComputeCheckPte @ 0x140313A2C
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeCheckPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  if ( a2 <= 1 )
  {
    v3 = 2 - a2;
    do
    {
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v3;
    }
    while ( v3 );
  }
  return a1;
}
