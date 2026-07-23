/*
 * XREFs of InbvGetDisplayState @ 0x1405C74EC
 * Callers:
 *     FinalizeBootLogo @ 0x1405C7798 (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C77F0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1405C7950 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetDisplayState(__int64 a1, __int64 a2)
{
  if ( qword_140E65EE8 && *(_QWORD *)(qword_140E65EE8 + 144) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 2LL;
}
