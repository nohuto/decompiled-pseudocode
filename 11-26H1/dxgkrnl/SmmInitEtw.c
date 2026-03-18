/*
 * XREFs of SmmInitEtw @ 0x14041D744
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x140287F2C (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McGenEventRegister_EtwRegister @ 0x14006D930 (McGenEventRegister_EtwRegister.c)
 */

int __fastcall SmmInitEtw(__int64 a1, __int64 a2)
{
  int result; // eax

  result = McGenEventRegister_EtwRegister(&SysMmControlGuid, a2, SysMmControlGuid_Context, SysMmControlGuid_Context);
  if ( result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
    result = DxgkLogInternalTriageEvent(
               0LL,
               262146,
               -1,
               (__int64)L"(((NTSTATUS)(Status)) >= 0)",
               34LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  if ( !SysMmControlGuid_Context[0] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 35;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             -1,
             (__int64)L"(SysMmControlGuid_Context.RegistrationHandle) != 0",
             35LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
