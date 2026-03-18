/*
 * XREFs of NVMeDirectiveStreamsReturnParameters @ 0x14002533C
 * Callers:
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14001C670 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x14001C844 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     SetPrpFromBuffer @ 0x14000FAB0 (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall NVMeDirectiveStreamsReturnParameters(__int64 a1, int a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int128 v12; // xmm1
  _OWORD *v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 0, 1, 0x20u, (__int64 *)&v13, &v14);
  v7 = v13;
  if ( !v13 )
    return 3238002691LL;
  *v13 = 0LL;
  v7[1] = 0LL;
  LocalCommandReuse(a1, a1 + 1008);
  v9 = *(_QWORD *)(a1 + 1104);
  v10 = v14;
  if ( !(unsigned int)SetPrpFromBuffer(a1, v9, v14, 0x20u) )
    goto LABEL_6;
  *(_BYTE *)(v9 + 4225) |= 7u;
  *(_QWORD *)(v9 + 4192) = NVMeDirectiveCompletion;
  *(_DWORD *)(v9 + 4100) = a2;
  *(_BYTE *)(v9 + 4096) = 26;
  *(_DWORD *)(v9 + 4136) = 7;
  *(_WORD *)(v9 + 4140) = 257;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v11 = 0;
    v12 = v13[1];
    *a4 = *v13;
    a4[1] = v12;
  }
  else
  {
LABEL_6:
    v11 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBufferEx(a1, 0, 1, 32LL, (__int64 *)&v13, v10);
  return v11;
}
