/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x1409C59E0
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, unsigned int *a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 result; // rax
  int v7; // ecx
  unsigned int *v8; // rsi
  unsigned int ULongFromUser; // eax
  __int64 SessionById; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  if ( !a2 )
  {
    result = 0LL;
    *a4 = 0LL;
    return result;
  }
  if ( a1 == 3 )
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)a2, 0, (__int64)PsProcessType, a3, 0x20666E57u, a5, 0LL, 0LL);
    if ( (int)result >= 0 )
      *a4 = a5;
    return result;
  }
  if ( !a1 )
    return 3221225485LL;
  v7 = a1 - 1;
  if ( !v7 )
  {
    v8 = (unsigned int *)(a5 + 1);
    if ( (_BYTE)a3 )
      ULongFromUser = RtlReadULongFromUser(a2);
    else
      ULongFromUser = *a2;
    *v8 = ULongFromUser;
    SessionById = PsGetSessionById(ULongFromUser);
    *a5 = SessionById;
    if ( SessionById )
    {
      *a4 = v8;
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v7 != 1 )
    return 3221225485LL;
  result = SeCaptureSid((char *)a2, a3, a3, (unsigned __int8)a3, Tag, 0, (PSID *)a5);
  if ( (int)result >= 0 )
    *a4 = *a5;
  return result;
}
