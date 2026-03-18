/*
 * XREFs of KiRcuForEachParticipatingCpu @ 0x1404F0A74
 * Callers:
 *     KiRcuStartGracePeriod @ 0x1405242A4 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404FA128 (KiRcuStartGracePeriodEnumCallback.c)
 */

_UNKNOWN **__fastcall KiRcuForEachParticipatingCpu(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *p_Thread; // r14
  __int64 v4; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int i; // ebp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  p_Thread = (union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *)&KiDpcCorralLock.WaitBlock[2].Thread;
  v4 = qword_140F24F10;
  v6 = (unsigned __int8)byte_140F24F01;
  v7 = qword_140F24F10 + ((unsigned __int64)(unsigned __int8)byte_140F24F03 << 6);
  while ( v4 != v7 )
  {
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( (v8 & 1) != 0 )
        {
          result = (_UNKNOWN **)KiRcuStartGracePeriodEnumCallback(&p_Thread[4 * i], a2);
          if ( !(_DWORD)result )
            return result;
        }
        v8 >>= 1;
      }
    }
    v4 += 64LL;
    result = (_UNKNOWN **)(32 * v6);
    p_Thread += 4 * v6;
  }
  return result;
}
