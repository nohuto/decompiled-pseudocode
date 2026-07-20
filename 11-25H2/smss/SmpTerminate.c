/*
 * XREFs of SmpTerminate @ 0x14001913C
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpInitializeKnownDllsWorker @ 0x140015C10 (SmpInitializeKnownDllsWorker.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017C5C (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpCreateInitialSession @ 0x140019050 (SmpCreateInitialSession.c)
 *     SmpUnhandledExceptionFilter @ 0x140019234 (SmpUnhandledExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpTerminate(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int8 OldValue; // [rsp+88h] [rbp+20h] BYREF

  v9[3] = 23LL;
  v9[1] = 3592LL;
  Response = 0;
  OldValue = 0;
  v9[2] = 0LL;
  v9[0] = &SmpBlackboxBuffer;
  NtPowerInformation(TraceApplicationPowerMessage|0x40, v9, 0x20u, 0LL, 0);
  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, &Response);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
}
