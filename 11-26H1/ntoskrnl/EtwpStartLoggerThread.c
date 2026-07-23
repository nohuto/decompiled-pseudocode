/*
 * XREFs of EtwpStartLoggerThread @ 0x1404DE2D0
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 */

int __fastcall EtwpStartLoggerThread(__int64 a1, __int64 a2)
{
  int result; // eax
  _QWORD v4[2]; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+10h] BYREF

  v4[0] = a1;
  ThreadHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v4[1] = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, (PKSTART_ROUTINE)EtwpLogger, v4);
  if ( result >= 0 )
  {
    ZwClose(ThreadHandle);
    return KeWaitForSingleObject((PVOID)(a2 + 456), Executive, 0, 0, 0LL);
  }
  return result;
}
