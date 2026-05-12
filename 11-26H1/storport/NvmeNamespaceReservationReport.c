/*
 * XREFs of NvmeNamespaceReservationReport @ 0x14010E124
 * Callers:
 *     NvmeNamespacePersistentReserveInIoctl @ 0x140107864 (NvmeNamespacePersistentReserveInIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     GetScsiReservationType @ 0x1400FFFD4 (GetScsiReservationType.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceReservationReport(__int64 a1, __int64 a2)
{
  union _SLIST_HEADER *v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  _BYTE *v7; // rbx
  __int64 v8; // r8
  int DmaBuffer; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // r13d
  int v16; // r13d
  unsigned int v17; // r14d
  _BYTE *v18; // rax
  unsigned __int16 v19; // r11
  __int64 v20; // r10
  char v21; // cl
  char v22; // al
  char v23; // al
  __int64 v24; // r10
  __int16 v25; // r11
  char v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  char v30; // cl
  char v31; // al
  char ScsiReservationType; // al
  char v33; // r8
  __int64 v34; // r9
  int v35; // r13d
  _BYTE *Pool; // rax
  char v37; // al
  unsigned __int16 i; // r8
  char v39; // al
  unsigned __int64 v40; // rdx
  int v41; // r13d
  _BYTE *v42; // rax
  __int16 v43; // dx
  unsigned __int16 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 ExtendedCommand; // [rsp+30h] [rbp-28h]
  _BYTE *v51; // [rsp+38h] [rbp-20h]
  __int128 v52; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp+50h]
  char v55; // [rsp+A8h] [rbp+50h]
  unsigned int Size; // [rsp+B8h] [rbp+60h]

  v51 = *(_BYTE **)(a2 + 24);
  v3 = *(union _SLIST_HEADER **)(a1 + 16);
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  Size = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v52 = 0LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v3);
  if ( ExtendedCommand )
  {
    while ( 1 )
    {
      v6 = 48;
      if ( v5 > 0x30 )
        v6 = v5;
      DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v6, v8, (void **)&v52, (_QWORD *)&v52 + 1, 0);
      if ( DmaBuffer < 0 )
        goto LABEL_50;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = v4;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = v52;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = v6;
      v10 = *(_QWORD *)ExtendedCommand;
      v11 = *((_QWORD *)&v52 + 1);
      v12 = **(_BYTE **)(*(_QWORD *)(a1 + 16) + 1280LL) >> 3;
      *(_DWORD *)(v10 + 4100) = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(v10 + 4120) = v11;
      *(_BYTE *)(v10 + 4096) = 14;
      *(_DWORD *)(v10 + 4136) = (v6 >> 2) - 1;
      *(_DWORD *)(v10 + 4140) ^= (*(_DWORD *)(v10 + 4140) ^ v12) & 1;
      DmaBuffer = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16), ExtendedCommand);
      if ( DmaBuffer < 0 )
        goto LABEL_50;
      v13 = *(_QWORD *)(a1 + 16);
      v14 = *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL);
      v15 = *(unsigned __int16 *)(v14 + 5);
      v5 = (**(_BYTE **)(v13 + 1280) & 8) != 0 ? (v15 + 1) << 6 : 24 * (v15 + 1);
      if ( v6 >= v5 )
        break;
      NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v6, v13, v52, *((__int64 *)&v52 + 1));
      v4 = a2;
      v52 = 0LL;
    }
    if ( (v51[8] & 0x1F) != 0 )
    {
      if ( (v51[8] & 0x1F) == 1 )
      {
        v55 = *(_BYTE *)(v14 + 4);
        v35 = v55 != 0 ? 0x10 : 0;
        v17 = v35 + 8;
        Pool = (_BYTE *)RaidAllocatePool(64LL, (unsigned int)(v35 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
        v7 = Pool;
        if ( !Pool )
          goto LABEL_2;
        Pool[3] = *(_BYTE *)v14;
        Pool[2] = *(_BYTE *)(v14 + 1);
        Pool[1] = *(_BYTE *)(v14 + 2);
        *Pool = *(_BYTE *)(v14 + 3);
        Pool[6] = BYTE1(v35);
        Pool[7] = v35;
        Pool[5] = BYTE2(v35);
        Pool[4] = HIBYTE(v35);
        if ( v55 )
        {
          Pool[21] = GetScsiReservationType(*(unsigned __int8 *)(v14 + 4)) & 0xF;
          v37 = *(_BYTE *)(v14 + 4);
          if ( v37 != 5 && v37 != 6 )
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= *(_WORD *)(v14 + 5) )
                goto LABEL_47;
              if ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1280LL) & 8) != 0 )
              {
                v40 = (unsigned __int64)i << 6;
                if ( (*(_BYTE *)(v40 + v14 + 66) & 1) != 0 )
                {
                  v7[15] = *(_BYTE *)(v40 + v14 + 72);
                  v7[14] = *(_BYTE *)(v40 + v14 + 73);
                  v7[13] = *(_BYTE *)(v40 + v14 + 74);
                  v7[12] = *(_BYTE *)(v40 + v14 + 75);
                  v7[11] = *(_BYTE *)(v40 + v14 + 76);
                  v7[10] = *(_BYTE *)(v40 + v14 + 77);
                  v7[9] = *(_BYTE *)(v40 + v14 + 78);
                  v39 = *(_BYTE *)(v40 + v14 + 79);
                  goto LABEL_33;
                }
              }
              else if ( (*(_BYTE *)(v14 + 24LL * i + 26) & 1) != 0 )
              {
                v7[15] = *(_BYTE *)(v14 + 24LL * i + 40);
                v7[14] = *(_BYTE *)(v14 + 24LL * i + 41);
                v7[13] = *(_BYTE *)(v14 + 24LL * i + 42);
                v7[12] = *(_BYTE *)(v14 + 24LL * i + 43);
                v7[11] = *(_BYTE *)(v14 + 24LL * i + 44);
                v7[10] = *(_BYTE *)(v14 + 24LL * i + 45);
                v7[9] = *(_BYTE *)(v14 + 24LL * i + 46);
                v39 = *(_BYTE *)(v14 + 24LL * i + 47);
LABEL_33:
                v7[8] = v39;
                goto LABEL_47;
              }
            }
          }
          *((_QWORD *)v7 + 1) = 0LL;
        }
        goto LABEL_47;
      }
      if ( (v51[8] & 0x1F) != 3 )
      {
        DmaBuffer = -1073741811;
        goto LABEL_50;
      }
      v16 = 32 * v15;
      v17 = v16 + 8;
      v54 = v16 + 8;
      v18 = (_BYTE *)RaidAllocatePool(64LL, (unsigned int)(v16 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
      v7 = v18;
      if ( !v18 )
        goto LABEL_2;
      v18[3] = *(_BYTE *)v14;
      v18[2] = *(_BYTE *)(v14 + 1);
      v18[1] = *(_BYTE *)(v14 + 2);
      *v18 = *(_BYTE *)(v14 + 3);
      v18[6] = BYTE1(v16);
      v18[5] = BYTE2(v16);
      v18[4] = HIBYTE(v16);
      v18[7] = v16;
      if ( v16 )
      {
        v19 = 0;
        if ( *(_WORD *)(v14 + 5) )
        {
          do
          {
            v20 = 32LL * v19;
            if ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1280LL) & 8) != 0 )
            {
              v29 = (unsigned __int64)v19 << 6;
              v7[v20 + 15] = *(_BYTE *)(v29 + v14 + 72);
              v7[v20 + 14] = *(_BYTE *)(v29 + v14 + 73);
              v7[v20 + 13] = *(_BYTE *)(v29 + v14 + 74);
              v7[v20 + 12] = *(_BYTE *)(v29 + v14 + 75);
              v7[v20 + 11] = *(_BYTE *)(v29 + v14 + 76);
              v7[v20 + 10] = *(_BYTE *)(v29 + v14 + 77);
              v7[v20 + 9] = *(_BYTE *)(v29 + v14 + 78);
              v7[v20 + 8] = *(_BYTE *)(v29 + v14 + 79);
              v30 = v7[v20 + 20] | 2;
              v7[v20 + 20] = v30;
              v31 = *(_BYTE *)(v29 + v14 + 66) ^ v30;
              v7[v20 + 21] &= 0xFu;
              v7[v20 + 20] = v30 ^ v31 & 1;
              ScsiReservationType = GetScsiReservationType(*(unsigned __int8 *)(v14 + 4));
              v7[v24 + 21] = v33 ^ (v33 ^ ScsiReservationType) & 0xF;
              v7[v24 + 27] = *(_BYTE *)(v34 + v14 + 64);
              v7[v24 + 26] = *(_BYTE *)(v34 + v14 + 65);
              *(_DWORD *)&v7[v24 + 28] = 0x8000000;
              v28 = *(_QWORD *)(v34 + v14 + 80);
            }
            else
            {
              v7[v20 + 15] = *(_BYTE *)(v14 + 24LL * v19 + 40);
              v7[v20 + 14] = *(_BYTE *)(v14 + 24LL * v19 + 41);
              v7[v20 + 13] = *(_BYTE *)(v14 + 24LL * v19 + 42);
              v7[v20 + 12] = *(_BYTE *)(v14 + 24LL * v19 + 43);
              v7[v20 + 11] = *(_BYTE *)(v14 + 24LL * v19 + 44);
              v7[v20 + 10] = *(_BYTE *)(v14 + 24LL * v19 + 45);
              v7[v20 + 9] = *(_BYTE *)(v14 + 24LL * v19 + 46);
              v7[v20 + 8] = *(_BYTE *)(v14 + 24LL * v19 + 47);
              v21 = v7[v20 + 20] | 2;
              v7[v20 + 20] = v21;
              v22 = *(_BYTE *)(v14 + 24LL * v19 + 26) ^ v21;
              v7[v20 + 21] &= 0xFu;
              v7[v20 + 20] = v21 ^ v22 & 1;
              v23 = GetScsiReservationType(*(unsigned __int8 *)(v14 + 4));
              v7[v24 + 21] = v26 ^ (v26 ^ v23) & 0xF;
              v7[v24 + 27] = *(_BYTE *)(v14 + 8 * v27 + 24);
              v7[v24 + 26] = *(_BYTE *)(v14 + 8 * v27 + 25);
              *(_DWORD *)&v7[v24 + 28] = 0x8000000;
              v28 = *(_QWORD *)(v14 + 8 * v27 + 32);
            }
            v19 = v25 + 1;
            *(_QWORD *)&v7[v24 + 32] = v28;
          }
          while ( v19 < *(_WORD *)(v14 + 5) );
          goto LABEL_46;
        }
      }
LABEL_47:
      memset_0(v51, 0, Size);
      if ( v17 >= *((unsigned __int16 *)v51 + 5) )
        v17 = *((unsigned __int16 *)v51 + 5);
      memmove(v51, v7, v17);
      goto LABEL_50;
    }
    v41 = 8 * v15;
    v17 = v41 + 8;
    v54 = v41 + 8;
    v42 = (_BYTE *)RaidAllocatePool(64LL, (unsigned int)(v41 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
    v7 = v42;
    if ( !v42 )
      goto LABEL_2;
    v42[3] = *(_BYTE *)v14;
    v42[2] = *(_BYTE *)(v14 + 1);
    v42[1] = *(_BYTE *)(v14 + 2);
    *v42 = *(_BYTE *)(v14 + 3);
    v42[6] = BYTE1(v41);
    v42[5] = BYTE2(v41);
    v42[4] = HIBYTE(v41);
    v42[7] = v41;
    if ( !v41 )
      goto LABEL_47;
    v43 = *(_WORD *)(v14 + 5);
    v44 = 0;
    if ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1280LL) & 8) != 0 )
    {
      if ( !v43 )
        goto LABEL_47;
      do
      {
        v46 = v44++;
        v47 = (unsigned __int64)(unsigned int)v46 << 6;
        v42[8 * v46 + 15] = *(_BYTE *)(v47 + v14 + 72);
        v42[8 * v46 + 14] = *(_BYTE *)(v47 + v14 + 73);
        v42[8 * v46 + 13] = *(_BYTE *)(v47 + v14 + 74);
        v42[8 * v46 + 12] = *(_BYTE *)(v47 + v14 + 75);
        v42[8 * v46 + 11] = *(_BYTE *)(v47 + v14 + 76);
        v42[8 * v46 + 10] = *(_BYTE *)(v47 + v14 + 77);
        v42[8 * v46 + 9] = *(_BYTE *)(v47 + v14 + 78);
        v42[8 * v46 + 8] = *(_BYTE *)(v47 + v14 + 79);
      }
      while ( v44 < *(_WORD *)(v14 + 5) );
    }
    else
    {
      if ( !v43 )
        goto LABEL_47;
      do
      {
        v45 = v44++;
        v42[8 * v45 + 15] = *(_BYTE *)(v14 + 24 * v45 + 40);
        v42[8 * v45 + 14] = *(_BYTE *)(v14 + 24 * v45 + 41);
        v42[8 * v45 + 13] = *(_BYTE *)(v14 + 24 * v45 + 42);
        v42[8 * v45 + 12] = *(_BYTE *)(v14 + 24 * v45 + 43);
        v42[8 * v45 + 11] = *(_BYTE *)(v14 + 24 * v45 + 44);
        v42[8 * v45 + 10] = *(_BYTE *)(v14 + 24 * v45 + 45);
        v42[8 * v45 + 9] = *(_BYTE *)(v14 + 24 * v45 + 46);
        v42[8 * v45 + 8] = *(_BYTE *)(v14 + 24 * v45 + 47);
      }
      while ( v44 < *(_WORD *)(v14 + 5) );
    }
LABEL_46:
    v17 = v54;
    goto LABEL_47;
  }
LABEL_2:
  DmaBuffer = -1073741670;
LABEL_50:
  NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v52 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v6, v48, v52, *((__int64 *)&v52 + 1));
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D4E6152u);
  return (unsigned int)DmaBuffer;
}
