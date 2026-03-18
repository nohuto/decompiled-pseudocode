/*
 * XREFs of GreStackExpansionRequired @ 0x1400C6F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreStackExpansionRequired(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v4 = 0LL;
  v5 = 0LL;
  IoGetStackLimits(&v4, &v5);
  return (unsigned __int64)&v3[-v4] < v1;
}
