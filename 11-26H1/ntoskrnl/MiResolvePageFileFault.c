/*
 * XREFs of MiResolvePageFileFault @ 0x140371F8C
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14038CFA8 (MiIssueFlowThroughFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiEvaluatePageFileRead @ 0x1403721F0 (MiEvaluatePageFileRead.c)
 *     MiComputePageFileReadAttributes @ 0x14037257C (MiComputePageFileReadAttributes.c)
 *     MiComputePageFileReadPteCluster @ 0x1403729E4 (MiComputePageFileReadPteCluster.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x14037405C (MiReleaseUnusedPageFileReadResources.c)
 *     MiFillPageFileReadMdl @ 0x1403740C0 (MiFillPageFileReadMdl.c)
 *     MiInitializePageFileInPageSupport @ 0x140375F68 (MiInitializePageFileInPageSupport.c)
 *     MiSetInPagePrefetchPriority @ 0x1404901A4 (MiSetInPagePrefetchPriority.c)
 *     MiReadFromMemoryPagefile @ 0x1404FC998 (MiReadFromMemoryPagefile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiResolvePageFileFault(__int64 a1, __int64 *a2, __int64 a3, _SLIST_ENTRY **a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _SLIST_ENTRY *v16; // rsi
  __int64 PteShadow; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 *v21; // [rsp+38h] [rbp-89h] BYREF
  __int64 v22; // [rsp+40h] [rbp-81h]
  __int64 v23; // [rsp+48h] [rbp-79h]
  __int64 v24; // [rsp+50h] [rbp-71h]
  __int64 v25; // [rsp+58h] [rbp-69h]
  __int64 v26; // [rsp+60h] [rbp-61h]
  char v27; // [rsp+68h] [rbp-59h]
  int v28; // [rsp+6Ch] [rbp-55h]
  char v29; // [rsp+84h] [rbp-3Dh] BYREF
  __int64 v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+E0h] [rbp+1Fh]
  __int64 v32; // [rsp+E8h] [rbp+27h]
  __int64 v33; // [rsp+F0h] [rbp+2Fh]
  __int64 v34; // [rsp+138h] [rbp+77h] BYREF

  v34 = a3;
  memset_0(&v21, 0, 0xC0uLL);
  v21 = a2;
  v23 = a3;
  result = MiEvaluatePageFileRead(&v21, a1);
  if ( (int)result < 0 )
    return result;
  v11 = (_BYTE *)v24;
  v12 = v22;
  if ( (v27 & 0x20) != 0
    && (*(_DWORD *)(v24 + 80) & 0x200) != 0
    && (v22 & 8) != 0
    && (unsigned __int16)v22 >> 12 == *(_DWORD *)(v25 + 1300) )
  {
    if ( a3 )
    {
      LOBYTE(v9) = 17;
      MiUnlockProtoPoolPage(a3, v9, v10);
    }
    return 0LL;
  }
  MiComputePageFileReadAttributes(&v21, a1);
  v13 = MiAllocateInPageSupport((_DWORD)a2, v28, (unsigned int)&v29, (unsigned __int64)&v34 & -(__int64)(a3 != 0), v32);
  v16 = (_SLIST_ENTRY *)v13;
  if ( !v13 )
  {
    v20 = -1073741670;
LABEL_33:
    if ( v11 )
      v11[1] = (v20 == -1073741670) + 1;
    return v20;
  }
  v30 = v13;
  PteShadow = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  if ( PteShadow != v12
    || (v12 & 0x800) != 0
    && ((*(_BYTE *)(v33 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v33 + 34) & 0x20) == 0
     || v26 != *(_QWORD *)(v33 + 16)
     || (*(_DWORD *)(*(_QWORD *)v33 + 156LL) & 0x80u) != 0) )
  {
    v20 = -1073740748;
    if ( v34 )
    {
      LOBYTE(v14) = 17;
      MiUnlockProtoPoolPage(v34, v14, v15);
    }
    MiFreeInPageSupportBlock(v16);
    goto LABEL_33;
  }
  if ( v11 && *v11 == 1 )
    MiSetInPagePrefetchPriority(v11, v16);
  MiComputePageFileReadPteCluster(&v21, a1);
  result = MiAllocatePageFileReadResources(&v21, a1);
  if ( (int)result >= 0 )
  {
    MiFillPageFileReadMdl(&v21);
    MiInitializePageFileInPageSupport(&v21, a1);
    if ( v34 )
    {
      LOBYTE(v18) = 17;
      MiUnlockProtoPoolPage(v34, v18, v19);
    }
    MiReleaseUnusedPageFileReadResources(&v21);
    if ( _bittest16((const signed __int16 *)(v31 + 172), 0xBu) )
      MiReadFromMemoryPagefile(v31, v16);
    *a4 = v16;
    return 3221435187LL;
  }
  return result;
}
