/*
 * XREFs of KiBeginCounterAccumulation @ 0x14048E6E0
 * Callers:
 *     KiEndDebugAccumulation @ 0x1404FBE70 (KiEndDebugAccumulation.c)
 *     KeEnableProfiling @ 0x140B5D7D0 (KeEnableProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBeginCounterAccumulation(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // r9
  unsigned int *v6; // r10
  __int64 v7; // rbx
  _QWORD *v8; // r11

  v2 = *(_QWORD *)(a1 + 360);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v3 )
  {
    v5 = 1LL;
    if ( KiHwCountersCount )
    {
      v6 = (unsigned int *)&KiHwCounters;
      v7 = (unsigned int)KiHwCountersCount;
      v8 = (_QWORD *)(v2 + 48);
      do
      {
        if ( (v3 & v5) != 0 )
          *v8 = __readpmc(*v6);
        v5 *= 2LL;
        v8 += 3;
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  result = *(unsigned int *)(v2 + 16);
  if ( (result & 1) != 0 )
  {
    if ( a2 )
    {
      ++*(_DWORD *)(v2 + 20);
      result = *(unsigned __int8 *)(a1 + 643);
      *(_QWORD *)v2 |= 1LL << result;
    }
  }
  return result;
}
