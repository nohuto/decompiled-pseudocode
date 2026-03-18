/*
 * XREFs of NVMeControllerIdentify @ 0x140024388
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x14001D390 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     IsIntelChatham @ 0x140012628 (IsIntelChatham.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeControllerIdentify(__int64 a1)
{
  unsigned int v2; // ebx
  int i; // edx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // r14
  unsigned int v9; // esi

  if ( (*(_DWORD *)(a1 + 4344) & 4) != 0
    && (v2 = NVMeIceConfigureExclusionAddress(a1, *(_QWORD *)(a1 + 1568), 4096, 0, 1, 1)) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  else
  {
    LocalCommandReuse(a1, a1 + 1008);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
      ++i;
    v4 = (_QWORD *)(a1 + 1568);
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v5 = *(_QWORD *)(a1 + 1104);
    v6 = *(_QWORD *)(a1 + 1568);
    *(_BYTE *)(v5 + 4096) = 6;
    *(_DWORD *)(v5 + 4100) = 0;
    *(_QWORD *)(v5 + 4120) = v6;
    *(_BYTE *)(v5 + 4136) = 1;
    ProcessCommand(a1, a1 + 1016);
    WaitForCommandComplete(a1, a1 + 1016, 1);
    if ( (*(_BYTE *)(a1 + 1019) & 0x3F) == 1 )
    {
      v7 = 0;
      v2 = 0;
      if ( IsIntelChatham(a1) )
      {
        v8 = *(_QWORD *)(a1 + 1560);
        if ( *(_WORD *)v8 != 0x8086 )
        {
          memset(*(void **)(a1 + 1560), 0, 0x1000uLL);
          *(_BYTE *)(v8 + 261) |= 1u;
          v4 = (_QWORD *)(a1 + 1568);
          *(_DWORD *)v8 = 538017926;
          *(_QWORD *)(v8 + 24) = 0x326D616874616843LL;
          *(_DWORD *)(v8 + 4) = 842084402;
          *(_BYTE *)(v8 + 64) = 48;
          *(_BYTE *)(v8 + 72) = 1;
          *(_WORD *)(v8 + 73) = 1059;
          *(_BYTE *)(v8 + 259) = 3;
          *(_WORD *)(v8 + 512) = 17510;
          *(_DWORD *)(v8 + 516) = 1;
        }
      }
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1019) & 0x3F) == 5 )
      {
        v2 = -1056964596;
      }
      else if ( (*(_BYTE *)(a1 + 1019) & 0x3F) == 8 )
      {
        v2 = -1056964599;
      }
      else
      {
        v2 = -1056964607;
        if ( (*(_BYTE *)(a1 + 1019) & 0x3F) == 9 )
          v2 = -1056964594;
      }
      v7 = v2;
    }
    if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 )
    {
      v9 = NVMeIceConfigureExclusionAddress(a1, *v4, 4096, 0, 1, 0);
      if ( v9 )
      {
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
        if ( !v7 )
          return v9;
      }
    }
  }
  return v2;
}
