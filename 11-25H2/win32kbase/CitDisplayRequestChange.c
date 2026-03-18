/*
 * XREFs of CitDisplayRequestChange @ 0x14007EB1C
 * Callers:
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x14007F064 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

char __fastcall CitDisplayRequestChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char result; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi

  v2 = a1;
  result = CitIsEnabled(a1, a2);
  if ( result )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18912) + 32LL);
    result = *(_BYTE *)(v6 + 112) & 1;
    if ( (v2 != 0) != result )
    {
      if ( v2 )
      {
        if ( (unsigned int)dword_14029F0DC < MEMORY[0xFFFFF7800000037C] )
          EtwTelemetryCoverageReport(&off_14029F0D0);
      }
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (CIT_USER_ACTIVE_TRACKER *)(v6 + 228),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        v2);
      result = (v2 != 0) | *(_BYTE *)(v6 + 112) & 0xFE;
      *(_BYTE *)(v6 + 112) = result;
    }
  }
  return result;
}
