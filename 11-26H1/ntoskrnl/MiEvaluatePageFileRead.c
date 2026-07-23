/*
 * XREFs of MiEvaluatePageFileRead @ 0x1403721F0
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiKernelStackVaToStackNode @ 0x1402A1574 (MiKernelStackVaToStackNode.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiCheckAndSkipVirtualizationFaultIo @ 0x1407041B8 (MiCheckAndSkipVirtualizationFaultIo.c)
 */

__int64 __fastcall MiEvaluatePageFileRead(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 *v3; // r9
  unsigned __int64 v5; // r11
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  ULONG *v13; // r13
  ULONG *v14; // rax
  unsigned __int64 v15; // r15
  int v16; // r12d
  __int64 v17; // rax
  int v18; // ebp
  __int64 v19; // rdx
  int SystemRegionType; // ecx
  __int64 v21; // r8
  unsigned __int64 v22; // r14
  _QWORD *v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // [rsp+60h] [rbp+8h]
  unsigned __int64 *v29; // [rsp+68h] [rbp+10h]

  v29 = a2;
  v3 = *(__int64 **)a1;
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a2[2];
  PteShadow = **(_QWORD **)a1;
  v9 = a2[7];
  v28 = *a2;
  if ( *(_QWORD *)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v3, PteShadow);
  *(_QWORD *)(a1 + 8) = PteShadow;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    if ( v6 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(v6, (__int64)a2, a3);
    }
    return 3221225633LL;
  }
  if ( (PteShadow & 0x800) != 0 )
  {
    v11 = PteShadow;
    if ( qword_140E2D8C0 && (PteShadow & 0x10) == 0 )
      v11 = PteShadow & qword_140E2D8C8;
    a2 = (unsigned __int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v12 = a2[2];
    v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * ((a2[5] >> 43) & 0x3FF));
    *(_DWORD *)(a1 + 48) |= 0x10u;
    *(_QWORD *)(a1 + 184) = a2;
  }
  else
  {
    v12 = PteShadow;
    if ( v6 )
    {
      v14 = MiSharedVaToPartition(v9, v5, v3);
      v5 = v28;
      v13 = v14;
    }
    else
    {
      v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v9 + 174));
    }
  }
  v15 = 0LL;
  v16 = 2;
  if ( (v7 & 1) != 0 )
  {
    switch ( *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      case 5:
        if ( (unsigned int)MiCheckAndSkipVirtualizationFaultIo(v7 & 0xFFFFFFFFFFFFFFFEuLL, v5, v13, v12) )
        {
          if ( v6 )
          {
            LOBYTE(a2) = 17;
            MiUnlockProtoPoolPage(v6, (__int64)a2, a3);
          }
          return 3221225495LL;
        }
        if ( (*(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
          *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) & 0xFFFFFF3F | 0x40;
        break;
      case 2:
        v15 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
        break;
      case 1:
        v15 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (PteShadow & 0x800) != 0 || (PteShadow & 8) == 0 )
          return 0LL;
        v17 = *(_QWORD *)(v15 + 112);
        v16 = 0;
        *(_DWORD *)(a1 + 48) |= 0x20u;
        *(_QWORD *)(a1 + 176) = v17;
        break;
    }
  }
  if ( (*((_BYTE *)v29 + 69) & 0x10) == 0 )
  {
    v18 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v18 | 1;
    SystemRegionType = MiGetSystemRegionType(v28);
    if ( (v7 & 1) != 0 && (v22 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v22 == 4) )
    {
      v15 = v22;
      *(_DWORD *)(a1 + 56) = v18 | 0x81;
      v19 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 48) + 544LL) + 1198LL);
      v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v19);
    }
    else
    {
      if ( ((PteShadow >> 5) & 0x1F) != 0x1F )
      {
        if ( SystemRegionType == 11 )
          *(_DWORD *)(a1 + 56) = v18 | 0x81;
LABEL_47:
        v25 = v28;
        if ( v28 < 0x7FFFFFFF0000LL && !v29[11] )
        {
          MiLockVadTree(1u, v19, v21);
          v29[11] = (unsigned __int64)MiLocateAddress(v28);
          MiUnlockVadTree(1, 0x11u);
          v25 = v28;
        }
        v26 = v29[11];
        if ( !v26 )
          goto LABEL_58;
        if ( v25 >= 0x7FFFFFFF0000LL )
          goto LABEL_58;
        v27 = *(_DWORD *)(v26 + 48);
        if ( (v27 & 0x1C) != 0 )
          goto LABEL_58;
        if ( (v27 & 0x80000) != 0 )
        {
          if ( (v27 & 0x4000000) == 0 )
            goto LABEL_58;
        }
        else if ( (v27 & 0x800000) == 0 )
        {
LABEL_58:
          *(_QWORD *)(a1 + 24) = v15;
          *(_QWORD *)(a1 + 32) = v13;
          *(_QWORD *)(a1 + 40) = v12;
          *(_QWORD *)(a1 + 8) = PteShadow;
          *(_DWORD *)(a1 + 52) = v16;
          return 0LL;
        }
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) & 0xFFFFFF3F | 0x80;
        goto LABEL_58;
      }
      *(_DWORD *)(a1 + 56) = v18 | 0x81;
      v23 = MiKernelStackVaToStackNode(v28, 1);
      if ( v23 )
      {
        v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)v23 + 20));
        if ( v13 != &MiSystemPartition )
        {
          v24 = *(_DWORD *)(a1 + 48);
          if ( (v24 & 0x20) != 0 && *(_BYTE *)v15 == 1 )
            *(_DWORD *)(a1 + 48) = v24 | 0x100;
        }
      }
      else
      {
        v13 = &MiSystemPartition;
      }
    }
    v16 |= 8u;
    goto LABEL_47;
  }
  if ( v6 )
  {
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(v6, (__int64)a2, a3);
  }
  return 3221226548LL;
}
