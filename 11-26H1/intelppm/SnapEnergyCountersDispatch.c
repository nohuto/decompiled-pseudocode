/*
 * XREFs of SnapEnergyCountersDispatch @ 0x14000ECC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall SnapEnergyCountersDispatch(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))WPP_MAIN_CB.Queue.ListEntry.Flink;
  v2 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_1400199A0[32 * (unsigned __int64)*(unsigned __int8 *)(v2 + 376)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
