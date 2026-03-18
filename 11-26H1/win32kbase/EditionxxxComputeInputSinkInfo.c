/*
 * XREFs of EditionxxxComputeInputSinkInfo @ 0x140171C70
 * Callers:
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall EditionxxxComputeInputSinkInfo(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 7064LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
