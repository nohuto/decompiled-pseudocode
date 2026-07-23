/*
 * XREFs of PpmExitCoordinatedIdle @ 0x1402F93B8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PpmExitCoordinatedIdleState @ 0x1404EC24C (PpmExitCoordinatedIdleState.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1404F3450 (PpmEventCoordinatedIdleTransition.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x1405E6280 (KdCallPowerHandlers.c)
 *     Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline @ 0x140603E34 (Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x14060629C (PpmUpdatePlatformIdleAccounting.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140613B64 (PopIdleWakeNotifyWakeSource.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        int a10)
{
  char v10; // r11
  unsigned int v11; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 result; // rax
  unsigned int v17; // r8d
  __int64 v18; // r10
  int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  char v25; // al
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 v32; // rdi
  int v33; // eax
  char v34; // [rsp+30h] [rbp-48h] BYREF
  char v35; // [rsp+31h] [rbp-47h]
  int v36; // [rsp+34h] [rbp-44h]
  int v37; // [rsp+38h] [rbp-40h] BYREF
  int v38; // [rsp+3Ch] [rbp-3Ch]

  v10 = 0;
  v11 = -1;
  v34 = 0;
  v14 = a1;
  v36 = -1;
  v15 = 0;
  v37 = -1;
  if ( !PpmPlatformStates )
    goto LABEL_2;
  if ( !a3 )
  {
    v17 = 0;
    if ( *(_DWORD *)(a2 + 4) )
    {
      do
      {
        v18 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4LL * v17);
        if ( (*(_DWORD *)(448 * v18 + PpmPlatformStates + 416) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(448 * v18 + PpmPlatformStates + 416) = *(_DWORD *)(448 * v18 + PpmPlatformStates + 416) & 0xFE000FFF | ((*(_DWORD *)(448 * v18 + PpmPlatformStates + 416) & 0xFFF | 0x2000) << 12);
        if ( a5 )
          ++*(_DWORD *)(1032 * v18 + *(_QWORD *)(PpmPlatformStates + 48) + 40);
        ++v17;
      }
      while ( v17 < *(_DWORD *)(a2 + 4) );
      v14 = a1;
    }
  }
  v19 = *(_DWORD *)PpmPlatformStates;
  while ( v19 )
  {
    v20 = PpmPlatformStates;
    v21 = v19 - 1;
    v22 = *(unsigned int *)(v14 + 36);
    v23 = 448LL * (unsigned int)(v19 - 1);
    v35 = v10;
    v38 = v19 - 1;
    v24 = KeCheckProcessorAffinityEx(v23 + PpmPlatformStates + 128, v22);
    v10 = 0;
    if ( !v24 )
      goto LABEL_54;
    v25 = PpmExitCoordinatedIdleState(v23 + v20 + 416, &v34);
    v10 = 0;
    if ( !v25 )
      goto LABEL_54;
    v26 = v15++;
    *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v26) = v21;
    if ( v15 == 1 && *(_BYTE *)(v23 + v20 + 121) )
    {
      v36 = v21;
      if ( a3 )
      {
        v27 = a4;
        if ( a4 >= 0 && !a5 && v21 == PpmDripsStateIndex && a10 != 130 )
        {
          v35 = 1;
          if ( a8 )
            ++*(_QWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 16LL);
        }
        if ( *(_BYTE *)(v23 + v20 + 120) )
        {
          KdCallPowerHandlers(1LL);
          LOBYTE(v28) = 1;
          KdPowerTransitionEx(2147483649LL, v28);
          v27 = a4;
        }
        if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x100) != 0
          && v27 >= 0
          && !a5
          && a7
          && v21 == PpmDripsStateIndex )
        {
          KeBugCheckEx(0xA0u, 0x599uLL, v21, 0LL, 0LL);
        }
      }
      *(_DWORD *)(PpmPlatformStates + 56) = 0;
    }
    IsEnabledDeviceUsageNoInline = Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline();
    v10 = 0;
    if ( !IsEnabledDeviceUsageNoInline )
    {
      if ( a5 )
        goto LABEL_54;
LABEL_35:
      v30 = *(_QWORD *)(v23 + v20 + 424);
      v31 = *(_QWORD *)(PpmPlatformStates + 48) + 1032LL * v21;
      if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !v30 )
          ++*(_DWORD *)(v31 + 80);
        *(_QWORD *)(v23 + v20 + 424) = 0LL;
      }
      if ( a6 >= v30 )
      {
        v32 = a6 - v30;
        *(_QWORD *)(v31 + 72) += a6 - v30;
      }
      else
      {
        v32 = 0LL;
      }
      if ( v35 )
        PopIdleWakeNotifyWakeSource(v36, a10, a9, v30, a6, (__int64)&v37);
      v33 = Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline();
      v10 = 0;
      if ( v33 || a4 >= 0 || !v34 )
      {
        ++*(_DWORD *)(v31 + 48);
        PpmUpdatePlatformIdleAccounting(v31 + 40, v32);
      }
      else
      {
        ++*(_DWORD *)(v31 + 44);
      }
      goto LABEL_54;
    }
    if ( a3 )
      goto LABEL_35;
    if ( a4 < 0 && !a5 && v34 )
      ++*(_DWORD *)(1032LL * v21 + *(_QWORD *)(PpmPlatformStates + 48) + 44);
LABEL_54:
    v19 = v38;
    v14 = a1;
  }
  if ( a3 )
    PpmEventCoordinatedIdleTransition(0LL, v15, *(_QWORD *)(a2 + 16), &v37);
  v11 = v36;
LABEL_2:
  result = v11;
  *(_DWORD *)(a2 + 4) = v15;
  return result;
}
