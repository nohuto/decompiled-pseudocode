/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x14077EF08
 * Callers:
 *     PopDirectedDripsUmMarkTestDevices @ 0x140A3CEBC (PopDirectedDripsUmMarkTestDevices.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140B0C538 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 864));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 864), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++unk_140F12AF4;
    ++dword_140F12CF0;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
