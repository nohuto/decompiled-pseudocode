/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1400C4C18
 * Callers:
 *     IrqArbUpdateInterruptProperties @ 0x1400BE2F4 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     IrqArbGsivFromIrq @ 0x1400C4EA4 (IrqArbGsivFromIrq.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400C4EC4 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqPolicySetDeviceAffinity @ 0x1400C4FB8 (IrqPolicySetDeviceAffinity.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm1
  PVOID *p_Owner; // rax
  __int128 v4; // xmm2
  struct _DEVICE_OBJECT *Owner; // r12
  char v6; // di
  char v7; // r15
  unsigned int v8; // r14d
  PRTL_RANGE v9; // r13
  unsigned int v10; // eax
  NTSTATUS DeviceIdtAssignment; // ebx
  unsigned int v12; // ecx
  _DWORD *UserData; // rbx
  char *Pool2; // rax
  char *Data; // rsi
  __int128 v17; // xmm0
  unsigned int v18; // edi
  unsigned int v19; // eax
  _DWORD *v20; // rbx
  __int64 v21; // r12
  int v22; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-69h] BYREF
  ULONG Size; // [rsp+48h] [rbp-61h]
  PVOID *v25; // [rsp+50h] [rbp-59h]
  struct _DEVICE_OBJECT *v26; // [rsp+58h] [rbp-51h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-49h] BYREF
  __int128 v28; // [rsp+80h] [rbp-29h]
  __int128 v29; // [rsp+90h] [rbp-19h]
  __int128 v30; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+7h]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = a2[1];
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v6 = 0;
  v7 = 0;
  v25 = &a1->Owner;
  v8 = 0;
  v26 = Owner;
  v9 = a1;
  Range = a1;
  v28 = v2;
  v29 = v4;
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v4;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v10 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v10, 0LL, &v30);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = DWORD2(v31);
      v8 += DWORD2(v31);
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v6 )
      {
        IrqPolicySetDeviceAffinity(Owner, &v30);
        v12 = DWORD2(v31);
        v6 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v25;
  }
  if ( v8 )
  {
    Size = 88 * (v8 - 1) + 96;
    Pool2 = (char *)ExAllocatePool2(256LL, Size, 1232102209LL);
    Data = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v17 = v28;
    *(_DWORD *)Pool2 = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v17;
    v18 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v29;
    while ( 1 )
    {
      if ( v9->Owner == *v25 )
      {
        v19 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v19, 0LL, &v30);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_30;
        if ( v7 )
          v18 -= DWORD2(v31);
        v20 = Range->UserData;
        v21 = 88LL * v18;
        memmove(&Data[v21 + 8], v20 + 8, 88LL * DWORD2(v31));
        v22 = v20[1];
        if ( (v22 & 0x10) != 0 && v20[2] == 1 )
        {
          *(_DWORD *)&Data[v21 + 68] |= 1u;
          v22 = v20[1];
        }
        if ( !v7 )
          v18 += DWORD2(v31);
        Owner = v26;
        v20[1] = v22 & 0xFFFFFFFE;
      }
      if ( RtlGetNextRange(&Iterator, &Range, 1u) == -2147483622 || v18 >= v8 )
        break;
      v9 = Range;
    }
    DeviceIdtAssignment = IoSetDevicePropertyData(Owner, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, Size, Data);
LABEL_30:
    ExFreePoolWithTag(Data, 0);
  }
  return (unsigned int)DeviceIdtAssignment;
}
