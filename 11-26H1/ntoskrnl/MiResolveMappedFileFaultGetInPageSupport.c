/*
 * XREFs of MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50
 * Callers:
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140406B20 (MiGetAvailablePagesBelowPriority.c)
 *     MiSetInPagePrefetchPriority @ 0x140496654 (MiSetInPagePrefetchPriority.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x14052EC9C (MiInitializeInPageSupportForGetExtents.c)
 */

__int64 __fastcall MiResolveMappedFileFaultGetInPageSupport(__int64 *a1)
{
  __int64 *v1; // r15
  _QWORD *v2; // r14
  __int64 v3; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  struct _SLIST_ENTRY *v7; // rbp
  bool v8; // zf
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // edx
  _BYTE *v17; // rcx
  unsigned int v18; // ebx

  v1 = a1 + 2;
  v2 = (_QWORD *)a1[1];
  v3 = *a1;
  v5 = a1[4];
  v6 = a1[14];
  v7 = (struct _SLIST_ENTRY *)MiAllocateInPageSupport(
                                (_DWORD)v2,
                                *((_DWORD *)a1 + 22),
                                (int)a1 + 136,
                                (int)a1 + 16,
                                a1[22]);
  if ( !v7 )
  {
    v18 = -1073741670;
    goto LABEL_40;
  }
  if ( *v2 != v6
    || (v6 & 0x400) == 0
    && ((v17 = (_BYTE *)a1[5], (v17[34] & 0x20) == 0) || (*(_DWORD *)(*(_QWORD *)v17 + 156LL) & 0x80u) != 0) )
  {
    v18 = -1073740748;
    MiUnlockProtoPoolPage(*v1, 0x11u);
    MiFreeInPageSupportBlock(v7);
LABEL_40:
    if ( v5 )
      *(_BYTE *)(v5 + 1) = (v18 == -1073741670) + 1;
    return v18;
  }
  v8 = *((_DWORD *)a1 + 14) == 2;
  a1[16] = (__int64)v7;
  if ( v8 )
  {
    MiUnlockProtoPoolPage(*v1, 0x11u);
    MiInitializeInPageSupportForGetExtents(v7, a1[12], v2, v3);
    return 3221435187LL;
  }
  if ( v5 && *(_BYTE *)v5 == 1 )
    MiSetInPagePrefetchPriority(v5, v7);
  v9 = 24;
  v10 = (v6 >> 5) & 0x1F;
  v11 = (*(_DWORD *)(a1[12] + 32) >> 1) & 0x1F;
  if ( (_DWORD)v10 != 24 )
  {
    if ( v11 == 24
      && ((MEMORY[0x30] & 0x80000) == 0 ? (v16 = *(_DWORD *)(MEMORY[0x50] + 32LL) >> 1) : (v16 = MEMORY[0x30] >> 5),
          v11 = v16 & 0x1F,
          v11 == 24)
      || (v12 = v11 & 0x18) == 0 )
    {
      if ( ((v6 >> 5) & 0x18) == 0x18 )
      {
        LODWORD(v10) = (v6 >> 5) & 7;
        goto LABEL_12;
      }
      if ( ((v6 >> 5) & 0x18) != 8 )
      {
LABEL_12:
        v9 = v10;
        goto LABEL_13;
      }
    }
    else if ( v12 != 16 )
    {
      if ( v12 == 8 )
      {
        LODWORD(v10) = (v6 >> 5) & 7 | 8;
      }
      else if ( v12 == 24 )
      {
        LODWORD(v10) = (v6 >> 5) & 7 | 0x18;
      }
      goto LABEL_12;
    }
    LODWORD(v10) = (v6 >> 5) & 0x17;
    goto LABEL_12;
  }
LABEL_13:
  *((_DWORD *)a1 + 21) = v9;
  MiInitializePageColorBase(*(_QWORD *)(v3 + 56), 3, *((_DWORD *)a1 + 20), (__int64)(a1 + 19));
  v14 = a1[8];
  if ( *((_DWORD *)a1 + 14) == 1
    || (*(_DWORD *)(v14 + 56) & 0x40020) == 32
    && (*(_DWORD *)(v14 + 56) & 0x30000000) == 0
    && (v6 & 0x400) != 0
    && !dword_140E35F58
    && (!v5
     || *(_BYTE *)v5 != 1
     || MiGetAvailablePagesBelowPriority(a1[15], ((*(_DWORD *)(v5 + 80) >> 3) & 7u) + 1, v13, v14)) )
  {
    *((_BYTE *)a1 + 144) = 1;
  }
  return 0LL;
}
