/*
 * XREFs of ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x1407FF740
 * Callers:
 *     NtManageWobTicket @ 0x1407FF940 (NtManageWobTicket.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 */

__int64 __fastcall PspQueryWobTicketPriority(void *a1, char a2, unsigned int a3, unsigned int *a4)
{
  int v6; // ebx
  PKTHREAD Thread; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v9; // [rsp+30h] [rbp-38h]
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF

  v9 = a4;
  Thread = 0LL;
  Src = 0LL;
  if ( a3 >= 0x10 )
  {
    if ( a2 )
      RtlCopyFromUser(&Src, a1, 0x10uLL);
    else
      RtlCopyVolatileMemory(&Src, a1, 0x10uLL);
    v6 = PspThreadFromTicket(&Src, &Thread);
    if ( v6 >= 0 )
    {
      DWORD2(Src) = KeQueryPriorityThread(Thread);
      if ( a2 )
        RtlCopyToUser(a1, &Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(a1, &Src, 0x10uLL);
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741820;
  }
  *v9 = 16;
  if ( Thread )
    ObfDereferenceObject(Thread);
  return (unsigned int)v6;
}
