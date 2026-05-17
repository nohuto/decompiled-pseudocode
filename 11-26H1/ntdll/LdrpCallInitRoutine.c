/*
 * XREFs of LdrpCallInitRoutine @ 0x18004C46C
 * Callers:
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011B0A8 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpCallInitRoutineInternal @ 0x180119A08 (LdrpCallInitRoutineInternal.c)
 */

char __fastcall LdrpCallInitRoutine(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // r14
  __int64 v14; // r8
  int v15; // r9d

  v8 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v11 = 2147353477LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v12 = 2147353477LL;
    if ( (*(_BYTE *)v12 & 0x20) != 0 )
    {
      LOBYTE(v10) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v10, 0LL, 0LL);
    }
  }
  else
  {
    v11 = 2147353477LL;
  }
  v13 = LdrpCallInitRoutineInternal(a1, a2, a3, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v14) = -1;
      LdrpLogEtwEvent(5270, a2, v14, v15, 0LL, 0LL);
    }
  }
  if ( !v13 && a3 == 1 )
  {
    LOBYTE(v14) = 1;
    LdrpLogError(3221225794LL, 5270LL, v14, 0LL);
  }
  return v13;
}
