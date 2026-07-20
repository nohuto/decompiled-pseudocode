/*
 * XREFs of SmpUnhandledExceptionFilter @ 0x140019234
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpApiCallback @ 0x140005960 (SmpApiCallback.c)
 *     SmpCreateInitialSession @ 0x140019050 (SmpCreateInitialSession.c)
 * Callees:
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpUnhandledExceptionFilter(int **a1)
{
  int *v3; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+40h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 2LL) != 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Unhandled Exception in Session Manager");
    v3 = *a1;
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = *v3;
    Parameters[2] = *((_QWORD *)v3 + 2);
    Parameters[3] = (unsigned __int64)a1[1];
    SmLogFailureInt((__int64)"SmpUnhandledExceptionFilter", 745, *((_QWORD *)v3 + 4), *((_QWORD *)v3 + 2), *v3);
    SmpTerminate(Parameters, 1u, 4u);
    JUMPOUT(0x1400192EBLL);
  }
  return 0LL;
}
