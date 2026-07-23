/*
 * XREFs of InbvReleaseLock @ 0x1405C759C
 * Callers:
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1405C7798 (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C77F0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvReleaseLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65EE8;
  if ( qword_140E65EE8 )
  {
    result = *(_QWORD *)(qword_140E65EE8 + 160);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
