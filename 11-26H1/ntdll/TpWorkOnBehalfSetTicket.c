/*
 * XREFs of TpWorkOnBehalfSetTicket @ 0x1800BCF80
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall TpWorkOnBehalfSetTicket(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // edx
  NTSTATUS result; // eax

  if ( !a2 )
    return -1073741811;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a2 )
  {
    v4 = 0;
LABEL_4:
    *(_QWORD *)(a1 + 248) = *a2;
    return v4;
  }
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, a2, 8u);
  v4 = result;
  if ( result >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a2;
    goto LABEL_4;
  }
  return result;
}
