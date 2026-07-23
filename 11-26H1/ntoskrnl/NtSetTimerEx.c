/*
 * XREFs of NtSetTimerEx @ 0x1404253F0
 * Callers:
 *     DifNtSetTimerExWrapper @ 0x140691DF0 (DifNtSetTimerExWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _BYTE *v5; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  void *v8; // rcx
  __int64 v9; // r12
  ULONG TolerableDelay; // r13d
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // ebx
  NTSTATUS result; // eax
  struct _OBJECT_TYPE *v15; // rcx
  int v16; // eax
  char v17[8]; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v20[48]; // [rsp+70h] [rbp-58h] BYREF

  v5 = TimerSetInformation;
  memset(v20, 0, sizeof(v20));
  v17[0] = 0;
  P[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(TimerSetInformation, TimerSetInformationLength, 4u);
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( PreviousMode )
  {
    RtlCopyFromUser(v20, v5, 0x30uLL);
    v5 = v20;
  }
  if ( *((_DWORD *)v5 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v8 = (void *)*((_QWORD *)v5 + 3);
  if ( !v8 || (result = PoCaptureReasonContext(v8, (__int64)v17, (__int64)P), result >= 0) )
  {
    v9 = *((_QWORD *)v5 + 5);
    TolerableDelay = *((_DWORD *)v5 + 9);
    *(_DWORD *)&v17[4] = *((_DWORD *)v5 + 8);
    v11 = *((_QWORD *)v5 + 2);
    v12 = *((_QWORD *)v5 + 1);
    Object = 0LL;
    v13 = ObReferenceObjectByHandleWithTag(TimerHandle, 2u, 0LL, PreviousMode, 0x53695445u, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_10:
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x53695445u);
      if ( v13 < 0 || v13 == 1073741861 )
      {
        if ( P[0] )
          PoDestroyReasonContext(P[0]);
      }
      return v13;
    }
    v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v15 == ExpIRTimerObjectType )
    {
      if ( v12 || v11 || P[0] || TolerableDelay || v9 )
      {
        v13 = -1073741811;
        goto LABEL_10;
      }
      v16 = ExpSetTimerObject2((__int64)Object, (__int64 *)v5, 10000LL * *(unsigned int *)&v17[4], 0LL);
    }
    else
    {
      if ( v15 != (struct _OBJECT_TYPE *)ExTimerObjectType )
      {
        v13 = -1073741788;
        goto LABEL_10;
      }
      v16 = ExpSetTimerObject((PKTIMER)Object, v11, (__int64)P[0], v17[0], *(int *)&v17[4], TolerableDelay, v9);
    }
    v13 = v16;
    goto LABEL_10;
  }
  return result;
}
