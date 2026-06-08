/*
 * XREFs of UpdateKernelPlatformStates @ 0x1400370BC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400278C0 (AcpiCStateNotifyWorker.c)
 *     PepUpdatePlatformStateWorker @ 0x1400390B0 (PepUpdatePlatformStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memmove @ 0x14000E740 (memmove.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     ValidatePlatformIdleState @ 0x140031CA4 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x140042220 (ProcLibTracePlatformIdleStates.c)
 */

__int64 __fastcall UpdateKernelPlatformStates(__int64 a1, char a2)
{
  char v2; // r15
  _DWORD *v3; // rsi
  unsigned int *v4; // rbx
  int v5; // r13d
  unsigned int v6; // r14d
  PVOID v7; // rdi
  unsigned int v8; // r15d
  unsigned int *Pool2; // rax
  signed __int64 v10; // rdi
  unsigned int *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  size_t v15; // r8
  int v16; // edx
  PVOID v17; // rbp
  int ProcessorNumberFromIndex; // edi
  size_t v19; // rdi
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r8
  __int64 v23; // r15
  unsigned int *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r10
  __int64 v27; // r8
  int v28; // edx
  char v32; // [rsp+90h] [rbp+18h]

  v32 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155D8,
    0LL);
  v7 = Src;
  if ( Src )
  {
    v6 = *((_DWORD *)Src + 1);
    v5 = dword_1400155D4;
    v8 = (48 * v6 + 51) & 0xFFFFFFFC;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v8 + 8 * dword_1400155D4 * v6, 1919119952LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v7, (int)(48 * v6 + 48));
      if ( v6 )
      {
        v10 = (_BYTE *)v7 - (_BYTE *)v4;
        v11 = v4 + 16;
        v12 = v6;
        do
        {
          v13 = v8;
          v8 += 8 * v5;
          v14 = (char *)v4 + v13;
          v15 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v14;
          memmove(v14, *(const void **)((char *)v11 + v10 + 24), v15);
          v11 += 12;
          --v12;
        }
        while ( v12 );
        v3 = 0LL;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  v17 = 0LL;
  if ( !v4 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        4,
        24,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_28:
    *((_BYTE *)v4 + 40) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_140015920)(v4);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          3,
          26,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400155E8,
        0LL);
      v17 = Src;
      Src = v4;
      v4 = 0LL;
      ProcLibTracePlatformIdleStates(0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400155E8);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
    if ( !v3 )
    {
LABEL_34:
      if ( !v4 )
        goto LABEL_36;
      goto LABEL_35;
    }
LABEL_33:
    ExFreePoolWithTag(v3, (ULONG)1919119952);
    goto LABEL_34;
  }
  v19 = (unsigned int)(16 * v5 + 40);
  v3 = (_DWORD *)ExAllocatePool2(256LL, v19, 1919119952LL);
  if ( v3 )
  {
    v21 = 0LL;
    if ( v6 )
    {
      do
      {
        memset(v3, 0, v19);
        LOBYTE(v22) = 1;
        *v3 = v21;
        v3[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64))qword_140015978)(*(_QWORD *)(a1 + 1120), v3, v22) >= 0 )
        {
          ProcessorNumberFromIndex = ValidatePlatformIdleState(v3);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_33;
          v32 = 1;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1400155E8,
            0LL);
          v23 = 12 * v21;
          v24 = &v4[12 * v21 + 12];
          v24[2] = v3[5];
          v24[3] = v3[6];
          *((_BYTE *)v24 + 5) = *((_BYTE *)v3 + 16);
          if ( *((_QWORD *)v3 + 1) )
          {
            LOBYTE(v4[v23 + 13]) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(ULONG *)(*((_QWORD *)v3 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v24);
            if ( ProcessorNumberFromIndex < 0 )
            {
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                qword_1400155E8);
              goto LABEL_33;
            }
          }
          memset(*(void **)&v4[v23 + 22], 0, 8LL * v4[v23 + 16]);
          v25 = v3[7];
          v26 = 0LL;
          for ( v4[v23 + 16] = v25; (unsigned int)v26 < v4[v23 + 16]; v26 = (unsigned int)(v26 + 1) )
          {
            v27 = *(_QWORD *)&v4[v23 + 22];
            *(_DWORD *)(v27 + 8 * v26) = *(_DWORD *)(*(_QWORD *)&v3[4 * (unsigned int)v26 + 10] + 56LL);
            *(_BYTE *)(v27 + 8 * v26 + 4) = v3[4 * v26 + 12];
            *(_BYTE *)(v27 + 8 * v26 + 6) = BYTE2(v3[4 * (unsigned int)v26 + 12]);
            *(_BYTE *)(v27 + 8 * v26 + 5) = BYTE1(v3[4 * (unsigned int)v26 + 12]);
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1400155E8);
          v19 = (unsigned int)(16 * v5 + 40);
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < v6 );
      if ( v32 )
        goto LABEL_28;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      4,
      25,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_35:
  ExFreePoolWithTag(v4, (ULONG)1919119952);
LABEL_36:
  if ( v17 )
    ExFreePoolWithTag(v17, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
