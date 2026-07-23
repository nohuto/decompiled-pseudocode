/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1403706B0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiEndingOffset @ 0x14036E8D0 (MiEndingOffset.c)
 *     MiReferenceControlAreaPfn @ 0x14036E930 (MiReferenceControlAreaPfn.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiFlowThroughInsertNode @ 0x140375D30 (MiFlowThroughInsertNode.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r12
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r8
  _QWORD *v12; // r14
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bl
  char *v21; // rax
  int IoPriorityThread; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r10
  int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int16 result; // ax
  char v32; // cl
  unsigned __int64 v33; // [rsp+60h] [rbp+8h] BYREF
  __int64 v34; // [rsp+68h] [rbp+10h]
  __int64 v35; // [rsp+78h] [rbp+20h]

  v35 = a4;
  v34 = a2;
  v5 = *(__int64 **)(a1 + 192);
  v7 = *(unsigned int *)(a1 + 184);
  v9 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v10 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v10, 0LL, v11);
  LODWORD(v33) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + a3) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + a3)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_QWORD **)(a1 + 240);
  v13 = a5;
  v33 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  v14 = v33;
  *(_QWORD *)(a1 + 168) = *v12;
  v15 = MiStartingOffset(v5, v14, v13);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v16 = MiEndingOffset(v5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v19 = *(unsigned int *)(a1 + 188);
  if ( (v19 & 0x40000) != 0 )
  {
    LODWORD(v19) = v19 & 0xFFFBFFFF;
    v20 = 1;
    *(_DWORD *)(a1 + 188) = v19;
  }
  else
  {
    v20 = 0;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 && v15 + v7 > v16 )
  {
    v7 = ((_DWORD)v16 - (_DWORD)v15 + 511) & 0xFFFFFE00;
    v19 = (unsigned int)v19 | 0x40000;
  }
  v21 = (char *)(v34 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v34 & 1) != 0 )
  {
    v32 = *v21;
    if ( (*v21 == 1 || v32 == 2) && v21 && v32 != 2 )
      v19 = (unsigned int)v19 | 0x20;
  }
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v17, v18, v19);
  v27 = v25 | 0x200;
  if ( IoPriorityThread >= 2 )
    v27 = v25;
  *(_DWORD *)(a1 + 188) = v27;
  *(_WORD *)(a1 + 280) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  v28 = v35;
  *(_QWORD *)(a1 + 272) = v26;
  *(_WORD *)(a1 + 282) = v26;
  *(_QWORD *)(a1 + 304) = v26;
  *(_DWORD *)(a1 + 316) = v26;
  *(_DWORD *)(a1 + 312) = v7;
  if ( v28 )
    MiFlowThroughInsertNode(a1, v28);
  LOBYTE(v23) = 17;
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 312);
  MiUnlockProtoPoolPage(v10, v23, v24);
  v29 = v33;
  v30 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v12 - v33) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  if ( !v20 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 282) = result;
  }
  *(_QWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 248) = v29;
  *(_QWORD *)(a1 + 256) = v30;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
