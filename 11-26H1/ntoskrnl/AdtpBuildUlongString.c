/*
 * XREFs of AdtpBuildUlongString @ 0x140B1256C
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     AdtpBuildRegistryValueString @ 0x1408962BC (AdtpBuildRegistryValueString.c)
 * Callees:
 *     _ultow @ 0x1405383CC (_ultow.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildUlongString(unsigned int Value, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  wchar_t *Pool2; // rbx
  char v10; // cl
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !a3 && !a2 )
    return 3221225485LL;
  if ( a4 && a5 && (v13 = (unsigned int)*a5, (unsigned int)(v13 + 11) < 0x400) )
  {
    *a5 = v13 + 11;
    Pool2 = (wchar_t *)(a4 + 2 * v13);
    v10 = 0;
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225495LL;
    v10 = 1;
  }
  *a6 = v10;
  ultow(Value, Pool2, 10);
  v11 = -1LL;
  do
    ++v11;
  while ( Pool2[v11] );
  if ( a3 )
  {
    *a3 = Pool2;
    a3[1] = (wchar_t *)(unsigned int)(2 * v11 + 2);
  }
  else
  {
    *(_WORD *)(a2 + 2) = 22;
    *(_WORD *)a2 = 2 * v11;
    *(_QWORD *)(a2 + 8) = Pool2;
  }
  return 0LL;
}
