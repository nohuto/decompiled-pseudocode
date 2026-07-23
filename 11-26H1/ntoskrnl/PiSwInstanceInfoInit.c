/*
 * XREFs of PiSwInstanceInfoInit @ 0x140A8D448
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     PiSwInstanceInfoFree @ 0x140A8D4D0 (PiSwInstanceInfoFree.c)
 */

__int64 __fastcall PiSwInstanceInfoInit(PVOID *a1, __int64 a2)
{
  int PWSTR; // ebx

  PWSTR = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, a1, 2LL, L"SWD\\", *(_QWORD *)a2);
  if ( PWSTR < 0 || (PWSTR = PnpAllocatePWSTR(*(_WORD **)(a2 + 16), 0xC8uLL, 0x57706E50u, a1 + 1), PWSTR < 0) )
    PiSwInstanceInfoFree(a1);
  return (unsigned int)PWSTR;
}
