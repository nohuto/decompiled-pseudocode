/*
 * XREFs of EditionxxxComputeInputSinkInfo @ 0x14013A53C
 * Callers:
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall EditionxxxComputeInputSinkInfo(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7504LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
