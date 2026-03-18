/*
 * XREFs of PerfomInitialReadInputOnSharedThread @ 0x1401898F4
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1400976E0 (-Read@CBaseInput@@QEAAJXZ.c)
 */

__int64 __fastcall PerfomInitialReadInputOnSharedThread(int a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi

  result = W32GetUserSessionState(a1, a2, a3);
  v4 = result + 3112;
  v5 = result + 3256;
  while ( v4 != v5 )
  {
    if ( *(_DWORD *)(v4 + 16) == 2 )
      result = CBaseInput::Read(*(CBaseInput **)(v4 + 24));
    v4 += 48LL;
  }
  return result;
}
