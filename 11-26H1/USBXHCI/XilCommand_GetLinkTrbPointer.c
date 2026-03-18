/*
 * XREFs of XilCommand_GetLinkTrbPointer @ 0x14003FA64
 * Callers:
 *     Command_PrepareHardware @ 0x14007390C (Command_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetLinkTrbPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(_QWORD *)(a1 + 184);
  else
    return *(_QWORD *)(a1 + 192);
}
