/*
 * XREFs of LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800E25F0
 * Callers:
 *     <none>
 * Callees:
 *     SaferpIsV2PolicyPresent @ 0x1800E2640 (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800E27A4 (SaferpIsDllAllowed.c)
 */

__int64 __fastcall LdrpCodeAuthzCheckDllAllowedSrpV2(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  result = SaferpIsV2PolicyPresent(&v5);
  if ( (int)result >= 0 )
  {
    if ( v5 )
      return SaferpIsDllAllowed(a1, a2);
    else
      return 0LL;
  }
  return result;
}
