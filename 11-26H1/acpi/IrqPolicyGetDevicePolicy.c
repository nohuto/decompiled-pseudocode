/*
 * XREFs of IrqPolicyGetDevicePolicy @ 0x1400C50A8
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400BD160 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 *     OSGetRegistryValue @ 0x1400C55FC (OSGetRegistryValue.c)
 *     IrqPolicyGetSubKey @ 0x1400C570C (IrqPolicyGetSubKey.c)
 *     IrqTraceAffinityPolicy @ 0x1400D265C (IrqTraceAffinityPolicy.c)
 */

__int64 __fastcall IrqPolicyGetDevicePolicy(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int16 *a5,
        __int64 a6)
{
  __int16 v9; // di
  unsigned __int64 v10; // r12
  int v11; // ebx
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  int RegistryValues; // r15d
  unsigned __int16 v17; // r8
  int v18; // eax
  int *v19; // rcx
  bool v20; // zf
  _BYTE *v21; // rcx
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-B0h]
  __int16 *v29; // [rsp+58h] [rbp-A8h]
  int *v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  _QWORD v32[36]; // [rsp+70h] [rbp-90h] BYREF

  v29 = a5;
  Pdo = a1;
  v31 = a6;
  v30 = a4;
  memset(v32, 0, 0x118uLL);
  v9 = IrqMachinePolicy;
  v25 = (unsigned __int16)IrqMachinePolicy;
  v24 = 2;
  v22 = 0;
  v10 = 0LL;
  v23 = 0;
  LOWORD(v11) = 0;
  Handle = 0LL;
  v12 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Affinity Policy", 0LL, &Handle);
  if ( (int)result < 0 )
    return result;
  P = 0LL;
  if ( (int)OSGetRegistryValue(Handle) >= 0 )
  {
    v14 = P;
    switch ( *(_DWORD *)P )
    {
      case 3:
        LODWORD(v15) = *((_DWORD *)P + 1);
        if ( (unsigned int)(v15 - 1) <= 7 )
        {
          do
          {
            v15 = (unsigned int)(v15 - 1);
            v14[1] = v15;
            v12 = *((unsigned __int8 *)v14 + v15 + 8) | (v12 << 8);
          }
          while ( (_DWORD)v15 );
        }
        break;
      case 4:
        v12 = *((unsigned int *)P + 2);
        break;
      case 0xB:
        v12 = *((_QWORD *)P + 1);
        break;
    }
    ExFreePoolWithTag(v14, 0);
  }
  LODWORD(v32[6]) = 0;
  LODWORD(v32[4]) = 67108868;
  LODWORD(v32[1]) = 288;
  v32[2] = L"GroupOverride";
  LODWORD(v32[8]) = 288;
  v32[3] = &v22;
  LODWORD(v32[11]) = 67108868;
  v32[5] = &v22;
  v32[9] = L"DevicePolicy";
  v32[10] = &v25;
  v32[12] = &v25;
  v32[16] = L"DevicePriority";
  v32[17] = &v24;
  v32[19] = &v24;
  v32[23] = L"GroupPolicy";
  v32[24] = &v23;
  LODWORD(v32[15]) = 288;
  LODWORD(v32[18]) = 67108868;
  LODWORD(v32[22]) = 288;
  LODWORD(v32[25]) = 67108868;
  v32[26] = &v23;
  LODWORD(v32[13]) = 0;
  LODWORD(v32[20]) = 0;
  LODWORD(v32[27]) = 0;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v32, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    v9 = v25;
    if ( (_WORD)v25 == 5 || (_WORD)v25 == 6 )
      v9 = 0;
    if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
    {
      v17 = *(_WORD *)(a2 + 18);
      v9 = *(_WORD *)(a2 + 16);
      v18 = *(_DWORD *)(a2 + 20);
      v11 = v17;
      v12 = *(_QWORD *)(a2 + 24);
      v22 = v17;
      v24 = v18;
      if ( v9 != 4 )
      {
        LOWORD(v11) = 0;
        v12 = 0LL;
        v22 = 0;
        v23 = v17 == 0xFFFF;
LABEL_19:
        if ( v9 == 2 )
        {
          IrqTraceAffinityPolicy(Pdo);
          LOWORD(v11) = v22;
LABEL_30:
          v10 = v12;
          RegistryValues = 0;
          goto LABEL_31;
        }
        if ( v9 )
          goto LABEL_30;
LABEL_29:
        v9 = IrqMachinePolicy;
        goto LABEL_30;
      }
      if ( v17 == 0xFFFF )
      {
        v11 = 0;
        v22 = 0;
      }
    }
    else
    {
      v11 = v22;
      if ( v9 != 4 )
        goto LABEL_19;
    }
    if ( InitSafeBootMode || v11 == 0xFFFF || !v12 )
      goto LABEL_29;
    v23 = 0;
    v10 = v12;
    IrqTraceAffinityPolicy(Pdo);
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( RegistryValues >= 0 )
  {
    v19 = v30;
    v20 = !v23;
    *v29 = v9;
    *v19 = v24;
    v21 = (_BYTE *)v31;
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v11;
    *(_QWORD *)a3 = v10;
    *v21 = !v20;
  }
  return (unsigned int)RegistryValues;
}
