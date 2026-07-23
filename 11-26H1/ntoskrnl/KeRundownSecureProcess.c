/*
 * XREFs of KeRundownSecureProcess @ 0x1405E827C
 * Callers:
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x1407956D4 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return VslRundownSecureProcess();
  return result;
}
