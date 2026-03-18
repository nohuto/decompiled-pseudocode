/*
 * XREFs of rimValidateFrameTransition @ 0x140096B5C
 * Callers:
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimDispatchCompleteFrame @ 0x140096810 (rimDispatchCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimValidateFrameTransition(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 *v6; // r9
  unsigned int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // ebp
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // [rsp+68h] [rbp+10h]

  result = *(unsigned int *)(a1 + 196);
  v3 = 0LL;
  if ( (_DWORD)result == *(_DWORD *)(a2 + 196) )
  {
    v6 = (__int64 *)(a1 + 232);
    v7 = 0;
    v20 = (__int64 *)(a1 + 232);
    if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v8 = *v6;
        result = v7;
        v9 = 192LL * v7;
        if ( (*(_DWORD *)(v9 + *v6 + 28) & 0x2000006) != 0 )
        {
          v10 = *(_DWORD *)(a2 + 24);
          v11 = 0;
          if ( v10 )
          {
            while ( 1 )
            {
              result = v11;
              if ( *(_WORD *)(192LL * v11 + *(_QWORD *)(a2 + 232) + 8) == *(_WORD *)(v9 + v8 + 8) )
                break;
              if ( ++v11 == v10 )
                goto LABEL_7;
            }
          }
          else
          {
LABEL_7:
            result = MicrosoftTelemetryAssertTriggeredArgsKM(
                       "IXPTelAssert",
                       196616LL,
                       *(unsigned __int16 *)(v9 + v8 + 8) | 0x3E40000u);
          }
          v6 = (__int64 *)(a1 + 232);
        }
        ++v7;
      }
      while ( v7 != *(_DWORD *)(a1 + 24) );
    }
    else
    {
      v20 = (__int64 *)(a1 + 232);
    }
    v12 = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        v13 = *(_QWORD *)(a2 + 232);
        result = v12;
        v14 = 192LL * v12;
        if ( (*(_DWORD *)(v14 + v13 + 28) & 0x2000006) == 0 )
        {
          v15 = *(_DWORD *)(a1 + 24);
          v16 = 0;
          if ( !v15 )
            goto LABEL_20;
          v17 = *v6;
          while ( 1 )
          {
            result = 192LL * v16;
            if ( *(_WORD *)(v14 + v13 + 8) == *(_WORD *)(result + v17 + 8) )
              break;
            if ( ++v16 == v15 )
              goto LABEL_20;
          }
          if ( (*(_DWORD *)(result + v17 + 28) & 0x2000006) == 0 )
LABEL_20:
            result = MicrosoftTelemetryAssertTriggeredArgsKM(
                       "IXPTelAssert",
                       196616LL,
                       *(unsigned __int16 *)(v14 + v13 + 8) | 0x3FC0000u);
        }
        v6 = v20;
        ++v12;
      }
      while ( v12 != *(_DWORD *)(a2 + 24) );
    }
  }
  else if ( (_DWORD)result )
  {
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        v18 = *(_QWORD *)(a2 + 232);
        if ( (*(_DWORD *)(192 * v3 + v18 + 28) & 0x2000006) == 0 )
          result = MicrosoftTelemetryAssertTriggeredArgsKM(
                     "IXPTelAssert",
                     196616LL,
                     *(unsigned __int16 *)(192 * v3 + v18 + 8) | 0x4070000u);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (_DWORD)v3 != *(_DWORD *)(a2 + 24) );
    }
  }
  else if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      v19 = *(_QWORD *)(a1 + 232);
      if ( (*(_DWORD *)(192 * v3 + v19 + 28) & 0x2000006) != 0 )
        result = MicrosoftTelemetryAssertTriggeredArgsKM(
                   "IXPTelAssert",
                   196616LL,
                   *(unsigned __int16 *)(192 * v3 + v19 + 8) | 0x4110000u);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (_DWORD)v3 != *(_DWORD *)(a1 + 24) );
  }
  return result;
}
