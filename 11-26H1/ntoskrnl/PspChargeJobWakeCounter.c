/*
 * XREFs of PspChargeJobWakeCounter @ 0x140AAC2B0
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     RtlLongLongAdd @ 0x1405347AC (RtlLongLongAdd.c)
 *     PspSendWakeNotification @ 0x140A88408 (PspSendWakeNotification.c)
 *     PspLockJobChain @ 0x140AAC814 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AACA94 (PspUnlockJobChain.c)
 *     EtwTraceWakeCounter @ 0x140B49EFC (EtwTraceWakeCounter.c)
 */

char __fastcall PspChargeJobWakeCounter(
        _QWORD *Object,
        _QWORD *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rax
  char result; // al
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // esi
  char v17; // al
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v19; // [rsp+48h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v9 = a3;
  v19 = CurrentThread;
  if ( (a5 & 8) == 0 )
    PspLockJobChain(Object, CurrentThread, 0LL);
  v10 = Object;
  do
  {
    v11 = 1176LL;
    if ( (a5 & 4) == 0 )
      v11 = 8 * v9 + 1120;
    result = RtlLongLongAdd(*(_QWORD *)((char *)v10 + v11), a4, (_QWORD *)((char *)v10 + v11));
    v14 = *v13;
    if ( (a5 & 4) == 0 )
    {
      v18 = v10[148];
      v16 = 1 << v9;
      result = RtlIsZeroMemory((char *)v10 + 1108, 8uLL);
      if ( !result )
      {
        if ( v14 || (v16 & HIDWORD(v18)) != 0 )
        {
          v17 = a5 & 1 | 6;
          if ( a4 <= 0 )
            v17 = a5 & 1;
          result = PspSendWakeNotification(v10, v9, &v18, v14, v17);
        }
        else
        {
          *((_DWORD *)v10 + 298) |= v16;
        }
      }
LABEL_20:
      v15 = a7;
      goto LABEL_21;
    }
    if ( !*((_DWORD *)v10 + 266) )
      goto LABEL_20;
    if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
      NT_ASSERT(
        "
*** Calling into suspended process with *default*
    'no wake' policy. This thread will hang until the
    tar"
        "get process is resumed or terminated.
    Perform a stack trace to find the culprit.
    Use 'gh' to continue.
");
    v15 = a7;
    if ( (xmmword_140FC0C10 & 0x200) != 0 )
    {
      EtwTraceWakeCounter((_DWORD)Object, 0, v9, 0, v14, a6, a7);
      result = EtwTraceWakeCounter((_DWORD)Object, 1, v9, 0, v14, a6, a7);
    }
LABEL_21:
    if ( (xmmword_140FC0C10 & 0x2000) != 0 )
      result = EtwTraceWakeCounter((_DWORD)v10, (a5 & 4) != 0, v9, a4, v14, a6, v15);
    v10 = (_QWORD *)v10[163];
  }
  while ( v10 != a2 && (v10[194] & 0x1000) != 0 );
  if ( (a5 & 8) == 0 )
    return PspUnlockJobChain(Object, v19);
  return result;
}
