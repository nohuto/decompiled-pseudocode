/*
 * XREFs of PerfomInitialReadInputOnSharedThread @ 0x14014A3E0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018D99C (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x14014A440 (-Read@CBaseInput@@QEAAJXZ.c)
 */

CBaseInput **__fastcall PerfomInitialReadInputOnSharedThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  CBaseInput **v3; // rdi
  CBaseInput **v4; // rbx
  CBaseInput **result; // rax

  v2 = W32GetUserSessionState(a1, a2) + 3112;
  v3 = (CBaseInput **)(v2 + 144);
  v4 = (CBaseInput **)(v2 + 24);
  do
  {
    if ( *((_DWORD *)v4 - 2) == 2 )
      CBaseInput::Read(*v4);
    v4 += 6;
    result = v4 - 3;
  }
  while ( v4 - 3 != v3 );
  return result;
}
