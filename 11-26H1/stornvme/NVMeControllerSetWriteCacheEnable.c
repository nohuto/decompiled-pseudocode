/*
 * XREFs of NVMeControllerSetWriteCacheEnable @ 0x1400066C0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

char __fastcall NVMeControllerSetWriteCacheEnable(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3; // di
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 1560);
  if ( (*(_BYTE *)(v1 + 525) & 1) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 3964);
    LOBYTE(v1) = v3 & 6;
    if ( (v3 & 6) == 2 )
    {
      LocalCommandReuse(a1, a1 + 1008);
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~4u;
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v4 = *(_QWORD *)(a1 + 1104);
      v5 = *(_DWORD *)(v4 + 4140);
      *(_BYTE *)(v4 + 4096) = 9;
      *(_BYTE *)(v4 + 4136) = 6;
      *(_DWORD *)(v4 + 4140) = v5 ^ ((unsigned __int8)v5 ^ v3) & 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeSetFeaturesCacheCompletion;
      ProcessCommand(a1, a1 + 1016);
      LOBYTE(v6) = 1;
      LOBYTE(v1) = WaitForCommandComplete(a1, a1 + 1016, v6);
    }
  }
  return v1;
}
