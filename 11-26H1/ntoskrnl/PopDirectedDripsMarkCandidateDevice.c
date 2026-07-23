/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x140781A08
 * Callers:
 *     PopDirectedDripsUmMarkTestDevices @ 0x1409F88DC (PopDirectedDripsUmMarkTestDevices.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140B0DF2C (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 864));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 864), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140F12E34;
    ++*(_DWORD *)&stru_140F12EA0.WaitBlockFill11[80];
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
