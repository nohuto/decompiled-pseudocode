/*
 * XREFs of ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x1801BB3B0
 * Callers:
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801BB2C0 (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATE.c)
 * Callees:
 *     <none>
 */

char __fastcall CManipulation::_UpdateInertiaEnabled(__int64 a1, int a2, char a3)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(a1 + 8LL * a2 + 468) & 1) == a3 )
    return 0;
  *(_BYTE *)(a1 + 8LL * a2 + 468) = a3 | *(_BYTE *)(a1 + 8LL * a2 + 468) & 0xFE;
  return result;
}
