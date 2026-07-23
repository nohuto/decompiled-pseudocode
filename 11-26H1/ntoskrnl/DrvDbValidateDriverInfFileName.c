/*
 * XREFs of DrvDbValidateDriverInfFileName @ 0x1408A564C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1409766E0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140B57EB0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDriverInfFileName(__int64 a1, const wchar_t *a2)
{
  wchar_t *v3; // rax
  const wchar_t *v4; // rax

  if ( *a2 != 64 || (v3 = wcschr(a2 + 1, 0x3Au)) == 0LL || (v4 = v3 + 1) == 0LL )
    v4 = a2;
  return wcschr(v4, 0x5Cu) != 0LL ? 0xC0000033 : 0;
}
