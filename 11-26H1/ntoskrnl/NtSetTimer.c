/*
 * XREFs of NtSetTimer @ 0x140425C90
 * Callers:
 *     DifNtSetTimerWrapper @ 0x140692100 (DifNtSetTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PLARGE_INTEGER v7; // r12
  HANDLE v8; // rbx
  char v9; // r15
  PVOID v10; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  BOOLEAN v12; // al
  NTSTATUS v13; // ebx
  PVOID v14; // rdi
  NTSTATUS result; // eax
  struct _OBJECT_TYPE *v16; // rax
  char v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+54h] [rbp-44h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-38h] BYREF

  v7 = DueTime;
  v8 = TimerHandle;
  v20[0] = 0LL;
  v9 = 0;
  v17 = 0;
  v10 = 0LL;
  Object = 0LL;
  LOBYTE(TimerHandle) = 0;
  v18 = (int)TimerHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v20[0] = RtlReadULong64FromUser(DueTime);
    v7 = (PLARGE_INTEGER)v20;
    v20[1] = v20;
    v12 = ResumeTimer;
    LOBYTE(TimerHandle) = v18;
  }
  else
  {
    v12 = ResumeTimer;
    if ( ResumeTimer )
    {
      LOBYTE(TimerHandle) = PoPowerDownActionInProgress != 0;
      v18 = PoPowerDownActionInProgress != 0;
    }
  }
  if ( Period < 0 )
    return -1073741580;
  if ( v12 && !(_BYTE)TimerHandle )
  {
    result = PoCaptureReasonContext(0LL, (__int64)&v17, (__int64)&Object);
    if ( result < 0 )
      return result;
    v9 = v17;
    v10 = Object;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandleWithTag(v8, 2u, 0LL, PreviousMode, 0x53695445u, &Object, 0LL);
  v14 = Object;
  if ( v13 >= 0 )
  {
    v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v16 == ExpIRTimerObjectType )
    {
      if ( TimerApcRoutine || TimerContext || v10 || PreviousState )
        v13 = -1073741811;
      else
        v13 = ExpSetTimerObject2((__int64)Object, (__int64 *)v7, 10000LL * (unsigned int)Period, 0LL);
    }
    else if ( v16 == (struct _OBJECT_TYPE *)ExTimerObjectType )
    {
      v13 = ExpSetTimerObject(
              (PKTIMER)Object,
              (__int64)TimerContext,
              (__int64)v10,
              v9,
              Period,
              0,
              (__int64)PreviousState);
    }
    else
    {
      v13 = -1073741788;
    }
  }
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x53695445u);
  if ( (v13 < 0 || v13 == 1073741861) && v10 )
    PoDestroyReasonContext(v10);
  if ( v13 >= 0 )
  {
    if ( (_BYTE)v18 )
      return 1073741861;
  }
  return v13;
}
