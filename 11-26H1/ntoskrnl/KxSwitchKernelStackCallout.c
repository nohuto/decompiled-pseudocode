/*
 * XREFs of KxSwitchKernelStackCallout @ 0x14072D6D0
 * Callers:
 *     KiSwitchKernelStackAndCallout @ 0x14072D640 (KiSwitchKernelStackAndCallout.c)
 * Callees:
 *     MmGrowKernelStackEx @ 0x1403D4420 (MmGrowKernelStackEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KxSwitchKernelStackCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v11; // [rsp+20h] [rbp+20h]

  _enable();
  if ( a4 )
  {
    v11 = a1;
    if ( (unsigned int)MmGrowKernelStackEx((__int64)&retaddr, a4) )
      goto LABEL_5;
    a1 = v11;
  }
  guard_dispatch_icall_no_overrides(a1, a2);
LABEL_5:
  v8 = (_QWORD *)v7[5];
  _disable();
  v7[7] = v8[2];
  v7[6] = v8[3];
  v9 = v8[5];
  v7[5] = v9;
  if ( (KiTrapFeatures & 1) != 0 )
    __writegsqword(0xB008u, v9);
  else
    *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v9;
  if ( (KiTrapFeatures & 2) != 0 )
    __writemsr(0x1CCu, v9);
  __writegsqword(0x1A8u, v9);
  JUMPOUT(0x14072D6BALL);
}
