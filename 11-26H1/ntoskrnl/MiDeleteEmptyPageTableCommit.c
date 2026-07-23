/*
 * XREFs of MiDeleteEmptyPageTableCommit @ 0x1404608E0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCaptureDeleteHierarchy @ 0x1402E5900 (MiCaptureDeleteHierarchy.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiCopyVadContents @ 0x140460AFC (MiCopyVadContents.c)
 *     MiGetPreviousVad @ 0x140460C08 (MiGetPreviousVad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 */

__int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r9
  unsigned __int64 LeafVa; // r13
  unsigned __int64 v7; // r12
  _BYTE *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *NextVad; // rdi
  _KPROCESS *Process; // r15
  KIRQL v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[143]; // [rsp+41h] [rbp-BFh] BYREF
  char v20; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v21[191]; // [rsp+D1h] [rbp-2Fh] BYREF
  int v23; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v24; // [rsp+1B0h] [rbp+B0h]

  memset_0(&v18, 0, 0x90uLL);
  memset_0(&v20, 0, 0x90uLL);
  v24 = (_QWORD *)a1[23];
  v23 = 0;
  v4 = v24[10];
  LeafVa = MiGetLeafVa((v24[11] & 0xFFFFFFFFFFFFF000uLL) + 8 * a2);
  if ( LeafVa < a1[5] )
    LeafVa = a1[5];
  v7 = MiGetLeafVa(v5) - 1;
  if ( v7 > a1[6] )
    v7 = a1[6];
  if ( LeafVa == (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 )
  {
    LODWORD(v8) = MiGetPreviousVad(v4);
  }
  else
  {
    MiCopyVadContents(&v18, v4);
    *(_DWORD *)&v19[27] = (LeafVa >> 12) - 1;
    v19[32] = ((LeafVa >> 12) - 1) >> 32;
    v8 = v19;
  }
  if ( v7 == (((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF) )
  {
    NextVad = (_BYTE *)MiGetNextVad(v4);
  }
  else
  {
    MiCopyVadContents(&v20, v4);
    *(_DWORD *)&v21[23] = (v7 >> 12) + 1;
    v21[31] = ((v7 >> 12) + 1) >> 32;
    NextVad = v21;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = MiLockWorkingSetShared(a1[4], v9, v10);
  MiCaptureDeleteHierarchy(LeafVa, v7, v13, (__int64)&v23);
  LOBYTE(v14) = v13;
  MiUnlockWorkingSetShared(a1[4], v14);
  MiReturnPageTablePageCommitment(LeafVa, v7, (_DWORD)Process, (_DWORD)v8, (__int64)NextVad, v4, (__int64)&v23, 0);
  v15 = v24[1];
  v16 = *(_QWORD *)(v15 + 24);
  if ( v16 )
  {
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, -v16);
    *(_QWORD *)(v15 + 24) = 0LL;
  }
  return 0LL;
}
