/*
 * XREFs of HalpDpGetInterruptReplayState @ 0x140BF3E20
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDpGetInterruptReplayState(__int64 a1, __int64 *a2)
{
  unsigned __int32 v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // r8d
  unsigned int v8; // r10d

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 1u);
  v4 = 0;
  if ( v3 < *(_DWORD *)a1 )
  {
    v6 = *(_QWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) * v3;
    if ( *(_QWORD *)(HalpInterruptController + 152) )
    {
      v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v6);
      if ( v7 >= 0 )
      {
        *a2 = v6;
        return v4;
      }
    }
    else
    {
      v7 = -1073741637;
    }
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v7,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x330u);
    return v8;
  }
  if ( a2 )
    *a2 = 0LL;
  return 3221225626LL;
}
