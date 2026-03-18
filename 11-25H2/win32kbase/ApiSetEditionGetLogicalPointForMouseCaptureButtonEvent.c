/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140195480
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140124114 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
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
  bool v11; // zf
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v5 = a5;
  *a5 = a3;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6976LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v13 = 0LL;
      v12[0] = 0;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v12);
      a5 = 0LL;
      EditionGetLogicalPointForMouseCaptureButtonEvent(a1, a2, a3, a4, (__int64)&a5);
      v11 = v12[0] == 0;
      result = (__int64 (*)(void))a5;
      *v5 = a5;
      if ( !v11 )
      {
        result = (__int64 (*)(void))v13;
        --*(_DWORD *)(v13 + 28);
      }
    }
  }
  return result;
}
