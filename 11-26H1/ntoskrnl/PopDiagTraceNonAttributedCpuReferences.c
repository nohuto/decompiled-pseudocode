/*
 * XREFs of PopDiagTraceNonAttributedCpuReferences @ 0x14042D0EC
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14042D038 (PopUpdateNonAttributedCpuTimeReference.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceNonAttributedCpuReferences(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES,
        0LL,
        1u,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
