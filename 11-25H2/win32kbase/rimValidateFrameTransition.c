/*
 * XREFs of rimValidateFrameTransition @ 0x1401F14FC
 * Callers:
 *     rimDispatchCompleteFrame @ 0x140134290 (rimDispatchCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1401F0EC0 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0 (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall rimValidateFrameTransition(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // ebp
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebp
  __int64 v19; // r10
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // ebp
  __int64 v24; // r10
  __int64 v25; // rdx
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx

  v4 = 0LL;
  if ( (unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    v17 = *(_DWORD *)(a1 + 196);
    if ( v17 == *(_DWORD *)(a2 + 196) )
    {
      v18 = 0;
      if ( *(_DWORD *)(a1 + 24) )
      {
        do
        {
          v19 = *(_QWORD *)(a1 + 232);
          v20 = 192LL * v18;
          if ( (*(_DWORD *)(v20 + v19 + 28) & 0x2000006) != 0 )
          {
            v21 = *(_DWORD *)(a2 + 24);
            v22 = 0;
            if ( v21 )
            {
              while ( *(_WORD *)(192LL * v22 + *(_QWORD *)(a2 + 232) + 8) != *(_WORD *)(v20 + v19 + 8) )
              {
                if ( ++v22 == v21 )
                  goto LABEL_26;
              }
            }
            else
            {
LABEL_26:
              MicrosoftTelemetryAssertTriggeredArgsKM(
                "IXPTelAssert",
                196616,
                *(unsigned __int16 *)(v20 + v19 + 8) | 0x3E60000);
            }
          }
          ++v18;
        }
        while ( v18 != *(_DWORD *)(a1 + 24) );
      }
      v23 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          v24 = *(_QWORD *)(a2 + 232);
          v25 = 192LL * v23;
          if ( (*(_DWORD *)(v25 + v24 + 28) & 0x2000006) == 0 )
          {
            v26 = *(_DWORD *)(a1 + 24);
            v27 = 0;
            if ( !v26 )
              goto LABEL_36;
            v28 = *(_QWORD *)(a1 + 232);
            while ( 1 )
            {
              v29 = 192LL * v27;
              if ( *(_WORD *)(v25 + v24 + 8) == *(_WORD *)(v29 + v28 + 8) )
                break;
              if ( ++v27 == v26 )
                goto LABEL_36;
            }
            if ( (*(_DWORD *)(v29 + v28 + 28) & 0x2000006) == 0 )
LABEL_36:
              MicrosoftTelemetryAssertTriggeredArgsKM(
                "IXPTelAssert",
                196616,
                *(unsigned __int16 *)(v25 + v24 + 8) | 0x3FE0000);
          }
          ++v23;
        }
        while ( v23 != *(_DWORD *)(a2 + 24) );
      }
    }
    else if ( v17 )
    {
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          v30 = *(_QWORD *)(a2 + 232);
          if ( (*(_DWORD *)(192 * v4 + v30 + 28) & 0x2000006) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM(
              "IXPTelAssert",
              196616,
              *(unsigned __int16 *)(192 * v4 + v30 + 8) | 0x4090000);
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (_DWORD)v4 != *(_DWORD *)(a2 + 24) );
      }
    }
    else if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v31 = *(_QWORD *)(a1 + 232);
        if ( (*(_DWORD *)(192 * v4 + v31 + 28) & 0x2000006) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM(
            "IXPTelAssert",
            196616,
            *(unsigned __int16 *)(192 * v4 + v31 + 8) | 0x4130000);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (_DWORD)v4 != *(_DWORD *)(a1 + 24) );
    }
  }
  else
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + 232);
        v7 = 192LL * v5;
        if ( (*(_DWORD *)(v7 + v6 + 28) & 0x2000006) != 0 )
        {
          v8 = *(_DWORD *)(a2 + 24);
          v9 = 0;
          if ( v8 )
          {
            while ( *(_WORD *)(192LL * v9 + *(_QWORD *)(a2 + 232) + 8) != *(_WORD *)(v7 + v6 + 8) )
            {
              if ( ++v9 == v8 )
                goto LABEL_7;
            }
          }
          else
          {
LABEL_7:
            MicrosoftTelemetryAssertTriggeredArgsKM(
              "IXPTelAssert",
              196616,
              *(unsigned __int16 *)(v7 + v6 + 8) | 0x42A0000);
          }
        }
        ++v5;
      }
      while ( v5 != *(_DWORD *)(a1 + 24) );
    }
    v10 = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        v11 = *(_QWORD *)(a2 + 232);
        v12 = 192LL * v10;
        if ( (*(_DWORD *)(v12 + v11 + 28) & 0x2000006) == 0 )
        {
          v13 = *(_DWORD *)(a1 + 24);
          v14 = 0;
          if ( !v13 )
            goto LABEL_17;
          v15 = *(_QWORD *)(a1 + 232);
          while ( 1 )
          {
            v16 = 192LL * v14;
            if ( *(_WORD *)(v12 + v11 + 8) == *(_WORD *)(v16 + v15 + 8) )
              break;
            if ( ++v14 == v13 )
              goto LABEL_17;
          }
          if ( (*(_DWORD *)(v16 + v15 + 28) & 0x2000006) == 0 )
LABEL_17:
            MicrosoftTelemetryAssertTriggeredArgsKM(
              "IXPTelAssert",
              196616,
              *(unsigned __int16 *)(v12 + v11 + 8) | 0x4420000);
        }
        ++v10;
      }
      while ( v10 != *(_DWORD *)(a2 + 24) );
    }
  }
}
