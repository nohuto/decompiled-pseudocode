/*
 * XREFs of PfpQueryScenarioInformation @ 0x1407C5F10
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140C0A428 (PfpScenCtxQueryScenarioInformation.c)
 */

__int64 __fastcall PfpQueryScenarioInformation(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  void *v7; // rdx
  void *v8; // rcx
  _OWORD Src[2]; // [rsp+28h] [rbp-40h] BYREF

  memset(Src, 0, sizeof(Src));
  if ( *(_DWORD *)(a1 + 24) == 32 )
  {
    v6 = 0;
    if ( a2 )
      ProbeForRead(*(volatile void **)(a1 + 16), 1uLL, 8u);
    v7 = *(void **)(a1 + 16);
    if ( a2 )
      RtlCopyFromUser(Src, v7, 0x20uLL);
    else
      RtlCopyVolatileMemory(Src, v7, 0x20uLL);
    if ( LODWORD(Src[0]) == 4 )
    {
      PfpScenCtxQueryScenarioInformation((struct _KTHREAD *)&stru_140E66B30.OtherOperationCount);
      if ( a2 )
        ProbeForWrite(*(volatile void **)(a1 + 16), 0x20uLL, 8u);
      v8 = *(void **)(a1 + 16);
      if ( a2 )
        RtlCopyToUser(v8, Src, 0x20uLL);
      else
        RtlCopyVolatileMemory(v8, Src, 0x20uLL);
      *a3 = 32;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v6;
}
