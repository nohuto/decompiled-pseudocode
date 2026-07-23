/*
 * XREFs of PopDiagTraceNonAttributedCpuReferences @ 0x1404217BC
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140421708 (PopUpdateNonAttributedCpuTimeReference.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceNonAttributedCpuReferences(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_NON_ATTRIBUTED_CPU_REFERENCES, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
}
