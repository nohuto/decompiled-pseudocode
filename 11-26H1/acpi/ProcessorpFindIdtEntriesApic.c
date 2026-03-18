/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1400BD160
 * Callers:
 *     <none>
 * Callees:
 *     IntPartFreeMemory @ 0x140071F84 (IntPartFreeMemory.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400C4EC4 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqPolicyGetDevicePolicy @ 0x1400C50A8 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1400D092C (ProcessorpSelectProcessorSetFromPartitions.c)
 *     ProcessorpSelectProcessorSetFromClusters @ 0x1400D226C (ProcessorpSelectProcessorSetFromClusters.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1400D2588 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpValidateTargetSet @ 0x1400D323C (ProcessorpValidateTargetSet.c)
 *     IcIsInterruptTypeSecondary @ 0x1400D3968 (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindIdtEntriesApic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        unsigned int a8)
{
  __int64 v8; // rdi
  int v10; // r14d
  int DeviceIdtAssignment; // ebx
  __int128 v12; // xmm0
  NTSTATUS result; // eax
  unsigned __int16 v14; // r14
  char v15; // r12
  __int64 v16; // r13
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // r8
  NTSTATUS AffinitizedIdtEntries; // esi
  KAFFINITY GroupAffinity; // rax
  __int64 v22; // r8
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  char v25; // cl
  __int64 v26; // rdi
  char v27; // al
  unsigned int v28; // r14d
  char v29; // al
  __int64 v30; // r8
  _BYTE v31[4]; // [rsp+50h] [rbp-59h] BYREF
  _WORD v32[2]; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-4Dh]
  __int128 v35; // [rsp+60h] [rbp-49h] BYREF
  __int64 v36; // [rsp+70h] [rbp-39h] BYREF
  __int64 v37; // [rsp+78h] [rbp-31h]
  __int128 v38; // [rsp+80h] [rbp-29h] BYREF
  __int128 v39; // [rsp+90h] [rbp-19h]
  void *v40; // [rsp+A0h] [rbp-9h]
  __int64 v41; // [rsp+A8h] [rbp-1h]
  char v42[8]; // [rsp+120h] [rbp+77h]

  v34 = a4;
  v41 = a3;
  v8 = a3;
  v37 = a1;
  LODWORD(v36) = 0;
  v10 = a1;
  v31[0] = 0;
  v38 = 0LL;
  v32[0] = 0;
  v39 = 0LL;
  v33 = 0;
  v35 = 0LL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v38);
  if ( DeviceIdtAssignment >= 0 )
  {
    v12 = v38;
    *(_DWORD *)(v8 + 32) = DWORD1(v39);
    v32[0] = IrqMachinePolicy;
    *(_BYTE *)(v8 + 4) = 1;
    *(_OWORD *)(v8 + 16) = v12;
    IrqPolicyGetDevicePolicy(v10, a2, (unsigned int)&v35, (unsigned int)&v36, (__int64)v32, (__int64)v31);
    *(_WORD *)(v8 + 6) = v32[0];
    return DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(v8 + 4) )
  {
    v14 = *(_WORD *)(v8 + 6);
    v15 = *(_BYTE *)(v8 + 8);
    v35 = *(_OWORD *)(v8 + 16);
  }
  else
  {
    if ( (int)IrqPolicyGetDevicePolicy(v10, a2, (unsigned int)&v35, (unsigned int)&v36, (__int64)v32, (__int64)v31) >= 0 )
    {
      v14 = v32[0];
    }
    else
    {
      v14 = IrqMachinePolicy;
      v35 = 0LL;
    }
    v15 = v31[0];
  }
  v16 = 16LL;
  v36 = 16LL;
  v32[0] = v14;
  v17 = a7 & 1;
  v42[0] = a7 & 1;
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
  {
    if ( v34 != 1 )
      return -1073741811;
    v35 = 0LL;
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( !GroupAffinity )
      return -1073741823;
    *(_QWORD *)&v35 = 1LL << RtlFindLeastSignificantBit(GroupAffinity);
    v15 = 0;
    AffinitizedIdtEntries = ProcessorpFindAffinitizedIdtEntries(
                              v37,
                              (__int64 *)&v35,
                              v22,
                              v17,
                              1u,
                              a5,
                              a6,
                              a8,
                              &v33,
                              0LL);
LABEL_15:
    if ( AffinitizedIdtEntries < 0 )
      return AffinitizedIdtEntries;
LABEL_16:
    v23 = v35;
    *(_DWORD *)(v8 + 32) = v33;
    *(_OWORD *)(v8 + v16) = v23;
    *(_WORD *)(v8 + 6) = v14;
    *(_BYTE *)(v8 + 8) = v15;
    *(_BYTE *)(v8 + 4) = 1;
    return AffinitizedIdtEntries;
  }
  if ( !(_QWORD)v35 )
    goto LABEL_28;
  if ( (unsigned __int8)ProcessorpValidateTargetSet(&v35, v18, v19, 0LL) )
  {
    result = ProcessorpFindAffinitizedIdtEntries(v37, (__int64 *)&v35, v19, v42[0], v34, a5, a6, a8, &v33, 0LL);
    LODWORD(v18) = result;
    if ( result >= 0 )
    {
      v24 = v35;
      *(_DWORD *)(v8 + 32) = v33;
      *(_OWORD *)(v8 + 16) = v24;
      *(_WORD *)(v8 + 6) = v14;
      *(_BYTE *)(v8 + 8) = v15;
      *(_BYTE *)(v8 + 4) = 1;
      return result;
    }
  }
  else
  {
    LODWORD(v18) = -1073741637;
  }
  if ( v14 != 4 )
  {
LABEL_28:
    if ( ProcessorpPreferredCpuSetActive || IrqMachinePolicy != 6 )
      goto LABEL_42;
    v38 = 0LL;
    LODWORD(v38) = a5;
    BYTE6(v38) = 1;
    *(_QWORD *)&v39 = 0LL;
    v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    if ( a5 + 0x100000 > 0xFFFFE )
      v25 = 1;
    BYTE4(v38) = v25;
    BYTE5(v38) = a6 & 1;
    *((_QWORD *)&v38 + 1) = KeQueryGroupAffinity(0);
    AffinitizedIdtEntries = -1073741275;
    if ( !(unsigned __int8)IrqPolicyQueryInterruptSteeringEnabled(&v38) || v14 != 6 )
      goto LABEL_42;
    v26 = v37;
    v27 = 0;
    v28 = v34;
    v38 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
    v31[0] = 0;
    v33 = 0;
    while ( !v27 )
    {
      LOBYTE(v18) = v15;
      AffinitizedIdtEntries = ProcessorpSelectProcessorSetFromPartitions(6LL, v18, &v35, &v38);
      if ( AffinitizedIdtEntries < 0 )
        break;
      AffinitizedIdtEntries = ProcessorpFindAffinitizedIdtEntries(
                                v26,
                                (__int64 *)&v35,
                                v19,
                                v42[0],
                                v28,
                                a5,
                                a6,
                                a8,
                                &v33,
                                v31);
      if ( AffinitizedIdtEntries >= 0 )
        break;
      v27 = v31[0];
    }
    v8 = v41;
    v14 = v32[0];
    v16 = v36;
    if ( v40 )
      IntPartFreeMemory(v40);
    if ( AffinitizedIdtEntries < 0 )
    {
LABEL_42:
      v33 = 0;
      v40 = 0LL;
      v29 = 0;
      AffinitizedIdtEntries = -1073741275;
      v31[0] = 0;
      v38 = 0LL;
      v39 = 0LL;
      while ( !v29 )
      {
        LOBYTE(v19) = ProcessorpPreferredCpuSetActive;
        LOBYTE(v18) = v15;
        AffinitizedIdtEntries = ProcessorpSelectProcessorSetFromClusters(
                                  v14,
                                  v18,
                                  v19,
                                  (unsigned int)&v35,
                                  (__int64)&v38);
        if ( AffinitizedIdtEntries < 0 )
          break;
        AffinitizedIdtEntries = ProcessorpFindAffinitizedIdtEntries(
                                  v37,
                                  (__int64 *)&v35,
                                  v30,
                                  v42[0],
                                  v34,
                                  a5,
                                  a6,
                                  a8,
                                  &v33,
                                  v31);
        if ( AffinitizedIdtEntries >= 0 )
          goto LABEL_15;
        v29 = v31[0];
      }
      return AffinitizedIdtEntries;
    }
    goto LABEL_16;
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v14 = IrqMachinePolicy;
    v32[0] = IrqMachinePolicy;
    goto LABEL_28;
  }
  return v18;
}
