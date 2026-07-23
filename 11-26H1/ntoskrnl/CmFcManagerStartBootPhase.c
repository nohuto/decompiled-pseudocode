/*
 * XREFs of CmFcManagerStartBootPhase @ 0x140CF6D90
 * Callers:
 *     CmFcInitSystem0 @ 0x140CF3DA4 (CmFcInitSystem0.c)
 * Callees:
 *     RtlpFcWriteHighLowHigh @ 0x1404F717C (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmFcpIncrementChangeStamp @ 0x14077998C (CmFcpIncrementChangeStamp.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 */

char __fastcall CmFcManagerStartBootPhase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char result; // al
  _QWORD v17[12]; // [rsp+20h] [rbp-59h] BYREF

  v12 = CmFcpIncrementChangeStamp(*(__int64 *)&CmpFreezeListLock.Timer.Processor);
  v17[8] = a5;
  v17[10] = a11;
  v17[11] = a12;
  v17[1] = v13;
  v17[2] = v14;
  v17[4] = v13;
  v17[5] = v14;
  v17[0] = v12;
  v17[3] = v12;
  v17[6] = v12;
  v17[7] = v15;
  v17[9] = v12;
  RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, v12, (__int64)v17);
  RtlpFcWriteHighLowHigh((__int64)&CmpFreezeListLock.Timer.Processor, v12);
  CmpFreezeListLock.SchedulerApc.NormalContext = a6;
  qword_140EFBE50 = a8;
  result = a10;
  byte_140EFC020 = a10;
  CmpFreezeListLock.SchedulerApcFill3[51] = 0;
  return result;
}
