/*
 * XREFs of NVMeGetNamespaceIoCommandSetIdentify @ 0x140026CF0
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x140028F38 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildIdentifyCommandGeneric @ 0x140019CBC (BuildIdentifyCommandGeneric.c)
 */

void __fastcall NVMeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // r14
  unsigned int i; // esi
  __int64 v4; // rax
  __int64 v5; // r9
  int j; // edx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 1656);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      v4 = *(_QWORD *)(a1 + 8LL * i + 1672);
      if ( v4 && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
      {
        LocalCommandReuse(a1, a1 + 1008);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        BuildIdentifyCommandGeneric(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 5, v5, v8, 2, *(_QWORD *)(a1 + 1664), i + 1, 0);
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672)
                                                                                           + 120LL)) & 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672)
                                                                                           + 120LL)) & 2;
          v7 = *(_QWORD *)(a1 + 8LL * i + 1672);
          *(_WORD *)(v7 + 122) ^= (*(_WORD *)(v1 + 2) ^ *(_WORD *)(v7 + 122)) & 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 124LL) = *(_DWORD *)(v1 + 4);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 128LL) = *(_DWORD *)(v1 + 8);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 132LL) = *(_DWORD *)(v1 + 12);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 136LL) = *(_DWORD *)(v1 + 16);
          *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 144LL) = *(_QWORD *)(v1 + 2816);
          *(_BYTE *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 152LL) = *(_BYTE *)(v1 + 2824);
        }
      }
    }
  }
}
