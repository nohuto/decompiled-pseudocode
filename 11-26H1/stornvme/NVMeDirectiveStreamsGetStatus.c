/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x140025078
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x14001C670 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     SetPrpFromBuffer @ 0x14000FAB0 (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v13; // rbx
  unsigned __int16 *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  void *v19; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  v19 = 0LL;
  v18 = 0LL;
  if ( !a4 || !a3 || !a5 )
    return 3238002694LL;
  *a4 = 0;
  LocalCommandReuse(a1, a1 + 1008);
  v10 = *(_QWORD *)(a1 + 1104);
  v11 = 2 * a3 + 2;
  NVMeAllocateDmaBufferEx(a1, 0, 1, v11, (__int64 *)&v19, &v18);
  if ( !v19 )
    return 3238002691LL;
  if ( (v11 & 3) != 0 )
  {
    if ( 2 * a3 != -2 )
      memset(v19, 0, v11);
  }
  else if ( v11 >> 2 )
  {
    memset(v19, 0, 4LL * (v11 >> 2));
  }
  v13 = v18;
  if ( !(unsigned int)SetPrpFromBuffer(a1, v10, v18, v11) )
    goto LABEL_18;
  *(_BYTE *)(v10 + 4225) |= 7u;
  *(_DWORD *)(v10 + 4100) = a2;
  *(_DWORD *)(v10 + 4136) = (v11 >> 2) - 1;
  *(_QWORD *)(v10 + 4192) = NVMeDirectiveCompletion;
  *(_BYTE *)(v10 + 4096) = 26;
  *(_WORD *)(v10 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v14 = (unsigned __int16 *)v19;
    v15 = *(unsigned __int16 *)v19;
    *a4 = v15;
    if ( a3 < v15 )
    {
      v17 = -1056964604;
    }
    else
    {
      v16 = 0LL;
      if ( v15 )
      {
        do
        {
          *(_DWORD *)(v5 + 4 * v16) = v14[v16 + 1];
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *v14 );
      }
      v17 = 0;
    }
  }
  else
  {
LABEL_18:
    v14 = (unsigned __int16 *)v19;
    v17 = -1056964607;
  }
  if ( v14 )
    NVMeFreeDmaBufferEx(a1, 0, 1, v11, (__int64 *)&v19, v13);
  return v17;
}
