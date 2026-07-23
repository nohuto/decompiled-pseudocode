/*
 * XREFs of MiEstablishDefragSlabEntries @ 0x14070B794
 * Callers:
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiClearHintSlabEntry @ 0x1402A8D10 (MiClearHintSlabEntry.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     MiPurgeSlabEntry @ 0x1404BB64C (MiPurgeSlabEntry.c)
 *     MiDetermineDefragmentSlabIdentity @ 0x14070B6D0 (MiDetermineDefragmentSlabIdentity.c)
 *     MiFindDefragmentSlabEntries @ 0x14070BB04 (MiFindDefragmentSlabEntries.c)
 *     MiLockUnlockSlabContextsForDefrag @ 0x14070C48C (MiLockUnlockSlabContextsForDefrag.c)
 */

__int64 __fastcall MiEstablishDefragSlabEntries(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 *v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v6; // rdi
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r10
  int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r8
  bool v32; // zf
  unsigned int v33; // [rsp+70h] [rbp+8h]
  __int64 v34; // [rsp+78h] [rbp+10h]
  __int64 v35; // [rsp+80h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 76);
  v33 = v1;
  MiLockUnlockSlabContextsForDefrag(a1, 1LL, 0LL);
  v3 = (__int64 *)(a1 + 40);
  v4 = 0LL;
  if ( !*(_QWORD *)(a1 + 40) )
  {
    if ( (unsigned int)MiEnumerateSlabAllocatorsEx(
                         *(_QWORD *)a1,
                         (__int64)MiSlabContextDefragInProgress,
                         0LL,
                         *(_DWORD *)(a1 + 68),
                         *(_DWORD *)(a1 + 72)) )
      return 3221226614LL;
    *(_DWORD *)(a1 + 84) |= 0x10u;
    v6 = a1 + 40;
    if ( *(_DWORD *)(a1 + 72) == 8 )
    {
      MiDetermineDefragmentSlabIdentity(a1);
      if ( *(_BYTE *)(a1 + 88) == 0xFF )
        return 0LL;
      v6 = a1 + 40;
    }
    v7 = *(_DWORD *)(a1 + 68);
    v8 = *(_QWORD *)a1;
    *v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 16);
    MiEnumerateSlabAllocatorsEx(v8, (__int64)MiSlabContextDefragInProgress, a1, v7, *(_DWORD *)(a1 + 72));
    *v3 = 0LL;
    v3 = (__int64 *)v6;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v34 = 0LL;
  v35 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v3;
      if ( !*v3 )
        goto LABEL_26;
      v10 = a1 + 32;
      v11 = a1 + 48;
      v12 = *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) != v12 )
      {
        *(_DWORD *)(a1 + 84) |= 2u;
        *(_QWORD *)v11 = 0LL;
        goto LABEL_27;
      }
      v13 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v13 + 48) == v9 )
      {
        if ( *(_DWORD *)(v9 + 84) == v1 )
        {
          MiRemoveSlabEntry(*(_QWORD *)a1, v13, v9);
          v14 = *v3;
          *(_DWORD *)(a1 + 84) |= 2u;
          v34 = v14;
          *v3 = 0LL;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(a1 + 64) >= v1 )
        {
LABEL_20:
          *(_DWORD *)(a1 + 84) |= 0x10u;
          v11 = a1 + 48;
          *v3 = 0LL;
        }
        if ( !*(_QWORD *)(a1 + 56) && !*(_DWORD *)(v12 + 84) )
          *(_QWORD *)v11 = 0LL;
        if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 && *(_QWORD *)v11 )
          return 0LL;
LABEL_26:
        MiFindDefragmentSlabEntries(a1);
        v10 = a1 + 32;
        v11 = a1 + 48;
        goto LABEL_27;
      }
      *v3 = 0LL;
      if ( (*(_BYTE *)(v13 + 48) & 1) != 0 )
      {
        *(_DWORD *)(a1 + 84) |= 2u;
        goto LABEL_27;
      }
      if ( *(_DWORD *)(a1 + 68) == -1 )
        goto LABEL_20;
LABEL_27:
      v15 = *(_QWORD *)(a1 + 24);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 48) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(*(_QWORD *)v10 + 56LL) = *(_QWORD *)(a1 + 16);
      }
      v16 = *v3;
      v17 = 0;
      v18 = 0;
      v19 = 0LL;
      if ( *v3 && (v11 = a1 + 48, v20 = *(_QWORD *)(a1 + 48), v21 = a1 + 48, v20) && v16 != v20 )
      {
        if ( (*(_DWORD *)(a1 + 84) & 0x10) != 0 )
        {
          MiClearHintSlabEntry(*(_QWORD *)(v16 + 56), v16);
          *(_DWORD *)(a1 + 64) = v22;
          v10 = a1 + 32;
        }
        v23 = *(_QWORD *)v11;
        v24 = *v3;
        v25 = *(_QWORD *)(*v3 + 56);
        *(_QWORD *)(a1 + 24) = v25;
        *(_QWORD *)v10 = *(_QWORD *)(v23 + 56);
        *(_QWORD *)(v25 + 48) = v24;
        v26 = *(_QWORD *)v10;
        v27 = v35;
        *(_QWORD *)(v26 + 56) = *(_QWORD *)v11;
        *(_DWORD *)(*v3 + 92) |= 0x200u;
        *(_DWORD *)(*(_QWORD *)v11 + 92LL) |= 0x200u;
        *(_DWORD *)(a1 + 84) |= 1u;
        v17 = *(_DWORD *)(*v3 + 88);
        v4 = *(_QWORD *)(*v3 + 40);
        v19 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
        v18 = *(_DWORD *)(*(_QWORD *)v21 + 88LL);
      }
      else
      {
        *v3 = *(_QWORD *)(a1 + 8);
        v28 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)v10 = 0LL;
        v27 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)v11 = v28;
        *(_QWORD *)(a1 + 24) = 0LL;
        v35 = v27;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      MiLockUnlockSlabContextsForDefrag(a1, 0LL, 1LL);
      if ( v17 )
      {
        v31 = v17;
        v1 = v33;
        MiPurgeSlabEntry(v4, v4 + v33 - 1LL, v31, 1);
      }
      else
      {
        v1 = v33;
      }
      v4 = 0LL;
      if ( v18 )
        MiPurgeSlabEntry(v19, v19 + v1 - 1LL, v18, 1);
      if ( v34 )
      {
        MiFreeSlabEntry(*(_QWORD *)(v34 + 56), v34);
        v34 = 0LL;
      }
      if ( v27 )
      {
        MiReleaseFreshPage(v27, v29, v30);
        v35 = 0LL;
      }
      MiLockUnlockSlabContextsForDefrag(a1, 1LL, 1LL);
      if ( *v3 == *(_QWORD *)(a1 + 8) )
        break;
      *(_DWORD *)(a1 + 84) &= ~0x10u;
    }
    v32 = *(_DWORD *)(a1 + 72) == 8;
    *v3 = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( !v32 )
      break;
    if ( (*(_DWORD *)(a1 + 84) & 2) != 0 )
      break;
    if ( *(_BYTE *)(a1 + 88) == 0xFF )
      break;
    MiDetermineDefragmentSlabIdentity(a1);
    if ( *(_BYTE *)(a1 + 88) == 0xFF )
      break;
    *(_DWORD *)(a1 + 84) |= 0x10u;
  }
  MiEnumerateSlabAllocatorsEx(
    *(_QWORD *)a1,
    (__int64)MiSlabContextDefragInProgress,
    a1,
    *(_DWORD *)(a1 + 68),
    *(_DWORD *)(a1 + 72));
  return 0LL;
}
