/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpPopulateKeyNodeInformation @ 0x1408C81B4 (CmpPopulateKeyNodeInformation.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpPopulateKeyBasicInformation @ 0x140A36330 (CmpPopulateKeyBasicInformation.c)
 *     CmpPopulateKeyFullInformation @ 0x140AB5FF4 (CmpPopulateKeyFullInformation.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPopulateKeyCachedInformation @ 0x140B0BE0C (CmpPopulateKeyCachedInformation.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(__int16 *a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR v6; // r14
  unsigned int v7; // r12d
  ULONG_PTR v8; // r15
  __int16 i; // r9
  ULONG_PTR *EntryAtLayerHeight; // rax
  ULONG_PTR v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // r13d
  char v14; // r8
  __int64 v15; // rdx
  __int16 v16; // r9
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned __int16 v21; // cx
  unsigned int v23; // r15d
  _QWORD *v24; // rax
  __int16 v25; // r9
  unsigned int v26; // r10d
  unsigned int v27; // r11d
  __int64 v28; // rdx
  ULONG_PTR v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 CellFlat; // rax
  char v33; // [rsp+40h] [rbp-A8h]
  unsigned int v34; // [rsp+48h] [rbp-A0h]
  unsigned int v35; // [rsp+50h] [rbp-98h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  unsigned int v37; // [rsp+58h] [rbp-90h]
  unsigned int v38; // [rsp+5Ch] [rbp-8Ch]
  unsigned int v39; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-7Ch] BYREF
  __int64 v41; // [rsp+70h] [rbp-78h] BYREF
  __int128 v42; // [rsp+78h] [rbp-70h] BYREF
  __int128 v43; // [rsp+88h] [rbp-60h]
  __int128 v44; // [rsp+98h] [rbp-50h]
  ULONG_PTR v45; // [rsp+A8h] [rbp-40h]

  v41 = 0LL;
  v39 = 0;
  v40 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v33 = 0;
  v6 = 0LL;
  v35 = -1;
  HvpGetCellContextInitialize(&v41);
  v7 = 0;
  v8 = 0LL;
  v45 = 0LL;
  for ( i = *a1; i >= 0; --i )
  {
    EntryAtLayerHeight = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
    if ( EntryAtLayerHeight[2] )
    {
      v11 = *EntryAtLayerHeight;
      v8 = EntryAtLayerHeight[2];
      v45 = v8;
      goto LABEL_5;
    }
  }
  v11 = 0LL;
LABEL_5:
  v12 = *(_QWORD *)(v8 + 4);
  v13 = (unsigned __int16)*(_DWORD *)(v8 + 52);
  v34 = *(_DWORD *)(v8 + 56);
  v37 = *(_DWORD *)(v8 + 60);
  v38 = *(_DWORD *)(v8 + 64);
  if ( *(char *)(v8 + 13) < 0 )
  {
    v15 = 0xFFFFFFFFLL;
    v14 = 0;
  }
  else
  {
    v14 = 1;
    v33 = 1;
    v6 = v11;
    v15 = *(unsigned int *)(v8 + 48);
    v35 = *(_DWORD *)(v8 + 48);
    v7 = *(unsigned __int16 *)(v8 + 74);
  }
  v16 = i - 1;
  if ( v16 >= 0 )
  {
    v23 = *(_DWORD *)(v8 + 56);
    do
    {
      v24 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v16);
      if ( v24[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v24) == 1 )
          break;
        if ( v12 < *(_QWORD *)(v28 + 4) )
          v12 = *(_QWORD *)(v28 + 4);
        v30 = (unsigned __int16)*(_DWORD *)(v28 + 52);
        if ( v13 >= v30 )
          v30 = v13;
        v13 = v30;
        v31 = *(_DWORD *)(v28 + 56);
        if ( v23 >= v31 )
          v31 = v23;
        v23 = v31;
        if ( !v33 && *(char *)(v28 + 13) >= 0 )
        {
          v33 = 1;
          v6 = v29;
          v35 = *(_DWORD *)(v28 + 48);
          v7 = *(unsigned __int16 *)(v28 + 74);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v29) )
          break;
      }
      v16 = v25 - 1;
    }
    while ( v16 >= 0 );
    v34 = v23;
    v38 = v27;
    v37 = v26;
    v8 = v45;
    v15 = v35;
    v14 = v33;
  }
  if ( v14 && v7 )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v6, v15, &v41);
    else
      CellFlat = HvpGetCellPaged(v6);
    v36 = CellFlat;
  }
  else
  {
    v36 = 0LL;
    v7 = 0;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_QWORD *)&v42 = v12;
      SubKeyCountForKeyNodeStack = CmpPopulateKeyNodeInformation(&v42, v8, v36, v7, a3, a4, a5);
    }
    else
    {
      SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v39);
      if ( SubKeyCountForKeyNodeStack >= 0 )
      {
        SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v40);
        if ( SubKeyCountForKeyNodeStack >= 0 )
        {
          if ( v39 )
          {
            v18 = v34;
          }
          else
          {
            v13 = 0;
            v18 = 0;
          }
          if ( v40 )
          {
            v19 = v37;
            v20 = v38;
          }
          else
          {
            v19 = 0;
            v20 = 0;
          }
          if ( a2 == 4 )
          {
            *(_QWORD *)&v42 = v12;
            HIDWORD(v42) = v39;
            *(_QWORD *)&v43 = __PAIR64__(v40, v13);
            *((_QWORD *)&v43 + 1) = __PAIR64__(v20, v19);
            v21 = 2 * *(_WORD *)(v8 + 72);
            if ( (*(_BYTE *)(v8 + 2) & 0x20) == 0 )
              v21 = *(_WORD *)(v8 + 72);
            LODWORD(v44) = v21;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyCachedInformation(&v42, a3, a4, a5);
          }
          else if ( a2 == 2 )
          {
            *(_QWORD *)&v42 = v12;
            *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(v13, v39);
            HIDWORD(v43) = v18;
            *(_QWORD *)&v44 = __PAIR64__(v19, v40);
            DWORD2(v44) = v20;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyFullInformation(&v42, v36, v7, a3, a4, a5);
          }
          else
          {
            SubKeyCountForKeyNodeStack = -1073741811;
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v42 = v12;
    SubKeyCountForKeyNodeStack = CmpPopulateKeyBasicInformation((unsigned int)&v42, v8, a3, a4, a5);
  }
  if ( v36 )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v6, &v41);
    else
      HvpReleaseCellPaged(v6, &v41);
  }
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
