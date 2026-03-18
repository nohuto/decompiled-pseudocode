/*
 * XREFs of InbvGetDisplayState @ 0x1405C4C7C
 * Callers:
 *     FinalizeBootLogo @ 0x1405C4F28 (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C4F80 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1405C50E0 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetDisplayState(__int64 a1, __int64 a2)
{
  if ( qword_140E65CE0 && *(_QWORD *)(qword_140E65CE0 + 144) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 2LL;
}
