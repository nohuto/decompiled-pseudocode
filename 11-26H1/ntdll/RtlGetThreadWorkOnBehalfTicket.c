/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x1800CAD50
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *a1, int a2)
{
  char v2; // bl
  NTSTATUS result; // eax
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  ThreadInformation = 0LL;
  if ( (a2 & 0xFFFFFFF8) != 0 )
    return -1073741584;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
    return -1073741584;
  }
  if ( (a2 & 2) == 0 )
  {
LABEL_4:
    result = 0;
    *a1 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    return result;
  }
  result = ZwQueryInformationThread(
             (HANDLE)0xFFFFFFFFFFFFFFFELL,
             ThreadWorkOnBehalfTicket,
             &ThreadInformation,
             0x10u,
             0LL);
  if ( result >= 0 )
  {
    if ( (v2 & 4) != 0 || (BYTE8(ThreadInformation) & 1) == 0 )
      *a1 = ThreadInformation;
    else
      *a1 = 0LL;
  }
  return result;
}
