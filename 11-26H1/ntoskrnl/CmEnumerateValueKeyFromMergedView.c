/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x140B0144C
 * Callers:
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x1409409F0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x140940A90 (CmpLockTwoKcbsShared.c)
 *     CmpQueryKeyValueData @ 0x140941E50 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *Size,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char v10; // r15
  unsigned __int64 v12; // rsi
  int KeyValueData; // ebx
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  ULONG_PTR v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // r15
  unsigned int v24; // r13d
  __int64 i; // r14
  __int64 v26; // rax
  ULONG_PTR v27; // r13
  __int64 v28; // rdx
  __int64 CellPaged; // rax
  __int64 v30; // r12
  __int16 v31; // r9
  int NameInListWithStatus; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  char v38; // al
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  ULONG_PTR v41; // rcx
  __int64 CellFlat; // rax
  __int64 v43; // rcx
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  ULONG_PTR v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // [rsp+48h] [rbp-89h] BYREF
  __int64 v56; // [rsp+50h] [rbp-81h]
  unsigned int v57[2]; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-71h] BYREF
  int v59; // [rsp+68h] [rbp-69h]
  int v60[2]; // [rsp+70h] [rbp-61h]
  unsigned int v61[2]; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v62[2]; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v63[2]; // [rsp+88h] [rbp-49h] BYREF
  int v64; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v65; // [rsp+94h] [rbp-3Dh]
  unsigned int *v66; // [rsp+98h] [rbp-39h]
  unsigned int *v67; // [rsp+A0h] [rbp-31h]
  __int64 v68; // [rsp+A8h] [rbp-29h]
  __int64 v69; // [rsp+B0h] [rbp-21h]
  __int64 v70; // [rsp+B8h] [rbp-19h]
  __int128 v71; // [rsp+C0h] [rbp-11h] BYREF
  unsigned int v72; // [rsp+118h] [rbp+47h]
  char v73; // [rsp+128h] [rbp+57h]
  unsigned int v74; // [rsp+130h] [rbp+5Fh]

  v74 = a4;
  v73 = a3;
  v58 = 0LL;
  v68 = 0LL;
  v62[0] = -1;
  v10 = a3;
  v62[1] = 0;
  v69 = 0LL;
  v12 = 0LL;
  v63[0] = -1;
  KeyValueData = 0;
  v63[1] = 0;
  v14 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v59 = 0;
  v72 = 0;
  v56 = 0LL;
  v57[0] = -1;
  v57[1] = 0;
  v61[0] = -1;
  v61[1] = 0;
  v55 = 0xFFFFFFFFLL;
  v64 = 0;
  v71 = 0LL;
  if ( !(_BYTE)a3 )
    CmpLockRegistry(0xFFFFFFFFLL, a2, a3, a4);
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
  {
LABEL_9:
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(a2 + 8);
    v58 = v17;
    *(_QWORD *)v60 = v18;
    if ( !v73 )
      CmpLockTwoKcbsShared(v17, v18);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v12) )
    {
      v38 = *(_BYTE *)(a1 + 48);
    }
    else
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v12) )
      {
        if ( v12 )
        {
          if ( *(_QWORD *)(v17 + 288) == v12 )
          {
            v39 = v17 + 280;
            v67 = (unsigned int *)(v17 + 280);
          }
          else
          {
            v39 = 0LL;
          }
          if ( *(_QWORD *)(v18 + 288) == v12 )
            v66 = (unsigned int *)(v18 + 280);
          if ( v39 )
          {
LABEL_17:
            if ( !v66 )
            {
              v40 = *(unsigned int *)(v18 + 40);
              i = v18 + 32;
              v41 = *(_QWORD *)(v18 + 32);
              if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v41, v40, v63);
              else
                CellFlat = HvpGetCellPaged(v41, v40);
              v69 = CellFlat;
              if ( !CellFlat )
              {
                KeyValueData = -1073741670;
                v22 = (__int64 *)(v17 + 32);
LABEL_51:
                if ( v68 )
                {
                  v47 = *v22;
                  if ( (*(_BYTE *)(*v22 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v47, (__int64)v62);
                  else
                    HvpReleaseCellPaged(v47, v62);
                }
                if ( v69 )
                {
                  v48 = *(_QWORD *)i;
                  if ( (*(_BYTE *)(*(_QWORD *)i + 140LL) & 1) != 0 )
                    HvpReleaseCellFlat(v48, (__int64)v63);
                  else
                    HvpReleaseCellPaged(v48, v63);
                }
                goto LABEL_53;
              }
              v66 = (unsigned int *)(CellFlat + 36);
            }
            v22 = (__int64 *)(v17 + 32);
            v23 = 0LL;
            v24 = 0;
            for ( i = *(_QWORD *)v60 + 32LL; ; i = v70 )
            {
              if ( v72 > v74 )
                goto LABEL_48;
              if ( v24 >= *v67 )
                break;
              if ( !v14 )
              {
                v35 = *v22;
                v36 = v67[1];
                v37 = (*(_BYTE *)(*v22 + 140) & 1) != 0 ? HvpGetCellFlat(v35, v36, v57) : HvpGetCellPaged(v35, v36);
                v56 = v37;
                v14 = v37;
                if ( !v37 )
                {
                  KeyValueData = -1073741670;
                  goto LABEL_50;
                }
              }
              v26 = v24;
              v27 = *v22;
              v28 = *(unsigned int *)(v14 + 4 * v26);
              v65 = *(_DWORD *)(v14 + 4 * v26);
              if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v27, v28, (unsigned int *)&v55);
              else
                CellPaged = HvpGetCellPaged(v27, v28);
              v30 = CellPaged;
              if ( !CellPaged )
                goto LABEL_46;
              v31 = *(_WORD *)(CellPaged + 16);
              *((_QWORD *)&v71 + 1) = CellPaged + 20;
              LOWORD(v71) = *(_WORD *)(CellPaged + 2);
              v70 = *(_QWORD *)v60 + 32LL;
              NameInListWithStatus = CmpFindNameInListWithStatus(
                                       *(_QWORD *)(*(_QWORD *)v60 + 32LL),
                                       v66,
                                       (unsigned __int16 *)&v71,
                                       (unsigned __int8)(v31 & 1) << 16,
                                       0LL,
                                       &v64);
              if ( ((int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772) && v64 == -1 )
              {
                if ( v72 == v74 )
                {
                  v43 = v58;
LABEL_96:
                  KeyValueData = CmpQueryKeyValueData(v43, v65, v30, a5, Size, a7, a8);
                  if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v27, (__int64)&v55);
                  else
                    HvpReleaseCellPaged(v27, (unsigned int *)&v55);
                  goto LABEL_47;
                }
                ++v72;
              }
              v33 = *v22;
              v24 = ++v59;
              if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v33, (__int64)&v55);
              else
                HvpReleaseCellPaged(v33, (unsigned int *)&v55);
              v14 = v56;
              if ( v56 )
              {
                v34 = *v22;
                if ( (*(_BYTE *)(*v22 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v34, (__int64)v57);
                else
                  HvpReleaseCellPaged(v34, v57);
                v14 = 0LL;
                v56 = 0LL;
              }
            }
            v44 = *v66 + v72;
            if ( v44 > v74 )
            {
              v49 = *(_QWORD *)i;
              v50 = v66[1];
              if ( (*(_BYTE *)(*(_QWORD *)i + 140LL) & 1) != 0 )
                v51 = HvpGetCellFlat(v49, v50, v61);
              else
                v51 = HvpGetCellPaged(v49, v50);
              v23 = v51;
              if ( v51 )
              {
                v52 = v74 - v72;
                v27 = *(_QWORD *)i;
                v53 = *(unsigned int *)(v51 + 4 * v52);
                v65 = *(_DWORD *)(v51 + 4 * v52);
                if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                  v54 = HvpGetCellFlat(v27, v53, (unsigned int *)&v55);
                else
                  v54 = HvpGetCellPaged(v27, v53);
                v30 = v54;
                if ( v54 )
                {
                  v43 = *(_QWORD *)v60;
                  goto LABEL_96;
                }
LABEL_46:
                KeyValueData = -1073741670;
LABEL_47:
                v14 = v56;
                goto LABEL_48;
              }
              KeyValueData = -1073741670;
            }
            else
            {
              KeyValueData = -2147483622;
              if ( a9 )
                *a9 = v44;
            }
LABEL_48:
            if ( v14 )
            {
              v45 = *v22;
              if ( (*(_BYTE *)(*v22 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v45, (__int64)v57);
              else
                HvpReleaseCellPaged(v45, v57);
            }
            if ( v23 )
            {
              v46 = *(_QWORD *)i;
              if ( (*(_BYTE *)(*(_QWORD *)i + 140LL) & 1) != 0 )
                HvpReleaseCellFlat(v46, (__int64)v61);
              else
                HvpReleaseCellPaged(v46, v61);
            }
LABEL_50:
            v18 = *(_QWORD *)v60;
            v17 = v58;
            goto LABEL_51;
          }
        }
        v19 = *(_QWORD *)(v17 + 32);
        v20 = *(unsigned int *)(v17 + 40);
        if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
          v21 = HvpGetCellFlat(v19, v20, v62);
        else
          v21 = HvpGetCellPaged(v19, v20);
        v68 = v21;
        if ( v21 )
        {
          v67 = (unsigned int *)(v21 + 36);
          goto LABEL_17;
        }
        KeyValueData = -1073741670;
LABEL_53:
        if ( v73 )
          return (unsigned int)KeyValueData;
        CmpUnlockTwoKcbs((_WORD *)v17, (_WORD *)v18);
        goto LABEL_6;
      }
      v38 = *(_BYTE *)(a2 + 48);
    }
    KeyValueData = (v38 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_53;
  }
  KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v58);
  if ( KeyValueData >= 0 )
  {
    v12 = v58;
    goto LABEL_9;
  }
  if ( !v10 )
LABEL_6:
    CmpUnlockRegistry(v15);
  return (unsigned int)KeyValueData;
}
