/*
 * XREFs of NtCreateTimer2 @ 0x140ABF460
 * Callers:
 *     DifNtCreateTimer2Wrapper @ 0x140677DE0 (DifNtCreateTimer2Wrapper.c)
 *     NtCreateIRTimer @ 0x140ABF430 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     ExpExTimerAttributesAreValid @ 0x14044E6FC (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x140ABF674 (ExpCheckIRTimerAccess.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  __int64 v8; // rdx
  __int64 v9; // r10
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  NTSTATUS inserted; // edi
  __int64 v13; // rbx
  NTSTATUS result; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int16 v16[6]; // [rsp+54h] [rbp-24h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  void *v18; // [rsp+68h] [rbp-10h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( !ExpExTimerAttributesAreValid(Attributes) )
    return -1073741582;
  if ( v9 )
    return -1073741583;
  if ( Reserved1 && (Attributes & 2) == 0 )
    return -1073741584;
  *(_DWORD *)v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(TimerHandle);
    RtlWriteULong64ToUser(TimerHandle, ULong64FromUser);
    if ( Reserved1 )
      RtlCopyFromUser(v16, Reserved1, 4uLL);
  }
  else if ( Reserved1 )
  {
    *(_DWORD *)v16 = *(_DWORD *)Reserved1;
  }
  if ( (Attributes & 2) == 0
    || (LOBYTE(v8) = PreviousMode, result = ExpCheckIRTimerAccess(*(unsigned int *)v16, v8), result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0LL, PreviousMode, v15, 168, 0, 0, &v17, 0LL);
    if ( inserted >= 0 )
    {
      v13 = v17;
      if ( (Attributes & 2) != 0 )
        KeInitializeIRTimer(v17, 0LL, 0LL, v16, Attributes);
      else
        KeInitializeTimer2(v17, 0LL, 0LL, Attributes);
      *(_QWORD *)(v13 + 136) = 0LL;
      *(_DWORD *)(v13 + 160) = Attributes;
      inserted = ObInsertObjectEx((char *)v13, 0LL, DesiredAccess, 0, 0, 0LL, &v18);
      LODWORD(v17) = inserted;
      if ( inserted >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(TimerHandle, (__int64)v18);
        else
          *TimerHandle = v18;
      }
    }
    return inserted;
  }
  return result;
}
