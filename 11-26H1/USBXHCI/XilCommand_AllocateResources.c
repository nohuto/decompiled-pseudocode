/*
 * XREFs of XilCommand_AllocateResources @ 0x14003F568
 * Callers:
 *     Command_PrepareHardware @ 0x14007390C (Command_PrepareHardware.c)
 * Callees:
 *     XilCommand_AllocateSecureResources @ 0x14003F5CC (XilCommand_AllocateSecureResources.c)
 *     XilCoreCommand_AllocateResources @ 0x140056C38 (XilCoreCommand_AllocateResources.c)
 */

__int64 __fastcall XilCommand_AllocateResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx

  v1 = a1 + 136;
  if ( *(_BYTE *)(a1 + 136) )
    LODWORD(result) = XilCommand_AllocateSecureResources(a1 + 136);
  else
    LODWORD(result) = XilCoreCommand_AllocateResources(a1 + 168);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v5 = *(_QWORD *)(v4 + 48);
  *(_QWORD *)(v1 + 24) = v4;
  *(_QWORD *)(v1 + 16) = v5 & -(__int64)(v5 != 0);
  return (unsigned int)result;
}
