/*
 * XREFs of SmProcessRegistrationRequest @ 0x14082004C
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     SmGetRegistrationInfo @ 0x14081F03C (SmGetRegistrationInfo.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(void *a1, int a2, _DWORD *a3, KPROCESSOR_MODE a4)
{
  int RegistrationInfo; // ebx
  __int64 ProcessPartition; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  _OWORD Src[3]; // [rsp+28h] [rbp-30h] BYREF

  Src[0] = 0LL;
  if ( a2 == 16 )
  {
    if ( a4 )
    {
      ProbeForWrite(a1, 0x10uLL, 8u);
      RtlCopyFromUser(Src, a1, 0x10uLL);
    }
    else
    {
      RtlCopyVolatileMemory(Src, a1, 0x10uLL);
    }
    if ( LOBYTE(Src[0]) != 2 || (Src[0] & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
      RegistrationInfo = SmGetRegistrationInfo(ProcessPartition, a4, (__int64)Src, v9);
      if ( RegistrationInfo >= 0 )
      {
        if ( a4 )
          RtlCopyToUser(a1, Src, 0x10uLL);
        else
          RtlCopyVolatileMemory(a1, Src, 0x10uLL);
        *a3 = 16;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return (unsigned int)RegistrationInfo;
}
