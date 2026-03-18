/*
 * XREFs of KeRundownSecureProcess @ 0x1405E590C
 * Callers:
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x140792BA4 (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return VslRundownSecureProcess();
  return result;
}
