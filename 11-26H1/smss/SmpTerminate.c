/*
 * XREFs of SmpTerminate @ 0x140018DC4
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 *     SmpInitializeKnownDllsWorker @ 0x140015810 (SmpInitializeKnownDllsWorker.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpCreateInitialSession @ 0x140018CD0 (SmpCreateInitialSession.c)
 *     SmpUnhandledExceptionFilter @ 0x140018EAC (SmpUnhandledExceptionFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpTerminate(PULONG_PTR Parameters, ULONG UnicodeStringParameterMask, ULONG NumberOfParameters)
{
  NTSTATUS v6; // eax
  ULONG Response; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int8 OldValue; // [rsp+88h] [rbp+20h] BYREF

  v8[3] = 23LL;
  v8[1] = 3592LL;
  Response = 0;
  OldValue = 0;
  v8[2] = 0LL;
  v8[0] = &SmpBlackboxBuffer;
  NtPowerInformation(TraceApplicationPowerMessage|0x40, v8, 0x20u, 0LL, 0);
  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, &OldValue) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, &OldValue);
  v6 = NtRaiseHardError(-1073741286, NumberOfParameters, UnicodeStringParameterMask, Parameters, 6u, &Response);
  NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
  __debugbreak();
  JUMPOUT(0x140018EA5LL);
}
