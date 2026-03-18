/*
 * XREFs of ?PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z @ 0x1407FF82C
 * Callers:
 *     NtManageWobTicket @ 0x1407FF940 (NtManageWobTicket.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     KeGetThreadQos @ 0x1405F6320 (KeGetThreadQos.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
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
        DWORD1(Src) = *((_DWORD *)qword_140031F40 + (unsigned __int8)KeGetThreadQos((__int64)Object));
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
