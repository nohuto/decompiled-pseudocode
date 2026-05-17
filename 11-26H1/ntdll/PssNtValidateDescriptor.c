/*
 * XREFs of PssNtValidateDescriptor @ 0x1800B5C90
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800B4CF0 (PssNtDuplicateSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1800B5590 (PssNtFreeSnapshot.c)
 *     PssNtQuerySnapshot @ 0x1800B5760 (PssNtQuerySnapshot.c)
 *     PssNtWalkSnapshot @ 0x1800B5A00 (PssNtWalkSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // edi
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-C8h] BYREF

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 1146311504 )
      return 0LL;
    *(&ExceptionRecord.NumberParameters + 1) = 0;
    memset_thunk_772440563353939046(&ExceptionRecord.ExceptionInformation[4], 0, 0x58uLL);
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    ExceptionRecord.ExceptionInformation[1] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = v4;
    ExceptionRecord.ExceptionInformation[3] = 1146311504LL;
    RtlRaiseException(&ExceptionRecord);
  }
  return 3221225480LL;
}
