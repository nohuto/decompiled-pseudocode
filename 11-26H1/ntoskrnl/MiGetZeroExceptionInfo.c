/*
 * XREFs of MiGetZeroExceptionInfo @ 0x14071323C
 * Callers:
 *     MiPerformTimedMemoryZeroing @ 0x1405213F4 (MiPerformTimedMemoryZeroing.c)
 * Callees:
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetZeroExceptionInfo(_DWORD **a1, ULONG_PTR a2, _DWORD *a3, _QWORD *a4)
{
  _DWORD *v4; // r10
  int *v5; // r11
  _QWORD *ZeroingContext; // rax
  ULONG_PTR BugCheckParameter4; // r8
  __int64 result; // rax

  v4 = *a1;
  v5 = a3;
  *a3 = **a1;
  if ( *v4 != -1073741819 )
    goto LABEL_9;
  if ( v4[6] <= 1u )
    goto LABEL_9;
  *a4 = *((_QWORD *)v4 + 5);
  if ( !a2 )
    goto LABEL_9;
  ZeroingContext = (_QWORD *)MiGetZeroingContext(a2);
  if ( BugCheckParameter4 < ZeroingContext[5] || BugCheckParameter4 > ZeroingContext[6] )
    KeBugCheckEx(0x1Au, 0x6102uLL, a2, (ULONG_PTR)ZeroingContext, BugCheckParameter4);
  if ( (ZeroingContext[3] & 1) == 0 )
LABEL_9:
    KeBugCheckEx(0x1Au, 0x6101uLL, a2, *v5, (ULONG_PTR)v4);
  result = 1LL;
  ++*(_DWORD *)(*(_QWORD *)(a2 + 80) + 420LL);
  return result;
}
