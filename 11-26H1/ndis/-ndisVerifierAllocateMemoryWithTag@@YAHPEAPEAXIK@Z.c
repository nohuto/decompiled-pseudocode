/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1400C9000
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1400C9484 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(void **a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  void **v5; // rsi
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rax
  _LIST_ENTRY *v10; // rbx
  KIRQL v11; // dl
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *Flink; // rax
  PVOID v15; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  PVOID v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = a2;
  v15 = 0LL;
  v5 = a1;
  if ( (ndisFlags & 0x400) != 0 )
  {
    RtlGetCallersAddress(&v17, &v15);
    v7 = -1;
    LOBYTE(a1) = a2 + 40;
    if ( a2 + 40 >= a2 )
      v7 = a2 + 40;
    v4 = v7;
  }
  if ( ndisVerifierInjectResourceFailure((unsigned __int8)a1) || v8 < 0 )
  {
    v9 = 0LL;
LABEL_17:
    *v5 = (void *)v9;
    return *v5 == 0LL ? 0xC0000001 : 0;
  }
  v9 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, void *))ndisVerifierWdmDispatch + 6))(
         512LL,
         v4,
         a3,
         24LL,
         retaddr);
  v10 = (_LIST_ENTRY *)v9;
  if ( !v9 || (ndisFlags & 0x400) == 0 )
    goto LABEL_17;
  *v5 = (void *)(v9 + 40);
  *(_OWORD *)v9 = 0LL;
  *(_OWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_DWORD *)(v9 + 16) = a3;
  *(_DWORD *)(v9 + 20) = v4;
  *(_QWORD *)(v9 + 24) = v17;
  *(_QWORD *)(v9 + 32) = v15;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
  if ( !ndisMiniportTrackAlloc )
  {
    Flink = ndisDriverTrackAllocList.Flink;
    if ( ndisDriverTrackAllocList.Flink->Blink == &ndisDriverTrackAllocList )
    {
      v10->Flink = ndisDriverTrackAllocList.Flink;
      v10->Blink = &ndisDriverTrackAllocList;
      Flink->Blink = v10;
      ndisDriverTrackAllocList.Flink = v10;
      goto LABEL_15;
    }
LABEL_13:
    __fastfail(3u);
  }
  v12 = ndisMiniportTrackAllocList.Flink;
  if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
    goto LABEL_13;
  v10->Flink = ndisMiniportTrackAllocList.Flink;
  v10->Blink = &ndisMiniportTrackAllocList;
  v12->Blink = v10;
  ndisMiniportTrackAllocList.Flink = v10;
LABEL_15:
  KeReleaseSpinLock(&ndisTrackMemLock, v11);
  return *v5 == 0LL ? 0xC0000001 : 0;
}
