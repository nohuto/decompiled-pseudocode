/*
 * XREFs of RtlInitializeTRng @ 0x14048D290
 * Callers:
 *     PsInitializeThreadRngState @ 0x14048D204 (PsInitializeThreadRngState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlInitializeTRng(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int64 *v3; // r8
  unsigned __int64 result; // rax

  v2 = 0;
  v3 = a1;
  a1[1] = 0LL;
  do
  {
    a2 -= 0x61C8864680B583EBLL;
    ++v2;
    result = (0x94D049BB133111EBuLL
            * ((0xBF58476D1CE4E5B9uLL * (a2 ^ (a2 >> 30))) ^ ((0xBF58476D1CE4E5B9uLL * (a2 ^ (a2 >> 30))) >> 27))) ^ ((0x94D049BB133111EBuLL * ((0xBF58476D1CE4E5B9uLL * (a2 ^ (a2 >> 30))) ^ ((0xBF58476D1CE4E5B9uLL * (a2 ^ (a2 >> 30))) >> 27))) >> 31);
    *v3++ = result;
  }
  while ( v2 < 2 );
  return result;
}
