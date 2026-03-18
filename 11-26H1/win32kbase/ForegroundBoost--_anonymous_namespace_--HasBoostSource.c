/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401D4060 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::HasBoostSource(__int64 a1, char a2)
{
  char v4; // di
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  char v8; // bl
  __int64 i; // rcx

  v4 = (*(_QWORD *)(a1 + 808) & 0x3FC0000000LL) != 0;
  if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() && a2 )
  {
    v8 = 0;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 36408); i; i = *(_QWORD *)(i + 1112) )
    {
      if ( a1 == i )
      {
        v8 = 1;
        break;
      }
    }
    if ( v4 != v8 )
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  }
  return v4;
}
