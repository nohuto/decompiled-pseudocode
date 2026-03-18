/*
 * XREFs of NtCloseCompositionInputSink @ 0x140070560
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x14007115C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 */

NTSTATUS __fastcall NtCloseCompositionInputSink(HANDLE Handle)
{
  InputTraceLogging::InputSink::Close(Handle, 0);
  return NtClose(Handle);
}
