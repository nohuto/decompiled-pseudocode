/*
 * XREFs of HalpHvEpWriteMsr @ 0x1404E6000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvEpWriteMsr(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    result = a3;
    __writemsr(a2, a3);
  }
  else
  {
    result = qword_140FBB0A0;
    if ( qword_140FBB0A0 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      return guard_dispatch_icall_no_overrides(a1, 1LL);
    }
  }
  return result;
}
