/*
 * XREFs of NVMeSetArbitration @ 0x14000D0E0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeSetArbitration(__int64 a1, char a2)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int8 v6; // cl
  __int64 v7; // rdx
  int v8; // eax

  result = *(_QWORD *)(a1 + 1560);
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v6 = *(_BYTE *)(a1 + 46);
    if ( v6 == 0xFF )
    {
      v3 = *(_BYTE *)(result + 72);
    }
    else
    {
      if ( v6 <= 1u )
      {
LABEL_6:
        LocalCommandReuse(a1, a1 + 1008);
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        v7 = *(_QWORD *)(a1 + 1104);
        v8 = *(_DWORD *)(v7 + 4140);
        *(_BYTE *)(v7 + 4096) = 9;
        *(_BYTE *)(v7 + 4136) = 1;
        *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)v3) & 7;
        ProcessCommand(a1, a1 + 1016);
        return WaitForCommandComplete(a1, a1 + 1016, a2);
      }
      do
      {
        v6 >>= 1;
        ++v3;
      }
      while ( v6 > 1u );
    }
    if ( (unsigned __int8)v3 >= 7u )
      v3 = 7;
    goto LABEL_6;
  }
  return result;
}
