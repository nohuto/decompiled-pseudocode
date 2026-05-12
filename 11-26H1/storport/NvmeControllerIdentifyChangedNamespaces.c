/*
 * XREFs of NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88
 * Callers:
 *     NvmeControllerReenumerationRoutine @ 0x1400C6370 (NvmeControllerReenumerationRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeGetIdentifyNamespaceData @ 0x1400C67F0 (NvmeGetIdentifyNamespaceData.c)
 *     NvmeNamespaceUpdateDiskProperties @ 0x1400C6CD4 (NvmeNamespaceUpdateDiskProperties.c)
 *     NvmeVersionCheck @ 0x1400C6E18 (NvmeVersionCheck.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400F02D0 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x140102788 (NvmeNamespaceComputeBlockInfo.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerIdentifyChangedNamespaces(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v3; // rdi
  int DmaBuffer; // r15d
  int v6; // ebx
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // r12d
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  void *v15; // rcx
  int v16; // r9d
  _BYTE *Pool; // rax
  __int64 v18; // r8
  _QWORD *Namespace; // r14
  __int64 v20; // rbx
  __int64 v21; // rcx
  _DWORD *v22; // r9
  __int64 v23; // rbx
  char v24; // cl
  int v25; // r14d
  int v26; // r8d
  signed __int32 v28[8]; // [rsp+0h] [rbp-B9h] BYREF
  int v29; // [rsp+A0h] [rbp-19h]
  int v30; // [rsp+A4h] [rbp-15h]
  unsigned int v31; // [rsp+A8h] [rbp-11h]
  __int64 v32; // [rsp+B0h] [rbp-9h] BYREF
  void *Src[2]; // [rsp+B8h] [rbp-1h] BYREF
  char v34; // [rsp+120h] [rbp+67h]
  char v37; // [rsp+138h] [rbp+7Fh]

  v3 = 0LL;
  DmaBuffer = 0;
  *(_OWORD *)Src = 0LL;
  v6 = 0;
  v37 = NvmeVersionCheck(a1, 1LL, 1LL);
  v11 = *(_QWORD *)(v8 + 1656);
  v12 = 0;
  v29 = 0;
  v30 = 0;
  if ( (*(_DWORD *)(v11 + 28) & 0x100) == 0 )
  {
    v7 = 0;
    v31 = 1024;
    v34 = 0;
    v13 = 0;
    goto LABEL_5;
  }
  v13 = 0;
  v34 = v7;
  v31 = *(_DWORD *)(*(_QWORD *)(v8 + 592) + 516LL);
  if ( v31 )
  {
    while ( 1 )
    {
LABEL_5:
      if ( v7 )
        v14 = v13 + 1;
      else
        v14 = *(_DWORD *)(v10 + 4LL * v13);
      v3 = 0LL;
      ++v13;
      if ( !v14
        || (v15 = Src[0]) == 0LL
        && ((DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v9, Src, &Src[1], 0), DmaBuffer < 0) || (v15 = Src[0]) == 0LL) )
      {
LABEL_35:
        v6 = v29;
        goto LABEL_36;
      }
      memset_0(v15, 0, 0x1000uLL);
      DmaBuffer = NvmeGetIdentifyNamespaceData(a1, Src[0], Src[1], v16, v14);
      if ( DmaBuffer < 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 28LL) |= 0x80u;
        goto LABEL_32;
      }
      Pool = (_BYTE *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
      v3 = Pool;
      if ( !Pool )
      {
        DmaBuffer = -1073741670;
        goto LABEL_35;
      }
      memmove(Pool, Src[0], 0x1000uLL);
      Namespace = NvmeControllerGetNamespace(a1, v14);
      if ( v37 )
      {
        if ( !v3[4 * (v3[26] & 0xF) + 130] && !*(_QWORD *)v3 )
          break;
      }
      if ( Namespace )
      {
        if ( Namespace[22] && (int)NvmeNamespaceAcquireRemoveLock((__int64)Namespace, 0LL) >= 0 )
        {
          v22 = (_DWORD *)Namespace[22];
          LODWORD(v32) = v22[(*((_BYTE *)v22 + 26) & 0xF) + 32];
          v23 = *(_QWORD *)v22 * (1LL << SBYTE2(v32));
          memmove(v22, v3, 0x1000uLL);
          NvmeNamespaceComputeBlockInfo(Namespace);
          _InterlockedOr(v28, 0);
          v24 = v3[4 * (v3[26] & 0xF) + 130];
          if ( *(_QWORD *)v3 * (1LL << v24) != v23 || v24 != BYTE2(v32) )
            NvmeNamespaceUpdateDiskProperties(Namespace);
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Namespace[15]);
        }
        ++v12;
        goto LABEL_31;
      }
      ++v29;
      v32 = 0LL;
      DmaBuffer = NvmeControllerCreateNvmeNamespace(a1, v14, v18, &v32);
      if ( DmaBuffer < 0 )
        goto LABEL_35;
      v20 = v32;
      v21 = v32;
      *(_QWORD *)(v32 + 176) = v3;
      v3 = 0LL;
      NvmeNamespaceComputeBlockInfo(v21);
      *(_QWORD *)(v20 + 112) |= 0x10uLL;
      NvmeControllerAddNvmeNamespaceToList(a1, v20);
      _interlockedbittestandreset(*(volatile signed __int32 **)(v20 + 256), 2u);
      *(_DWORD *)(*(_QWORD *)(v20 + 8) + 48LL) &= ~0x80u;
LABEL_32:
      if ( v13 >= v31 )
        goto LABEL_35;
      v7 = v34;
      v10 = a2;
    }
    if ( Namespace )
    {
      ++v30;
      Namespace[14] &= ~2uLL;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 28LL) |= 0x40u;
    }
LABEL_31:
    ExFreePoolWithTag(v3, 0x52436152u);
    v3 = 0LL;
    goto LABEL_32;
  }
LABEL_36:
  v25 = v30;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4LL,
    (__int64)L"Identify changed namespaces",
    L"NewNamespaceCount",
    v6,
    L"DeletedNamespaceCount",
    v30,
    L"ModifiedNamespaceCount",
    v12,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    L"NtStatus",
    DmaBuffer);
  NvmeFreeDmaBuffer(a1, 4096, v26, Src[0], (__int64)Src[1]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 16LL) = v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 20LL) = v25;
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 24LL) = v12;
  if ( a3 )
    *a3 = v6 + v12 + v25;
  return (unsigned int)DmaBuffer;
}
