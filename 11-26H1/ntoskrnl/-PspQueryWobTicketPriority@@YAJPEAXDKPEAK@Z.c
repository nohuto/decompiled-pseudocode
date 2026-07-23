/*
 * XREFs of ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x140805170
 * Callers:
 *     NtManageWobTicket @ 0x140805370 (NtManageWobTicket.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
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
