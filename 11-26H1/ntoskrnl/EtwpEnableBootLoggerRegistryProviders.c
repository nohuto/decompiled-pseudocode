/*
 * XREFs of EtwpEnableBootLoggerRegistryProviders @ 0x140CE803C
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     EtwpEnableKeyProviders @ 0x140833B0C (EtwpEnableKeyProviders.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnableBootLoggerRegistryProviders(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  ULONG_PTR v5; // r15
  wchar_t *Pool2; // rsi
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  const WCHAR *v9; // r14
  unsigned int *v10; // rax
  unsigned int *v11; // r14
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3) );
  v5 = (unsigned int)(2 * v3 + 260);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v5, 0x74777445u);
  if ( Pool2 )
  {
    v7 = (_QWORD *)(a2 + 8);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v9 = (const WCHAR *)i[2];
      if ( !RtlStringCbPrintfW(Pool2, v5, L"%ws\\%ws", a1, v9) )
      {
        RtlInitUnicodeString(&DestinationString, v9);
        v10 = EtwpAcquireLoggerContextByLoggerName(EtwpHostSiloState, &DestinationString, 0);
        v11 = v10;
        if ( v10 )
        {
          EtwpEnableKeyProviders(*((_QWORD *)v10 + 170), *v10, (__int64)Pool2, 0LL);
          EtwpReleaseLoggerContext(v11, 0);
        }
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
}
