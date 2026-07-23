/*
 * XREFs of NtManageWobTicket @ 0x140805370
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x140805170 (-PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z.c)
 *     ?PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z @ 0x14080525C (-PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z.c)
 */

__int64 __fastcall NtManageWobTicket(int a1, void *a2, unsigned int a3, int *a4)
{
  int v6; // edx
  char PreviousMode; // si
  int WobTicketPriority; // eax
  unsigned int v9; // ebx
  unsigned int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v11[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      WobTicketPriority = -1073741821;
      goto LABEL_7;
    }
    WobTicketPriority = PspQueryWobTicketPriority(a2, PreviousMode, a3, v11);
  }
  else
  {
    WobTicketPriority = PspQueryWobTicketQos(a2, PreviousMode, a3, v11);
  }
  v6 = v11[0];
LABEL_7:
  v9 = 0;
  if ( WobTicketPriority < 0 )
    v9 = WobTicketPriority;
  if ( a4 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a4, v6);
    else
      *a4 = v6;
  }
  return v9;
}
