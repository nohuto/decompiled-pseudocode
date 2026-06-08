/*
 * XREFs of RegisterKernelPlatformStates @ 0x1400398E4
 * Callers:
 *     RegisterIdleComplete @ 0x140038858 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x1400042D4 (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 *     ValidatePlatformIdleState @ 0x1400437F8 (ValidatePlatformIdleState.c)
 *     ProcLibTracePlatformIdleStates @ 0x140044500 (ProcLibTracePlatformIdleStates.c)
 *     PepQueryName @ 0x140047C98 (PepQueryName.c)
 */

__int64 __fastcall RegisterKernelPlatformStates(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  int v6; // edx
  char *Pool2; // rdi
  size_t v8; // r13
  int v9; // edx
  _DWORD *v10; // r15
  __int64 v11; // rbp
  char *v12; // rbx
  int v13; // ecx
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  bool IsAnyHypervisorPresent; // al
  void *v21; // rcx
  PVOID *v22; // rsi
  __int64 v23; // rbp

  v1 = a1;
  v2 = dword_1400191A4;
  if ( byte_140019AD0 && dword_140019ACC > (unsigned int)dword_1400191A4 )
    v2 = dword_140019ACC;
  v3 = (unsigned int)dword_140019854;
  if ( !dword_140019854 )
    return 0;
  v5 = (48 * dword_140019854 + 51) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v5 + 8 * dword_140019854 * v2, 1919119952LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        4,
        16,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  v8 = (unsigned int)(16 * v2 + 40);
  v10 = (_DWORD *)ExAllocatePool2(256LL, v8, 1919119952LL);
  if ( v10 )
  {
    v11 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        memset(v10, 0, v8);
        *v10 = v11;
        v10[8] = v2;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD))qword_140019548)(
                                     *(_QWORD *)(v1 + 1120),
                                     v10,
                                     0LL);
        if ( ProcessorNumberFromIndex < 0 )
          break;
        ProcessorNumberFromIndex = ValidatePlatformIdleState(v10);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_32;
        v12 = &Pool2[48 * v11];
        PepQueryName(a1, (unsigned int)v11, 27LL, v12 + 72);
        *((_DWORD *)v12 + 14) = v10[5];
        *((_DWORD *)v12 + 15) = v10[6];
        v12[53] = *((_BYTE *)v10 + 16);
        if ( *((_QWORD *)v10 + 1) )
        {
          Pool2[48 * v11 + 52] = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(ULONG *)(*((_QWORD *)v10 + 1) + 56LL),
                                       (PPROCESSOR_NUMBER)v12 + 12);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_32;
        }
        v13 = v10[7];
        v14 = 0LL;
        v15 = v5;
        v5 += 8 * v2;
        *(_DWORD *)&Pool2[48 * v11 + 64] = v13;
        *(_QWORD *)&Pool2[48 * v11 + 88] = &Pool2[v15];
        if ( v13 )
        {
          do
          {
            v16 = *(_QWORD *)&Pool2[48 * v11 + 88];
            *(_DWORD *)(v16 + 8 * v14) = *(_DWORD *)(*(_QWORD *)&v10[4 * (unsigned int)v14 + 10] + 56LL);
            *(_BYTE *)(v16 + 8 * v14 + 4) = v10[4 * v14 + 12];
            *(_BYTE *)(v16 + 8 * v14 + 6) = BYTE2(v10[4 * (unsigned int)v14 + 12]);
            *(_BYTE *)(v16 + 8 * v14 + 5) = BYTE1(v10[4 * (unsigned int)v14 + 12]);
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *(_DWORD *)&Pool2[48 * v11 + 64] );
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= (unsigned int)v3 )
          goto LABEL_26;
        v1 = a1;
        v8 = (unsigned int)(16 * v2 + 40);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 18;
        v18 = 3;
        v19 = 2;
LABEL_25:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          v17,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
LABEL_26:
      *(_DWORD *)Pool2 = 87;
      *((_DWORD *)Pool2 + 1) = dword_140019854;
      *((_QWORD *)Pool2 + 4) = PepQueryPlatformStateResidency;
      IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
      v21 = PepIdleVmTest;
      if ( !IsAnyHypervisorPresent )
        v21 = PepIdleTest;
      *((_QWORD *)Pool2 + 1) = v21;
      *((_QWORD *)Pool2 + 2) = PepIdlePreExecute;
      *((_QWORD *)Pool2 + 3) = PepIdleComplete;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_1400194F0)(Pool2);
      if ( ProcessorNumberFromIndex >= 0 )
      {
        Src = Pool2;
        Pool2 = 0LL;
        byte_140019858 = 1;
        ProcLibTracePlatformIdleStates(0LL);
        ProcessorNumberFromIndex = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 19;
        v18 = 2;
        v19 = 3;
        goto LABEL_25;
      }
    }
LABEL_32:
    ExFreePoolWithTag(v10, (ULONG)1919119952);
    if ( !Pool2 )
      return (unsigned int)ProcessorNumberFromIndex;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4,
      17,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_33:
  if ( (_DWORD)v3 )
  {
    v22 = (PVOID *)(Pool2 + 80);
    v23 = v3;
    do
    {
      if ( *v22 )
        ExFreePoolWithTag(*v22, (ULONG)1919119952);
      v22 += 6;
      --v23;
    }
    while ( v23 );
  }
  ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)ProcessorNumberFromIndex;
}
