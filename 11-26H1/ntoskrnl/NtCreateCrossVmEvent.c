/*
 * XREFs of NtCreateCrossVmEvent @ 0x140840F40
 * Callers:
 *     DifNtCreateCrossVmEventWrapper @ 0x140673980 (DifNtCreateCrossVmEventWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExpCreateCrossVmEvent @ 0x14084C318 (ExpCreateCrossVmEvent.c)
 */

__int64 __fastcall NtCreateCrossVmEvent(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int CrossVmEvent; // ebx
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF

  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  CrossVmEvent = ExpCreateCrossVmEvent((unsigned int)&v14, a2, a3, a4, a5, a6, PreviousMode);
  if ( CrossVmEvent >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v14);
    else
      *a1 = v14;
  }
  return (unsigned int)CrossVmEvent;
}
