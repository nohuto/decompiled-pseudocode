/*
 * XREFs of HalGetMessageRoutingInfo @ 0x1404254A0
 * Callers:
 *     IopConnectMessageBasedInterrupt @ 0x140A990F0 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     HalpInterruptAffinityIsSteerable @ 0x1404259F4 (HalpInterruptAffinityIsSteerable.c)
 *     HalpGetProcessorStateByNtIndex @ 0x140425B78 (HalpGetProcessorStateByNtIndex.c)
 */

__int64 __fastcall HalGetMessageRoutingInfo(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // r15d
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rbx
  char v8; // di
  int IsSteerable; // ecx
  int v10; // r12d
  __int64 v11; // r8
  char v12; // r11
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // r10d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // eax
  __int64 result; // rax
  int v27; // r10d
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdx
  int i; // eax
  unsigned int v31; // ecx
  char v32; // [rsp+80h] [rbp+40h] BYREF

  v2 = *(_DWORD *)a1;
  v32 = 0;
  v5 = 0;
  if ( v2 > 1 )
  {
    HalpInterruptLastProblemLine = 1216;
    goto LABEL_39;
  }
  v6 = (unsigned __int64 *)(a1 + 16);
  v7 = *v6;
  if ( !*v6 || (v8 = 1, ((v7 - 1) & v7) != 0) )
    v8 = 0;
  IsSteerable = HalpInterruptAffinityIsSteerable(v6, &v32);
  if ( IsSteerable < 0 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    result = (unsigned int)IsSteerable;
    HalpInterruptLastProblem = 39;
    HalpInterruptLastProblemStatus = IsSteerable;
    HalpInterruptLastProblemLine = 1242;
    return result;
  }
  v10 = *(_DWORD *)(a1 + 32);
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( v10 == 1 )
  {
    if ( !v8 && !v32 )
    {
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemStatus = -1073741811;
      HalpInterruptLastProblemLine = 1276;
      goto LABEL_41;
    }
    v19 = v11 + 1;
    while ( !v7 )
    {
      v11 = (unsigned __int16)(v11 + 1);
      if ( (unsigned int)v11 >= v19 )
      {
        v23 = -1073741275;
        goto LABEL_86;
      }
      v7 = *(_QWORD *)(8 * v11 + 8);
    }
    _BitScanForward64((unsigned __int64 *)&v20, v7);
    v21 = v7 & ~(1LL << v20);
    v22 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
          + 64 * (unsigned __int16)v11
          + (unsigned __int8)v20);
    v23 = 0;
    if ( v32 )
    {
LABEL_72:
      while ( v23 >= 0 )
      {
        if ( (unsigned int)v22 >= (unsigned int)HalpInterruptProcessorCount )
        {
          v23 = -1073741811;
          break;
        }
        v20 = (unsigned int)(unsigned __int16)v11 + 1;
        while ( 1 )
        {
          if ( v21 )
          {
            _BitScanForward64((unsigned __int64 *)&v20, v21);
            v21 &= ~(1LL << v20);
            v22 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                  + 64 * (unsigned __int16)v11
                  + (unsigned __int8)v20);
            v23 = 0;
            goto LABEL_72;
          }
          v11 = (unsigned __int16)(v11 + 1);
          if ( (unsigned int)v11 >= (unsigned int)v20 )
            break;
          v21 = *(_QWORD *)(8 * v11 + 8);
        }
        v23 = -1073741275;
      }
      if ( (unsigned int)v22 >= (unsigned int)HalpInterruptProcessorCount )
      {
LABEL_86:
        HalpInterruptLastProblem = 21;
        HalpInterruptLastProblemStatus = v23;
        HalpInterruptLastProblemLine = 1301;
        goto LABEL_41;
      }
    }
    else if ( (unsigned int)v22 >= (unsigned int)HalpInterruptProcessorCount )
    {
      v24 = -1073741811;
LABEL_61:
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemStatus = v24;
      HalpInterruptLastProblemLine = 1312;
      goto LABEL_41;
    }
    if ( HalpGetProcessorStateByNtIndex(v22, v20, v11, 3221226021LL, 0LL) )
      goto LABEL_29;
    goto LABEL_61;
  }
  if ( *(_DWORD *)(a1 + 32) != 2 )
  {
    if ( *(_DWORD *)(a1 + 32) == 3 )
    {
      if ( HalpInterruptClusterModeEnabled )
      {
        v12 = 0;
        v13 = v11 + 1;
        while ( 1 )
        {
          if ( v7 )
          {
            _BitScanForward64(&v14, v7);
            v7 &= ~(1LL << v14);
            v5 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                 + 64 * (unsigned __int16)v11
                 + (unsigned __int8)v14);
            v15 = 0;
            goto LABEL_12;
          }
          v11 = (unsigned __int16)(v11 + 1);
          if ( (unsigned int)v11 >= v13 )
            break;
          v7 = *(_QWORD *)(8 * v11 + 8);
        }
        v15 = -1073741275;
LABEL_12:
        v16 = 0;
        while ( 1 )
        {
LABEL_13:
          if ( v15 < 0 )
            goto LABEL_29;
          if ( v5 >= (unsigned int)HalpInterruptProcessorCount )
          {
            HalpInterruptLastProblem = 21;
            HalpInterruptLastProblemLine = 1388;
            goto LABEL_40;
          }
          if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v5) != 6 )
          {
            HalpInterruptLastProblemLine = 1403;
            goto LABEL_39;
          }
          if ( !v12 )
            break;
          if ( v16 != *(_DWORD *)(HalpInterruptTargets + 24LL * v5 + 8) )
          {
            if ( !v32 )
            {
              HalpInterruptLastProblemLine = 1448;
              goto LABEL_39;
            }
            goto LABEL_36;
          }
LABEL_18:
          v17 = (unsigned __int16)v11 + 1;
          while ( 1 )
          {
            if ( v7 )
            {
              _BitScanForward64(&v18, v7);
              v7 &= ~(1LL << v18);
              v5 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                   + 64 * (unsigned __int16)v11
                   + (unsigned __int8)v18);
              v15 = 0;
              goto LABEL_13;
            }
            v11 = (unsigned __int16)(v11 + 1);
            if ( (unsigned int)v11 >= v17 )
              break;
            v7 = *(_QWORD *)(8 * v11 + 8);
          }
          v15 = -1073741275;
        }
        v12 = 1;
LABEL_36:
        v16 = *(_DWORD *)(HalpInterruptTargets + 24LL * v5 + 8);
        goto LABEL_18;
      }
      HalpInterruptLastProblemLine = 1377;
    }
    else
    {
      HalpInterruptLastProblemLine = 1466;
    }
    goto LABEL_39;
  }
  if ( HalpInterruptClusterModeEnabled )
  {
    HalpInterruptLastProblemLine = 1329;
LABEL_39:
    HalpInterruptLastProblem = 20;
LABEL_40:
    HalpInterruptLastProblemStatus = 0;
LABEL_41:
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    return 3221225485LL;
  }
  v27 = 0;
  v28 = v11 + 1;
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_53;
    v11 = (unsigned __int16)(v11 + 1);
    if ( (unsigned int)v11 >= v28 )
      break;
    v7 = *(_QWORD *)(8 * v11 + 8);
  }
LABEL_88:
  for ( i = -1073741275; i >= 0; i = 0 )
  {
    if ( v5 >= (unsigned int)HalpInterruptProcessorCount )
    {
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemStatus = i;
      HalpInterruptLastProblemLine = 1340;
      goto LABEL_41;
    }
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v5) != 5 )
    {
      HalpInterruptLastProblemLine = 1350;
      goto LABEL_39;
    }
    v27 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v5 + 8);
    v31 = (unsigned __int16)v11 + 1;
    while ( !v7 )
    {
      v11 = (unsigned __int16)(v11 + 1);
      if ( (unsigned int)v11 >= v31 )
        goto LABEL_88;
      v7 = *(_QWORD *)(8 * v11 + 8);
    }
LABEL_53:
    _BitScanForward64(&v29, v7);
    v7 &= ~(1LL << v29);
    v5 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
         + 64 * (unsigned __int16)v11
         + (unsigned __int8)v29);
  }
  if ( !v27 )
    return 3221225485LL;
LABEL_29:
  v25 = *(_DWORD *)a1;
  *a2 = 1;
  if ( v25 )
  {
    a2[2] = 3;
    a2[20] = v10;
  }
  else
  {
    a2[2] = 1;
    a2[21] = *(_DWORD *)(a1 + 40);
    a2[20] = *(_DWORD *)(a1 + 44);
    a2[22] = *(_DWORD *)(a1 + 48);
  }
  return 0LL;
}
