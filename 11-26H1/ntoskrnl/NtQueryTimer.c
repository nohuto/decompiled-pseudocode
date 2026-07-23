/*
 * XREFs of NtQueryTimer @ 0x140840DA0
 * Callers:
 *     DifNtQueryTimerWrapper @ 0x14068A0E0 (DifNtQueryTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeQueryTimerDueTime @ 0x1404C2994 (KeQueryTimerDueTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS v7; // esi
  char PreviousMode; // r15
  int ULongFromUser; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rbx
  __int64 TimerDueTime; // rax
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  _QWORD Src[2]; // [rsp+58h] [rbp-40h] BYREF

  Object = 0LL;
  if ( TimerInformationClass )
  {
    v7 = -1073741821;
  }
  else if ( TimerInformationLength == 16 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      ProbeForWrite(TimerInformation, 0x10uLL, 4u);
      if ( ReturnLength )
      {
        ULongFromUser = RtlReadULongFromUser(ReturnLength);
        RtlWriteULongToUser(ReturnLength, ULongFromUser);
      }
    }
    v7 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)TimerHandle, 0x714E6954u, (__int64)&Object, 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v12 = *((_DWORD *)Object + 1);
      v13 = MEMORY[0xFFFFF78000000008];
      TimerDueTime = KeQueryTimerDueTime((__int64)Object, v10, v11);
      Src[1] = (unsigned __int8)v12;
      Src[0] = TimerDueTime - v13;
      if ( PreviousMode )
        RtlCopyToUser(TimerInformation, Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(TimerInformation, Src, 0x10uLL);
      if ( ReturnLength )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(ReturnLength, 16);
        else
          *ReturnLength = 16;
      }
    }
  }
  else
  {
    v7 = -1073741820;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x714E6954u);
  return v7;
}
