/*
 * XREFs of NVMeReservedCompletionQueueCreate @ 0x140029A20
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     GetFreeReservedQueueIndex @ 0x14001AECC (GetFreeReservedQueueIndex.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeReservedCompletionQueueCreate(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int16 FreeReservedQueueIndex; // ax
  int v9; // r11d
  _QWORD *v11; // r15
  __int64 v12; // rbx
  __int64 *v13; // r14
  _WORD *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r12
  int v17; // ecx
  __int64 v18; // r8
  __int16 v19; // ax
  __int64 v20; // r10
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // dx
  __int16 v26; // r9
  unsigned __int16 v28; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v5 = 64LL;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    v5 = 24LL;
  v6 = *(_QWORD *)(v5 + a3);
  v7 = *(unsigned int *)(v6 + 36);
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  v28 = FreeReservedQueueIndex;
  if ( FreeReservedQueueIndex == 0xFFFF )
    return 5LL;
  v11 = (_QWORD *)(a1 + 968);
  v12 = 48LL * FreeReservedQueueIndex;
  v13 = (__int64 *)(a1 + 968);
  *(_WORD *)(v12 + *(_QWORD *)(a1 + 968) + 24) = v9;
  *(_QWORD *)(v12 + *(_QWORD *)(a1 + 968) + 16) = (unsigned int)(*(_DWORD *)(a1 + 200) * (2 * v9 + 1))
                                                + *(_QWORD *)(a1 + 176)
                                                + 4096LL;
  v14 = (_WORD *)(v6 + 56);
  v15 = *(_QWORD *)(v6 + 44);
  if ( v15 )
  {
    *(_QWORD *)(v12 + *v11) = v15;
  }
  else
  {
    v17 = (unsigned __int16)*v14;
    if ( (_WORD)v17 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
    {
      NVMeAllocateDmaBuffer(a1, 16 * v17);
      return 8LL;
    }
  }
  v16 = (_QWORD *)(a1 + 968);
  *(_WORD *)(v12 + *v11 + 26) = *v14;
  *(_WORD *)(v12 + *v11 + 32) ^= (*(_WORD *)(v6 + 58) ^ *(_WORD *)(v12 + *v11 + 32)) & 2;
  if ( (*(_DWORD *)(v6 + 68) & 0xF) == 0
    || *(_DWORD *)(v6 + 52) && (v16 = (_QWORD *)(a1 + 968), (*(_BYTE *)(v6 + 58) & 1) != 0) )
  {
    *(_DWORD *)(*v13 + 48LL * FreeReservedQueueIndex + 28) = *(_DWORD *)(v6 + 52);
    v18 = 6LL * FreeReservedQueueIndex;
    v19 = *(_WORD *)(*v13 + 48LL * FreeReservedQueueIndex + 32);
    *(_WORD *)(*v13 + 8 * v18 + 32) = v19 ^ (*(_WORD *)(v6 + 58) ^ v19) & 1;
  }
  else
  {
    *(_DWORD *)(v12 + *v11 + 28) = v9;
    *(_WORD *)(v12 + *v11 + 32) |= 1u;
  }
  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v20 = *(_QWORD *)(a1 + 1104);
  v21 = *(_DWORD *)(v20 + 4140);
  *(_BYTE *)(v20 + 4096) = 5;
  *(_QWORD *)(v20 + 4120) = *(_QWORD *)(*v13 + 48LL * v28);
  *(_WORD *)(v20 + 4136) = a2;
  *(_WORD *)(v20 + 4138) = *(_WORD *)(*v13 + 48LL * v28 + 26) - 1;
  v22 = v21 ^ (v21 ^ (*(unsigned __int16 *)(*v13 + 48LL * v28 + 32) >> 1)) & 1;
  *(_DWORD *)(v20 + 4140) = v22;
  *(_DWORD *)(v20 + 4140) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * *(_WORD *)(*v13 + 48LL * v28 + 32))) & 2;
  *(_WORD *)(v20 + 4142) = *(_WORD *)(*v13 + 48LL * v28 + 28);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v23 = *v13;
    ++*(_WORD *)(a1 + 954);
    *(_QWORD *)(v23 + 48LL * v28 + 40) = *(_QWORD *)(v6 + 60);
    memset((void *)(v7 + v6 + 28), 0, 0x78uLL);
    *(_QWORD *)(v6 + v7 + 36) = *(_QWORD *)(*v13 + 48LL * v28);
    *(_QWORD *)(v6 + v7 + 44) = *(_QWORD *)(*v13 + 48LL * v28 + 8);
    if ( (*(_DWORD *)(v6 + 68) & 0x30) == 0x10 )
      v24 = *(_DWORD *)(a1 + 200) * (2 * (unsigned int)a2 + 1);
    else
      v24 = *(_QWORD *)(*v13 + 48LL * v28 + 16);
    *(_QWORD *)(v6 + v7 + 52) = v24;
    v25 = *(_WORD *)(v6 + v7 + 68);
    *(_WORD *)(v6 + v7 + 60) = *(_WORD *)(*(_QWORD *)(a1 + 968) + 48LL * v28 + 24);
    *(_WORD *)(v6 + v7 + 62) = *(_WORD *)(*v16 + 48LL * v28 + 26);
    v26 = v25 ^ (*(_WORD *)(48LL * v28 + *v16 + 32) ^ v25) & 1;
    *(_WORD *)(v6 + v7 + 68) = v26;
    *(_WORD *)(v6 + v7 + 68) = v26 ^ (*(_WORD *)(48LL * v28 + *v16 + 32) ^ v26) & 2;
    *(_DWORD *)(v6 + v7 + 64) = *(_DWORD *)(*v16 + 48LL * v28 + 28);
  }
  else
  {
    return 10;
  }
  return v3;
}
