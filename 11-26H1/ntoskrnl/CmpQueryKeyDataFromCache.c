/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x1408C6F10
 * Callers:
 *     CmpQueryKeyData @ 0x1408C6E10 (CmpQueryKeyData.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1408C2FF8 (CmGetVisibleSubkeyCount.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int16 v10; // r14
  unsigned int v11; // ebx
  int v12; // esi
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // ecx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 NextElement; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // ebx
  ULONG_PTR v28; // rcx
  __int64 CellPaged; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  ULONG_PTR v32; // rcx
  __int64 CellFlat; // rax
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned int v37; // edx
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int16 v41; // cx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // [rsp+20h] [rbp-58h]
  unsigned int v48[2]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v49[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v50[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v51; // [rsp+40h] [rbp-38h]
  __int64 v52; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v53; // [rsp+80h] [rbp+8h] BYREF
  int v54; // [rsp+84h] [rbp+Ch]
  unsigned int v55; // [rsp+98h] [rbp+20h]

  v55 = a4;
  v8 = a6;
  v50[0] = -1;
  v50[1] = 0;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = 2 * *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)(v9 + 12) & 1) == 0 )
    v10 = *(_WORD *)(v9 + 24);
  if ( a2 == 4 )
  {
    v52 = 0LL;
    v53 = -1;
    v54 = 0;
    v11 = *(unsigned __int16 *)(a1 + 176);
    v47 = v11;
    if ( a6 )
    {
      while ( 1 )
      {
        NextElement = CmListGetNextElement(a1 + 208, &v52, 32LL);
        v25 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v8) )
        {
          if ( *(_DWORD *)(v25 + 68) == 1 )
          {
            v31 = *(_QWORD *)(v25 + 88);
            if ( !(unsigned __int8)CmpIsKeyDeleted(v31, 0LL) )
            {
              v32 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v32, *(_DWORD *)(v31 + 40), &v53);
              else
                CellFlat = HvpGetCellPaged(v32);
              if ( !CellFlat )
              {
                v12 = -1073741670;
                goto LABEL_7;
              }
              v34 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
              if ( v11 < v34 )
              {
                v11 = v34;
                v47 = v34;
              }
              v35 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v35, &v53);
              else
                HvpReleaseCellPaged(v35, &v53);
            }
          }
        }
      }
    }
    v12 = 0;
LABEL_7:
    if ( v12 >= 0 )
    {
      v48[0] = -1;
      v48[1] = 0;
      v49[0] = -1;
      v49[1] = 0;
      v53 = *(unsigned __int16 *)(a1 + 178);
      v13 = *(_DWORD *)(a1 + 180);
      if ( v8 && (v26 = *(_QWORD *)(a1 + 288)) != 0 && v26 == v8 && (v27 = 0, v53 = 0, v13 = 0, *(_DWORD *)(a1 + 280)) )
      {
        v28 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v28, *(_DWORD *)(a1 + 284), v48);
        else
          CellPaged = HvpGetCellPaged(v28);
        v30 = CellPaged;
        v52 = CellPaged;
        if ( CellPaged )
        {
          v36 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v36 >= *(_DWORD *)(a1 + 280) )
            {
              v46 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v46, v48);
              else
                HvpReleaseCellPaged(v46, v48);
              goto LABEL_9;
            }
            v37 = *(_DWORD *)(v30 + 4 * v36);
            v38 = *(_QWORD *)(a1 + 32);
            v39 = (*(_BYTE *)(v38 + 140) & 1) != 0 ? HvpGetCellFlat(v38, v37, v49) : HvpGetCellPaged(v38);
            v40 = v39;
            if ( !v39 )
              break;
            v41 = 2 * *(_WORD *)(v39 + 2);
            if ( (*(_BYTE *)(v39 + 16) & 1) == 0 )
              v41 = *(_WORD *)(v39 + 2);
            if ( v27 < v41 )
            {
              v27 = v41;
              v53 = v41;
            }
            v42 = *(_DWORD *)(v39 + 4);
            v43 = v42 + 0x80000000;
            if ( v42 < 0x80000000 )
              v43 = *(_DWORD *)(v40 + 4);
            if ( v13 < v43 )
              v13 = v43;
            v44 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v44, v49);
            else
              HvpReleaseCellPaged(v44, v49);
            v36 = (unsigned int)(v36 + 1);
            v30 = v52;
          }
          v45 = *(_QWORD *)(a1 + 32);
          if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v45, v48);
          else
            HvpReleaseCellPaged(v45, v48);
          v12 = -1073741670;
        }
        else
        {
          v12 = -1073741670;
        }
      }
      else
      {
LABEL_9:
        v12 = 0;
      }
      if ( v12 >= 0 )
      {
        *a5 = 40;
        if ( v55 < 0x28 )
        {
          return (unsigned int)-1073741789;
        }
        else
        {
          v14 = 0LL;
          v51 = 0LL;
          v15 = *(_QWORD *)(a1 + 168);
          if ( v8 )
          {
            while ( 1 )
            {
              if ( !v14 )
              {
                v14 = *(_QWORD *)(a1 + 216);
                v51 = v14;
              }
              if ( a1 + 208 == v14 )
                break;
              v52 = v14 - 32;
              v51 = *(_QWORD *)(v14 + 8);
              if ( v14 == 32 )
                break;
              if ( CmEqualTrans(*(_QWORD *)(v14 - 32 + 56), v8) && *(_DWORD *)(v52 + 68) == 8 )
              {
                v15 = *(_QWORD *)(v52 + 88);
                break;
              }
              v14 = v51;
            }
          }
          *(_QWORD *)a3 = v15;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          v16 = -1;
          if ( a1 )
          {
            if ( v8 && (v20 = *(_QWORD *)(a1 + 288)) != 0 )
            {
              v21 = 280LL;
              if ( v20 != v8 )
                v21 = 96LL;
              v16 = *(_DWORD *)(v21 + a1);
            }
            else
            {
              v16 = *(_DWORD *)(a1 + 96);
            }
          }
          *(_DWORD *)(a3 + 20) = v16;
          *(_DWORD *)(a3 + 16) = v47;
          *(_DWORD *)(a3 + 24) = v53;
          *(_DWORD *)(a3 + 28) = v13;
          v17 = *(_DWORD *)(a1 + 8);
          if ( (v17 & 0x40) == 0 && *(_QWORD *)(a1 + 208) == a1 + 208 )
          {
            if ( (v17 & 1) != 0 )
            {
              *(_DWORD *)(a3 + 12) = 0;
            }
            else if ( (v17 & 2) != 0 )
            {
              *(_DWORD *)(a3 + 12) = 1;
            }
            else if ( (v17 & 4) != 0 )
            {
              *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
            }
            else
            {
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
            }
          }
          else
          {
            v18 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
              v19 = HvpGetCellFlat(v18, *(_DWORD *)(a1 + 40), v50);
            else
              v19 = HvpGetCellPaged(v18);
            if ( v19 )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v19, v8);
              v22 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v22, v50);
              else
                HvpReleaseCellPaged(v22, v50);
            }
            else
            {
              return (unsigned int)-1073741670;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
