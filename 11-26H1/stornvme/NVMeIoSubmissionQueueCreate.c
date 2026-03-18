/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x14000BFE0
 * Callers:
 *     IoQueuesCreation @ 0x14000D1E0 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x14001495C (IoQueuesCreationAsync.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     ProcessMultipleCommands @ 0x14002BADC (ProcessMultipleCommands.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeIoSubmissionQueueCreate(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 *v3; // r15
  __int64 v4; // rsi
  char v8; // r12
  unsigned __int16 i; // di
  void *v10; // rcx
  _BYTE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  _BYTE *v17; // [rsp+30h] [rbp-20h]
  _BYTE *v18; // [rsp+38h] [rbp-18h]
  _BYTE *v19; // [rsp+90h] [rbp+40h]
  void *v20; // [rsp+A8h] [rbp+58h]

  v3 = (unsigned __int16 *)(a1 + 330);
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 324)) )
    v8 = 0;
  for ( i = 1; i <= *v3; ++i )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
      if ( !v19 )
        goto LABEL_15;
      memset(v19, 0, 0x80uLL);
      NVMeAllocateDmaBuffer(a1, 0x2000u);
      if ( !v20 )
      {
        NVMeFreePool(a1);
LABEL_15:
        while ( v4 )
        {
          SrbExtension = GetSrbExtension(v4);
          v4 = *(_QWORD *)(v4 + 40);
          NVMeFreeDmaBuffer(a1, 0x2000LL, v17 + 56, *(_QWORD *)(*(_QWORD *)(SrbExtension + 4200) + 104LL));
          NVMeFreePool(a1);
          v17 = (_BYTE *)v4;
        }
        return 3238002689LL;
      }
      memset(v20, 0, 0x1088uLL);
      v19[11] = 0;
      *((_DWORD *)v19 + 5) = 251658240;
      *((_QWORD *)v19 + 12) = v20;
      *((_QWORD *)v19 + 8) = v20;
      *((_QWORD *)v19 + 13) = 0LL;
      *v19 = 1;
      *((_QWORD *)v20 + 525) = v19;
      v11 = v20;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 1008) )
        *(_DWORD *)(a1 + 4064) |= 0x20000u;
      v10 = *(void **)(a1 + 1104);
      *(_BYTE *)(a1 + 1019) = 0;
      memset(v10, 0, 0x1088uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
      *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
      *(_BYTE *)(a1 + 1008) = 1;
      v11 = *(_BYTE **)(a1 + 1104);
      v19 = (_BYTE *)(a1 + 1008);
      v4 = (__int64)v17;
      v20 = v11;
    }
    v11[4225] |= 1u;
    *((_BYTE *)v20 + 4225) &= ~2u;
    *((_WORD *)v20 + 2106) = 0;
    v12 = 208LL * i;
    *((_BYTE *)v20 + 4096) = 1;
    *((_QWORD *)v20 + 515) = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 936) - 200);
    *((_WORD *)v20 + 2068) = i;
    *((_WORD *)v20 + 2069) = *(_WORD *)(a1 + 326) - 1;
    *((_DWORD *)v20 + 1035) = *((_DWORD *)v20 + 1035) & 0xFFFFFFF8 | 5;
    *((_WORD *)v20 + 2071) = *(_WORD *)(v12 + *(_QWORD *)(a1 + 936) - 150);
    if ( (a3 || v8) && (*((_QWORD *)v20 + 524) = NVMeIoSubmissionQueueCreateCompletion, v8) )
    {
      if ( v18 )
      {
        *((_QWORD *)v18 + 5) = v19 + 8;
      }
      else
      {
        v4 = (__int64)(v19 + 8);
        v17 = v19 + 8;
      }
      v18 = v19 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v19 + 8));
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 324) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v13);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 996));
        }
      }
      else
      {
        WaitForCommandComplete(a1, v19 + 8, a2);
        v14 = v19[11];
        if ( v14 != 1 )
        {
          result = 3238002689LL;
          if ( v14 == 5 )
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
