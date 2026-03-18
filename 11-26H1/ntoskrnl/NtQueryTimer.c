/*
 * XREFs of NtQueryTimer @ 0x14083AB60
 * Callers:
 *     DifNtQueryTimerWrapper @ 0x140686500 (DifNtQueryTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeQueryTimerDueTime @ 0x140439548 (KeQueryTimerDueTime.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtQueryTimer(ULONG_PTR BugCheckParameter1, int a2, volatile void *a3, int a4, unsigned int *a5)
{
  int v7; // esi
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
  if ( a2 )
  {
    v7 = -1073741821;
  }
  else if ( a4 == 16 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      ProbeForWrite(a3, 0x10uLL, 4u);
      if ( a5 )
      {
        ULongFromUser = RtlReadULongFromUser(a5);
        RtlWriteULongToUser(a5, ULongFromUser);
      }
    }
    v7 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x714E6954u, (__int64)&Object, 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v12 = *((_DWORD *)Object + 1);
      v13 = MEMORY[0xFFFFF78000000008];
      TimerDueTime = KeQueryTimerDueTime((__int64)Object, v10, v11);
      Src[1] = (unsigned __int8)v12;
      Src[0] = TimerDueTime - v13;
      if ( PreviousMode )
        RtlCopyToUser((void *)a3, Src, 0x10uLL);
      else
        RtlCopyVolatileMemory((void *)a3, Src, 0x10uLL);
      if ( a5 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(a5, 16);
        else
          *a5 = 16;
      }
    }
  }
  else
  {
    v7 = -1073741820;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x714E6954u);
  return (unsigned int)v7;
}
