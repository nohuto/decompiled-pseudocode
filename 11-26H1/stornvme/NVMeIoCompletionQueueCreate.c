/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x14000C760
 * Callers:
 *     IoQueuesCreation @ 0x14000D1E0 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x14001495C (IoQueuesCreationAsync.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     ProcessMultipleCommands @ 0x14002BADC (ProcessMultipleCommands.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeIoCompletionQueueCreate(__int64 a1, char a2, char a3)
{
  unsigned __int16 *v3; // r15
  __int64 v4; // rdi
  char v8; // r12
  unsigned __int16 i; // si
  _BYTE *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r9
  char v16; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v19; // rsi
  _BYTE *v20; // [rsp+30h] [rbp-20h]
  _BYTE *v21; // [rsp+38h] [rbp-18h]
  _BYTE *v22; // [rsp+90h] [rbp+40h]
  void *v23; // [rsp+A8h] [rbp+58h]

  v3 = (unsigned __int16 *)(a1 + 332);
  v22 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 324)) )
    v8 = 0;
  for ( i = 1; i <= *v3; ++i )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
      if ( !v22 )
        goto LABEL_17;
      memset(v22, 0, 0x80uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v23 )
      {
        NVMeFreePool(a1);
LABEL_17:
        if ( v4 )
        {
          do
          {
            SrbExtension = GetSrbExtension(v4);
            v19 = *((_QWORD *)v20 + 5);
            NVMeFreeDmaBuffer(a1, 0x2000LL, v20 + 56, *(_QWORD *)(*(_QWORD *)(SrbExtension + 4200) + 104LL));
            NVMeFreePool(a1);
            v20 = (_BYTE *)v19;
            v4 = v19;
          }
          while ( v19 );
        }
        return 3238002689LL;
      }
      memset(v23, 0, 0x1088uLL);
      v22[11] = 0;
      *((_DWORD *)v22 + 5) = 251658240;
      *((_QWORD *)v22 + 12) = v23;
      *((_QWORD *)v22 + 8) = v23;
      *((_QWORD *)v22 + 13) = 0LL;
      *v22 = 1;
      *((_QWORD *)v23 + 525) = v22;
      v10 = v23;
    }
    else
    {
      LocalCommandReuse(a1, a1 + 1008);
      v10 = *(_BYTE **)(a1 + 1104);
      v22 = (_BYTE *)(a1 + 1008);
      v4 = (__int64)v20;
      v23 = v10;
    }
    v10[4225] |= 1u;
    *((_BYTE *)v23 + 4225) &= ~2u;
    *((_WORD *)v23 + 2106) = 0;
    v11 = 392LL * i;
    v12 = *(_QWORD *)(a1 + 944) + v11;
    *((_BYTE *)v23 + 4096) = 5;
    *((_QWORD *)v23 + 515) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 944) - 384);
    *((_WORD *)v23 + 2068) = i;
    *((_WORD *)v23 + 2069) = *(_WORD *)(a1 + 326) - 1;
    v13 = *((_DWORD *)v23 + 1035) | 1;
    *((_DWORD *)v23 + 1035) = v13;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v12 - 144) )
      v14 = v13 & 0xFFFFFFFD;
    else
      v14 = v13 | 2;
    *((_DWORD *)v23 + 1035) = v14;
    *((_WORD *)v23 + 2071) = *(_WORD *)(*(_QWORD *)(a1 + 944) + v11 - 216);
    if ( (a3 || v8) && (*((_QWORD *)v23 + 524) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v21 )
      {
        *((_QWORD *)v21 + 5) = v22 + 8;
      }
      else
      {
        v4 = (__int64)(v22 + 8);
        v20 = v22 + 8;
      }
      v21 = v22 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v22 + 8));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 324) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v15);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 996));
        }
      }
      else
      {
        WaitForCommandComplete(a1, (__int64)(v22 + 8), a2);
        v16 = v22[11];
        if ( v16 != 1 )
        {
          result = 3238002689LL;
          if ( v16 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
  }
  if ( v8 && v4 )
    ProcessMultipleCommands(a1, v4);
  return 0LL;
}
