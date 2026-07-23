/*
 * XREFs of DbgkpLkmdSnapGlobals @ 0x1405B65E4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 *     KeEnumerateProcessorDpcs @ 0x1405F3A30 (KeEnumerateProcessorDpcs.c)
 */

__int64 __fastcall DbgkpLkmdSnapGlobals(__int64 a1)
{
  ULONG ActiveProcessorCount; // ebp
  __int64 result; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 Prcb; // rax
  __int64 v7; // rdx

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  result = DbgkpLkmdSnapDataEx(a1, (__int64)KiProcessorBlock);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_QWORD *)a1;
    do
    {
      Prcb = KeGetPrcb(v4);
      if ( (int)DbgkpLkmdSnapDataEx(a1, Prcb) >= 0 )
      {
        MEMORY[8] = 0LL;
        *v5 = 0LL;
      }
      result = KeEnumerateProcessorDpcs(v4++, v7, a1);
      ++v5;
    }
    while ( v4 < ActiveProcessorCount );
  }
  return result;
}
