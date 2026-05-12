/*
 * XREFs of NvmeControllerStoreSubsystemId @ 0x1400FB178
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCbPrintfA @ 0x140038338 (RtlStringCbPrintfA.c)
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerStoreSubsystemId(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 v5; // rcx
  char *v6; // r8
  char v7; // r9
  __int64 v8; // rax
  size_t v9; // rsi
  char *Pool; // rax
  char pszSrc[128]; // [rsp+20h] [rbp-98h] BYREF

  v1 = a1[74];
  v2 = 0;
  if ( v1 )
  {
    v4 = (void *)a1[99];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      v1 = a1[74];
      a1[99] = 0LL;
    }
    v5 = 0LL;
    v6 = pszSrc;
    do
    {
      v7 = *(_BYTE *)(v5 + v1 + 4);
      if ( v7 == 32 )
        break;
      *v6 = v7;
      v5 = (unsigned int)(v5 + 1);
      ++v6;
    }
    while ( (unsigned int)v5 < 0x14 );
    RtlStringCbPrintfA(&pszSrc[v5], 128 - v5, "_%u", *(unsigned __int16 *)(a1[74] + 78LL));
    v8 = -1LL;
    do
      ++v8;
    while ( pszSrc[v8] );
    v9 = (unsigned int)(v8 + 1);
    Pool = (char *)RaidAllocatePool(64LL, v9, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
    a1[99] = Pool;
    if ( Pool )
      RtlStringCbCopyA(Pool, v9, pszSrc);
    else
      return (unsigned int)-1073741670;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
