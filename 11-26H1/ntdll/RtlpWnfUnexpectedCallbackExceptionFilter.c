/*
 * XREFs of RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180138FAC
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18006F200 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfUnexpectedCallbackExceptionFilter(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+28h] [rbp-B0h]
  __int64 v7; // [rsp+30h] [rbp-A8h]
  _BYTE v8[136]; // [rsp+38h] [rbp-A0h] BYREF

  v1 = *a1;
  v2 = a1[1];
  memset_thunk_772440563353939046(v8, 0, 0x80uLL);
  v5[0] = -1073740771;
  v3 = *(_DWORD *)(v1 + 4) | 1;
  v6 = v1;
  v5[1] = v3;
  v7 = *(_QWORD *)(v2 + 248);
  RtlReportException(v5, v2, 9LL);
  return 0LL;
}
