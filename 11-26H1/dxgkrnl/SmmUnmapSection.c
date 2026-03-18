/*
 * XREFs of SmmUnmapSection @ 0x1402882D0
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14003F220 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall SmmUnmapSection(PVOID a1)
{
  __int64 CurrentProcess; // rax
  NTSTATUS result; // eax

  if ( a1 > MmHighestUserAddress )
  {
    result = MmUnmapViewInSystemSpace(a1);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(a1);
    result = MmUnmapViewOfSection(CurrentProcess, a1);
  }
  if ( result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 184;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             -1,
             (__int64)L"(((NTSTATUS)(Status)) >= 0)",
             184LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
