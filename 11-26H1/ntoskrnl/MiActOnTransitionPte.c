/*
 * XREFs of MiActOnTransitionPte @ 0x14033E930
 * Callers:
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiActOnTransitionPte(__int64 a1)
{
  unsigned __int64 *v1; // rsi
  int v2; // r14d
  __int64 v4; // r15
  ULONG_PTR v5; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rdi
  char v8; // al
  unsigned int v9; // esi
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 updated; // rax
  int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 PteShadow; // rax
  unsigned int v19; // edx
  ULONG_PTR v20; // rcx
  int v21; // ebx
  int v22; // r8d
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rax
  _DWORD *SubsectionFromPte; // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = *(unsigned __int64 **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)a1 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    v6 = MiLockLeafPage(v1, 0);
  else
    v6 = MiLockTransitionLeafPageEx(v5);
  v7 = v6;
  if ( !v6 )
    goto LABEL_22;
  if ( !v1 || (*v1 & 1) == 0 )
  {
    if ( v2 == 2 )
    {
      MiUpdatePfnPriority(v6, v4, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v8 = *(_BYTE *)(v6 + 34);
    v9 = 0;
    v10 = *(_BYTE *)(v7 + 34) & 7;
    if ( v10 == 2 )
    {
      if ( v2 != 1 )
      {
        if ( (v8 & 0x28) == 0 )
        {
          v11 = *(_QWORD *)(v7 + 16);
          if ( (v11 & 8) != 0 )
          {
            *(_QWORD *)(v7 + 16) &= ~8uLL;
          }
          else
          {
            v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v11 & 4) != 0 )
              v12 = *(_QWORD *)(v7 + 16);
            v11 = v12;
          }
          *(_QWORD *)(a1 + 16) = v11;
          if ( v11 )
            *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
          updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), 1u);
          v28[0] = updated;
          if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
            updated = MiReadPteShadow((unsigned __int64)v28, updated);
          v28[0] = updated & 0xFFFFFFFFFFFFFFFBuLL;
          *(_QWORD *)(v7 + 16) = updated & 0xFFFFFFFFFFFFFFFBuLL;
        }
        goto LABEL_17;
      }
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v7 + 16)) )
        *(_QWORD *)(v7 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), 0);
      else
        v9 = -1073740748;
      if ( (*(_DWORD *)(v7 + 16) & 8) == 0 )
      {
        v21 = *(_DWORD *)(v7 + 32);
        v22 = 1024;
        if ( *(__int64 *)(v7 + 40) < 0 && (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
          }
        }
        if ( *(__int64 *)(v7 + 40) < 0
          && (*(_DWORD *)(v7 + 16) & v22) != 0
          && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
        {
          v26 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v26 + 56LL) & 0x20) == 0 && (v26[38] & 1) == 0 )
            MiSetSubsectionModified(v26, 0LL);
        }
        if ( (v21 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
          && (*(_BYTE *)(v7 + 16) & 8) != 0
          && (v21 & 0x100000) == 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v7 + 32) = v21 | 0x100000;
        if ( (unsigned __int16)*(_DWORD *)(v7 + 32) )
        {
          *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFF8FFFF | 0x30000;
          goto LABEL_17;
        }
        v23 = MiUnlinkPageFromListEx(v7, 0);
        v20 = v7;
        if ( (v23 & 3) == 0 )
        {
          v19 = 8;
LABEL_40:
          MiInsertPageInList(v20, v19);
          goto LABEL_17;
        }
        MiDiscardTransitionPfnEx(v7, 0LL, v24, v25);
        goto LABEL_63;
      }
    }
    else if ( v10 == 3 )
    {
      if ( v2 != 1 )
      {
        if ( (v8 & 8) != 0 || v2 || (v8 & 0x20) != 0 )
          goto LABEL_17;
        if ( (unsigned __int16)*(_DWORD *)(v7 + 32) )
          *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFF8FFFF | 0x20000;
        else
          MiUnlinkPageFromListEx(v7, 0);
        v15 = *(_DWORD *)(v7 + 32);
        if ( (v15 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
          && (*(_BYTE *)(v7 + 16) & 8) != 0
          && (v15 & 0x100000) == 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v7 + 32) = v15 & 0xFFEFFFFF;
        v16 = *(_QWORD *)(v7 + 16);
        if ( (v16 & 8) != 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~8uLL;
        }
        else
        {
          v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v16 & 4) != 0 )
            v17 = *(_QWORD *)(v7 + 16);
          v16 = v17;
        }
        *(_QWORD *)(a1 + 16) = v16;
        if ( v16 )
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
        PteShadow = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), 1u);
        v28[0] = PteShadow;
        if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v28, PteShadow);
        v28[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
        *(_QWORD *)(v7 + 16) = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
        if ( (unsigned __int16)*(_DWORD *)(v7 + 32) )
          goto LABEL_17;
        v19 = 4;
        v20 = v7;
        goto LABEL_40;
      }
LABEL_63:
      v9 = -1073740748;
    }
LABEL_17:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v9;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
  *(_DWORD *)a1 = 2;
  return 3221226029LL;
}
