/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x1800CD5E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *a1, int a2)
{
  char v2; // bl
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v5 = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
    return 3221225712LL;
  }
  if ( (a2 & 2) == 0 )
  {
LABEL_4:
    result = 0LL;
    *a1 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    return result;
  }
  result = ZwQueryInformationThread(-2LL, 44LL, &v5, 16LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 4) != 0 || (BYTE8(v5) & 1) == 0 )
    {
      *a1 = v5;
      return (unsigned int)result;
    }
    else
    {
      *a1 = 0LL;
      return (unsigned int)result;
    }
  }
  return result;
}
