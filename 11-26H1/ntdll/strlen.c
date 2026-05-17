/*
 * XREFs of strlen @ 0x180164FE0
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180039B60 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C6D0C (AVrfpDetectVerifiedExports.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800C9070 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitAnsiStringEx @ 0x1800CBE40 (RtlInitAnsiStringEx.c)
 *     RtlInitAnsiString @ 0x1800D5DB0 (RtlInitAnsiString.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     mbstowcs @ 0x18012B180 (mbstowcs.c)
 *     vscan_fn @ 0x18012C888 (vscan_fn.c)
 *     sscanf_s @ 0x180133CF0 (sscanf_s.c)
 *     RtlAppendAsciizToString @ 0x180140790 (RtlAppendAsciizToString.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strlen(const char *Str)
{
  const char *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned int v8; // edx

  v1 = Str;
  v2 = -(__int64)Str;
  if ( ((unsigned __int8)v1 & 7) == 0 )
    goto LABEL_4;
  do
  {
    if ( !*v1++ )
      return (size_t)&v1[v2 - 1];
  }
  while ( ((unsigned __int8)v1 & 7) != 0 );
  while ( 1 )
  {
    do
    {
LABEL_4:
      v4 = *(_QWORD *)v1;
      v1 += 8;
    }
    while ( (((v4 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v4) & 0x8101010101010100uLL) == 0 );
    v5 = *((_QWORD *)v1 - 1);
    if ( !(_BYTE)v5 )
      break;
    if ( !BYTE1(v5) )
      return (size_t)&v1[v2 - 7];
    v6 = v5 >> 16;
    if ( !(_BYTE)v6 )
      return (size_t)&v1[v2 - 6];
    if ( !BYTE1(v6) )
      return (size_t)&v1[v2 - 5];
    v7 = v6 >> 16;
    if ( !(_BYTE)v7 )
      return (size_t)&v1[v2 - 4];
    if ( !BYTE1(v7) )
      return (size_t)&v1[v2 - 3];
    v8 = WORD1(v7);
    if ( !(_BYTE)v8 )
      return (size_t)&v1[v2 - 2];
    if ( !BYTE1(v8) )
      return (size_t)&v1[v2 - 1];
  }
  return (size_t)&v1[v2 - 8];
}
