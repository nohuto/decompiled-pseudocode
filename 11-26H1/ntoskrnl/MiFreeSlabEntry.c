/*
 * XREFs of MiFreeSlabEntry @ 0x1402A6E7C
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14070B4B0 (MiDeleteSlabEntriesForIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, __int64 a2)
{
  int *v2; // r14
  unsigned __int64 v3; // rax
  __int64 v5; // r12
  _QWORD *v6; // rcx
  __int64 v7; // r13
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r15
  volatile signed __int64 *v10; // rbx
  _DWORD *v11; // r9
  _QWORD *v12; // r8
  int v13; // eax
  int v14; // eax
  ULONG_PTR *v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  _WORD *v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rcx
  signed __int64 i; // rax
  __int64 v22; // rax
  __int64 LinkedListPte; // rax
  __int64 v24; // r8
  __int64 v25; // r11
  unsigned int v26; // ecx
  __int64 v27; // r8
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v29; // [rsp+20h] [rbp-58h]
  __int128 v30; // [rsp+28h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  int v32; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+18h]
  _QWORD *v34; // [rsp+98h] [rbp+20h]

  v31 = 0LL;
  v2 = (int *)(a1 + 128);
  v3 = (unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3;
  v30 = 0LL;
  v5 = 0LL;
  v6 = (_QWORD *)(a2 + 40);
  v33 = MiPageSizes[v3 & 3];
  v7 = 0x7FFFFFFFFFLL;
  *(_QWORD *)&v30 = 0x7FFFFFFFFFLL;
  v8 = (_QWORD *)(48LL * *(_QWORD *)(a2 + 40) - 0x220000000000LL);
  v9 = 48LL * *(_QWORD *)(a2 + 48) - 0x220000000000LL;
  if ( (unsigned __int64)v8 <= v9 )
  {
    v10 = v8 + 5;
    v11 = v8 + 4;
    v12 = v8 + 3;
    v34 = v8 + 4;
    v29 = v8 + 3;
    while ( 1 )
    {
      v13 = *v11 & 0xC00000;
      if ( v13 == 0x400000 )
        goto LABEL_4;
      if ( v13 == 12582912 )
      {
        v27 = 16LL;
      }
      else
      {
        v22 = (*v12 >> 59) & 7LL;
        if ( ((*v12 >> 59) & 7) == 0
          || (_InterlockedOr(v28, 0), v26 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v22) & 7, v26 <= 2)
          && ((v22 & 1) != 0 || v26 < 2) )
        {
          LinkedListPte = MiMakeLinkedListPte(v7);
          *(_QWORD *)(v24 + v25) = LinkedListPte;
          v7 = v24 / 48;
          *(_QWORD *)&v30 = v24 / 48;
          goto LABEL_4;
        }
        v27 = 20LL;
      }
      MiChangePageAttribute(v8, 1LL, v27);
LABEL_4:
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10 - 4, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( *((__int64 *)v10 - 2) < 0 );
      }
      if ( !v5 )
        v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)*v10 >> 43) & 0x3FF));
      v14 = *v2;
      if ( *v2 >= 0 && v14 <= 4 && v14 != 2 )
      {
        v19 = *v10;
        v20 = *v10;
        for ( i = *v10; ; v20 = i )
        {
          i = _InterlockedCompareExchange64(v10, v20 & 0x8FFFFFFFFFFFFFFFuLL, i);
          if ( v19 == i )
            break;
          v19 = i;
        }
      }
      *((_DWORD *)v10 - 2) = *(_DWORD *)(v10 - 1) & 0xFFFF0000 | 2;
      *((_QWORD *)v10 - 2) = *(v10 - 2) & 0xC000000000000000uLL | 1;
      *((_DWORD *)v10 - 2) = *(_DWORD *)(v10 - 1) & 0xFFF8FFFF | 0x60000;
      *v8 = 0LL;
      _InterlockedAnd64(v10 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 6;
      v11 = v34 + 6;
      v12 = v29 + 6;
      v34 += 6;
      v10 += 6;
      v29 += 6;
      if ( (unsigned __int64)v8 > v9 )
      {
        v15 = (ULONG_PTR *)(a2 + 40);
        v6 = (_QWORD *)(a2 + 40);
        goto LABEL_11;
      }
    }
  }
  v15 = (ULONG_PTR *)(a2 + 40);
LABEL_11:
  v16 = v33;
  MiUpdateSlabPagePlaceholderState((unsigned int)*v2, *v6, v33, 0LL);
  if ( v7 != 0x7FFFFFFFFFLL )
  {
    v31 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    DWORD2(v30) = 1;
    BYTE12(v30) = 0;
    MiChangePageAttributeBatch(&v30, 1LL);
  }
  v17 = qword_140E3D240 + 2 * ((*v15 + v16 - 1) >> 9);
  v18 = (_WORD *)(qword_140E3D240 + 2 * (*v15 >> 9));
  if ( (unsigned __int64)v18 <= v17 )
  {
    do
      *v18++ = 0;
    while ( (unsigned __int64)v18 <= v17 );
    v15 = (ULONG_PTR *)(a2 + 40);
  }
  MiFreeLargePageMemory(*v15);
  if ( (*(_DWORD *)(a2 + 92) & 2) != 0 )
    MiReleaseNonPagedResources(v5, v16);
  ExFreePoolWithTag((PVOID)a2, 0);
}
