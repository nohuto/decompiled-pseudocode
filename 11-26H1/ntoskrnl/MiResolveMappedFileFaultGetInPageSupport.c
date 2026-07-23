/*
 * XREFs of MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     MiSetInPagePrefetchPriority @ 0x1404901A4 (MiSetInPagePrefetchPriority.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x1405311BC (MiInitializeInPageSupportForGetExtents.c)
 */

__int64 __fastcall MiResolveMappedFileFaultGetInPageSupport(__int64 *a1)
{
  __int64 *v1; // r15
  _QWORD *v2; // r14
  __int64 v3; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  _SLIST_ENTRY *v8; // rbp
  __int64 v9; // r8
  bool v10; // zf
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // edx
  _BYTE *v19; // rcx
  unsigned int v20; // ebx

  v1 = a1 + 2;
  v2 = (_QWORD *)a1[1];
  v3 = *a1;
  v5 = a1[4];
  v6 = a1[14];
  v8 = (_SLIST_ENTRY *)MiAllocateInPageSupport((_DWORD)v2, *((_DWORD *)a1 + 22), (int)a1 + 136, (int)a1 + 16, a1[22]);
  if ( !v8 )
  {
    v20 = -1073741670;
    goto LABEL_40;
  }
  if ( *v2 != v6
    || (v6 & 0x400) == 0
    && ((v19 = (_BYTE *)a1[5], (v19[34] & 0x20) == 0)
     || (v7 = *(unsigned int *)(*(_QWORD *)v19 + 156LL), (v7 & 0x80u) != 0LL)) )
  {
    LOBYTE(v7) = 17;
    v20 = -1073740748;
    MiUnlockProtoPoolPage(*v1, v7, v9);
    MiFreeInPageSupportBlock(v8);
LABEL_40:
    if ( v5 )
      *(_BYTE *)(v5 + 1) = (v20 == -1073741670) + 1;
    return v20;
  }
  v10 = *((_DWORD *)a1 + 14) == 2;
  a1[16] = (__int64)v8;
  if ( v10 )
  {
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(*v1, v7, v9);
    MiInitializeInPageSupportForGetExtents(v8, a1[12], v2, v3);
    return 3221435187LL;
  }
  if ( v5 && *(_BYTE *)v5 == 1 )
    MiSetInPagePrefetchPriority(v5, v8);
  v11 = 24;
  v12 = (v6 >> 5) & 0x1F;
  v13 = (*(_DWORD *)(a1[12] + 32) >> 1) & 0x1F;
  if ( (_DWORD)v12 != 24 )
  {
    if ( v13 == 24
      && ((MEMORY[0x30] & 0x80000) == 0 ? (v18 = *(_DWORD *)(MEMORY[0x50] + 32LL) >> 1) : (v18 = MEMORY[0x30] >> 5),
          v13 = v18 & 0x1F,
          v13 == 24)
      || (v14 = v13 & 0x18) == 0 )
    {
      if ( ((v6 >> 5) & 0x18) == 0x18 )
      {
        LODWORD(v12) = (v6 >> 5) & 7;
        goto LABEL_12;
      }
      if ( ((v6 >> 5) & 0x18) != 8 )
      {
LABEL_12:
        v11 = v12;
        goto LABEL_13;
      }
    }
    else if ( v14 != 16 )
    {
      if ( v14 == 8 )
      {
        LODWORD(v12) = (v6 >> 5) & 7 | 8;
      }
      else if ( v14 == 24 )
      {
        LODWORD(v12) = (v6 >> 5) & 7 | 0x18;
      }
      goto LABEL_12;
    }
    LODWORD(v12) = (v6 >> 5) & 0x17;
    goto LABEL_12;
  }
LABEL_13:
  *((_DWORD *)a1 + 21) = v11;
  MiInitializePageColorBase(*(_QWORD *)(v3 + 56), 3, *((_DWORD *)a1 + 20), (__int64)(a1 + 19));
  v16 = a1[8];
  if ( *((_DWORD *)a1 + 14) == 1
    || (*(_DWORD *)(v16 + 56) & 0x40020) == 32
    && (*(_DWORD *)(v16 + 56) & 0x30000000) == 0
    && (v6 & 0x400) != 0
    && !dword_140E360D8
    && (!v5
     || *(_BYTE *)v5 != 1
     || MiGetAvailablePagesBelowPriority(a1[15], ((*(_DWORD *)(v5 + 80) >> 3) & 7u) + 1, v15, v16)) )
  {
    *((_BYTE *)a1 + 144) = 1;
  }
  return 0LL;
}
