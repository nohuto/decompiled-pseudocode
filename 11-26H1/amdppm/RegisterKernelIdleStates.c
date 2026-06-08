/*
 * XREFs of RegisterKernelIdleStates @ 0x140035700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DisplayKernelIdleStates @ 0x14002E040 (DisplayKernelIdleStates.c)
 *     DeregisterKernelIdleDomains @ 0x1400325B8 (DeregisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x140034EA8 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x140035148 (RegisterKernelCStates.c)
 *     RegisterKernelLpiStates @ 0x140035BF4 (RegisterKernelLpiStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1400360D8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x140042518 (RegisterKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  void *v1; // r15
  NTSTATUS ProcessorNumberFromIndex; // ebx
  char v4; // r12
  __int64 v5; // rax
  int *v6; // rbp
  int v7; // ebp
  __int64 v8; // rbp
  _DWORD *Pool2; // rsi
  struct _PROCESSOR_NUMBER *v10; // rax
  struct _PROCESSOR_NUMBER *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r9
  unsigned int i; // r11d
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
    return (unsigned int)((__int64 (*)(void))qword_140015B68)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 720) )
  {
    if ( qword_1400157A0 )
      qword_1400157A0(a1);
    *(_BYTE *)(a1 + 720) = 1;
    v4 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  v5 = *(_QWORD *)(a1 + 280);
  if ( (v5 & 0x200000200LL) != 0 )
  {
    v6 = *(int **)(a1 + 1144);
    if ( !v6 )
      return (unsigned int)-1073741823;
    v7 = *v6;
  }
  else
  {
    if ( (v5 & 0x20E0000000000LL) == 0 )
    {
      if ( (v5 & 0x7F077) == 0 )
        return (unsigned int)-1073741637;
      v7 = 3;
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(a1 + 544);
    if ( !v8 )
      return (unsigned int)-1073741823;
    v7 = *(_DWORD *)(v8 + 16);
  }
  if ( !v7 )
    return (unsigned int)-1073741823;
LABEL_17:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(88 * v7 + 56), 1919119952LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v10 = (struct _PROCESSOR_NUMBER *)ExAllocatePool2(64LL, (unsigned int)(32 * v7 + 104), 1919119952LL);
  v11 = v10;
  if ( v10 )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), v10 + 1);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_71;
    v11[24] = (struct _PROCESSOR_NUMBER)v7;
    *v11 = (struct _PROCESSOR_NUMBER)87;
    *(_QWORD *)&v11[2].Group = Pool2;
    Pool2[12] = v7;
    *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 1120);
    v14 = *(_QWORD *)(a1 + 280);
    if ( (v14 & 0x200000200LL) != 0 )
    {
      v15 = RegisterKernelPepIdleStatesV2(a1, v11, Pool2);
      if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 10;
LABEL_30:
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          3,
          v16,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          v15);
      }
    }
    else if ( (v14 & 0x20E0000000000LL) != 0 )
    {
      v15 = RegisterKernelLpiStates(a1, v11, Pool2);
      if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 11;
        goto LABEL_30;
      }
    }
    else if ( (v14 & 0x7F077) != 0 )
    {
      v15 = RegisterKernelCStates(a1, (__int64)v11, (__int64)Pool2);
      if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 12;
        goto LABEL_30;
      }
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    {
      v17 = 0LL;
      for ( i = 1; i <= 3; ++i )
      {
        v13 = 0LL;
        v12 = 0LL;
        if ( v11[24] )
        {
          do
          {
            v19 = 22LL * (unsigned int)v12;
            v20 = *(_QWORD *)&Pool2[v19 + 14];
            if ( v20 )
            {
              v21 = *(unsigned __int8 *)(v20 + 12);
              if ( v21 > 3 )
                v21 = 3;
              if ( v21 == i && (!v13 || *(_DWORD *)(v20 + 16) < *(_DWORD *)(v13 + 16)) )
              {
                v13 = *(_QWORD *)&Pool2[v19 + 14];
                *((_BYTE *)Pool2 + v17 + 21) = v12;
              }
            }
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < *(_DWORD *)&v11[24] );
          if ( v13 )
            v17 = (unsigned int)(v17 + 1);
        }
      }
      *((_BYTE *)Pool2 + 20) = v17;
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x7F277) != 0 )
    {
      if ( !*((_BYTE *)Pool2 + 20) )
      {
        ProcessorNumberFromIndex = -1073741823;
        goto LABEL_71;
      }
    }
    else
    {
      v22 = (unsigned int)v11[24];
      *((_BYTE *)Pool2 + 21) = 0;
      if ( v22 > 2 )
        LOBYTE(v22) = 2;
      *((_BYTE *)Pool2 + 20) = v22;
      if ( (_BYTE)v22 == 2 )
        *((_BYTE *)Pool2 + 22) = LOBYTE(v11[24].Group) - 1;
    }
    DisplayKernelIdleStates((__int64)v11, v12, v13);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    if ( (*(_QWORD *)(a1 + 280) & 0x100200000200LL) != 0 && *(_QWORD *)(a1 + 712) )
      HIBYTE(v11[4].Group) = 1;
    v23 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_140015910)(v11);
    ProcessorNumberFromIndex = v23;
    if ( v23 >= 0 )
    {
      v1 = *(void **)(a1 + 712);
      *(_QWORD *)(a1 + 712) = Pool2;
      if ( v4 )
        RegisterIdleComplete(a1);
      Pool2 = 0LL;
      if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 )
      {
        v25 = RegisterKernelIdleDomains(a1);
        if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v26,
            3,
            14,
            (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
            v25);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400155D8);
      ProcessorNumberFromIndex = 0;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          3,
          13,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          v23);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400155D8);
    }
LABEL_71:
    ExFreePoolWithTag(v11, (ULONG)1919119952);
    if ( !Pool2 )
      goto LABEL_73;
    goto LABEL_72;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_72:
  ExFreePoolWithTag(Pool2, (ULONG)1919119952);
LABEL_73:
  if ( v1 )
    ExFreePoolWithTag(v1, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
