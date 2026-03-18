/*
 * XREFs of MiResolvePageFileFault @ 0x1403701DC
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14038B1F8 (MiIssueFlowThroughFault.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiEvaluatePageFileRead @ 0x140370440 (MiEvaluatePageFileRead.c)
 *     MiComputePageFileReadAttributes @ 0x1403707CC (MiComputePageFileReadAttributes.c)
 *     MiComputePageFileReadPteCluster @ 0x140370C34 (MiComputePageFileReadPteCluster.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x1403722AC (MiReleaseUnusedPageFileReadResources.c)
 *     MiFillPageFileReadMdl @ 0x140372310 (MiFillPageFileReadMdl.c)
 *     MiInitializePageFileInPageSupport @ 0x1403741B8 (MiInitializePageFileInPageSupport.c)
 *     MiSetInPagePrefetchPriority @ 0x140496654 (MiSetInPagePrefetchPriority.c)
 *     MiReadFromMemoryPagefile @ 0x1405030C8 (MiReadFromMemoryPagefile.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiResolvePageFileFault(__int64 a1, __int64 *a2, __int64 a3, struct _SLIST_ENTRY **a4)
{
  __int64 result; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _SLIST_ENTRY *v12; // rsi
  __int64 PteShadow; // rax
  unsigned int v14; // ebx
  __int64 *v15; // [rsp+38h] [rbp-89h] BYREF
  __int64 v16; // [rsp+40h] [rbp-81h]
  __int64 v17; // [rsp+48h] [rbp-79h]
  __int64 v18; // [rsp+50h] [rbp-71h]
  __int64 v19; // [rsp+58h] [rbp-69h]
  __int64 v20; // [rsp+60h] [rbp-61h]
  char v21; // [rsp+68h] [rbp-59h]
  int v22; // [rsp+6Ch] [rbp-55h]
  char v23; // [rsp+84h] [rbp-3Dh] BYREF
  __int64 v24; // [rsp+B8h] [rbp-9h]
  __int64 v25; // [rsp+E0h] [rbp+1Fh]
  __int64 v26; // [rsp+E8h] [rbp+27h]
  __int64 v27; // [rsp+F0h] [rbp+2Fh]
  __int64 v28; // [rsp+138h] [rbp+77h] BYREF

  v28 = a3;
  memset_0(&v15, 0, 0xC0uLL);
  v15 = a2;
  v17 = a3;
  result = MiEvaluatePageFileRead(&v15, a1);
  if ( (int)result < 0 )
    return result;
  v9 = (_BYTE *)v18;
  v10 = v16;
  if ( (v21 & 0x20) != 0
    && (*(_DWORD *)(v18 + 80) & 0x200) != 0
    && (v16 & 8) != 0
    && (unsigned __int16)v16 >> 12 == *(_DWORD *)(v19 + 1300) )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  MiComputePageFileReadAttributes(&v15, a1);
  v11 = MiAllocateInPageSupport((_DWORD)a2, v22, (unsigned int)&v23, (unsigned __int64)&v28 & -(__int64)(a3 != 0), v26);
  v12 = (struct _SLIST_ENTRY *)v11;
  if ( !v11 )
  {
    v14 = -1073741670;
LABEL_33:
    if ( v9 )
      v9[1] = (v14 == -1073741670) + 1;
    return v14;
  }
  v24 = v11;
  PteShadow = *a2;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  if ( PteShadow != v10
    || (v10 & 0x800) != 0
    && ((*(_BYTE *)(v27 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v27 + 34) & 0x20) == 0
     || v20 != *(_QWORD *)(v27 + 16)
     || (*(_DWORD *)(*(_QWORD *)v27 + 156LL) & 0x80u) != 0) )
  {
    v14 = -1073740748;
    if ( v28 )
      MiUnlockProtoPoolPage(v28, 0x11u);
    MiFreeInPageSupportBlock(v12);
    goto LABEL_33;
  }
  if ( v9 && *v9 == 1 )
    MiSetInPagePrefetchPriority(v9, v12);
  MiComputePageFileReadPteCluster(&v15, a1);
  result = MiAllocatePageFileReadResources(&v15, a1);
  if ( (int)result >= 0 )
  {
    MiFillPageFileReadMdl(&v15);
    MiInitializePageFileInPageSupport(&v15, a1);
    if ( v28 )
      MiUnlockProtoPoolPage(v28, 0x11u);
    MiReleaseUnusedPageFileReadResources(&v15);
    if ( _bittest16((const signed __int16 *)(v25 + 172), 0xBu) )
      MiReadFromMemoryPagefile(v25, v12);
    *a4 = v12;
    return 3221435187LL;
  }
  return result;
}
