/*
 * XREFs of SmpInitializeKnownDllsWorker @ 0x140015C10
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 */

NTSTATUS __fastcall SmpInitializeKnownDllsWorker(__int64 a1, void *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = SmpInitializeKnownDlls(3u);
  v4 = v3;
  if ( v3 < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Failure in known dll worker.");
    Parameters[1] = v4;
    Parameters[0] = (unsigned __int64)&DestinationString;
    SmpLogFailure((__int64)"SmpInitializeKnownDllsWorker", 4121, v4);
    SmpTerminate(Parameters, 1u, 2u);
    __debugbreak();
  }
  NtSetEvent(a2, 0LL);
  return NtClose(a2);
}
