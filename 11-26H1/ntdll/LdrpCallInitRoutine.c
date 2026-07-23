/*
 * XREFs of LdrpCallInitRoutine @ 0x1800369EC
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011AE58 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpCallInitRoutineInternal @ 0x1801197B8 (LdrpCallInitRoutineInternal.c)
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
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v11 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
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
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
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
