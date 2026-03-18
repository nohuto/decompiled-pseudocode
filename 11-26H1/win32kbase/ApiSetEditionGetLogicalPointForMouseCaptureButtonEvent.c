/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1401A4FDC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x14015F668 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5))(void)
{
  _QWORD *v5; // rsi
  __int64 (*result)(void); // rax
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  _BYTE v14[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  v5 = a5;
  *a5 = a3;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6536LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14, v11, v12);
      a5 = 0LL;
      EditionGetLogicalPointForMouseCaptureButtonEvent(a1, a2, a3, a4, (__int64)&a5);
      v13 = v14[0] == 0;
      result = (__int64 (*)(void))a5;
      *v5 = a5;
      if ( !v13 )
      {
        result = (__int64 (*)(void))v15;
        --*(_DWORD *)(v15 + 28);
      }
    }
  }
  return result;
}
