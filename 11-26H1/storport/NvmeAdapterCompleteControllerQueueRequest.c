/*
 * XREFs of NvmeAdapterCompleteControllerQueueRequest @ 0x1400E51B0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetNamespace @ 0x1400317F0 (NvmeControllerGetNamespace.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400E4FA8 (NvmeAdapterCleanupControllerQueueRequest.c)
 *     NvmeControllerQueueDecrementProcessingCount @ 0x1400F9638 (NvmeControllerQueueDecrementProcessingCount.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeAdapterCompleteControllerQueueRequest(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // r12
  unsigned int v4; // r8d
  unsigned int i; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, _QWORD, _QWORD *, __int64); // r15
  __int64 v15; // r13
  signed __int32 v17[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *Namespace; // [rsp+80h] [rbp+8h]
  __int64 v19; // [rsp+88h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 168);
  v19 = *(_QWORD *)(a1 + 160);
  Namespace = 0LL;
  v3 = 0;
  if ( *(_BYTE *)(v1 + 2) == 40 )
  {
    v4 = *(_DWORD *)(v1 + 56);
    if ( v4 )
    {
      for ( i = 0; i < v4; ++i )
      {
        v6 = *(unsigned int *)(v1 + 4LL * i + 120);
        if ( (unsigned int)v6 >= 0x80 && (unsigned int)v6 < *(_DWORD *)(v1 + 16) )
        {
          v7 = v6 + v1;
          if ( *(_DWORD *)(v6 + v1) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v7 = 0LL;
LABEL_10:
  v8 = *(unsigned __int16 *)(v7 + 106);
  v9 = *(_QWORD *)(a1 + 784);
  if ( (_WORD)v8 )
  {
    if ( (unsigned __int16)v8 > *(_WORD *)(v9 + 20) )
      return v8;
    v10 = 192 * v8 + *(_QWORD *)(v9 + 728) - 192LL;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 712);
  }
  LODWORD(v8) = *(unsigned __int16 *)(a1 + 782);
  if ( (unsigned int)v8 < *(_DWORD *)(v10 + 124) )
  {
    _InterlockedAdd16((volatile signed __int16 *)(v10 + 152), 1u);
    *(_BYTE *)(a1 + 17) |= 0x80u;
    _InterlockedOr(v17, 0);
    if ( (*(_BYTE *)(v10 + 112) & 4) != 0 )
    {
      *(_BYTE *)(a1 + 17) &= ~0x80u;
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 152));
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 148));
      if ( *(_DWORD *)(v9 + 572) == 1 )
        Namespace = NvmeControllerGetNamespace(
                      v9,
                      *(_DWORD *)(((unsigned __int64)*(unsigned __int16 *)(a1 + 782) << 7) + *(_QWORD *)(v10 + 32) + 80));
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_DWORD *)(a1 + 20);
      v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 782) << 7;
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *, __int64))(v13 + v11 + 32);
      v15 = *(_QWORD *)(v13 + v11 + 40);
      NvmeAdapterCleanupControllerQueueRequest(v10, a1);
      if ( *(_WORD *)(v10 + 136) )
      {
        NvmeControllerQueueDecrementProcessingCount(v10);
        if ( *(_BYTE *)(v1 + 3) != 37 )
        {
          if ( *(_DWORD *)(v9 + 952) )
            v3 = 1;
        }
      }
      if ( v14 )
        LOBYTE(v8) = v14(v9, v1, v19, v12, Namespace, v15);
      else
        LOBYTE(v8) = KeSetEvent((PRKEVENT)(a1 + 664), 0, 0);
      *(_BYTE *)(a1 + 17) &= ~0x80u;
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 152));
      if ( v3 )
        LOBYTE(v8) = NvmeProcessPendingIo(v9, (union _SLIST_HEADER *)v10, v12);
    }
  }
  return v8;
}
