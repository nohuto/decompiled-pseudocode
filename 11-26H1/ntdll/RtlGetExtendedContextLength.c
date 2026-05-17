/*
 * XREFs of RtlGetExtendedContextLength @ 0x1800B4000
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x1800B3E10 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlGetExtendedContextLength3 @ 0x1800B42A0 (RtlGetExtendedContextLength3.c)
 *     RtlpValidateContextFlags2 @ 0x1800B4AD0 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  v4 = a1;
  result = RtlpValidateContextFlags2(a1, &v6, 2147353560LL);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength3(v4, a2, v3, 2147353560LL);
  }
  return result;
}
