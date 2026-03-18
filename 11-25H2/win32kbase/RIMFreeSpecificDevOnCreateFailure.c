/*
 * XREFs of RIMFreeSpecificDevOnCreateFailure @ 0x1401D5400
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     UserLogError @ 0x1400B06D0 (UserLogError.c)
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall RIMFreeSpecificDevOnCreateFailure(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbp
  __int64 *i; // rax
  LONG_PTR *j; // rcx
  LONG_PTR result; // rax
  LONG_PTR v8; // rax

  UserLogError(-1073741122);
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 977);
  v4 = a2[4];
  RIMLockExclusive(a1 + 352);
  for ( i = *(__int64 **)(a1 + 376); i != (__int64 *)(a1 + 376); i = (__int64 *)*i )
  {
    if ( i[7] == v4 )
      *((_DWORD *)i + 28) = 1;
  }
  RIMUnlockExclusive(a1 + 352);
  for ( j = (LONG_PTR *)(a1 + 424); ; j = (LONG_PTR *)(result + 40) )
  {
    result = *j;
    if ( !*j )
      break;
    if ( (_QWORD *)result == a2 )
    {
      v8 = a2[5];
      a2[29] = 0LL;
      *j = v8;
      a2[5] = 0LL;
      return rimFreeSpecificDevFinal(a1, (__int64)a2);
    }
  }
  return result;
}
