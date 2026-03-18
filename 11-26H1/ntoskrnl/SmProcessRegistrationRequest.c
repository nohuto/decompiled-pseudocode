/*
 * XREFs of SmProcessRegistrationRequest @ 0x140819E3C
 * Callers:
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     SmGetRegistrationInfo @ 0x140818E2C (SmGetRegistrationInfo.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
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
