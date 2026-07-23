/*
 * XREFs of MiCreateFileOnlyPfns @ 0x140873544
 * Callers:
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiDecrementProtoShareCounts @ 0x1406FE214 (MiDecrementProtoShareCounts.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406FEA80 (MiFillFileOnlyProtoAsBad.c)
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiCreateFileOnlyPfns(
        struct _KTHREAD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  char v7; // r9
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int16 *ControlAreaPartition; // rax
  unsigned __int64 v18; // [rsp+38h] [rbp-59h]
  __int64 v19; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h]
  int v23; // [rsp+70h] [rbp-21h]
  int v24; // [rsp+74h] [rbp-1Dh]
  __int64 v25[2]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 v29; // [rsp+F0h] [rbp+5Fh]

  v29 = a2;
  v27 = 0LL;
  v7 = a3;
  v8 = 0;
  v9 = (__int64)a1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -1LL;
  v18 = 0LL;
  v13 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  while ( v13 <= a5 )
  {
    if ( v13 == a5 )
    {
      if ( !v10 )
        return (unsigned int)v8;
    }
    else
    {
      if ( !v10 )
      {
        v12 = *(_QWORD *)(a4 + 8 * v13);
        v10 = 1LL;
        goto LABEL_34;
      }
      v11 = v18;
      if ( *(_QWORD *)(a4 + 8 * v13 - 8) + 1LL == *(_QWORD *)(a4 + 8 * v13) )
      {
        ++v10;
        goto LABEL_35;
      }
    }
    if ( v12 == 0x8000000000000000uLL )
    {
      if ( v8 >= 0 )
      {
        MiFillFileOnlyProtoAsBad(v9, (unsigned __int64 *)(a2 + 8 * (v13 - v10)));
        if ( (a3 & 2) != 0 )
          return (unsigned int)-1073740023;
      }
      goto LABEL_32;
    }
    if ( (v12 & 0x4000000000000000LL) == 0 )
    {
      if ( v8 < 0 )
      {
        if ( a4 + 8 * v13 <= v11 )
        {
          if ( v7 < 0 )
          {
            MiDecrementProtoShareCounts(v12, v10);
            a2 = v29;
          }
          MiPurgeSubsection(a1, a2 + 8 * (v13 - v10), a2 + 8 * v13, 16, v25);
        }
      }
      else
      {
        v22 = 0LL;
        v24 = 0;
        v21[0] = v9;
        v15 = 2;
        if ( v7 < 0 )
          v15 = 6;
        v23 = v15;
        v21[1] = a2 + 8 * (v13 - v10);
        v21[2] = a6;
        if ( (v7 & 2) != 0 )
          v24 = 2;
        if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x20) != 0 )
          v22 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v9 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
        v16 = *(_QWORD *)v9;
        v20 = v12 << 12;
        v19 = v10 << 12;
        ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(v16);
        v8 = MiAddPhysicalMemory(ControlAreaPartition, (__int64)&v20, &v19, 1048578, (__int64)v21);
        if ( v8 < 0 )
        {
          v11 = a4 + 8 * (v13 - v10);
          v10 = 0LL;
          v18 = v11;
          v13 = -1LL;
          goto LABEL_35;
        }
      }
LABEL_32:
      if ( v13 == a5 )
        return (unsigned int)v8;
      v10 = 0LL;
      --v13;
LABEL_34:
      v11 = v18;
      goto LABEL_35;
    }
    if ( v8 >= 0 || a4 + 8 * v13 > v11 )
      goto LABEL_32;
    if ( v13 == a5 )
      return (unsigned int)v8;
    v10 = 0LL;
    --v13;
LABEL_35:
    v9 = (__int64)a1;
    ++v13;
    v7 = a3;
    a2 = v29;
  }
  return (unsigned int)v8;
}
