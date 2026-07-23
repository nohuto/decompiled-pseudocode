/*
 * XREFs of KiIsNextScheduledScbThread @ 0x1404AC8A4
 * Callers:
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsNextScheduledScbThread(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = a1 + 33840;
  v4 = *(_QWORD *)(v3 + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 1;
    v5 = v4 ^ (v3 | 1);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8);
  }
  if ( !v5 )
    return 1;
  if ( *(_DWORD *)(v5 + 36) != a2 )
    return *(_DWORD *)(v5 + 36) > a2;
  _BitScanReverse((unsigned int *)&v5, *(unsigned __int16 *)(v5 + 32));
  return a3 > (int)v5;
}
