/*
 * XREFs of MiAllocateProcessVads @ 0x140A03904
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140A08068 (MmInitializeHandBuiltProcess2.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x140A08654 (MiReturnProcessVads.c)
 */

_QWORD *__fastcall MiAllocateProcessVads(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  PVOID v6; // rcx
  PVOID *v7; // rax
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  PVOID *v9; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v10[3]; // [rsp+40h] [rbp-40h] BYREF

  P = 0LL;
  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v10);
  if ( (int)MiAllocateVad((__int64 *)&P, a1, 0x7FFE0000uLL, 0x7FFE0FFFuLL, 1) < 0 )
    goto LABEL_9;
  if ( qword_140E2D7B8 )
  {
    if ( (int)MiAllocateVad((__int64 *)&v9, a1, qword_140E2D7B8, qword_140E2D7B8 + 4095, 1) < 0 )
    {
      v6 = P;
LABEL_8:
      MiReturnProcessVads(v6);
LABEL_9:
      v4 = 0LL;
      goto LABEL_6;
    }
    v4 = v9;
    *v9 = P;
  }
  else
  {
    v4 = P;
  }
  if ( a2 )
  {
    if ( (int)MiAllocateVad((__int64 *)&v9, a1, *(_QWORD *)(a1 + 872), a2 - 1, 0) >= 0 )
    {
      v7 = v9;
      *v9 = v4;
      v4 = v7;
      goto LABEL_6;
    }
    v6 = v4;
    goto LABEL_8;
  }
LABEL_6:
  KiUnstackDetachProcess((__int64)v10, 0);
  return v4;
}
