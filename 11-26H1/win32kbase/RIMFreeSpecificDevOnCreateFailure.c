/*
 * XREFs of RIMFreeSpecificDevOnCreateFailure @ 0x1401FD85C
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     UserLogError @ 0x140188BC0 (UserLogError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 */

LONG_PTR __fastcall RIMFreeSpecificDevOnCreateFailure(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbp
  __int64 *i; // rax
  LONG_PTR *j; // rcx
  LONG_PTR result; // rax
  LONG_PTR v8; // rax

  UserLogError(-1073741122);
  MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 974);
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
