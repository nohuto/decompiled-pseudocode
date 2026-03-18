/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x140865468
 * Callers:
 *     MmAddPhysicalMemory @ 0x140867350 (MmAddPhysicalMemory.c)
 *     MiCreatePartitionPages @ 0x14087BBEC (MiCreatePartitionPages.c)
 *     MiHotAddBootDescriptor @ 0x140CF4E60 (MiHotAddBootDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1402CABF0 (MiRestrictRangeToNode.c)
 *     MiGetClosestImplicitNode @ 0x1403A594C (MiGetClosestImplicitNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x14048CED8 (MiGetAvailablePagesExcludeSlists.c)
 *     MiNodeAvailablePages @ 0x1404BE5E8 (MiNodeAvailablePages.c)
 *     MiGetLargestPageIndex @ 0x1404CCB6C (MiGetLargestPageIndex.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 *     MiNodeLargeFreeZeroPages2 @ 0x140703424 (MiNodeLargeFreeZeroPages2.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(
        unsigned __int16 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        ULONG_PTR a4,
        int a5,
        int a6)
{
  int v6; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r14d
  int v18; // r15d
  int v19; // r13d
  int v20; // r12d
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  ULONG_PTR v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  unsigned __int64 v32; // rcx
  unsigned __int64 AvailablePagesExcludeSlists; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // r8d
  __int16 v38; // ax
  int v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h]
  unsigned __int64 v44; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-38h]
  __int64 v46; // [rsp+48h] [rbp-30h]
  unsigned __int64 v47; // [rsp+50h] [rbp-28h]
  unsigned __int64 v48; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-18h]
  int v51; // [rsp+C8h] [rbp+50h]
  int v54; // [rsp+E0h] [rbp+68h]

  v6 = a5;
  v51 = 6144;
  v47 = 512LL;
  v45 = 1;
  if ( a4 )
  {
    v6 = a5 | 0x100000;
    v9 = a4;
    if ( a4 != 0x40000 )
      v9 = 512LL;
    v47 = v9;
    v45 = a4 != 0x40000;
  }
  v10 = *a2;
  v11 = 0LL;
  v12 = *a3;
  v48 = *a2;
  if ( (v6 & 0x8000) != 0 )
  {
    v6 |= 0x103000u;
    v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v44 = v13;
      v17 = MiAddPhysicalMemory(a1, (__int64)&v48, &v44, v6, 0LL);
      if ( v17 >= 0 )
      {
        *a3 = v44;
        goto LABEL_120;
      }
      if ( (v6 & 0x2000) == 0 )
        break;
      v6 &= ~0x2000u;
    }
    *a3 = 0LL;
    return (unsigned int)v17;
  }
  v49 = 0LL;
  v54 = 0;
  if ( a1 != (unsigned __int16 *)&MiSystemPartition || (v6 & 0x40) != 0 )
  {
    v18 = 2;
  }
  else
  {
    v54 = 1;
    v18 = 0;
  }
  v19 = 0;
  BugCheckParameter2 = v10 >> 12;
  v20 = v18;
  v21 = MiRestrictRangeToNode(v10 >> 12, v12 >> 12);
  while ( 1 )
  {
    v22 = v21;
    if ( v21 < a4 )
      break;
    if ( BugCheckParameter2 < 0x100000 && v21 + BugCheckParameter2 > 0x100000 )
      v22 = 0x100000 - BugCheckParameter2;
    v23 = MiPageToNode(BugCheckParameter2);
    v24 = qword_140E37CD0 + 56320LL * ((unsigned int)MiGetClosestImplicitNode(v23 + 1) - 1);
    v46 = v24;
    if ( v19 < 0 )
    {
      v29 = v49;
      v28 = v47;
      v22 = v49;
      if ( v49 > v47 )
      {
        if ( v54 )
        {
          v22 = v47;
        }
        else
        {
          v22 = (v49 >> 1) & ~(v47 - 1);
          v29 = v49;
          if ( v22 < v47 )
            v22 = v47;
        }
      }
      switch ( v20 )
      {
        case 0:
          v27 = BugCheckParameter2;
          if ( v29 <= v47 )
            v18 = (BugCheckParameter2 < 0x100000) + 1;
          else
            v18 = 0;
          goto LABEL_51;
        case 1:
          v18 = 2 - (v47 < v29);
LABEL_50:
          v27 = BugCheckParameter2;
          goto LABEL_51;
        case 2:
          v27 = BugCheckParameter2;
          if ( v54 )
            v18 = 3;
          else
            v18 = v47 < v29 ? 2 : 4;
          goto LABEL_51;
      }
      if ( v20 != 3 )
      {
        if ( v20 != 4 )
          goto LABEL_50;
        if ( v29 <= v47 )
          goto LABEL_117;
      }
      v18 = 4;
      goto LABEL_50;
    }
    v18 = 0;
    LODWORD(v25) = 1;
    if ( !v54 )
      v18 = v20;
    if ( (BugCheckParameter2 & 0x1FF) != 0 )
    {
LABEL_28:
      if ( v22 > MiPageSizes[(unsigned int)v25] - BugCheckParameter2 % MiPageSizes[(unsigned int)v25] )
        v22 = MiPageSizes[(unsigned int)v25] - BugCheckParameter2 % MiPageSizes[(unsigned int)v25];
    }
    else
    {
      v26 = 512LL;
      while ( v22 >= v26 )
      {
        v22 &= ~(v26 - 1);
        if ( !(_DWORD)v25 )
          break;
        v25 = (unsigned int)(v25 - 1);
        v26 = MiPageSizes[v25];
        if ( BugCheckParameter2 % v26 )
          goto LABEL_28;
      }
    }
    v27 = BugCheckParameter2;
    v28 = v47;
LABEL_51:
    v30 = 1LL;
    v31 = 0LL;
    while ( 1 )
    {
      v32 = MiPageSizes[v31];
      if ( !(v27 % v32) && !(v22 % v32) )
        break;
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 > 1 )
        goto LABEL_57;
    }
    v30 = MiPageSizes[v31];
LABEL_57:
    v6 &= 0xFFFFA7FF;
    if ( v22 >= v28 )
    {
      if ( v18 )
      {
        if ( v18 == 3 )
          goto LABEL_87;
        if ( v18 == 1 )
        {
LABEL_66:
          AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2(v24, 1);
          goto LABEL_67;
        }
        if ( v54 )
        {
LABEL_87:
          LOWORD(v27) = BugCheckParameter2;
          v36 = v28;
          if ( v22 == v28 )
            v36 = v22;
          v22 = v36;
          goto LABEL_90;
        }
        if ( v18 != 2 )
        {
          AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)&MiSystemPartition);
          goto LABEL_68;
        }
        AvailablePagesExcludeSlists = MiNodeAvailablePages(v24, (unsigned int)v18);
        if ( AvailablePagesExcludeSlists < 6 )
        {
          v35 = 0LL;
          LODWORD(v46) = 4;
          v19 = 0;
          goto LABEL_105;
        }
      }
      else
      {
        AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2(v24, 0);
        if ( !AvailablePagesExcludeSlists )
        {
          if ( v22 + BugCheckParameter2 > 0x100000 && v22 > v47 )
          {
            LODWORD(v31) = v45;
            v22 = v47;
            v30 = v47;
          }
          v24 = v46;
          v18 = 1;
          goto LABEL_66;
        }
LABEL_67:
        v28 = v47;
LABEL_68:
        if ( !AvailablePagesExcludeSlists )
          goto LABEL_87;
      }
      if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v30) >> 12 )
      {
LABEL_72:
        if ( v30 != 1 && v54 )
          v6 |= 0x4000u;
      }
      else
      {
        while ( (unsigned int)v31 < v45 )
        {
          v31 = (unsigned int)(v31 + 1);
          v30 = MiPageSizes[v31];
          if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v30) >> 12 )
            goto LABEL_72;
        }
        v30 = 1LL;
      }
      v34 = ~(v30 - 1) & ((AvailablePagesExcludeSlists << 12) / 0x30);
      if ( a4 )
      {
        v34 &= ~(a4 - 1);
        if ( v34 < a4 )
          v34 = a4;
      }
      LOWORD(v27) = BugCheckParameter2;
      if ( v22 > v34 )
        v22 = v34;
    }
LABEL_90:
    if ( (v6 & 0x40) == 0 && (v27 & 0x1FF) == 0 && (v22 & 0x1FF) == 0 )
    {
      if ( MiGetLargestPageIndex() || (*(_QWORD *)&v37 & 0x3FFFFLL) != 0 )
      {
        v38 = v51;
      }
      else
      {
        v38 = v51;
        if ( (v22 & 0x3FFFF) == 0 )
        {
          v39 = 4096;
          if ( (v51 & 0x1000) != 0 )
          {
LABEL_100:
            v6 |= v39;
            goto LABEL_101;
          }
        }
      }
      v39 = 2048;
      if ( (v38 & 0x800) == 0 )
        goto LABEL_101;
      goto LABEL_100;
    }
LABEL_101:
    v49 = v22;
    v40 = v6 & 0xFFFFDFFF;
    LODWORD(v46) = v18;
    v6 |= 0x2000u;
    if ( v18 > 2 )
      v6 = v40;
    v44 = v22 << 12;
    v41 = MiAddPhysicalMemory(a1, (__int64)&v48, &v44, v6, 0LL);
    v19 = v41;
    if ( v41 >= 0 )
    {
      v35 = v44;
LABEL_105:
      v48 += v35;
      v11 += v35;
      v15 = v12 - v11;
      v44 = v12 - v11;
      if ( v12 == v11 )
        goto LABEL_117;
      goto LABEL_114;
    }
    if ( v41 != -1073741670 && v41 != -1073741523 )
    {
      if ( v41 != -1073741637 )
        goto LABEL_117;
      if ( (v6 & 0x1000) != 0 )
      {
        v51 &= ~0x1000u;
      }
      else
      {
        if ( (v6 & 0x800) == 0 )
          goto LABEL_117;
        v51 &= ~0x800u;
      }
    }
LABEL_114:
    BugCheckParameter2 = v48 >> 12;
    v21 = MiRestrictRangeToNode(v48 >> 12, v44 >> 12);
    v20 = v46;
  }
  v19 = -1073741800;
LABEL_117:
  v17 = 0;
  if ( !v11 )
    v17 = v19;
  *a3 = v11;
LABEL_120:
  if ( !a6 && v17 >= 0 && (v6 & 0x12) == 0 )
    IoUpdateDumpPhysicalRanges(v15, v14, v16);
  return (unsigned int)v17;
}
