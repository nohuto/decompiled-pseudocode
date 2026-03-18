/*
 * XREFs of ACPIGetConvertToStringWide @ 0x14004F0C8
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003A900 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToString @ 0x140054818 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1400611D0 (ACPIGetConvertToSerialIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003AE54 (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToStringWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  __int64 v8; // rax
  size_t v9; // rsi
  char *Pool2; // rax
  char *v11; // rdi

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v8) );
  v9 = (unsigned int)(v8 + 1);
  Pool2 = (char *)ExAllocatePool2(
                    (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    2 * v9,
                    1399874369LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlStringCchPrintfA(Pool2, v9, "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v11, 2 * v9);
  *a5 = v11;
  if ( a6 )
    *a6 = 2 * v9;
  return 0LL;
}
