/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140CD6C5C
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140CD0A60 (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
      LOBYTE(PopDirectedDripsUmLock.ThreadListEntry.Blink) = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                                    (__int64)&dword_140FD58E0,
                                                                    0LL,
                                                                    0LL) >= 0;
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)&PopDirectedDripsUmLock.MutantListHead.Blink, &word_140D0D650);
    PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink = 0LL;
    memset_0(&PopDirectedDripsUmLock.ApcStateFill[24], 0, 0x250uLL);
    PopDirectedDripsUmLock.ApcState.Process = (_KPROCESS *)&PopDirectedDripsUmLock.ApcStateFill[24];
    PopDirectedDripsUmLock.WaitStatus = (volatile __int64)&PopDirectedDripsUmLock.ApcStateFill[40];
    *(_QWORD *)&PopDirectedDripsUmLock.ApcStateFill[40] = &PopDirectedDripsUmLock.ApcStateFill[40];
    PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)&PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
    PopDirectedDripsUmLock.WaitListEntry.Blink = 0LL;
    PopDirectedDripsUmLock.SuspendEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0x100000001LL;
  }
}
