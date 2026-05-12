/*
 * XREFs of RaUnitCheckRemoveState @ 0x140021C30
 * Callers:
 *     RaUnitIncrementOutstandingIrpRequests @ 0x14002134C (RaUnitIncrementOutstandingIrpRequests.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidSrbFunctionFromIrp @ 0x140070658 (RaidSrbFunctionFromIrp.c)
 */

__int64 __fastcall RaUnitCheckRemoveState(__int64 a1, __int64 a2)
{
  int v2; // eax
  char *v4; // rcx
  char v5; // al
  char v6; // al
  char v7; // r8
  __int64 v8; // rax

  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 == 6 )
    return 3221225558LL;
  if ( v2 == 5 )
  {
    if ( !a2 )
      return 3221225558LL;
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v8 != 27 )
    {
      if ( *(_BYTE *)v8 != 14 || *(_DWORD *)(v8 + 24) != 266276 )
        return 3221225558LL;
      return 0LL;
    }
    return 0LL;
  }
  if ( v2 != 7 )
    return 0LL;
  if ( !a2 )
    return 3221225558LL;
  v4 = *(char **)(a2 + 184);
  v5 = *v4;
  if ( *v4 == 15 )
  {
    v6 = RaidSrbFunctionFromIrp(a2, a2);
    if ( v7 == -16 || v6 == 1 )
      return 0LL;
    return 3221225558LL;
  }
  if ( v5 == 27 )
    return 0LL;
  if ( v5 == 14 )
  {
    if ( *((_DWORD *)v4 + 6) != 266264 )
      return 3221225558LL;
    return 0LL;
  }
  if ( v5 != 22 || v4[1] != 2 )
    return 3221225558LL;
  return 0LL;
}
