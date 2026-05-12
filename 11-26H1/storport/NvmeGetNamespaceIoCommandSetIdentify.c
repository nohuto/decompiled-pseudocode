/*
 * XREFs of NvmeGetNamespaceIoCommandSetIdentify @ 0x1400FED48
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x1400C5AC0 (BuildIdentifyCommandGeneric.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  __int64 ExtendedCommand; // rdi
  __int64 v3; // r8
  int DmaBuffer; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 v8; // r14
  _QWORD *Namespace; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF

  v13 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v3, (void **)&v13, (_QWORD *)&v13 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 656);
    if ( v6 )
    {
      v7 = 1;
      v8 = v6;
      do
      {
        Namespace = NvmeControllerGetNamespace(a1, v7);
        if ( Namespace )
        {
          if ( (Namespace[26] & 0x100) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
            *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
            *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
            *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
            *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
            *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v13;
            *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
            *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
            *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
            BuildIdentifyCommandGeneric(
              a1,
              *(_QWORD *)ExtendedCommand + 4096LL,
              5,
              v10,
              v12,
              2,
              *((__int64 *)&v13 + 1),
              v7,
              0);
            memset_0((void *)v13, 0, 0x1000uLL);
            DmaBuffer = NvmeControllerProcessCommandSync((PVOID)a1, ExtendedCommand);
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 0x1000u, v11, v13, *((__int64 *)&v13 + 1));
  return (unsigned int)DmaBuffer;
}
