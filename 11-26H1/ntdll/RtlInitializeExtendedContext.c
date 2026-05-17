/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800B3F80
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x1800B3E10 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x1800B4540 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags2 @ 0x1800B4AD0 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags2(a2, &v8, 2147353560LL);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(a1, a2, a3, v6);
  }
  return result;
}
