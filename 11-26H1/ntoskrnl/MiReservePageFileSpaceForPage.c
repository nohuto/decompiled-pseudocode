/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14036944C
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140295DB0 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiPageStandbyLookasideStatus @ 0x14041A850 (MiPageStandbyLookasideStatus.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(struct _KEVENT *a1, unsigned __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r10
  int v8; // r11d
  unsigned int v9; // r13d
  int v10; // r12d
  ULONG_PTR v11; // r14
  unsigned __int64 PteShadow; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 DemandZeroPte; // rbx
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  int v31; // edi
  __int64 v32; // rax
  _DWORD *v33; // rcx
  unsigned __int8 v34; // r11
  _DWORD *SubsectionFromPte; // r8
  ULONG_PTR BugCheckParameter4; // r11
  unsigned __int8 v37; // r11
  int v38; // [rsp+30h] [rbp-68h]
  _DWORD v39[3]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v40[11]; // [rsp+40h] [rbp-58h] BYREF
  int v42; // [rsp+A8h] [rbp+10h]
  BOOL v43; // [rsp+B0h] [rbp+18h]

  v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v5 = 0LL;
  v38 = 0;
  v42 = 0;
  v8 = 1;
  v9 = 0;
  v10 = a3 & 0x80;
  while ( 1 )
  {
    v43 = 0;
    if ( v10 )
    {
      v11 = 0LL;
    }
    else
    {
      v28 = MiLockLeafPage((unsigned __int64 *)a2, 0);
      v5 = 0LL;
      v11 = v28;
      v8 = 1;
      v43 = v28 != 0;
    }
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    v13 = 0xFFFFDE0000000000uLL;
    DemandZeroPte = PteShadow;
    if ( ((unsigned __int8)PteShadow & (unsigned __int8)v8) != 0 )
    {
      if ( v10 )
      {
        v11 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( ((unsigned __int8)a3 & (unsigned __int8)v8) == 0 )
        {
          v43 = v8;
          v39[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v39);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
          LOBYTE(v8) = 1;
        }
        if ( *(__int64 *)(v11 + 40) < 0 )
          goto LABEL_33;
      }
      if ( ((unsigned __int8)*(_QWORD *)v11 & (unsigned __int8)v8) == 0 )
        goto LABEL_33;
      if ( ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) != LOWORD(a1->Header.Lock) )
        goto LABEL_33;
      if ( (*(_DWORD *)(v11 + 32) & 0x8000000) != 0 )
        goto LABEL_33;
      DemandZeroPte = *(_QWORD *)(v11 + 16);
      if ( !MiInvalidPteConforms(DemandZeroPte) )
        goto LABEL_33;
      if ( !(unsigned int)MI_IS_RESET_PTE(v16) || (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
      {
        v15 = v43;
        goto LABEL_24;
      }
      v30 = v10 == 0;
      v15 = v43;
      if ( v30 )
        goto LABEL_28;
      v30 = (PteShadow & 0x42) == 0;
      goto LABEL_71;
    }
    if ( (PteShadow & 0x400) != 0 )
      goto LABEL_33;
    if ( (PteShadow & 0x800) == 0 )
      break;
    if ( !v10 )
    {
      v15 = v43;
LABEL_68:
      if ( ((*(_QWORD *)(v11 + 40) >> 43) & 0x3FF) != LOWORD(a1->Header.Lock) )
        goto LABEL_28;
      DemandZeroPte = *(_QWORD *)(v11 + 16);
      if ( !(unsigned int)MI_IS_RESET_PTE(DemandZeroPte) )
        goto LABEL_24;
      v30 = (*(_BYTE *)(v11 + 34) & 0x10) == 0;
LABEL_71:
      if ( v30 )
        goto LABEL_28;
LABEL_24:
      v13 = 0xFFFFDE0000000000uLL;
      goto LABEL_25;
    }
    v29 = MiLockTransitionLeafPageEx(a2, 0LL, 0);
    v5 = 0LL;
    v11 = v29;
    v8 = 1;
    if ( v29 )
    {
      v15 = 1;
      if ( *(__int64 *)(v29 + 40) < 0 )
        goto LABEL_29;
      goto LABEL_68;
    }
  }
  if ( PteShadow )
  {
    if ( qword_140E2D8C0 && (qword_140E2D8C0 & PteShadow) == 0 )
      goto LABEL_33;
    v15 = v43;
    if ( ((PteShadow >> 5) & 0xF) == 0 )
      goto LABEL_28;
  }
  else
  {
    if ( (a3 & 2) == 0 )
    {
LABEL_33:
      v15 = v43;
      goto LABEL_28;
    }
    v15 = v43;
    DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
    v38 = v8;
  }
LABEL_25:
  if ( (((unsigned __int8)DemandZeroPte >> 2) & (unsigned __int8)v8) == 0 )
  {
    if ( v11 && (*(_BYTE *)(v11 + 34) & 0x28) != 0 )
      goto LABEL_28;
    if ( (((unsigned __int8)DemandZeroPte >> 3) & (unsigned __int8)v8) != 0 )
    {
      if ( !v11 )
        goto LABEL_28;
      if ( ((unsigned __int8)a3 & (unsigned __int8)v8) == 0 )
      {
        if ( !(unsigned __int16)*(_DWORD *)(v11 + 32) )
        {
          v23 = (unsigned __int128)((__int64)(v11 - v13) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v24 = ((unsigned __int64)v23 >> 63) + (v23 >> 3);
          v25 = MiPageStandbyLookasideStatus(v24);
          if ( (MiUnlinkPageFromListEx(v11, 0) & 3) != 0 )
          {
            MiDiscardTransitionPfnEx(v11, 0LL, v26, v27);
            goto LABEL_28;
          }
          v5 = 0LL;
          if ( !v25 && (unsigned int)MiPageStandbyLookasideStatus(v24) )
          {
            if ( (DemandZeroPte & 0x400) != 0 )
              DemandZeroPte &= ~8uLL;
            else
              DemandZeroPte &= ~0x10000000uLL;
          }
          LOBYTE(v8) = 1;
          v42 = 1;
        }
        v40[0] = *(_QWORD *)(v11 + 16);
        if ( ((LOBYTE(v40[0]) >> 3) & (unsigned __int8)v8) != 0 )
        {
          *(_QWORD *)(v11 + 16) &= ~8uLL;
          v32 = v40[0];
          if ( (unsigned __int64)v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v40 <= 0xFFFFF6FB7DBED7F8uLL )
            v32 = MiReadPteShadow((unsigned __int64)v40, v40[0]);
          v40[0] = v32 & 0xFFFFFFFFFFFFFFFBuLL;
          v4 = v32 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
        v31 = *(_DWORD *)(v11 + 32);
        if ( *(__int64 *)(v11 + 40) < 0 && (*(_QWORD *)(v11 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v11 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v11, 0LL, BugCheckParameter4);
          }
        }
        if ( *(__int64 *)(v11 + 40) < 0
          && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
        {
          v33 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v11 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v33 + 56LL) & 0x20) == 0 && ((unsigned __int8)v33[38] & v34) == 0 )
          {
            MiSetSubsectionModified(v33, 0LL);
            v5 = 0LL;
          }
        }
        if ( (v31 & 0x80000) != 0
          && (unsigned int)MiCanPfnOriginalPteBeLost(v11)
          && ((unsigned __int8)(*(_QWORD *)(v11 + 16) >> 3) & v37) != 0
          && (v31 & 0x100000) == 0 )
        {
          *(_QWORD *)(v11 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v11 + 32) = v31 | 0x100000;
LABEL_40:
        v18 = *a4;
        if ( (unsigned __int64)a4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a4 <= 0xFFFFF6FB7DBED7F8uLL )
          v18 = MiReadPteShadow((unsigned __int64)a4, *a4);
        if ( qword_140E2D8C0 != v5 && (v18 & 0x10) == 0 )
          HIDWORD(v18) &= HIDWORD(qword_140E2D8C8);
        v19 = MiTransferSoftwarePte(
                DemandZeroPte,
                *((_QWORD *)&a1[929].Header.WaitListHead.Flink + ((unsigned __int16)v18 >> 12)),
                HIDWORD(v18),
                2);
        v21 = v19;
        if ( v11 )
        {
          v22 = v42;
          if ( !(unsigned __int16)*(_DWORD *)(v11 + 32) && (*(_BYTE *)(v11 + 34) & 0x10) != 0 && !v42 )
          {
            MiUnlinkPageFromListEx(v11, 0);
            v22 = 1;
          }
          *(_QWORD *)(v11 + 16) = v21;
          if ( v22 )
            MiInsertPageInList(v11, 8u);
        }
        else
        {
          *(_QWORD *)a2 = v19;
        }
        if ( v38 )
          MiIncreaseUsedPtes(v20, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
        v8 = 1;
      }
    }
    else if ( ((unsigned __int8)a3 & (unsigned __int8)v8) == 0 )
    {
      goto LABEL_40;
    }
    v9 = v8;
    goto LABEL_28;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)v8) != 0 )
    *a4 = DemandZeroPte;
LABEL_28:
  if ( !v15 )
    goto LABEL_30;
LABEL_29:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
  if ( v4 )
    MiReleasePageFileInfo(a1, v4, 1LL);
  return v9;
}
