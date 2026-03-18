/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14036E910
 * Callers:
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiEndingOffset @ 0x14036CB30 (MiEndingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x14036CB90 (MiReferenceControlAreaPfn.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiFlowThroughInsertNode @ 0x140373F80 (MiFlowThroughInsertNode.c)
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r12
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // r14
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // bl
  char *v20; // rax
  int IoPriorityThread; // eax
  int v22; // r9d
  __int64 v23; // r10
  int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 result; // ax
  char v29; // cl
  unsigned __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+68h] [rbp+10h]
  __int64 v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v31 = a2;
  v5 = *(__int64 **)(a1 + 192);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v10 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v10, 0);
  LODWORD(v30) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + a3) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + a3)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = *(_QWORD **)(a1 + 240);
  v12 = a5;
  v30 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  v13 = v30;
  *(_QWORD *)(a1 + 168) = *v11;
  v14 = MiStartingOffset(v5, v13, v12);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v15 = MiEndingOffset(v5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v18 = *(unsigned int *)(a1 + 188);
  if ( (v18 & 0x40000) != 0 )
  {
    LODWORD(v18) = v18 & 0xFFFBFFFF;
    v19 = 1;
    *(_DWORD *)(a1 + 188) = v18;
  }
  else
  {
    v19 = 0;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 && v14 + v7 > v15 )
  {
    v7 = ((_DWORD)v15 - (_DWORD)v14 + 511) & 0xFFFFFE00;
    v18 = (unsigned int)v18 | 0x40000;
  }
  v20 = (char *)(v31 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v31 & 1) != 0 )
  {
    v29 = *v20;
    if ( (*v20 == 1 || v29 == 2) && v20 && v29 != 2 )
      v18 = (unsigned int)v18 | 0x20;
  }
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v16, v17, v18);
  v24 = v22 | 0x200;
  if ( IoPriorityThread >= 2 )
    v24 = v22;
  *(_DWORD *)(a1 + 188) = v24;
  *(_WORD *)(a1 + 280) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  v25 = v32;
  *(_QWORD *)(a1 + 272) = v23;
  *(_WORD *)(a1 + 282) = v23;
  *(_QWORD *)(a1 + 304) = v23;
  *(_DWORD *)(a1 + 316) = v23;
  *(_DWORD *)(a1 + 312) = v7;
  if ( v25 )
    MiFlowThroughInsertNode(a1, v25);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 312);
  MiUnlockProtoPoolPage(v10, 0x11u);
  v26 = v30;
  v27 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v11 - v30) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v19 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 248) = v26;
  *(_QWORD *)(a1 + 256) = v27;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
