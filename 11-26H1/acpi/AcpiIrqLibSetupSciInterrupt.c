/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64
 * Callers:
 *     OSInterruptVector @ 0x1400D959C (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     IcAddPossibleReference @ 0x1400A8D48 (IcAddPossibleReference.c)
 *     IcSetPossibleInput @ 0x1400C2ED8 (IcSetPossibleInput.c)
 *     IrqArbGetDeviceIrql @ 0x1400C325C (IrqArbGetDeviceIrql.c)
 *     IcCopyData @ 0x1400C3674 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1400C3F28 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1400C46B0 (IcRemapInputs.c)
 *     IcCopyInputStateToDeviceState @ 0x1400C4888 (IcCopyInputStateToDeviceState.c)
 *     IrqLibpSetSciConnectionData @ 0x1400DCAB4 (IrqLibpSetSciConnectionData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400DD048 (IrqPolicyGetDistributionDisposition.c)
 */

__int64 __fastcall AcpiIrqLibSetupSciInterrupt(unsigned __int16 a1, void *a2)
{
  ULONGLONG v2; // rsi
  __int64 Pool2; // rax
  __int64 UserData; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  char v8; // bp
  ULONGLONG v9; // rdx
  char v10; // al
  __int64 v11; // r8
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  __int128 v13; // [rsp+60h] [rbp-68h]
  _OWORD v14[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v15; // [rsp+90h] [rbp-38h]

  v2 = a1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 120LL, 1232102209LL);
  UserData = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = Pool2 + 32;
  *(_DWORD *)Pool2 = 1;
  v8 = 3;
  *(_DWORD *)(Pool2 + 8) = 1;
  v9 = v2;
  *(_QWORD *)(Pool2 + 44) = 2LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  if ( (unsigned int)v2 < 0x10 )
  {
    LODWORD(v2) = *((_DWORD *)&IsaVectorOverrides + 2 * v2);
    v10 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
    if ( v10 != -1 )
    {
      v8 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
      if ( (v10 & 1) == 0 )
        *(_DWORD *)(UserData + 44) = 1;
    }
  }
  *(_DWORD *)(UserData + 88) = v2;
  IrqLibSciGsiv = v2;
  RtlAddRange(RangeList, v9, v9, 0, 0x12u, (PVOID)UserData, a2);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _OWORD *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             a2,
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v14,
             1,
             0,
             1,
             1,
             &v12);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 56) = v12;
    *(_DWORD *)(UserData + 36) = DWORD1(v13);
    result = IrqArbGetDeviceIrql(v7, v7 + 8);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      LOBYTE(v11) = v8;
      result = IcSetPossibleInput((unsigned int)v2, &v12, v11, 0LL);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v2, 0);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState(&IrqLibArbiterInstance, 0LL);
            result = IcCopyData(0LL);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(v7, a2);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
