/*
 * XREFs of InbvSetFunction @ 0x140534288
 * Callers:
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140E65EF8;
  v3 = (unsigned int)(dword_140E65EF8 - 3);
  if ( (unsigned int)v3 <= 1 )
  {
    if ( qword_140E65EE8 && *(_QWORD *)(qword_140E65EE8 + 136) )
      guard_dispatch_icall_no_overrides(0LL, v3);
    v4 = off_140E00D20;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140E65EF8 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140E00DE0;
    qword_140E65EE8 = (__int64)v4;
  }
  return result;
}
