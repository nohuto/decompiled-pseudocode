/*
 * XREFs of CitDisplayRequestChange @ 0x1400D7C64
 * Callers:
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400D7BC8 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

char __fastcall CitDisplayRequestChange(int a1, int a2, int a3)
{
  char result; // al
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdi

  result = CitIsEnabled(a1, a2, a3);
  if ( result )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18952) + 32LL);
    result = *(_BYTE *)(v8 + 112) & 1;
    if ( (a1 != 0) != result )
    {
      if ( a1 )
      {
        if ( (unsigned int)dword_1402AA12C < MEMORY[0xFFFFF7800000037C] )
          EtwTelemetryCoverageReport(&off_1402AA120);
      }
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (CIT_USER_ACTIVE_TRACKER *)(v8 + 228),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        a1);
      result = (a1 != 0) | *(_BYTE *)(v8 + 112) & 0xFE;
      *(_BYTE *)(v8 + 112) = result;
    }
  }
  return result;
}
