/*
 * XREFs of KiRcuForEachParticipatingCpu @ 0x1404EA054
 * Callers:
 *     KiRcuStartGracePeriod @ 0x140526914 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404F3738 (KiRcuStartGracePeriodEnumCallback.c)
 */

_UNKNOWN **__fastcall KiRcuForEachParticipatingCpu(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 *p_NpxState; // r14
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v6; // r15
  struct _LIST_ENTRY *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int i; // ebp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  p_NpxState = &KiDpcCorralLock.NpxState;
  Flink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink;
  v6 = KiDpcCorralLock.WaitBlockFill6[81];
  v7 = &KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[4 * (unsigned __int64)KiDpcCorralLock.WaitBlockFill6[83]];
  while ( Flink != v7 )
  {
    v8 = (unsigned __int64)Flink[1].Flink;
    if ( v8 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( (v8 & 1) != 0 )
        {
          result = (_UNKNOWN **)KiRcuStartGracePeriodEnumCallback(&p_NpxState[4 * i], a2);
          if ( !(_DWORD)result )
            return result;
        }
        v8 >>= 1;
      }
    }
    Flink += 4;
    result = (_UNKNOWN **)(32 * v6);
    p_NpxState += 4 * v6;
  }
  return result;
}
