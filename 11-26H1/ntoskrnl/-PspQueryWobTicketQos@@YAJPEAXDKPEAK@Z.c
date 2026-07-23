/*
 * XREFs of ?PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z @ 0x14080525C
 * Callers:
 *     NtManageWobTicket @ 0x140805370 (NtManageWobTicket.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     KeGetThreadQos @ 0x1405F8CE0 (KeGetThreadQos.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 */

__int64 __fastcall PspQueryWobTicketQos(void *a1, char a2, unsigned int a3, unsigned int *a4)
{
  int v6; // ebx
  PVOID Object; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v9; // [rsp+30h] [rbp-38h]
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF

  v9 = a4;
  Object = 0LL;
  Src = 0LL;
  if ( a3 >= 0x10 )
  {
    if ( a2 )
      RtlCopyFromUser(&Src, a1, 0x10uLL);
    else
      RtlCopyVolatileMemory(&Src, a1, 0x10uLL);
    if ( (_DWORD)Src == 1 )
    {
      v6 = PspThreadFromTicket((char *)&Src + 8, &Object);
      if ( v6 >= 0 )
      {
        DWORD1(Src) = *((_DWORD *)qword_1400324B0 + (unsigned __int8)KeGetThreadQos((__int64)Object));
        if ( a2 )
          RtlCopyToUser(a1, &Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(a1, &Src, 0x10uLL);
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741735;
    }
  }
  else
  {
    v6 = -1073741820;
  }
  *v9 = 16;
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
