/*
 * XREFs of PoIdle @ 0x1402F6ED0
 * Callers:
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 * Callees:
 *     PpmResetProcessorIdleAccounting @ 0x1402F3314 (PpmResetProcessorIdleAccounting.c)
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmPerfSetProcessorIdle @ 0x1402F7A14 (PpmPerfSetProcessorIdle.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1402F7BB0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     KeIdleSpecCtrl @ 0x14049F240 (KeIdleSpecCtrl.c)
 *     PpmEventIdleStateChange @ 0x1404D12CC (PpmEventIdleStateChange.c)
 *     HalProcessorIdle @ 0x140727660 (HalProcessorIdle.c)
 *     KeExecuteVerw @ 0x140741F00 (KeExecuteVerw.c)
 */

char __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  char result; // al
  __int64 v3; // rdi
  unsigned int *v4; // rsi
  char i; // r14
  int v6; // edx
  char v7; // r15
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  bool v12; // zf
  unsigned int v13; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+64h] [rbp-5h] BYREF
  int v15; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v18[8]; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  char v20; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18[0] = 0LL;
  LOBYTE(v21) = 0;
  v20 = 0;
  v15 = 0;
  v13 = 0;
  result = *((_BYTE *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 289);
  LOBYTE(v19) = 0;
  if ( !result )
  {
    v3 = *(_QWORD *)(BugCheckParameter4 + 34880);
    v4 = *(unsigned int **)(BugCheckParameter4 + 34888);
    if ( v3 )
    {
      for ( i = 0; ; i = 1 )
      {
        *(_DWORD *)(v3 + 1036) = 0;
        *(_DWORD *)(v3 + 60) = 0;
        PpmPerfSetProcessorIdle(BugCheckParameter4, &v19);
        v12 = PpmIdleVetoBias == 0;
        *(_WORD *)(v3 + 56) = 0;
        if ( !v12 )
        {
          if ( *(_BYTE *)(v3 + 16) )
            break;
        }
        v7 = v19;
        LOBYTE(v6) = v19;
        PpmIdleSelectStates(
          BugCheckParameter4,
          v6,
          (unsigned int)&v16,
          (unsigned int)&v17,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v15,
          (__int64)v18,
          (__int64)&v20);
        v8 = *(_DWORD *)(v3 + 24);
        if ( v13 != v8 )
        {
          *(_DWORD *)(v3 + 32) = v8;
          *(_DWORD *)(v3 + 24) = v13;
          PpmEventIdleStateChange(v13);
        }
        v12 = v4[1]++ == -1;
        if ( v12 )
          PpmResetProcessorIdleAccounting(v4, v16);
        v9 = 352LL * v13;
        LOBYTE(v9) = *(_BYTE *)(v9 + v3 + 1393);
        PpmWakeClockOwnerIfNeeded(BugCheckParameter4, v9);
        result = PpmIdleExecuteTransition(BugCheckParameter4, v14, v16, v17, v20, v7, i, (__int64)&v21);
        if ( !(_BYTE)v21 )
          return result;
      }
      v19 = 0;
      KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v19);
      v11 = v19;
      if ( (_WORD)v19 )
        __writemsr(0x48u, 0LL);
      v10 = HIWORD(v19);
      v12 = HIWORD(v19) == 0;
    }
    else
    {
      v19 = 0;
      KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v19);
      v11 = v19;
      if ( (_WORD)v19 )
      {
        v10 = 72LL;
        __writemsr(0x48u, 0LL);
      }
      v12 = HIWORD(v19) == 0;
    }
    if ( !v12 )
      KeExecuteVerw(v10);
    HalProcessorIdle(v10);
    if ( v11 )
      __writemsr(0x48u, v11);
    else
      _mm_lfence();
    return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v19);
  }
  return result;
}
