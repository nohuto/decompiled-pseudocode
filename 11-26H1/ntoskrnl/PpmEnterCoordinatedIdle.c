/*
 * XREFs of PpmEnterCoordinatedIdle @ 0x1402F9960
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x1405E6280 (KdCallPowerHandlers.c)
 */

unsigned int __fastcall PpmEnterCoordinatedIdle(int a1, int *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int result; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int *v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  unsigned int v16; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v8) = a1;
  if ( a3 != -1 )
  {
    v16 = a3;
    v9 = PpmPlatformStates + 448LL * a3;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v15 = 4LL;
      v14 = (int *)&v16;
      EtwTraceKernelEvent((int)&v14, 1, 0x40008000u, 4667, 1538);
    }
    result = qword_140E27200;
    if ( !qword_140E27200 )
    {
      result = dword_140E27240;
      if ( a3 == dword_140E27240 )
        result = _InterlockedCompareExchange64(&qword_140E27200, MEMORY[0xFFFFF78000000008], 0LL);
    }
    v11 = a5;
    if ( a5 )
    {
      *(_DWORD *)(PpmPlatformStates + 56) = a5;
      result = PpmPlatformStates;
      v11 = *(_QWORD *)(PpmPlatformStates + 48);
      ++*(_DWORD *)(v11 + 8);
    }
    if ( *(_BYTE *)(v9 + 120) )
    {
      LOBYTE(v11) = 1;
      KdPowerTransitionEx(2147483652LL, v11);
      result = KdCallPowerHandlers(4LL);
    }
  }
  if ( (_DWORD)v8 )
  {
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v14 = a2;
      v15 = (unsigned int)(4 * v8);
      EtwTraceKernelEvent((int)&v14, 1, 0x40008000u, 4671, 1538);
    }
    do
    {
      v8 = (unsigned int)(v8 - 1);
      v12 = 448LL * (unsigned int)a2[v8];
      v13 = PpmPlatformStates;
      *(_QWORD *)(v12 + PpmPlatformStates + 424) = a4;
      result = *(_DWORD *)(v12 + v13 + 416) & 0xF8FFFFFF | 0x4000000;
      *(_DWORD *)(v12 + v13 + 416) = result;
    }
    while ( (_DWORD)v8 );
  }
  return result;
}
