/*
 * XREFs of NVMeSetIoQueueCount @ 0x14000CEE0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // ax
  int v9; // eax
  int v10; // ebp
  __int16 v11; // dx
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // cx
  int v14; // eax
  unsigned __int16 *v15; // rdx
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  char v18; // cl
  __int64 result; // rax

  v3 = a2;
  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 330);
    v7 = *(_WORD *)(a1 + 332);
  }
  else
  {
    *(_DWORD *)(a1 + 330) = 0;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 40);
      if ( !v8 )
      {
        v9 = *(_DWORD *)(a1 + 160);
        if ( v9 == 3 || v9 == 4 )
          v8 = *(_WORD *)(a1 + 234);
        else
          v8 = 2 * *(_WORD *)(a1 + 234);
      }
      v10 = *(_DWORD *)(a1 + 124);
      v11 = *(_WORD *)(a1 + 42);
      v6 = v8 + v10;
      if ( !v10 )
        v6 = v8;
      v12 = v6;
      if ( !v11 )
      {
        v13 = *(_WORD *)(a1 + 272);
        v11 = 1;
        if ( v13 > 1u )
          v11 = v13 - 1;
      }
      v14 = v10;
      v7 = v11 + v10;
      if ( !v14 )
        v7 = v11;
      if ( (*(_DWORD *)(a1 + 4064) & 0x10000) != 0 && (*(_DWORD *)(a1 + 4344) & 2) != 0 )
      {
        v15 = *(unsigned __int16 **)(a1 + 4352);
        if ( *v15 )
        {
          v6 = *v15;
          if ( v12 < *v15 )
            v6 = v12;
        }
        v16 = v15[1];
        if ( v16 )
        {
          if ( v7 < v16 )
            v16 = v7;
          v7 = v16;
        }
      }
      if ( v6 <= v7 )
        v6 = v7;
    }
  }
  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v17 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v17 + 4096) = 9;
  *(_BYTE *)(v17 + 4136) = 7;
  *(_WORD *)(v17 + 4140) = v6 - 1;
  *(_WORD *)(v17 + 4142) = v7 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = v3;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, a3);
  v18 = *(_BYTE *)(a1 + 1019);
  if ( v18 == 1 )
    return 0LL;
  result = 3238002689LL;
  if ( v18 == 5 )
    return 3238002700LL;
  return result;
}
