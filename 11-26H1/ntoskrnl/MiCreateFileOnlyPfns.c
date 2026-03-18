/*
 * XREFs of MiCreateFileOnlyPfns @ 0x14086D164
 * Callers:
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiGetControlAreaPartition @ 0x140457F60 (MiGetControlAreaPartition.c)
 *     MiDecrementProtoShareCounts @ 0x1406F9544 (MiDecrementProtoShareCounts.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406F9DB0 (MiFillFileOnlyProtoAsBad.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
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
  __int64 v14; // r14
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 *ControlAreaPartition; // rax
  unsigned __int64 v19; // [rsp+38h] [rbp-59h]
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h]
  int v24; // [rsp+70h] [rbp-21h]
  int v25; // [rsp+74h] [rbp-1Dh]
  __int64 v26[2]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v27; // [rsp+88h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp+7h]
  __int64 v30; // [rsp+F0h] [rbp+5Fh]

  v30 = a2;
  v28 = 0LL;
  v7 = a3;
  v8 = 0;
  v9 = (__int64)a1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -1LL;
  v19 = 0LL;
  v13 = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  while ( v13 <= a5 )
  {
    if ( v13 == a5 )
    {
      if ( !v10 )
        return (unsigned int)v8;
      v14 = 8 * v13;
    }
    else
    {
      v14 = 8 * v13;
      if ( !v10 )
      {
        v12 = *(_QWORD *)(8 * v13 + a4);
        v10 = 1LL;
        goto LABEL_35;
      }
      v11 = v19;
      if ( *(_QWORD *)(v14 + a4 - 8) + 1LL == *(_QWORD *)(8 * v13 + a4) )
      {
        ++v10;
        goto LABEL_36;
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
      goto LABEL_33;
    }
    if ( (v12 & 0x4000000000000000LL) == 0 )
    {
      if ( v8 < 0 )
      {
        if ( v14 + a4 <= v11 )
        {
          if ( v7 < 0 )
          {
            MiDecrementProtoShareCounts(v12, v10);
            a2 = v30;
          }
          MiPurgeSubsection(a1, a2 + 8 * (v13 - v10), v14 + a2, 16, v26);
        }
      }
      else
      {
        v23 = 0LL;
        v25 = 0;
        v22[0] = v9;
        v16 = 2;
        if ( v7 < 0 )
          v16 = 6;
        v24 = v16;
        v22[1] = a2 + 8 * (v13 - v10);
        v22[2] = a6;
        if ( (v7 & 2) != 0 )
          v25 = 2;
        if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x20) != 0 )
          v23 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v9 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
        v17 = *(_QWORD *)v9;
        v21 = v12 << 12;
        v20 = v10 << 12;
        ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(v17);
        v8 = MiAddPhysicalMemory(ControlAreaPartition, (__int64)&v21, &v20, 1048578, (__int64)v22);
        if ( v8 < 0 )
        {
          v11 = a4 + 8 * (v13 - v10);
          v10 = 0LL;
          v19 = v11;
          v13 = -1LL;
          goto LABEL_36;
        }
      }
LABEL_33:
      if ( v13 == a5 )
        return (unsigned int)v8;
      v10 = 0LL;
      --v13;
LABEL_35:
      v11 = v19;
      goto LABEL_36;
    }
    if ( v8 >= 0 || v14 + a4 > v11 )
      goto LABEL_33;
    if ( v13 == a5 )
      return (unsigned int)v8;
    v10 = 0LL;
    --v13;
LABEL_36:
    v9 = (__int64)a1;
    ++v13;
    v7 = a3;
    a2 = v30;
  }
  return (unsigned int)v8;
}
