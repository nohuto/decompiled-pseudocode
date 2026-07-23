/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x140B10F94
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408C2A00 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsValueTombstone @ 0x1408C2C20 (CmpIsValueTombstone.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  char v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r13
  void *v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  int started; // edi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int16 v16; // si
  unsigned int v17; // r14d
  ULONG_PTR v18; // rcx
  __int64 CellFlat; // rax
  __int64 v20; // rdx
  ULONG_PTR v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 KeyNodeForKcb; // rax
  __int64 v30; // rcx
  __int64 v32; // rdx
  unsigned __int16 v33; // ax
  __int64 v34; // rcx
  __int64 v35; // rcx
  char v36; // [rsp+41h] [rbp-B7h]
  _BYTE v37[14]; // [rsp+42h] [rbp-B6h] BYREF
  __int64 v38; // [rsp+50h] [rbp-A8h] BYREF
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-98h] BYREF
  int v41; // [rsp+68h] [rbp-90h]
  __int64 v42; // [rsp+70h] [rbp-88h] BYREF
  __int64 v43; // [rsp+78h] [rbp-80h]
  __int64 v44; // [rsp+80h] [rbp-78h]
  __int128 v45; // [rsp+88h] [rbp-70h] BYREF
  __int128 v46; // [rsp+98h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-50h]
  __int64 v48; // [rsp+B0h] [rbp-48h]

  v38 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  WORD1(v45) = -1;
  v6 = 0;
  v7 = 0LL;
  HvpGetCellContextInitialize(&v38);
  HvpGetCellContextInitialize(&v42);
  v8 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v37[0] = 0;
  HvpGetCellContextInitialize(&v40);
  v10 = 0;
  *(_DWORD *)&v37[2] = 0;
  v36 = 0;
  v47 = *(_QWORD *)(v11 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v45, v47);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)&v45);
    v6 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v41 = v13;
        if ( (unsigned int)v13 >= a3 )
          break;
        v48 = 3 * v13;
        v14 = *(_QWORD *)(a2 + 24 * v13);
        v43 = v14;
        v15 = *(_WORD *)v14;
        if ( *(_WORD *)v14 )
        {
          v32 = *(_QWORD *)(v14 + 8);
          v33 = *(_WORD *)v14;
          do
          {
            if ( *(_WORD *)(v32 + 2 * (((unsigned __int64)v33 - 1) >> 1)) )
              break;
            v15 -= 2;
            *(_WORD *)v14 = v15;
            v33 = v15;
          }
          while ( v15 );
        }
        *(_DWORD *)&v37[6] = -1;
        v16 = *(_WORD *)(v47 + 66);
        while ( v16 >= 0 )
        {
          v28 = v16 >= 2 ? *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8LL * v16 - 16) : *((_QWORD *)&v45 + v16 + 1);
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(v28, a1) == 1 )
            break;
          if ( *(_DWORD *)(v28 + 40) == -1 )
          {
            --v16;
          }
          else
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v28, (unsigned int *)&v42, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v28 + 32),
                        (unsigned int *)(KeyNodeForKcb + 36),
                        (unsigned __int16 *)v14,
                        0,
                        0LL,
                        &v37[6]);
            v30 = *(_QWORD *)(v28 + 32);
            if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v30, (__int64)&v42);
            else
              HvpReleaseCellPaged(v30, (unsigned int *)&v42);
            if ( started >= 0 )
            {
              v8 = v28;
              v44 = v28;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_56;
            if ( (unsigned int)CmpGetEffectiveKcbSemantics(v28, a1) )
              break;
            --v16;
            v14 = v43;
          }
        }
        v17 = *(_DWORD *)&v37[6];
        if ( *(_DWORD *)&v37[6] == -1 )
        {
          started = -1073741772;
LABEL_56:
          v6 = 1;
          goto LABEL_42;
        }
        v18 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v18, *(unsigned int *)&v37[6], (unsigned int *)&v38);
        else
          CellFlat = HvpGetCellPaged(v18, *(unsigned int *)&v37[6]);
        v7 = CellFlat;
        v43 = CellFlat;
        if ( CmpIsValueTombstone(*(_QWORD *)(v8 + 32), CellFlat) )
        {
          started = -1073741772;
LABEL_63:
          v6 = 1;
          goto LABEL_43;
        }
        v22 = *(_DWORD *)(v20 + 4);
        v23 = v22 + 0x80000000;
        if ( v22 < 0x80000000 )
          v23 = *(_DWORD *)(v20 + 4);
        *(_DWORD *)&v37[6] = v23;
        v10 = (v10 + 3) & 0xFFFFFFFC;
        v24 = (*(_DWORD *)&v37[2] + 3) & 0xFFFFFFFC;
        *(_DWORD *)&v37[2] = v24;
        if ( v36 || v23 + v10 > *a5 || v23 + v10 < v10 )
        {
          v36 = 1;
        }
        else
        {
          if ( !CmpGetValueData(
                  v21,
                  v17,
                  v7,
                  (unsigned int *)&v37[6],
                  (__int64)&Src,
                  (__int64)v37,
                  (unsigned int *)&v40) )
          {
            started = -1073741670;
            v9 = Src;
            goto LABEL_63;
          }
          v23 = *(_DWORD *)&v37[6];
          memmove((void *)(a4 + v10), Src, *(unsigned int *)&v37[6]);
          v25 = v48;
          *(_DWORD *)(a2 + 8 * v48 + 16) = *(_DWORD *)(v7 + 12);
          *(_DWORD *)(a2 + 8 * v25 + 8) = v23;
          *(_DWORD *)(a2 + 8 * v25 + 12) = v10;
          v10 += v23;
          if ( v37[0] )
          {
            ExFreePoolWithTag(Src, 0);
          }
          else
          {
            v26 = *(_QWORD *)(v8 + 32);
            if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v26, (__int64)&v40);
            else
              HvpReleaseCellPaged(v26, (unsigned int *)&v40);
          }
          v9 = 0LL;
          Src = 0LL;
          v24 = *(_DWORD *)&v37[2];
        }
        *(_DWORD *)&v37[2] = v23 + v24;
        v27 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v27, (__int64)&v38);
        else
          HvpReleaseCellPaged(v27, (unsigned int *)&v38);
        v13 = (unsigned int)(v41 + 1);
        v6 = 1;
      }
      *a5 = v10;
      if ( a6 )
        *a6 = *(_DWORD *)&v37[2];
      started = -2147483643;
      if ( !v36 )
        started = 0;
LABEL_42:
      v7 = 0LL;
    }
  }
LABEL_43:
  if ( v9 )
  {
    if ( v37[0] )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v35 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v35, (__int64)&v40);
      else
        HvpReleaseCellPaged(v35, (unsigned int *)&v40);
    }
  }
  if ( v7 )
  {
    v34 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v34, (__int64)&v38);
    else
      HvpReleaseCellPaged(v34, (unsigned int *)&v38);
  }
  if ( v6 )
    CmpUnlockKcbStack((__int64)&v45);
  if ( *((_QWORD *)&v46 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v46 + 1));
  return (unsigned int)started;
}
