/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x1403BB820
 * Callers:
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopPepUpdateIdleState @ 0x1403BB6E8 (PopPepUpdateIdleState.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1403BB750 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403BB950 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403BBDB0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x14021C06C (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edi
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  BOOL v10; // r8d
  unsigned int v11; // ecx
  int v12; // r10d
  unsigned int v13; // r8d
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r10d
  int v17; // r9d
  unsigned int v18; // edx
  unsigned int v19; // ebx
  int v20; // r8d
  bool v21; // r9
  int v22; // ecx
  int v23; // eax

  v1 = a1[41];
  result = (unsigned int)(a1[47] - 1);
  if ( (unsigned int)result >= v1 )
    result = v1;
  if ( (_DWORD)result )
  {
    v4 = a1[38];
    v5 = v4;
    v6 = a1[40];
    if ( v4 >= (unsigned int)result )
      v5 = result;
    v7 = v4 == (_DWORD)result;
    v8 = a1[39];
    v9 = v8;
    v10 = v7;
    if ( v8 >= v5 )
      v9 = v5;
    v7 = v8 == (_DWORD)result;
    v11 = a1[40];
    v12 = v10 + 1;
    if ( !v7 )
      v12 = v10;
    v13 = v1;
    if ( v6 >= v9 )
      v11 = v9;
    v14 = v12 + 1;
    if ( v6 != (_DWORD)result )
      v14 = v12;
    if ( v1 >= v11 )
      v13 = v11;
    v15 = a1[42];
    v16 = v15;
    v17 = v14 + 1;
    if ( v1 != (_DWORD)result )
      v17 = v14;
    v18 = a1[43];
    v19 = v18;
    if ( v15 >= v13 )
      v16 = v13;
    v20 = v17 + 1;
    if ( v15 != (_DWORD)result )
      v20 = v17;
    if ( v18 >= v16 )
      v19 = v16;
    v21 = 0;
    v22 = v20 + 1;
    if ( v18 != (_DWORD)result )
      v22 = v20;
    if ( v22 == 5 )
      v21 = v6 < (unsigned int)result;
    v23 = a1[1];
    if ( (v23 & 4) != 0 )
    {
      if ( !v21 )
      {
        a1[1] = v23 & 0xFFFFFFFB;
        _InterlockedDecrement((volatile signed __int32 *)&PopDirectedDripsDiagLock.SchedulerApcFill5[52]);
      }
    }
    else if ( v21 )
    {
      a1[1] = v23 | 4;
      if ( _InterlockedIncrement((volatile signed __int32 *)&PopDirectedDripsDiagLock.SchedulerApcFill5[52]) == 1 )
      {
        PopPepArmIdleTimer(0);
        return v19;
      }
    }
    return v19;
  }
  return result;
}
