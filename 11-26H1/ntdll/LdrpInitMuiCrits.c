/*
 * XREFs of LdrpInitMuiCrits @ 0x18001D184
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18001D2F0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x1800C37FC (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     RtlRunOnceComplete @ 0x18008F440 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18008F548 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180090498 (RtlpRunOnceWaitForInit.c)
 */

int __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2)
{
  signed __int64 Value; // rax
  char v3; // bl
  signed __int64 v4; // rcx
  signed __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Value = LdrpInitOnceLoadAsDataCrits.Value;
  v3 = 0;
  LOBYTE(v7) = 0;
  if ( ((__int64)LdrpInitOnceLoadAsDataCrits.Ptr & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v5 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInitOnceLoadAsDataCrits, 1LL, Value);
        if ( Value == v5 )
        {
          RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
          LODWORD(Value) = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0, 0LL);
          if ( (int)Value >= 0 )
            return Value;
          v3 = 1;
          goto LABEL_9;
        }
      }
      if ( v4 != 1 )
        break;
      Value = RtlpRunOnceWaitForInit(Value, &LdrpInitOnceLoadAsDataCrits);
    }
    if ( v4 != 3 )
      return Value;
    LODWORD(Value) = -1073741584;
LABEL_9:
    LOBYTE(v7) = v3;
    LODWORD(Value) = RtlReportCriticalFailure((unsigned int)Value, &v7, 1LL);
  }
  return Value;
}
