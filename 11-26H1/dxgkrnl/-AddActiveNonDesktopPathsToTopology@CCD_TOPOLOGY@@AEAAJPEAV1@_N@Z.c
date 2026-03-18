/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140317748
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140268B94 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x14041E798 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        bool a3)
{
  unsigned __int16 v3; // di
  unsigned __int16 v7; // bx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // rdx
  unsigned __int16 v12; // bx
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rax
  unsigned int j; // esi
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v27; // r8
  int v28; // eax
  __int64 v29; // rax
  int v30; // [rsp+30h] [rbp-39h] BYREF
  __int128 v31; // [rsp+38h] [rbp-31h]
  __int64 v32; // [rsp+48h] [rbp-21h]
  __int16 v33; // [rsp+50h] [rbp-19h]
  __int128 v34; // [rsp+58h] [rbp-11h]
  __int64 v35; // [rsp+68h] [rbp-1h]
  __int64 v36; // [rsp+70h] [rbp+7h]
  char v37; // [rsp+78h] [rbp+Fh]
  int v38; // [rsp+7Ch] [rbp+13h]
  int v39; // [rsp+80h] [rbp+17h]
  __int64 v40; // [rsp+84h] [rbp+1Bh]
  __int64 v41; // [rsp+90h] [rbp+27h]
  unsigned __int16 i; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v37 = 1;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v38 = 0;
  v39 = 1;
  v40 = 0LL;
  v41 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v30, 8LL);
  LODWORD(v40) = v40 | 4;
  v7 = 1;
  for ( i = 1; ; v7 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v30, v7) < v7 )
    {
      WdLogSingleEntry2(6LL, v7, this);
      WdLogGlobalForLineNumber = 1276;
      LODWORD(v9) = -1073741801;
      goto LABEL_5;
    }
    v8 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v30, 0, a3, 1, &i);
    LODWORD(v9) = v8;
    if ( v8 != -1073741789 )
      break;
  }
  if ( v8 < 0 )
  {
LABEL_5:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1288;
    goto LABEL_6;
  }
  if ( v36 && *(_WORD *)(v36 + 20) )
  {
    *((_DWORD *)a2 + 21) |= 1u;
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
    {
      v12 = *(_WORD *)(v11 + 20);
      v13 = v12;
    }
    else
    {
      v13 = 0LL;
      v12 = 0;
    }
    LOWORD(v13) = i + v13;
    v14 = i;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, v13) >= v14 + (unsigned int)v12 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::CopyTopology(a2, this);
      if ( (int)v9 >= 0 )
      {
        for ( j = 0; ; ++j )
        {
          v17 = v36 ? *(_WORD *)(v36 + 20) : 0;
          if ( j >= v17 )
            break;
          if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) & 0x100LL) != 0 )
          {
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j);
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v19 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 38) = v19;
            v20 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 39) = v20;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 43) = 0;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 42) = 0;
            v21 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 45) = v21;
            v22 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) + 44) = v22;
            v23 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j);
            *(_QWORD *)v23 |= 0x820000uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) & 0x87) != 0 )
          {
            v24 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j);
            *((_QWORD *)v24 + 1) |= 0x87uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j) & 2) != 0 )
          {
            v25 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j);
            *((_QWORD *)v25 + 1) |= 2uLL;
          }
          v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v30, j);
          v28 = CCD_TOPOLOGY::AddPathDescriptor(a2, v26, v27);
          v9 = v28;
          if ( v28 < 0 )
          {
            v29 = *((_QWORD *)a2 + 8);
            if ( v29 )
              v3 = *(_WORD *)(v29 + 20);
            WdLogSingleEntry4(1LL, v9, j, this, v3);
            WdLogGlobalForLineNumber = 1353;
            break;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1315;
      }
    }
    else
    {
      v15 = *((_QWORD *)this + 8);
      if ( v15 )
        v3 = *(_WORD *)(v15 + 20);
      WdLogSingleEntry2(6LL, this, v14 + (unsigned int)v3);
      WdLogGlobalForLineNumber = 1306;
      LODWORD(v9) = -1073741801;
    }
  }
  else
  {
    LODWORD(v9) = 255;
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v30);
  return (unsigned int)v9;
}
