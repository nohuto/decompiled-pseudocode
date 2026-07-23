/*
 * XREFs of KeUnsecureProcess @ 0x1405E8378
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x1404E7AA0 (VslCloseSecureHandle.c)
 */

unsigned __int64 __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0LL;
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( result )
    return VslCloseSecureHandle(result);
  return result;
}
