/*
 * XREFs of NvmeGetNamespaceDescriptorListIdentify @ 0x1400FEB00
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

__int64 __fastcall NvmeGetNamespaceDescriptorListIdentify(__int64 a1)
{
  __int64 ExtendedCommand; // rsi
  __int64 v3; // r8
  int DmaBuffer; // r14d
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  __int64 v8; // r15
  _QWORD *Namespace; // rdi
  __int64 v10; // r9
  _BYTE *v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v3, (void **)&v16, (_QWORD *)&v16 + 1, 0);
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
          *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
          *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
          *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
          *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
          *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
          *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v16;
          *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
          *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
          *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
          BuildIdentifyCommandGeneric(
            a1,
            *(_QWORD *)ExtendedCommand + 4096LL,
            3,
            v10,
            v15,
            0,
            *((__int64 *)&v16 + 1),
            v7,
            0);
          memset_0((void *)v16, 0, 0x1000uLL);
          DmaBuffer = NvmeControllerProcessCommandSync((PVOID)a1, ExtendedCommand);
          if ( DmaBuffer >= 0 )
          {
            v11 = (_BYTE *)v16;
            v12 = 0;
            while ( *v11 && v12 < 0x1000 )
            {
              if ( *v11 == 4 )
              {
                if ( v11[4] == 2 )
                {
                  *((_DWORD *)Namespace + 52) |= 0x100u;
                  *(_QWORD *)(a1 + 968) |= 0x2000uLL;
                  Namespace[25] |= 1uLL;
                }
                break;
              }
              v13 = (unsigned __int8)v11[1];
              v12 += v13 + 4;
              v11 += v13 + 4;
            }
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 0x1000u, v14, v16, *((__int64 *)&v16 + 1));
  return (unsigned int)DmaBuffer;
}
