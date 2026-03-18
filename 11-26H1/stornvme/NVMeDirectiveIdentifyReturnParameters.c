/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x140024E28
 * Callers:
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     SetPrpFromBuffer @ 0x14000FAB0 (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1, int a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  _OWORD *v11; // rax
  unsigned int v12; // edi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 0, 1, 0x40u, (__int64 *)&v16, &v17);
  v7 = v16;
  if ( !v16 )
    return 3238002691LL;
  *v16 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  v7[3] = 0LL;
  LocalCommandReuse(a1, a1 + 1008);
  v9 = *(_QWORD *)(a1 + 1104);
  v10 = v17;
  if ( !(unsigned int)SetPrpFromBuffer(a1, v9, v17, 0x40u) )
    goto LABEL_6;
  *(_BYTE *)(v9 + 4225) |= 7u;
  *(_QWORD *)(v9 + 4192) = NVMeDirectiveCompletion;
  *(_DWORD *)(v9 + 4100) = a2;
  *(_BYTE *)(v9 + 4096) = 26;
  *(_DWORD *)(v9 + 4136) = 15;
  *(_WORD *)(v9 + 4140) = 1;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v11 = v16;
    v12 = 0;
    v13 = v16[1];
    *a4 = *v16;
    v14 = v11[2];
    a4[1] = v13;
    v15 = v11[3];
    a4[2] = v14;
    a4[3] = v15;
  }
  else
  {
LABEL_6:
    v12 = -1056964607;
  }
  if ( v16 )
    NVMeFreeDmaBufferEx(a1, 0, 1, 64LL, (__int64 *)&v16, v10);
  return v12;
}
