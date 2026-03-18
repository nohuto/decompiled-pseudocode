/*
 * XREFs of XilRegister_GetOperationalRegisters @ 0x14003DB6C
 * Callers:
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetOperationalRegisters(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
