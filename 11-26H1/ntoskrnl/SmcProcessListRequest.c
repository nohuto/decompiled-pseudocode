/*
 * XREFs of SmcProcessListRequest @ 0x14081A284
 * Callers:
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 */

__int64 __fastcall SmcProcessListRequest(void *Src, int a2, _DWORD *a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD v10[20]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v10, 0, 0x44uLL);
  if ( a2 == 68 )
  {
    v8 = 0;
    if ( a4 )
    {
      ProbeForWrite(Src, 0x44uLL, 4u);
      RtlCopyFromUser(v10, Src, 0x44uLL);
    }
    else
    {
      RtlCopyVolatileMemory(v10, Src, 0x44uLL);
    }
    if ( LOBYTE(v10[0]) != 1 || (v10[0] & 0xFF00) != 0 || (v10[0] & 0xFFFF0000) != 0 )
      return (unsigned int)-1073741811;
    else
      *a3 = 68;
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v8;
}
