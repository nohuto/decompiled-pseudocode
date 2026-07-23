/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140256674
 * Callers:
 *     KiIntSteerLogProc @ 0x140256278 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x140256580 (KiIntSteerLogStatus.c)
 *     KiIntSteerLogState @ 0x140430D30 (KiIntSteerLogState.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall KiIntSteerEtwEventEnabled(__int64 a1)
{
  REGHANDLE v1; // rdx
  char v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int8 v6; // al

  v1 = KiIntSteerEtwHandle;
  v2 = 0;
  if ( !KiIntSteerEtwHandle )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(KiIntSteerEtwHandle + 32);
  if ( *(_DWORD *)(v5 + 96) )
  {
    v6 = *(_BYTE *)(v5 + 100);
    if ( (*(_BYTE *)(a1 + 4) <= v6 || !v6)
      && ((*(_DWORD *)(v5 + 104) & 0x40) != 0 && !v4
       || (v4 & *(_QWORD *)(v5 + 112)) != 0 && (v4 & *(_QWORD *)(v5 + 120)) == *(_QWORD *)(v5 + 120)) )
    {
      return 1;
    }
  }
  if ( *(_WORD *)(KiIntSteerEtwHandle + 102) )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 4);
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(KiIntSteerEtwHandle + 40) + 96LL,
                            v1,
                            *(_QWORD *)(a1 + 8),
                            0LL) )
      return 1;
  }
  return v2;
}
