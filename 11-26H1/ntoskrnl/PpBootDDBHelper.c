/*
 * XREFs of PpBootDDBHelper @ 0x1407A5AE4
 * Callers:
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SdbInitDatabaseInMemory @ 0x1409E62EC (SdbInitDatabaseInMemory.c)
 *     PnpLogEvent @ 0x140AA4138 (PnpLogEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpBootDDBHelper(void *Src, size_t Size, _QWORD *a3, __int64 *a4)
{
  size_t v6; // rbp
  void *Pool2; // rax
  void *v9; // rbx
  __int64 inited; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = (unsigned int)Size;
  if ( !(_DWORD)Size || !Src )
  {
    if ( (PiLoggedErrorEventsMask & 1) == 0 )
      PiLoggedErrorEventsMask |= 1u;
    return 3221225473LL;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, v6);
    inited = SdbInitDatabaseInMemory(v9, (unsigned int)v6);
    if ( inited )
    {
      *a3 = v9;
      *a4 = inited;
      return 0LL;
    }
    ExFreePoolWithTag(v9, 0);
    if ( (PiLoggedErrorEventsMask & 4) == 0 )
    {
      PiLoggedErrorEventsMask |= 4u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"INIT DATABASE FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
    return 3221225473LL;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  return 3221225626LL;
}
