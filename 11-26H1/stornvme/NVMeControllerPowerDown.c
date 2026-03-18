/*
 * XREFs of NVMeControllerPowerDown @ 0x140007400
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeHwStartIo @ 0x14000BEE0 (NVMeHwStartIo.c)
 * Callees:
 *     IoQueuesDeletion @ 0x14000C4A0 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x14000DB20 (NVMeSetHostMemoryBuffer.c)
 *     RoundUp64 @ 0x14000EB40 (RoundUp64.c)
 *     WaitUntilAllAdminCommandsAreInSubmssionQueue @ 0x1400194B4 (WaitUntilAllAdminCommandsAreInSubmssionQueue.c)
 */

char __fastcall NVMeControllerPowerDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v6; // edi
  int v7; // esi
  int *v8; // r9
  int v9; // eax
  void *Src; // rcx
  int v11; // r9d
  char v12; // cl
  unsigned int v13; // eax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // r10d
  int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 1560);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 5u);
  v6 = 0;
  v7 = 0;
  while ( (*(_DWORD *)(a1 + 3748) & 0x80u) != 0 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, a4);
    if ( (unsigned int)++v7 >= 0x3E8 )
      goto LABEL_6;
  }
  if ( (unsigned __int8)WaitUntilAllAdminCommandsAreInSubmssionQueue(a1) )
    goto LABEL_7;
LABEL_6:
  *(_DWORD *)(a1 + 4064) |= 0x40000u;
LABEL_7:
  v8 = *(int **)(a1 + 3720);
  if ( v8 )
  {
    v9 = v8[1];
    Src = v8 + 2;
    v11 = *v8;
    LODWORD(Size) = v9;
    NVMeSetHostMemoryBuffer(a1, 0, 0, v11, Src, Size);
  }
  v12 = *(_BYTE *)(a1 + 3728);
  if ( (v12 & 3) == 3 )
    *(_BYTE *)(a1 + 3728) = v12 | 4;
  v13 = *(_DWORD *)(v4 + 88);
  if ( v13 )
    v14 = RoundUp64(v13, 10000LL) / 0x2710uLL;
  else
    LODWORD(v14) = 500;
  if ( *(_BYTE *)(a1 + 47) )
  {
    v15 = RoundUp64((unsigned int)v14, 100LL);
    v17 = v16;
    if ( (unsigned int)(v15 / 0x64) > v16 )
      v17 = v15 / 0x64;
    LODWORD(v14) = 100 * v17;
  }
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFFDFA | 4;
  IoQueuesDeletion(a1);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v19;
  _InterlockedOr(v21, 0);
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      LOBYTE(v19) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC;
      if ( (_BYTE)v19 == 8 )
        break;
      LOBYTE(v19) = StorPortExtendedFunction(81LL, a1, 10000LL, v18);
      if ( ++v6 >= (unsigned int)v14 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    *(_DWORD *)(a1 + 24) |= 0x200000u;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 5u);
  return v19;
}
