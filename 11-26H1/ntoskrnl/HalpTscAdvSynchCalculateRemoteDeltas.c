/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDeltas @ 0x140585A84
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140585B70 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x1404BE4E0 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorDelta @ 0x140586654 (HalpTscTraceProcessorDelta.c)
 */

struct _KPRCB *__fastcall HalpTscAdvSynchCalculateRemoteDeltas(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  struct _KPRCB *result; // rax
  __int64 v7; // rbx
  __int64 *v9; // rsi
  __int64 v11; // r12
  _DWORD *v13; // rdi
  __int64 v14; // rax

  result = KeGetCurrentPrcb();
  v7 = 0LL;
  v9 = (__int64 *)HalpTscDeltas;
  v11 = HalpTscNopCycles;
  *a1 = 0LL;
  *a3 = result->Number;
  *a2 = 0LL;
  if ( a6 )
  {
    v13 = (_DWORD *)v11;
    do
    {
      result = KeGetCurrentPrcb();
      if ( (_DWORD)v7 == result->Number )
      {
        *v9 = 0LL;
        *v13 = 0;
      }
      else
      {
        v14 = HalpTscAdvSynchCalculateRemoteDelta(v7, (_DWORD *)(v11 + 4 * v7));
        *v9 = v14;
        if ( v14 < *a1 )
          *a1 = v14;
        if ( v14 > *a2 )
        {
          *a2 = v14;
          *a3 = v7;
        }
        result = (struct _KPRCB *)HalpTscTraceProcessorDelta(
                                    KeGetCurrentPrcb()->Number,
                                    (unsigned int)v7,
                                    v14,
                                    (unsigned int)*v13);
      }
      v7 = (unsigned int)(v7 + 1);
      ++v9;
      ++v13;
    }
    while ( (unsigned int)v7 < a6 );
  }
  return result;
}
