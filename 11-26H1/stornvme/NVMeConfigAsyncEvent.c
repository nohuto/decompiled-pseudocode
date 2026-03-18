/*
 * XREFs of NVMeConfigAsyncEvent @ 0x140011740
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1560);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v5 = *(_QWORD *)(a1 + 1104);
    v6 = *(_DWORD *)(a1 + 60) & (*(_DWORD *)(v3 + 92) & 0x8000300 | ((*(_BYTE *)(v3 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 3960) = v6;
    *(_DWORD *)(v5 + 4140) = v6;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_BYTE *)(v5 + 4136) = 11;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  return result;
}
