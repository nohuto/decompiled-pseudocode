/*
 * XREFs of MiUpdateVadBits @ 0x140A09330
 * Callers:
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140A093B8 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateLowestConflictingVad @ 0x140460B50 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x140997210 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  v2 = a2 < a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0x7FFFFFFEFFFFLL;
  if ( !v2 )
    v5 = a2;
  result = MiLocateLowestConflictingVad((__int64)CurrentThread->ApcState.Process, a1);
  v7 = result;
  if ( result )
  {
    do
    {
      MiSetVadBits(v7);
      result = MiGetNextVad(v7);
      v7 = result;
    }
    while ( result
         && (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32)) << 12 < v5 );
  }
  return result;
}
