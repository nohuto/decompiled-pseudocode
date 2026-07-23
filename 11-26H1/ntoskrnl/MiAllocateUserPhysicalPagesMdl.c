/*
 * XREFs of MiAllocateUserPhysicalPagesMdl @ 0x14087E04C
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalRanges @ 0x14087E9B0 (MiAllocateUserPhysicalRanges.c)
 */

PVOID __fastcall MiAllocateUserPhysicalPagesMdl(int *a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 AweInfoPartition; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned int v7; // r14d
  __int64 v8; // r11
  unsigned __int64 v9; // r12
  void *v10; // r13
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // ebp
  unsigned __int64 v14; // rsi
  int FastAwePages; // eax
  __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // rax
  int v19; // ecx
  unsigned __int64 v20; // rdx
  PVOID result; // rax
  int v22; // edx
  unsigned __int64 v23; // rax
  bool v24; // zf
  unsigned __int64 v25; // [rsp+50h] [rbp-68h]
  unsigned __int64 v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  int v28; // [rsp+C0h] [rbp+8h]
  __int64 v30; // [rsp+D0h] [rbp+18h]
  __int64 v31; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 3);
  v26 = *((_QWORD *)a1 + 4);
  v25 = v3;
  v30 = *((_QWORD *)a1 + 5);
  AweInfoPartition = MiGetAweInfoPartition(v30);
  v7 = a1[35];
  v8 = AweInfoPartition;
  v31 = AweInfoPartition;
  while ( 1 )
  {
    v9 = *((_QWORD *)a1 + 2) - *(_QWORD *)(v5 + 8);
    if ( v3 == 1 && v9 > 0xC0000 )
      v9 = 786432LL;
    if ( (*a1 & 0x40) != 0 || v9 / v3 > 0x20 )
    {
      v10 = 0LL;
    }
    else
    {
      *a1 |= 0x40u;
      v10 = (void *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_WORD *)(v5 + 26) = 0;
      *(_WORD *)(v5 + 24) = 8 * (v9 / v3 + 6);
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 56) = (unsigned int)(v9 / v3) << 12;
    }
    v11 = *a1;
    if ( (*a1 & 0x20) != 0 )
      return (PVOID)MiAllocateUserPhysicalRanges(v8, v9, v7, v10);
    v12 = a1[1];
    v13 = a1[34];
    v14 = *((_QWORD *)a1 + 16);
    v28 = v12;
    if ( v10 && (v11 & 0x90) == 0x80 )
    {
      FastAwePages = MiAllocateFastAwePages((__int64)v10, v6, v13, v12, v14, *((_QWORD *)a1 + 12));
      if ( FastAwePages >= 0 )
        return v10;
      if ( FastAwePages == -1073741523 )
        return 0LL;
      *a1 &= 0xFFFFFF3F;
      v5 = a2;
      v6 = v30;
      v8 = v31;
    }
    else
    {
      v16 = v26 << 12;
      v17 = ((_DWORD)v14 << 12) - 4096;
      v18 = 0LL;
      if ( v26 != 1 )
        v18 = v26 << 12;
      v27 = v18;
      if ( v9 < 0x10 || (v11 & 0x10) != 0 )
        return MiAllocatePagesForMdl(
                 v8,
                 0,
                 v17,
                 v27,
                 v9 << 12,
                 *(_DWORD *)(v6 + 52),
                 v13,
                 v12,
                 *((_QWORD *)a1 + 12),
                 v10);
      if ( v16 == 4096 )
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = MiPageSizes[v19];
          if ( v9 >= v20 && v26 >= v20 )
            break;
          if ( (unsigned int)++v19 >= 3 )
            goto LABEL_26;
        }
        v16 = v20 << 12;
      }
LABEL_26:
      result = MiAllocatePagesForMdl(
                 v8,
                 0,
                 v17,
                 v16,
                 v9 << 12,
                 *(_DWORD *)(v6 + 52),
                 v13,
                 v12 | 0x42u,
                 *((_QWORD *)a1 + 12),
                 v10);
      if ( result )
        return result;
      if ( (*a1 & 0x10) != 0 )
      {
        v12 = v28;
        v6 = v30;
        LODWORD(v8) = v31;
        return MiAllocatePagesForMdl(
                 v8,
                 0,
                 v17,
                 v27,
                 v9 << 12,
                 *(_DWORD *)(v6 + 52),
                 v13,
                 v12,
                 *((_QWORD *)a1 + 12),
                 v10);
      }
      v22 = 0;
      while ( 1 )
      {
        if ( v16 > v27 && v16 == MiPageSizes[v22] << 12 )
        {
          v23 = MiPageSizes[v22 + 1];
          if ( v9 >= v23 && v26 >= v23 )
            break;
        }
        if ( (unsigned int)++v22 > 1 )
          goto LABEL_40;
      }
      v5 = a2;
      v6 = v30;
      v8 = v31;
      v3 = v25;
      if ( v22 )
        v24 = (v28 & 0x1000000) == 0;
      else
        v24 = (v28 & 0x2000000) == 0;
      if ( !v24 )
      {
LABEL_40:
        v5 = a2;
        v6 = v30;
        v8 = v31;
        v3 = v25;
        *a1 |= 0x10u;
        continue;
      }
    }
  }
}
