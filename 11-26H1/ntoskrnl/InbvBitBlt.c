/*
 * XREFs of InbvBitBlt @ 0x1405C733C
 * Callers:
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvBitBlt(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65EE8;
  if ( qword_140E65EE8 )
  {
    result = *(_QWORD *)(qword_140E65EE8 + 96);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, 0LL);
  }
  return result;
}
