/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x14002A63C
 * Callers:
 *     NVMePowerInitialize @ 0x1400188C4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v4 = *(_QWORD *)(a1 + 1104);
    v5 = *(_DWORD *)(v4 + 4140);
    *(_BYTE *)(v4 + 4096) = 9;
    *(_BYTE *)(v4 + 4136) = 12;
    *(_DWORD *)(v4 + 4140) = v5 ^ ((unsigned __int8)v5 ^ a2) & 1;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, 1);
  }
  return result;
}
