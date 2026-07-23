/*
 * XREFs of FsRtlGetNextFileLock @ 0x1405B8250
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140461570 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1404742D0 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rsi
  PRTL_SPLAY_LINKS LastReturnedLock; // rbx
  FILE_LOCK_INFO *p_LastReturnedLockInfo; // r12
  char v7; // di
  __m128i v8; // xmm1
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v10; // rcx
  __int64 v11; // rcx
  __int64 j; // rax
  unsigned __int64 v13; // r13
  int v14; // ecx
  PRTL_SPLAY_LINKS v15; // rdx
  unsigned __int64 v16; // xmm0_8
  __int128 v17; // xmm0
  PFILE_LOCK_INFO result; // rax
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v20; // r9
  _RTL_SPLAY_LINKS *Parent; // rcx
  unsigned __int64 v22; // r8
  int v23; // r10d
  unsigned __int64 v24; // xmm0_8
  bool v25; // cf
  PRTL_SPLAY_LINKS v26; // rax
  __int128 v27; // xmm0
  _RTL_SPLAY_LINKS *v28; // rax
  __int64 v29; // rcx
  __int64 i; // rax
  __m128i v31; // [rsp+38h] [rbp-41h]
  __m128i v32; // [rsp+48h] [rbp-31h]
  __int128 v33; // [rsp+58h] [rbp-21h]
  _OWORD v34[2]; // [rsp+68h] [rbp-11h] BYREF
  _OWORD v35[4]; // [rsp+88h] [rbp+Fh] BYREF
  int v36; // [rsp+E0h] [rbp+67h] BYREF
  KIRQL NewIrql; // [rsp+F0h] [rbp+77h]
  PRTL_SPLAY_LINKS Links; // [rsp+F8h] [rbp+7Fh] BYREF

  LockInformation = FileLock->LockInformation;
  Links = 0LL;
  LOBYTE(v36) = 0;
  if ( !LockInformation )
    return 0LL;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  p_LastReturnedLockInfo = &FileLock->LastReturnedLockInfo;
  v7 = 0;
  v31 = *(__m128i *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  v34[0] = v31;
  v32 = *(__m128i *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  v34[1] = v32;
  v33 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v35[0] = v33;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v28 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v28 )
    {
      do
      {
        LastReturnedLock = v28;
        v28 = v28->LeftChild;
      }
      while ( v28 );
      v31 = *(__m128i *)&LastReturnedLock[1].Parent;
      v32 = *(__m128i *)&LastReturnedLock[1].RightChild;
      v27 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
    }
    else
    {
      v29 = LockInformation[4];
      if ( !v29 )
        goto LABEL_27;
      for ( i = *(_QWORD *)(v29 + 8); i; i = *(_QWORD *)(i + 8) )
        v29 = i;
      LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v29 - 24);
      v31 = *(__m128i *)&LastReturnedLock->LeftChild;
      v32 = *(__m128i *)&LastReturnedLock[1].Parent;
      v27 = *(_OWORD *)&LastReturnedLock[1].RightChild;
    }
LABEL_57:
    v33 = v27;
    v7 = 1;
    goto LABEL_27;
  }
  v8 = v32;
  if ( (unsigned __int8)_mm_cvtsi128_si32(v32) )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        (_QWORD *)LockInformation[5],
                                                        (unsigned __int64 *)v34,
                                                        (unsigned __int64 *)v35 + 1,
                                                        &Links,
                                                        &v36);
    if ( FirstOverlappingExclusiveNode )
    {
      v13 = _mm_srli_si128(v32, 8).m128i_u64[0];
      v14 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 4));
      v36 = v14;
      v15 = (PRTL_SPLAY_LINKS)v31.m128i_i64[0];
      v16 = _mm_srli_si128(v31, 8).m128i_u64[0];
      Links = (PRTL_SPLAY_LINKS)v31.m128i_i64[0];
      while ( FirstOverlappingExclusiveNode )
      {
        if ( LastReturnedLock == FirstOverlappingExclusiveNode
          && v15 == FirstOverlappingExclusiveNode[1].Parent
          && (_RTL_SPLAY_LINKS *)v16 == FirstOverlappingExclusiveNode[1].LeftChild
          && v14 == HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
          && (_RTL_SPLAY_LINKS *)v13 == FirstOverlappingExclusiveNode[2].Parent
          && (_RTL_SPLAY_LINKS *)v33 == FirstOverlappingExclusiveNode[2].LeftChild )
        {
          v10 = FirstOverlappingExclusiveNode;
          goto LABEL_22;
        }
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v16 )
          goto LABEL_24;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        v14 = v36;
        v15 = Links;
      }
      goto LABEL_8;
    }
    if ( (_BYTE)v36 )
    {
      FirstOverlappingExclusiveNode = Links;
    }
    else
    {
      v10 = Links;
      if ( !Links )
        goto LABEL_8;
LABEL_22:
      FirstOverlappingExclusiveNode = RtlRealSuccessor(v10);
    }
    if ( FirstOverlappingExclusiveNode )
    {
LABEL_24:
      LastReturnedLock = FirstOverlappingExclusiveNode;
      v31 = *(__m128i *)&FirstOverlappingExclusiveNode[1].Parent;
      v32 = *(__m128i *)&FirstOverlappingExclusiveNode[1].RightChild;
      v17 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
      goto LABEL_25;
    }
LABEL_8:
    v11 = LockInformation[4];
    if ( !v11 )
    {
LABEL_26:
      p_LastReturnedLockInfo = &FileLock->LastReturnedLockInfo;
      goto LABEL_27;
    }
    for ( j = *(_QWORD *)(v11 + 8); j; j = *(_QWORD *)(j + 8) )
      v11 = j;
    LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v11 - 24);
    v31 = *(__m128i *)&LastReturnedLock->LeftChild;
    v32 = *(__m128i *)&LastReturnedLock[1].Parent;
    v17 = *(_OWORD *)&LastReturnedLock[1].RightChild;
LABEL_25:
    v33 = v17;
    v7 = 1;
    goto LABEL_26;
  }
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 LockInformation[4],
                                 (unsigned __int64 *)v34,
                                 (unsigned __int64 *)v35 + 1,
                                 &Links,
                                 &v36);
  v20 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode )
  {
    v20 = Links;
    if ( !Links )
      goto LABEL_27;
    if ( (_BYTE)v36 )
    {
      FirstOverlappingSharedNode = (__int64)Links;
    }
    else
    {
      FirstOverlappingSharedNode = (__int64)RtlRealSuccessor(Links);
      v20 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
      if ( !FirstOverlappingSharedNode )
        goto LABEL_27;
      v8 = v32;
    }
  }
  Parent = (_RTL_SPLAY_LINKS *)(FirstOverlappingSharedNode - 24);
  if ( FirstOverlappingSharedNode != 24 )
  {
    v22 = _mm_srli_si128(v8, 8).m128i_u64[0];
    v23 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    v24 = _mm_srli_si128(v31, 8).m128i_u64[0];
    while ( 1 )
    {
      Parent = Parent->Parent;
      if ( !Parent )
        goto LABEL_51;
      if ( LastReturnedLock != Parent )
        goto LABEL_47;
      v25 = (_RTL_SPLAY_LINKS *)v31.m128i_i64[0] < Parent->LeftChild;
      if ( (_RTL_SPLAY_LINKS *)v31.m128i_i64[0] == Parent->LeftChild )
        break;
LABEL_48:
      if ( v25 )
        goto LABEL_53;
    }
    if ( (_RTL_SPLAY_LINKS *)v24 == Parent->RightChild
      && v23 == HIDWORD(Parent[1].Parent)
      && (_RTL_SPLAY_LINKS *)v22 == Parent[1].LeftChild
      && (_RTL_SPLAY_LINKS *)v33 == Parent[1].RightChild )
    {
      Parent = Parent->Parent;
      if ( Parent )
      {
LABEL_53:
        LastReturnedLock = Parent;
        v31 = *(__m128i *)&Parent->LeftChild;
        v32 = *(__m128i *)&Parent[1].Parent;
        v27 = *(_OWORD *)&Parent[1].RightChild;
        goto LABEL_57;
      }
LABEL_51:
      v26 = RtlRealSuccessor(v20);
      if ( v26 )
      {
        Parent = v26[-1].Parent;
        if ( Parent )
          goto LABEL_53;
      }
      goto LABEL_27;
    }
LABEL_47:
    v25 = (_RTL_SPLAY_LINKS *)v31.m128i_i64[0] < Parent->LeftChild;
    goto LABEL_48;
  }
LABEL_27:
  KeReleaseSpinLock(LockInformation + 3, NewIrql);
  if ( !v7 )
    return 0LL;
  FileLock->LastReturnedLock = LastReturnedLock;
  result = p_LastReturnedLockInfo;
  *(__m128i *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v31;
  *(__m128i *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v32;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v33;
  return result;
}
