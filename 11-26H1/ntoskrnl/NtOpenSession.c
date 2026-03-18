/*
 * XREFs of NtOpenSession @ 0x140B28070
 * Callers:
 *     DifNtOpenSessionWrapper @ 0x14067EFA0 (DifNtOpenSessionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  unsigned int v8; // edi
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  v8 = ObOpenObjectByName(a3, (__int64)MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)&v10);
  if ( PreviousMode )
    RtlWriteULong64ToUser(a1, v10);
  else
    *a1 = v10;
  return v8;
}
