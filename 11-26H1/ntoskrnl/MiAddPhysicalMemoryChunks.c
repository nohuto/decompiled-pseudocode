/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x14086B848
 * Callers:
 *     MmAddPhysicalMemory @ 0x14086D730 (MmAddPhysicalMemory.c)
 *     MiCreatePartitionPages @ 0x140881FEC (MiCreatePartitionPages.c)
 *     MiHotAddBootDescriptor @ 0x140CFB1E0 (MiHotAddBootDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     MiGetClosestImplicitNode @ 0x1403A76AC (MiGetClosestImplicitNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140486A18 (MiGetAvailablePagesExcludeSlists.c)
 *     MiNodeAvailablePages @ 0x1404B7E38 (MiNodeAvailablePages.c)
 *     MiGetLargestPageIndex @ 0x1404C630C (MiGetLargestPageIndex.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 *     MiNodeLargeFreeZeroPages2 @ 0x1407080F4 (MiNodeLargeFreeZeroPages2.c)
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
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
  int v14; // r14d
  int v15; // r15d
  int v16; // r13d
  int v17; // r12d
  ULONG_PTR v18; // rax
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  unsigned __int64 v29; // rcx
  unsigned __int64 AvailablePagesExcludeSlists; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // r8d
  __int16 v35; // ax
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-38h]
  __int64 v43; // [rsp+48h] [rbp-30h]
  unsigned __int64 v44; // [rsp+50h] [rbp-28h]
  unsigned __int64 v45; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-18h]
  int v48; // [rsp+C8h] [rbp+50h]
  int v51; // [rsp+E0h] [rbp+68h]

  v6 = a5;
  v48 = 6144;
  v44 = 512LL;
  v42 = 1;
  if ( a4 )
  {
    v6 = a5 | 0x100000;
    v9 = a4;
    if ( a4 != 0x40000 )
      v9 = 512LL;
    v44 = v9;
    v42 = a4 != 0x40000;
  }
  v10 = *a2;
  v11 = 0LL;
  v12 = *a3;
  v45 = *a2;
  if ( (v6 & 0x8000) != 0 )
  {
    v6 |= 0x103000u;
    v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v41 = v13;
      v14 = MiAddPhysicalMemory(a1, (__int64)&v45, &v41, v6, 0LL);
      if ( v14 >= 0 )
      {
        *a3 = v41;
        goto LABEL_120;
      }
      if ( (v6 & 0x2000) == 0 )
        break;
      v6 &= ~0x2000u;
    }
    *a3 = 0LL;
    return (unsigned int)v14;
  }
  v46 = 0LL;
  v51 = 0;
  if ( a1 != (unsigned __int16 *)&MiSystemPartition || (v6 & 0x40) != 0 )
  {
    v15 = 2;
  }
  else
  {
    v51 = 1;
    v15 = 0;
  }
  v16 = 0;
  BugCheckParameter2 = v10 >> 12;
  v17 = v15;
  v18 = MiRestrictRangeToNode(v10 >> 12, v12 >> 12);
  while ( 1 )
  {
    v19 = v18;
    if ( v18 < a4 )
      break;
    if ( BugCheckParameter2 < 0x100000 && v18 + BugCheckParameter2 > 0x100000 )
      v19 = 0x100000 - BugCheckParameter2;
    v20 = MiPageToNode(BugCheckParameter2);
    v21 = qword_140E37E50 + 56320LL * ((unsigned int)MiGetClosestImplicitNode(v20 + 1) - 1);
    v43 = v21;
    if ( v16 < 0 )
    {
      v26 = v46;
      v25 = v44;
      v19 = v46;
      if ( v46 > v44 )
      {
        if ( v51 )
        {
          v19 = v44;
        }
        else
        {
          v19 = (v46 >> 1) & ~(v44 - 1);
          v26 = v46;
          if ( v19 < v44 )
            v19 = v44;
        }
      }
      switch ( v17 )
      {
        case 0:
          v24 = BugCheckParameter2;
          if ( v26 <= v44 )
            v15 = (BugCheckParameter2 < 0x100000) + 1;
          else
            v15 = 0;
          goto LABEL_51;
        case 1:
          v15 = 2 - (v44 < v26);
LABEL_50:
          v24 = BugCheckParameter2;
          goto LABEL_51;
        case 2:
          v24 = BugCheckParameter2;
          if ( v51 )
            v15 = 3;
          else
            v15 = v44 < v26 ? 2 : 4;
          goto LABEL_51;
      }
      if ( v17 != 3 )
      {
        if ( v17 != 4 )
          goto LABEL_50;
        if ( v26 <= v44 )
          goto LABEL_117;
      }
      v15 = 4;
      goto LABEL_50;
    }
    v15 = 0;
    LODWORD(v22) = 1;
    if ( !v51 )
      v15 = v17;
    if ( (BugCheckParameter2 & 0x1FF) != 0 )
    {
LABEL_28:
      if ( v19 > MiPageSizes[(unsigned int)v22] - BugCheckParameter2 % MiPageSizes[(unsigned int)v22] )
        v19 = MiPageSizes[(unsigned int)v22] - BugCheckParameter2 % MiPageSizes[(unsigned int)v22];
    }
    else
    {
      v23 = 512LL;
      while ( v19 >= v23 )
      {
        v19 &= ~(v23 - 1);
        if ( !(_DWORD)v22 )
          break;
        v22 = (unsigned int)(v22 - 1);
        v23 = MiPageSizes[v22];
        if ( BugCheckParameter2 % v23 )
          goto LABEL_28;
      }
    }
    v24 = BugCheckParameter2;
    v25 = v44;
LABEL_51:
    v27 = 1LL;
    v28 = 0LL;
    while ( 1 )
    {
      v29 = MiPageSizes[v28];
      if ( !(v24 % v29) && !(v19 % v29) )
        break;
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 > 1 )
        goto LABEL_57;
    }
    v27 = MiPageSizes[v28];
LABEL_57:
    v6 &= 0xFFFFA7FF;
    if ( v19 >= v25 )
    {
      if ( v15 )
      {
        if ( v15 == 3 )
          goto LABEL_87;
        if ( v15 == 1 )
        {
LABEL_66:
          AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2(v21, 1);
          goto LABEL_67;
        }
        if ( v51 )
        {
LABEL_87:
          LOWORD(v24) = BugCheckParameter2;
          v33 = v25;
          if ( v19 == v25 )
            v33 = v19;
          v19 = v33;
          goto LABEL_90;
        }
        if ( v15 != 2 )
        {
          AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)&MiSystemPartition);
          goto LABEL_68;
        }
        AvailablePagesExcludeSlists = MiNodeAvailablePages(v21, (unsigned int)v15);
        if ( AvailablePagesExcludeSlists < 6 )
        {
          v32 = 0LL;
          LODWORD(v43) = 4;
          v16 = 0;
          goto LABEL_105;
        }
      }
      else
      {
        AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2(v21, 0);
        if ( !AvailablePagesExcludeSlists )
        {
          if ( v19 + BugCheckParameter2 > 0x100000 && v19 > v44 )
          {
            LODWORD(v28) = v42;
            v19 = v44;
            v27 = v44;
          }
          v21 = v43;
          v15 = 1;
          goto LABEL_66;
        }
LABEL_67:
        v25 = v44;
LABEL_68:
        if ( !AvailablePagesExcludeSlists )
          goto LABEL_87;
      }
      if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v27) >> 12 )
      {
LABEL_72:
        if ( v27 != 1 && v51 )
          v6 |= 0x4000u;
      }
      else
      {
        while ( (unsigned int)v28 < v42 )
        {
          v28 = (unsigned int)(v28 + 1);
          v27 = MiPageSizes[v28];
          if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v27) >> 12 )
            goto LABEL_72;
        }
        v27 = 1LL;
      }
      v31 = ~(v27 - 1) & ((AvailablePagesExcludeSlists << 12) / 0x30);
      if ( a4 )
      {
        v31 &= ~(a4 - 1);
        if ( v31 < a4 )
          v31 = a4;
      }
      LOWORD(v24) = BugCheckParameter2;
      if ( v19 > v31 )
        v19 = v31;
    }
LABEL_90:
    if ( (v6 & 0x40) == 0 && (v24 & 0x1FF) == 0 && (v19 & 0x1FF) == 0 )
    {
      if ( MiGetLargestPageIndex() || (*(_QWORD *)&v34 & 0x3FFFFLL) != 0 )
      {
        v35 = v48;
      }
      else
      {
        v35 = v48;
        if ( (v19 & 0x3FFFF) == 0 )
        {
          v36 = 4096;
          if ( (v48 & 0x1000) != 0 )
          {
LABEL_100:
            v6 |= v36;
            goto LABEL_101;
          }
        }
      }
      v36 = 2048;
      if ( (v35 & 0x800) == 0 )
        goto LABEL_101;
      goto LABEL_100;
    }
LABEL_101:
    v46 = v19;
    v37 = v6 & 0xFFFFDFFF;
    LODWORD(v43) = v15;
    v6 |= 0x2000u;
    if ( v15 > 2 )
      v6 = v37;
    v41 = v19 << 12;
    v38 = MiAddPhysicalMemory(a1, (__int64)&v45, &v41, v6, 0LL);
    v16 = v38;
    if ( v38 >= 0 )
    {
      v32 = v41;
LABEL_105:
      v45 += v32;
      v11 += v32;
      v41 = v12 - v11;
      if ( v12 == v11 )
        goto LABEL_117;
      goto LABEL_114;
    }
    if ( v38 != -1073741670 && v38 != -1073741523 )
    {
      if ( v38 != -1073741637 )
        goto LABEL_117;
      if ( (v6 & 0x1000) != 0 )
      {
        v48 &= ~0x1000u;
      }
      else
      {
        if ( (v6 & 0x800) == 0 )
          goto LABEL_117;
        v48 &= ~0x800u;
      }
    }
LABEL_114:
    BugCheckParameter2 = v45 >> 12;
    v18 = MiRestrictRangeToNode(v45 >> 12, v41 >> 12);
    v17 = v43;
  }
  v16 = -1073741800;
LABEL_117:
  v14 = 0;
  if ( !v11 )
    v14 = v16;
  *a3 = v11;
LABEL_120:
  if ( !a6 && v14 >= 0 && (v6 & 0x12) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v14;
}
