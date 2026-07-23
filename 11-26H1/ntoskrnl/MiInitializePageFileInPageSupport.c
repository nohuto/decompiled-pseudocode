/*
 * XREFs of MiInitializePageFileInPageSupport @ 0x140375F68
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiFlowThroughInsertNode @ 0x140375D30 (MiFlowThroughInsertNode.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 */

void __fastcall MiInitializePageFileInPageSupport(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v4; // rbp
  unsigned __int64 PteShadow; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // r9d

  v2 = *(__int64 **)(a1 + 136);
  v4 = *(_QWORD *)(a1 + 32);
  PteShadow = *v2;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(*(_QWORD *)(a1 + 136), *v2);
  v7 = *(_QWORD *)(a1 + 128);
  MiInitializeReadInProgressPfn(*a2, (__int64 *)(v7 + 320), *(_DWORD *)(a1 + 80), (__int64)v2, v7, *(_DWORD *)(a1 + 68));
  if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
    PteShadow = *(_QWORD *)(48LL * *(_QWORD *)(v7 + 320) - 0x21FFFFFFFFF0LL);
  if ( (*(_BYTE *)(a1 + 68) & 0x10) != 0 )
  {
    MiObtainProtoReference(*(_QWORD *)(a1 + 16), 0LL, v8);
    *(_QWORD *)(v7 + 160) = *(_QWORD *)(a1 + 16);
  }
  v9 = *(_QWORD *)(v4 + 8LL * ((unsigned __int16)PteShadow >> 12) + 22304);
  if ( (PteShadow & 8) != 0 )
  {
    if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
      PteShadow &= qword_140E2D8C8;
    v10 = HIDWORD(PteShadow);
  }
  else
  {
    LODWORD(v10) = 0;
  }
  v11 = *(__int64 **)a1;
  *(_QWORD *)(a1 + 168) = v9;
  v12 = 0xFFFFF6FB7DBED000uLL;
  v13 = *v11;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      v13 = MiReadPteShadow((unsigned __int64)v11, *v11);
  }
  *(_QWORD *)(v7 + 168) = v13;
  *(_QWORD *)(v7 + 240) = *(_QWORD *)a1;
  v14 = *(unsigned int *)(v7 + 188);
  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 )
  {
    if ( *(_BYTE *)v15 == 1 )
    {
      v14 = (unsigned int)v14 | 0x20;
      if ( (*(_DWORD *)(v15 + 80) & 0x2000) != 0 )
        LODWORD(v14) = v14 | 0x80;
    }
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread(), v12, v8, v14) < 2 )
    v16 |= 0x200u;
  v19 = a2[11];
  if ( v19 && MiVadPageSizes[(*(_DWORD *)(v19 + 48) >> 17) & 3] == 16 )
    v16 |= 0x200000u;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    v20 = (unsigned int)v10;
    v16 |= 0x400u;
  }
  else
  {
    v20 = (unsigned __int64)(unsigned int)v10 << 12;
  }
  v21 = v16 | 0x400000;
  *(_QWORD *)(v7 + 96) = v20;
  *(_QWORD *)(v7 + 192) = v18;
  if ( *(_QWORD *)(v18 + 184)
    && (!v17 || *(_BYTE *)v17 != 1 || (*(_DWORD *)(v17 + 80) & 0x1000) == 0 || (dword_140FBF210 & 1) != 0) )
  {
    v21 |= 0x800000u;
  }
  *(_DWORD *)(v7 + 188) = v21;
  *(_QWORD *)(v7 + 216) = -1LL;
  *(_QWORD *)(v7 + 248) = v2;
  *(_QWORD *)(v7 + 256) = 48LL * *(_QWORD *)(a1 + 160) - 0x220000000000LL;
  *(_DWORD *)(v7 + 184) = *(_DWORD *)(v7 + 312);
  if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
    MiFlowThroughInsertNode(v7, *(_QWORD **)(a1 + 152));
}
