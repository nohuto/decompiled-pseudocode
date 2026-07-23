/*
 * XREFs of PfpPrefetchRequestPerform @ 0x14098034C
 * Callers:
 *     PfpPrefetchRequest @ 0x140980100 (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfpVolumePrefetchMetadata @ 0x14097F124 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchVolumesCleanup @ 0x140980830 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1409808E8 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedDeref @ 0x14098804C (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedInitialize @ 0x140988084 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x1409880CC (PfpPrefetchSharedStart.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x140A5819C (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140A59AEC (PfpPrefetchFilesTrickle.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140BFE8B0 (PfpScenCtxPrefetchAbortSet.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  struct _KTHREAD *Pool2; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // ebx
  char *v7; // rax
  unsigned int i; // edx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v13; // rdx
  unsigned int m; // edi
  const signed __int64 *v15; // rcx
  unsigned int k; // r14d
  int v17; // eax
  int v18; // eax
  unsigned int j; // edx
  char *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v27; // [rsp+60h] [rbp-A8h] BYREF
  char *v28; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  struct _KTHREAD *v31; // [rsp+80h] [rbp-88h]

  v25 = 0LL;
  Event.Header.WaitListHead = 0LL;
  memset_0(&v27, 0, 0xD8uLL);
  v26 = a1;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
  v31 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    goto LABEL_13;
  }
  PfpPrefetchSharedInitialize(Pool2);
  v31->SListFaultAddress = &v26;
  if ( (*(_DWORD *)(v26 + 80) & 4) != 0 )
  {
    HIDWORD(v31->StackBase) = 60000;
    LODWORD(v31->StackBase) = 150;
  }
  else
  {
    HIDWORD(v31->StackBase) = 250;
    LODWORD(v31->StackBase) = 15;
  }
  v4 = PfpPrefetchSharedStart(v31);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v26 + 81);
    if ( *(_BYTE *)(v26 + 81) )
    {
      _InterlockedAdd((_DWORD *)&xmmword_140F13528 + 2, 1u);
      v4 = PfpScenCtxPrefetchAbortSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount, 0);
      if ( v4 < 0 )
      {
LABEL_56:
        _InterlockedDecrement((_DWORD *)&xmmword_140F13528 + 2);
        PfpScenCtxPrefetchAbortSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount, 0);
        goto LABEL_13;
      }
      if ( !*(_QWORD *)(v26 + 72) )
        *(_QWORD *)(v26 + 72) = &Event.Header.WaitListHead;
    }
    if ( *(_DWORD *)(a1 + 8) << 6 )
    {
      v6 = *(_DWORD *)(a1 + 8) << 6;
      v7 = (char *)ExAllocatePool2(0x100uLL);
      v28 = v7;
      if ( !v7 )
      {
LABEL_11:
        v4 = -1073741670;
        goto LABEL_12;
      }
      memset_0(v7, 0, v6);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); *(_QWORD *)&v11[v10 + 56] |= 0x200000000uLL )
      {
        v9 = v28;
        v10 = i++;
        v10 <<= 6;
        *(_OWORD *)&v28[v10] = 0LL;
        *(_OWORD *)&v9[v10 + 16] = 0LL;
        *(_QWORD *)&v9[v10 + 24] |= 0x200000000uLL;
        v11 = v28;
        *(_OWORD *)&v28[v10 + 32] = 0LL;
        *(_OWORD *)&v11[v10 + 48] = 0LL;
      }
    }
    LODWORD(v30) = (*(_DWORD *)(v26 + 80) & 4) != 0 ? 16 : 768;
    P = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !P )
      goto LABEL_11;
    if ( (*(_DWORD *)(v26 + 80) & 4) == 0 && *(_DWORD *)(v26 + 12) )
    {
      v27 = (PVOID)ExAllocatePool2(0x100uLL);
      if ( !v27 )
        goto LABEL_11;
      for ( j = 0; j < *(_DWORD *)(v26 + 12); *(_QWORD *)&v20[v21 + 24] |= 0x200000000uLL )
      {
        v20 = (char *)v27;
        v21 = j++;
        v21 *= 32LL;
        *(_OWORD *)((char *)v27 + v21) = 0LL;
        *(_OWORD *)&v20[v21 + 16] = 0LL;
      }
    }
    PfpPrefetchRequestPatchOffsets(a1);
    if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
      *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
    if ( *(_DWORD *)(a1 + 20) )
    {
      v18 = PfpPrefetchPrivatePages(&v26);
      v4 = v18;
      if ( v18 == -1073741248 || v18 == -1073741670 || v18 == -1073741801 )
        goto LABEL_12;
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 8); ++k )
    {
      if ( (int)PfpVolumeOpenAndVerify(v31, &v28[64 * (unsigned __int64)k], *(_QWORD *)(a1 + 32) + 40LL * k) >= 0 )
      {
        v4 = PfpVolumePrefetchMetadata(&v26, k);
        if ( v4 == -1073741248 )
          goto LABEL_12;
      }
    }
    if ( (*(_DWORD *)(v26 + 80) & 4) != 0 )
    {
      v17 = PfpPrefetchFilesTrickle(&v26);
      v4 = v17;
      if ( v17 == -1073741248 || v17 == -1073741670 )
        goto LABEL_12;
    }
    else
    {
      v22 = PfpPrefetchFiles(&v26, 0LL);
      v4 = v22;
      if ( v22 == -1073741248 || v22 == -1073741670 || v22 == -1073741801 )
        goto LABEL_12;
      if ( (unsigned int)PfpCheckPrefetchAbort(&v26) )
      {
        v4 = -1073741248;
        goto LABEL_12;
      }
      LOBYTE(v23) = 1;
      v17 = PfpPrefetchFiles(&v26, v23);
      v4 = v17;
      if ( v17 == -1073741248 || v17 == -1073741670 )
      {
LABEL_12:
        if ( !v5 )
          goto LABEL_13;
        goto LABEL_56;
      }
    }
    if ( v17 != -1073741801 )
      v4 = 0;
    goto LABEL_12;
  }
LABEL_13:
  if ( v27 )
  {
    v13 = v26;
    for ( m = 0; m < *(_DWORD *)(v13 + 12); ++m )
    {
      v15 = (const signed __int64 *)((char *)v27 + 32 * m);
      if ( _bittest64(v15 + 3, 0x22u) )
      {
        PfpOpenHandleClose(v15, v31);
        v13 = v26;
      }
    }
    ExFreePoolWithTag(v27, 0);
  }
  PfpPrefetchVolumesCleanup(&v26);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
  {
    PfpPrefetchSharedCleanup(v31);
    PfpPrefetchSharedDeref(v31);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
