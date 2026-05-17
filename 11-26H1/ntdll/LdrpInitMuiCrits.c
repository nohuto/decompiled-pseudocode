/*
 * XREFs of LdrpInitMuiCrits @ 0x180032024
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180031F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x1800C603C (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18006EFF0 (RtlRunOnceComplete.c)
 *     RtlReportCriticalFailure @ 0x18006F0F8 (RtlReportCriticalFailure.c)
 *     RtlpRunOnceWaitForInit @ 0x180070048 (RtlpRunOnceWaitForInit.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 */

signed __int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  char v3; // bl
  signed __int64 v4; // rcx
  signed __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  result = LdrpInitOnceLoadAsDataCrits;
  v3 = 0;
  LOBYTE(v6) = 0;
  if ( (LdrpInitOnceLoadAsDataCrits & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = result & 3;
        if ( (result & 3) != 0 )
          break;
        v5 = result;
        result = _InterlockedCompareExchange64(&LdrpInitOnceLoadAsDataCrits, 1LL, result);
        if ( result == v5 )
        {
          RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0LL, 0LL);
          result = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0LL, 0LL);
          if ( (int)result >= 0 )
            return result;
          v3 = 1;
          goto LABEL_9;
        }
      }
      if ( v4 != 1 )
        break;
      result = RtlpRunOnceWaitForInit(result, &LdrpInitOnceLoadAsDataCrits);
    }
    if ( v4 != 3 )
      return result;
    LODWORD(result) = -1073741584;
LABEL_9:
    LOBYTE(v6) = v3;
    return RtlReportCriticalFailure((unsigned int)result, &v6, 1LL);
  }
  return result;
}
